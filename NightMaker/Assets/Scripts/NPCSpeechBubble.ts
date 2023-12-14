import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { KnowSockets, SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator, ZepetoPlayers } from 'ZEPETO.Character.Controller';
import { Canvas, Camera, Vector3, Object, GameObject, Collider } from 'UnityEngine';
import { Text } from 'UnityEngine.UI';

export default class NPCInteraction extends ZepetoScriptBehaviour {

    
    public zepetoId: string;
    public speechBubbleText: string;
S
    public changedSpeechBubbleText: string;
    public speechBubblePrefab: GameObject;

    public speechBubbleYOffset: number;

    
    private _zepetoCharacter: ZepetoCharacter;
    private _npc: ZepetoCharacter;
    private _speechBubbleObject: GameObject;
    private _speechBubbleText: Text;
    private _canvas: Canvas;
    private _cachedWorldCamera: Camera;
    
    Start() {
        const spawnInfo = new SpawnInfo();
        spawnInfo.position = this.transform.position;
        spawnInfo.rotation = this.transform.rotation;

        ZepetoCharacterCreator.CreateByZepetoId(this.zepetoId, spawnInfo, (character: ZepetoCharacter) => {
            this._npc = character;
            this.SetBubble();
        })

        ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(() => {
            this._zepetoCharacter = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character;
        });
    }

    OnTriggerEnter(collider: Collider) {
        if (this._zepetoCharacter == null || collider.gameObject != this._zepetoCharacter.gameObject) {
            return;
        }
        this.SetBubbleText(this.changedSpeechBubbleText);
    }

    OnTriggerExit(collider: Collider) {
        if (this._zepetoCharacter == null || collider.gameObject != this._zepetoCharacter.gameObject) {
            return;
        }
        this.SetBubbleText(this.speechBubbleText);
    }


    SetBubble() {

        this._speechBubbleObject = Object.Instantiate(this.speechBubblePrefab) as GameObject;
        const level = 2;
        this._speechBubbleObject.transform.localScale = Vector3.one*level;
        this._speechBubbleObject.transform.SetParent(this._npc.transform);
        this._speechBubbleObject.transform.position = Vector3.op_Addition(this._npc.GetSocket(KnowSockets.HEAD_UPPER).position, new Vector3(0, this.speechBubbleYOffset,0));
        this._speechBubbleText = this._speechBubbleObject.GetComponentInChildren<Text>();
        this._speechBubbleText.transform.localScale = Vector3.one / level;
        this.SetBubbleText(this.speechBubbleText);
        this._canvas = this._speechBubbleObject.GetComponent<Canvas>();
        this._cachedWorldCamera = Object.FindObjectOfType<Camera>();
        this._canvas.worldCamera = this._cachedWorldCamera;
    }

    SetBubbleText(bubbleText: string) {
        this._speechBubbleObject.SetActive(true);
        this._speechBubbleText.text = bubbleText;
    }

    private Update() {
        if (this._canvas != null) {
            this.UpdateCanvasRotation();
        }
    }

    private UpdateCanvasRotation() {
        this._canvas.transform.LookAt(this._cachedWorldCamera.transform);
        this._canvas.transform.Rotate(0, 180, 0);
    }
    
}