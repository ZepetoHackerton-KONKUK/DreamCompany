import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import {Room} from 'ZEPETO.Multiplay';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator } from 'ZEPETO.Character.Controller';
import { Time, Animator, RuntimeAnimatorController, Vector3, GameObject, RaycastHit, Physics, Ray, TerrainHeightmapSyncControl, WaitForSeconds, AnimationClip, WaitUntil,Texture,Object,Quaternion } from 'UnityEngine';
import { Button, Text ,RawImage} from 'UnityEngine.UI';
import MultiplayManager from './Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import { SceneManager } from 'UnityEngine.SceneManagement';
export default class NPCAction extends ZepetoScriptBehaviour {


    public zepetoId: string[];
    public Button: Button;
    public offset:number[]; // 0 Perfect 1 Excellent 2 Great 3 Good 4 Bad 5 Miss
    public Perfect: GameObject;
    public LayingAnim: AnimationClip;
    public Dream: GameObject;
    public Nightmare: GameObject;
    public KidAnimator: RuntimeAnimatorController;
    public scoreUI:GameObject;
    public scoreText: Text;
    public GoDream: GameObject;
    public MissDist:number;
    public DreamDist:number;
    public FloatScore:GameObject;
    public scoreTextures:Texture[];
    public timer:Text;
    private _isButtonPressed: boolean = false;
    private _maxTime: number = 65;
    private _score: number = 0;
    private npcList: NPCs = [];
    private startTime;
    private isStart:boolean = false;
    private isEnd:boolean = false;
    private combo:number = 0;
    private curRoom:Room;
    Start() {
        this.curRoom = MultiplayManager.instance.room;
        this.startTime = Time.time;
        this.scoreText.text = "0";
        this.Button.onClick.AddListener(() => {
            this._isButtonPressed = true;
        });
        this.curRoom.AddMessageHandler("MoveToPuzzle",()=>{
            SceneManager.LoadScene("Puzzle");
        });
        this.curRoom.AddMessageHandler("UpdateScoreRank",(playerScore:Map<string,number>)=>{

        });
    }

    Update() {
        let timeLeft = this._maxTime-Time.time+this.startTime;
        if(!this.isStart){
            if(timeLeft <= 60){
                this.isStart = true;
                this.scoreUI.SetActive(true);
                this.StartCoroutine(this.MainCoroutine());
            }
            return;
        }
        if(!this.isEnd){
            if(timeLeft <=0){
                this.curRoom.Send("EndSurprise");
                this.isEnd = true;
            }
        }else{
            return;
        }
        this.timer.text = timeLeft.toFixed(0) + "s";
        this.npcList.forEach((value, index, arr) => {
            if (value.state == 4) {
                ZepetoCharacterCreator.RemoveCharacter(value.character);
                arr.shift();
            }
            else if(value.state ==2 || value.state == 3){
                arr[index]=this.CheckDream(value);
            }
            else{
                if(this._isButtonPressed){
                    arr[index]=this.CheckScore(value);
                }
                arr[index]=this.CheckMiss(value);
            }
        });
    }
    *MainCoroutine() {
        while (Time.time - this.startTime < this._maxTime) {
            const spawnInfo = new SpawnInfo();
            //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
            spawnInfo.position = this.transform.position;
            spawnInfo.rotation = this.transform.rotation;

            const zepetoIds = ["jjiyeiye", "tstscscs"];
            const randomIndex = Math.floor(Math.random() * zepetoIds.length);
            const randomZepetoId = zepetoIds[randomIndex];

            let _npc: ZepetoCharacter;

            ZepetoCharacterCreator.CreateByZepetoId(randomZepetoId, spawnInfo, (character: ZepetoCharacter) => {
                _npc = character;
                //character.SetGesture(this.LayingAnim);
                console.log(character.name);
                //this.StartCoroutine(this.ActionCoroutine(character));

            });
            yield new WaitUntil(() => _npc != undefined);
            _npc.SetGesture(this.LayingAnim);
            _npc.characterController.center = new Vector3(0, 1, 0);
            _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
            _npc.additionalRunSpeed = -1 * (2.7 - this.combo);
            _npc.additionalWalkSpeed = -1 * (0.7 - this.combo);
            this.npcList.push({ state: 0, character: _npc } as NPC);
            _npc.MoveToPosition(new Vector3(-1.5, -7.4, 19));
            yield new WaitForSeconds(3-this.combo);
        }
    }

 
    CheckMiss(_npc:NPC):NPC{
        console.log("Miss까지의 거리"+Vector3.Distance(_npc.character.transform.position,this.GoDream.transform.position));
        if(Vector3.Distance(_npc.character.transform.position,this.GoDream.transform.position)<=this.MissDist){
            _npc.character.StopMoving();
            if(_npc.state == 0){
                const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
                const _texture = scoreObject.GetComponent<RawImage>();
                _npc.character.MoveToPosition(this.Dream.transform.position);
                _texture.texture = this.scoreTextures[3];
                this.combo = 0;
                _npc.state = 2;
            }else if(_npc.state == 1){
                _npc.character.MoveToPosition(this.Nightmare.transform.position);
                _npc.state = 3;
            }

        }
        return _npc;
    }
    CheckScore(_npc:NPC):NPC{
        const DistPerfect = Vector3.Distance(_npc.character.transform.position,this.Perfect.transform.position);
        console.log("Perfect까지의 거리"+DistPerfect);
        const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
        const _texture = scoreObject.GetComponent<RawImage>();
        if(DistPerfect > this.offset[3]){ // Miss
        }else if(DistPerfect > this.offset[2]) { //good
            this._score+=10*(1+this.combo);
            if(this.combo < 1){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[2];
            _npc.state = 1;
        }else if(DistPerfect > this.offset[1]) { // Excellent
            this._score+=20*(1+this.combo);
            if(this.combo < 1){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[1];
            _npc.state = 1;
        }else if(DistPerfect > this.offset[0]) {// Perfect
            this._score+=30*(1+this.combo);
            if(this.combo < 1){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[0];
            _npc.state = 1;
        }
        this._isButtonPressed = false;
        this.UpdateScoreText();
        return _npc;
    }

    CheckDream(_npc:NPC):NPC{
        if(_npc.state == 2){
            const DistDream = Vector3.Distance(_npc.character.transform.position,this.Dream.transform.position);
            console.log(DistDream);
            if(DistDream <= this.DreamDist){
                _npc.state = 4;
            }
        }else if(_npc.state == 3){
            const DistNightmare = Vector3.Distance(_npc.character.transform.position,this.Nightmare.transform.position);
            console.log(DistNightmare);
            if(DistNightmare<= this.DreamDist){
                _npc.state = 4;
            }
        }
        return _npc;
    }
    UpdateScoreText(): void {
        this.scoreText.text = this._score.toString();
        this.curRoom.Send("UpdateScore",this._score);
    }
}

interface NPC {
    state: number,
    character: ZepetoCharacter
}
export interface NPCs extends Array<NPC> { };
