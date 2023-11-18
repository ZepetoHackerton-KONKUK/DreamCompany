import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import {Room} from 'ZEPETO.Multiplay';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator,ZepetoPlayers } from 'ZEPETO.Character.Controller';
import { Camera,Time, Animator, RuntimeAnimatorController, Vector3, GameObject, RaycastHit, Physics, Ray, TerrainHeightmapSyncControl, WaitForSeconds, AnimationClip, WaitUntil,Texture,Object,Quaternion, Coroutine, WaitForFixedUpdate,RectTransform,Screen,Vector2 } from 'UnityEngine';
import { Button, Text ,RawImage} from 'UnityEngine.UI';
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import {WorldService,ZepetoWorldHelper,Users} from 'ZEPETO.World'
export default class NPCAction extends ZepetoScriptBehaviour {


    public zepetoId: string[];
    public e_camera:GameObject;
    public EndScene:GameObject;
    public Button: Button;
    public offset:number[]; // 0 Perfect 1 Excellent 2 Great 3 Good 4 Bad 5 Miss
    public Perfect: GameObject;
    public LayingAnim: AnimationClip;
    public Dream: GameObject;
    public Nightmare: GameObject;
    public KidAnimator: RuntimeAnimatorController;
    public scoreUI:GameObject;
    public rankUI:GameObject;
    public screamUI:GameObject;
    public scoreText: Text;
    public GoDream: GameObject;
    public MissDist:number;
    public DreamDist:number;
    public FloatScore:GameObject;
    public scoreTextures:Texture[];
    public timer:Text;
    public rankProfiles:RawImage[];
    public rankPlayers:GameObject[];
    public rankScores:Text[];
    public FallAnimator:RuntimeAnimatorController;
    public rankNames:Text[];
    public fallkid:RectTransform;
    //private _npc: ZepetoCharacter;
    private _isButtonPressed: boolean = false;
    private _maxTime: number = 60;
    private _score: number = 0;
    private npcList: NPCs = [];
    private startTime;
    private isStart:boolean = false;
    private isEnd:boolean = false;
    private combo:number = 0;
    private curRoom:Room;
    private MovCor:Coroutine;
    private FirstAnimEnd:boolean = false;
    Start() {
        this.curRoom = MultiplayManager.instance.room;
        this.startTime = Time.time;
        this.scoreText.text = "0";
        this.Button.onClick.AddListener(() => {
            this._isButtonPressed = true;
        });
        
        this.curRoom.AddMessageHandler("UpdateScoreRank",(message:SurpScore)=>{
            console.log("GetMessage from UpdateScoreRank");
            for (let i = 0; i < 4; i++) {
                if (i > message.players.length - 1) {
                    this.rankPlayers[i].SetActive(false);
                } else {
                    this.rankPlayers[i].SetActive(true);
                    this.rankScores[i].text = message.scores[i].toString();
                }
            }
            ZepetoWorldHelper.GetUserInfo(message.players,(info:Users[])=>{
                for(let i = 0; i<info.length;i++){
                    this.rankNames[i].text = info[i].name;
                    ZepetoWorldHelper.GetProfileTexture(message.players[i],(texture:Texture)=>{
                        this.rankProfiles[i].texture = texture;
                    },(error)=>{
                        console.log(error);
                    });
                }
            },(error)=>{
                console.log(error);
            });
        });
        this.StartCoroutine(this.FirstAnim());
    }

    Update() {
        let timeLeft = this._maxTime-Time.time+this.startTime;
        if(!this.isStart){
            if(this.FirstAnimEnd){
                this.startTime = Time.time;
                this.isStart = true;
                this.scoreUI.SetActive(true);
                this.rankUI.SetActive(true);
                this.screamUI.SetActive(true);
                this.MovCor = this.StartCoroutine(this.MainCoroutine());
                const canvasHeight = GameObject.Find("Canvas").GetComponent<RectTransform>().rect.height;
                this.fallkid.sizeDelta = new Vector2(canvasHeight,canvasHeight);
            }
            return;
        }
        if(!this.isEnd){
            if(timeLeft <=0){
                this.StopCoroutine(this.MovCor);
                this.StartCoroutine(this.EndAnim());
                this.isEnd = true;
            }
        }else{
            this.timer.text = "0s";
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
            else if(this._isButtonPressed && value.state == 0){
                arr[index]=this.CheckScore(value);
            }
            else if(value.state == 0 || value.state == 1){
                arr[index]=this.CheckMiss(value);
            }
        });
    }
    *FirstAnim(){
        const spawnInfo = new SpawnInfo();
        //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
        spawnInfo.position = this.transform.position;
        spawnInfo.rotation = this.transform.rotation;

        const zepetoIds = ["jjiyeiye", "tstscscs"];

        let _npc: ZepetoCharacter = undefined;

        ZepetoCharacterCreator.CreateByZepetoId(zepetoIds[0], spawnInfo, (character: ZepetoCharacter) => {
            _npc = character;
            //character.SetGesture(this.LayingAnim);
            console.log(character.name);
            //this.StartCoroutine(this.ActionCoroutine(character));

        });
        yield new WaitUntil(() => _npc != undefined);
        _npc.characterController.center = new Vector3(0, 1, 0);
        _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
        _npc.additionalRunSpeed = -1 * (1.7);
        _npc.additionalWalkSpeed = 0.7;
        _npc.MoveToPosition(this.GoDream.transform.position);
        let dist:number;
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.GoDream.transform.position)<=this.MissDist);
        _npc.StopMoving();
        _npc.MoveToPosition(this.Dream.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Dream.transform.position)<=this.DreamDist);
        ZepetoCharacterCreator.RemoveCharacter(_npc);
        _npc = undefined;
        ZepetoCharacterCreator.CreateByZepetoId(zepetoIds[1], spawnInfo, (character: ZepetoCharacter) => {
            _npc = character;
            console.log(character.name);
        });
        yield new WaitUntil(() => _npc != undefined);
        _npc.characterController.center = new Vector3(0, 1, 0);
        _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
        _npc.additionalRunSpeed = -1 * (1.7);
        _npc.additionalWalkSpeed = 0.7;
        _npc.MoveToPosition(this.Perfect.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Perfect.transform.position)<=0.4);
        ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.gameObject.GetComponentInChildren<Animator>().SetTrigger("Scream");
        _npc.StopMoving();
        _npc.MoveToPosition(this.GoDream.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.GoDream.transform.position)<=this.MissDist);
        _npc.StopMoving();
        _npc.MoveToPosition(this.Nightmare.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Nightmare.transform.position)<=this.DreamDist);
        ZepetoCharacterCreator.RemoveCharacter(_npc);
        this.FirstAnimEnd = true;
    }
    *EndAnim(){
        this.EndScene.SetActive(true);
        const spawnInfo = new SpawnInfo();
        spawnInfo.position = new Vector3(15,2.5,0);
        spawnInfo.rotation = Quaternion.Euler(new Vector3(0,90,0));
        const zepetoIds = ["jjiyeiye","tstscscs","jamminboy","jammingirl"];

        let _npc: ZepetoCharacter = undefined;

        ZepetoCharacterCreator.CreateByZepetoId(zepetoIds[0], spawnInfo, (character: ZepetoCharacter) => {
            _npc = character;
            //character.SetGesture(this.LayingAnim);
            console.log(character.name);
            //this.StartCoroutine(this.ActionCoroutine(character));

        });
        yield new WaitUntil(() => _npc != undefined);
        _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.FallAnimator;
        _npc.additionalRunSpeed = -2.8;
        _npc.additionalWalkSpeed = 0.8;
        _npc.MoveToPosition(new Vector3(26,0,0));
        yield new WaitUntil(()=>_npc.transform.position.x>=25);
        ZepetoCharacterCreator.RemoveCharacter(_npc);
        this.curRoom.Send("EndSurprise");
                
    }
    *MainCoroutine() {
        while (Time.time - this.startTime < this._maxTime) {
            const spawnInfo = new SpawnInfo();
            //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
            spawnInfo.position = this.transform.position;
            spawnInfo.rotation = this.transform.rotation;

            const zepetoIds = ["jjiyeiye", "tstscscs","jamminboy","jammingirl"];
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
            _npc.characterController.center = new Vector3(0, 1, 0);
            _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
            _npc.additionalRunSpeed = -1 * (1.7 - this.combo);
            _npc.additionalWalkSpeed = 0.7+this.combo;
            this.npcList.push({ state: 0, character: _npc } as NPC);
            _npc.MoveToPosition(new Vector3(-1.5, -7.4, 19));
            yield new WaitForSeconds(2);
        }
    }

 
    CheckMiss(_npc:NPC):NPC{
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
        const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
        const _texture = scoreObject.GetComponent<RawImage>();
        if(DistPerfect > this.offset[3]){ // Miss
        }else if(DistPerfect > this.offset[2]) { //good
            _npc.state = 1;
            this._score+=10*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[2];
            this.UpdateScoreText();
        }else if(DistPerfect > this.offset[1]) { // Excellent
            _npc.state = 1;
            this._score+=20*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[1];
            this.UpdateScoreText();
        }else if(DistPerfect > this.offset[0]) {// Perfect
            _npc.state = 1;
            this._score+=30*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            _texture.texture = this.scoreTextures[0];
            this.UpdateScoreText();
        }
        this._isButtonPressed = false;
        return _npc;
    }

    CheckDream(_npc:NPC):NPC{
        if(_npc.state == 2){
            const DistDream = Vector3.Distance(_npc.character.transform.position,this.Dream.transform.position);
            if(DistDream <= this.DreamDist){
                _npc.state = 4;
            }
        }else if(_npc.state == 3){
            const DistNightmare = Vector3.Distance(_npc.character.transform.position,this.Nightmare.transform.position);
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
interface SurpScore{
    players:string[],
    scores:number[]
}

