import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import {Room} from 'ZEPETO.Multiplay';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator,ZepetoPlayers } from 'ZEPETO.Character.Controller';
import { Camera,Time, Animator, RuntimeAnimatorController, Vector3, GameObject, RaycastHit, Physics, Ray, TerrainHeightmapSyncControl, WaitForSeconds, AnimationClip, WaitUntil,Texture,Object,Quaternion, Coroutine, WaitForFixedUpdate,RectTransform,Screen,Vector2,Sprite,Input,AudioSource,AudioClip } from 'UnityEngine';
import { Button, Text ,RawImage,Image} from 'UnityEngine.UI';
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import {WorldService,ZepetoWorldHelper,Users} from 'ZEPETO.World'
import TextSize from './TextSize';
export default class NPCAction extends ZepetoScriptBehaviour {

    public BGM:AudioSource[];
    public bgmClip:AudioClip[];
    public zepetoId: string[];
    public e_camera:GameObject;
    public EndScene:GameObject;
    public offset:number[]; // 0 Perfect 1 Excellent 2 Great 3 Good 4 Bad 5 Miss
    public Perfect: GameObject;
    public LayingAnim: AnimationClip;
    public Dream: GameObject;
    public Nightmare: GameObject;
    public KidAnimator: RuntimeAnimatorController;
    public scoreUI:GameObject;
    public rankUI:GameObject;
    public scoreText: Text;
    public GoDream: GameObject;
    public MissDist:number;
    public DreamDist:number;
    public FloatScore:GameObject;
    public scoreTextures:Texture[];
    public timer:Text;
    public rankProfiles:RawImage[];
    public rankPlayers:GameObject[];
    public rankTiers:Sprite[];
    public rankTierImages:Image[];
    public rankScores:Text[];
    public FallAnimator:RuntimeAnimatorController;
    public rankNames:Text[];
    public rankImages:Sprite[];
    public rankEntires:Sprite[];
    public fallkid:RectTransform;
    public finish:GameObject;
    public StartLoad:GameObject;
    public EndLoad:GameObject;
    //private _npc: ZepetoCharacter;
    private playerAnimator:Animator;
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
    private playersNum:number = 0;
    private canvas:RectTransform;
    private playerTiers:Map<string,number> = new Map<string,number>();
    private npcPool:ZepetoCharacter[] = [];
    private initPool:boolean = false;
    private playerProfiles:Map<string,Texture> = new Map<string,Texture>();
    Start() {
        this.curRoom = MultiplayManager.instance.room;
        this.StartCoroutine(this.PoolManager());
        this.startTime = Time.time;
        this.scoreText.text = "0";
        this.curRoom.Send("RequestPlayersinGame");
        this.canvas = GameObject.Find("Canvas").GetComponent<RectTransform>();
        this.curRoom.AddMessageHandler("RespondPlayerTier",(message:TierModel)=>{
            if(this.Dream==null){
                return;
            }
            console.log(message.players);
            console.log(message.tiers);
            for(let i = 0; i<message.players.length; i++){
                this.playerTiers.set(message.players[i],message.tiers[i]);
            }
            console.log(this.playerTiers);
        });
        this.curRoom.AddMessageHandler("UpdateScoreRank",(message:SurpScore)=>{
            if(this.Dream==null){
                return;
            }
            console.log("GetMessage from UpdateScoreRank");
            if(!this.rankUI.transform.GetChild(4).gameObject.activeSelf){
                this.rankUI.transform.GetChild(4).gameObject.SetActive(true);
            }
            if(this.playersNum != message.players.length){
                this.rankUI.transform.GetChild(4).GetChild(1).gameObject.GetComponent<Image>().sprite = this.rankEntires[message.players.length-1];
                this.playersNum = message.players.length;
            }
            for (let i = 0; i < 4; i++) {
                if (i > message.players.length - 1) {
                    this.rankPlayers[i].SetActive(false);
                } else {
                    this.rankPlayers[i].SetActive(true);
                    this.rankScores[i].text = message.scores[i].toString();
                }
            }
            const rank = message.players.findIndex((value)=>value === ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.userId);
            this.rankUI.transform.GetChild(4).GetChild(0).gameObject.GetComponent<Image>().sprite = this.rankImages[rank];
            if(message.players.length > 4){
                message.players = message.players.slice(0,3);
            }
            ZepetoWorldHelper.GetUserInfo(message.players,(info:Users[])=>{
                for(let i = 0; i<info.length;i++){
                    this.rankNames[i].GetComponent<TextSize>().SetText(info[i].name);
                    console.log("In GetUserInfo",message.players[i]);
                    this.rankTierImages[i].sprite = this.rankTiers[this.playerTiers.get(message.players[i])];
                    if(this.playerProfiles.has(message.players[i])){
                        this.rankProfiles[i].texture = this.playerProfiles.get(message.players[i]);
                    }
                    else{
                        ZepetoWorldHelper.GetProfileTexture(message.players[i],(texture:Texture)=>{
                            this.rankProfiles[i].texture = texture;
                            this.playerProfiles.set(message.players[i],texture);
                        },(error)=>{
                            console.log(error);
                        });
                    }

                }
            },(error)=>{
                console.log(error);
            });
        });

        this.curRoom.Send("RequestPlayerTier"); 
        if(this.Dream==null){
            return;
        }
        this.StartLoad.GetComponent<RectTransform>().sizeDelta = new Vector2(this.canvas.rect.width,this.canvas.rect.width/2);
        this.StartLoad.GetComponentInChildren<Text>().text = "Have you heard? About the crossroads in dreams... Follow me.";
        this.EndLoad.GetComponent<RectTransform>().sizeDelta = new Vector2(this.canvas.rect.width,this.canvas.rect.width/2);
        this.EndLoad.GetComponentInChildren<Text>().text = "I'll make unforgettable nightmares for kids don't know fear...";
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
                this.MovCor = this.StartCoroutine(this.MainCoroutine());
                const canvasHeight = this.canvas.rect.height;
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
            this.timer.text = "00";
            return;
        }
        if(Input.GetMouseButtonDown(0)){
            this.DoSurprise();
        }
        const t:string = timeLeft.toFixed(0);
        if(t.length == 1){
            this.timer.text = "0"+t;
        }
        else{
            this.timer.text = timeLeft.toFixed(0);
        }
        this.npcList.forEach((value, index, arr) => {
            if (value.state == 4) {
                //ZepetoCharacterCreator.RemoveCharacter(value.character);
                this.NPCReset(value.character);
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
    *PoolManager(){
        const zepetoIds = ["jjiyeiye", "tstscscs","jamminboy","jammingirl"];
        const spawnInfo = new SpawnInfo();
        //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
        spawnInfo.position = this.transform.position;
        spawnInfo.rotation = this.transform.rotation;
        zepetoIds.forEach((value)=>{
            let _npc: ZepetoCharacter;

            ZepetoCharacterCreator.CreateByZepetoId(value, spawnInfo, (character: ZepetoCharacter) => {
                _npc = character;
                _npc.gameObject.SetActive(false);
                //character.SetGesture(this.LayingAnim);
                console.log(character.name);
                //this.StartCoroutine(this.ActionCoroutine(character));
                this.npcPool.push(_npc);
            });
        });
        yield new WaitUntil(() => this.npcPool.length == zepetoIds.length);
        this.initPool = true;
    }
    GetNPCFromPool():ZepetoCharacter{
        let npc:ZepetoCharacter = this.npcPool[Math.floor(Math.random() * 4)];
        while(npc.gameObject.activeSelf){
            let npc:ZepetoCharacter = this.npcPool[Math.floor(Math.random() * 4)];
        }
        npc.gameObject.SetActive(true);
        return npc;
    }
    NPCReset(npc:ZepetoCharacter){
        npc.gameObject.SetActive(false);
        npc.Teleport(this.transform.position,this.transform.rotation);
    }
    *FirstAnim(){
        yield new WaitForSeconds(3);
        this.StartLoad.SetActive(false);
        // const spawnInfo = new SpawnInfo();
        // //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
        // spawnInfo.position = this.transform.position;
        // spawnInfo.rotation = this.transform.rotation;

        // const zepetoIds = ["jjiyeiye", "tstscscs"];

        // let _npc: ZepetoCharacter = undefined;

        // ZepetoCharacterCreator.CreateByZepetoId(zepetoIds[0], spawnInfo, (character: ZepetoCharacter) => {
        //     _npc = character;
        //     //character.SetGesture(this.LayingAnim);
        //     console.log(character.name);
        //     //this.StartCoroutine(this.ActionCoroutine(character));

        // });
        yield new WaitUntil(() => this.initPool == true);
        let _npc = this.GetNPCFromPool();
        _npc.characterController.center = new Vector3(0, 1, 0);
        this.playerAnimator = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.gameObject.GetComponentInChildren<Animator>();
        _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
        let audio = _npc.transform.gameObject.AddComponent<AudioSource>();
        audio.loop = false;
        audio.volume = 0.5;
        audio.clip = this.bgmClip[0];
        audio.Play();
        _npc.additionalRunSpeed = -1 * (1.7);
        _npc.additionalWalkSpeed = 0.7;
        _npc.MoveToPosition(this.GoDream.transform.position);
        let dist:number;
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.GoDream.transform.position)<=this.MissDist);
        _npc.StopMoving();
        _npc.MoveToPosition(this.Dream.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Dream.transform.position)<=this.DreamDist);
        //ZepetoCharacterCreator.RemoveCharacter(_npc);
        this.NPCReset(_npc);
        // _npc = undefined;
        // ZepetoCharacterCreator.CreateByZepetoId(zepetoIds[1], spawnInfo, (character: ZepetoCharacter) => {
        //     _npc = character;
        //     console.log(character.name);
        // });
        // yield new WaitUntil(() => _npc != undefined);
        _npc = this.GetNPCFromPool();
        _npc.characterController.center = new Vector3(0, 1, 0);
        _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
        audio = _npc.transform.gameObject.AddComponent<AudioSource>();
        audio.loop = false;
        audio.volume = 0.5;
        audio.clip = this.bgmClip[0];
        audio.Play();
        _npc.additionalRunSpeed = -1 * (1.7);
        _npc.additionalWalkSpeed = 0.7;
        _npc.MoveToPosition(this.Perfect.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Perfect.transform.position)<=0.4);
        this.playerAnimator.SetTrigger("Scream");
        this.BGM[1].Play();
        _npc.StopMoving();
        _npc.MoveToPosition(this.GoDream.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.GoDream.transform.position)<=this.MissDist);
        _npc.StopMoving();
        _npc.MoveToPosition(this.Nightmare.transform.position);
        yield new WaitUntil(()=>Vector3.Distance(_npc.transform.position,this.Nightmare.transform.position)<=this.DreamDist);
        //ZepetoCharacterCreator.RemoveCharacter(_npc);
        this.NPCReset(_npc);
        const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
        const _texture = scoreObject.GetComponentInChildren<RawImage>();
        _texture.texture = this.scoreTextures[4];
        this.FirstAnimEnd = true;
        this.BGM[0].Play();
    }
    *EndAnim(){
        this.finish.SetActive(true);
        yield new WaitForSeconds(2);
        this.finish.SetActive(false);
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
        yield new WaitForSeconds(1);
        this.BGM[3].Play();
        this.BGM[4].Play();
        yield new WaitUntil(()=>_npc.transform.position.x>=25);
        ZepetoCharacterCreator.RemoveCharacter(_npc);
        this.BGM[0].Stop();
        this.EndLoad.SetActive(true);
        yield new WaitForSeconds(3);
        this.curRoom.Send("EndSurprise");
    }
    DoSurprise(){
        console.log(this.playerAnimator.GetCurrentAnimatorClipInfo(0)[0].clip.name);
        if(this.playerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Idle")){
            this.playerAnimator.SetTrigger("Scream");
            this.BGM[1].Play();
            this._isButtonPressed = true;
        }
    }
    *MainCoroutine() {
        while (Time.time - this.startTime < this._maxTime) {
            // const spawnInfo = new SpawnInfo();
            // //spawnInfo.position = new Vector3(-1.42,-5.625,23.075);
            // spawnInfo.position = this.transform.position;
            // spawnInfo.rotation = this.transform.rotation;

            // const zepetoIds = ["jjiyeiye", "tstscscs","jamminboy","jammingirl"];
            // const randomIndex = Math.floor(Math.random() * zepetoIds.length);
            // const randomZepetoId = zepetoIds[randomIndex];

            let _npc: ZepetoCharacter;

            // ZepetoCharacterCreator.CreateByZepetoId(randomZepetoId, spawnInfo, (character: ZepetoCharacter) => {
            //     _npc = character;
            //     //character.SetGesture(this.LayingAnim);
            //     console.log(character.name);
            //     //this.StartCoroutine(this.ActionCoroutine(character));

            // });
            // yield new WaitUntil(() => _npc != undefined);
            _npc = this.GetNPCFromPool();
            _npc.characterController.center = new Vector3(0, 1, 0);
            _npc.transform.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.KidAnimator;
            const audio = _npc.transform.gameObject.AddComponent<AudioSource>();
            audio.loop = false;
            audio.volume = 0.5;
            audio.clip = this.bgmClip[0];
            audio.Play();
            _npc.additionalRunSpeed = -1 * (0.7 - this.combo*3);
            _npc.additionalWalkSpeed = 1.7+this.combo*3;
            this.npcList.push({ state: 0, character: _npc } as NPC);
            _npc.MoveToPosition(new Vector3(-1.5, -7.4, 19));
            yield new WaitForSeconds(2);
        }
    }

 
    CheckMiss(_npc:NPC):NPC{
        if(Vector3.Distance(_npc.character.transform.position,this.GoDream.transform.position)<=this.MissDist){
            _npc.character.StopMoving();
            const audio = _npc.character.transform.gameObject.GetComponent<AudioSource>();
            if(_npc.state == 0){
                const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
                const _texture = scoreObject.GetComponentInChildren<RawImage>();
                _npc.character.MoveToPosition(this.Dream.transform.position);
                _texture.texture = this.scoreTextures[3];
                this.BGM[5].Play();
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

        
        if(DistPerfect > this.offset[3]){ // Miss   
        }else if(DistPerfect > this.offset[2]) { //good
            _npc.state = 1;
            const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
            const _texture = scoreObject.GetComponentInChildren<RawImage>();
            this._score+=100*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            this.BGM[2].Play();
            _texture.texture = this.scoreTextures[2];  
            this.UpdateScoreText();
        }else if(DistPerfect > this.offset[1]) { // Excellent
            _npc.state = 1;
            const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
            const _texture = scoreObject.GetComponentInChildren<RawImage>();
            this._score+=150*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            this.BGM[2].Play();
            _texture.texture = this.scoreTextures[1]; 
            this.UpdateScoreText();
        }else if(DistPerfect > this.offset[0]) {// Perfect
            _npc.state = 1;
            const scoreObject = Object.Instantiate(this.FloatScore,new Vector3(0,0,0),Quaternion.identity,GameObject.Find("Canvas").transform) as GameObject;
            const _texture = scoreObject.GetComponentInChildren<RawImage>();
            this._score+=200*(1+this.combo);
            if(this.combo < 2){
                this.combo+=0.1;
            }
            this.BGM[2].Play();
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
    OnDestroy(){
        this.Dream = null;
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
interface TierModel{
    players:string[],
    tiers:number[]
}

