import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {ZepetoWorldMultiplay} from 'ZEPETO.World'
import {ZepetoPlayers,ZepetoPlayer} from 'ZEPETO.Character.Controller'
import { GameObject,Animator, RuntimeAnimatorController,Vector3 ,Quaternion,SkinnedMeshRenderer,Coroutine,WaitUntil, Transform, AnimationClip} from 'UnityEngine'
import { SceneManager } from 'UnityEngine.SceneManagement'
import { Room } from 'ZEPETO.Multiplay'
import {Player,State} from 'ZEPETO.Multiplay.Schema'
import { WorldService } from 'ZEPETO.World'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import AuraCtrl from './AuraCtrl'
export default class ZepetoPlayersCtrl extends ZepetoScriptBehaviour {
    public baseAnim:RuntimeAnimatorController;
    public surpAnim:RuntimeAnimatorController;
    public floatAnim:AnimationClip;
    public multiplay:ZepetoWorldMultiplay;
    public Bomb:GameObject;
    public AC:GameObject;
    private camera:GameObject;
    private UI:GameObject;
    private isInit:bool = false;
    private curRoom:Room;
    private currentPlayers:Map<string,Player> = new Map<string,Player>();
    private zepetoPlayer:ZepetoPlayer;
    private localAnimator:Animator;
    private auraCtrl:AuraCtrl;
    private isWaiting:bool = false;
    Start(){
        this.auraCtrl = this.AC.GetComponent<AuraCtrl>();
        this.multiplay.RoomCreated += (room:Room)=>{
            this.curRoom = room;
        }
        this.multiplay.RoomJoined += (room:Room)=>{
            room.OnStateChange += this.OnStateChange;
        }
    }

    Update(){
        if(this.camera == null){
            this.camera = ZepetoPlayers.instance.ZepetoCamera.gameObject;
            return;
        }
        if(this.UI == null){
            this.UI = GameObject.Find("UIZepetoPlayerControl");
            return;
        }
        if(!this.isInit && this.camera != null && this.UI != null && this.curRoom != null && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            this.isInit = true;
            this.curRoom.AddMessageHandler("RespondPlayers",(message:PlayerMessage)=>{
                message.players.forEach((value,index)=>{
                 if(ZepetoPlayers.instance.HasPlayer(value)){
                    const player = ZepetoPlayers.instance.GetPlayer(value) as ZepetoPlayer;
                    GameObject.DontDestroyOnLoad(player.character.gameObject);
                    this.auraCtrl.GenerateAura(player.character.gameObject,message.auras[index]);
                 }
                }); 
            });
            this.curRoom.AddMessageHandler("ChangePlayerAnims",(message:string[])=>{
                console.log("ChangePlayerAnim",message);
                message.forEach((value:string)=>{
                    if(ZepetoPlayers.instance.HasPlayer(value)){
                        const player = ZepetoPlayers.instance.GetPlayer(value) as ZepetoPlayer;
                        console.log("InChange",player.userId,player.isLocalPlayer);
                        if(value==this.curRoom.SessionId){
                            player.character.Teleport(new Vector3(-2.5,-7.5,20),Quaternion.Euler(new Vector3(0,100,0)));
                        }
                        else{
                            this.ChangeLayerRecursively(player.character.gameObject.transform);
                        }
                    }
                });
            });
            this.curRoom.AddMessageHandler("StartGame",(message:string[])=>{
                message.forEach((value:string)=>{
                    if(ZepetoPlayers.instance.HasPlayer(value)){
                        const playerAnim = ZepetoPlayers.instance.GetPlayer(value).character.gameObject.GetComponentInChildren<Animator>();
                        playerAnim.SetBool("isFloating",false); 
                    }
                });
                SceneManager.LoadScene("Surprise");
                this.isWaiting = false;
                //this.curRoom.Send("ChangeScene","Waiting");
            });
            this.curRoom.AddMessageHandler("ReadySurprise",(message:string[])=>{
                this.UI.SetActive(false);
                message.forEach((value:string)=>{
                    if(ZepetoPlayers.instance.HasPlayer(value)){
                        const playerAnim = ZepetoPlayers.instance.GetPlayer(value).character.gameObject.GetComponentInChildren<Animator>();
                        playerAnim.SetBool("isFloating",true); 
                    }
                });
                this.isWaiting = true;
            });
            this.curRoom.AddMessageHandler("MoveToPuzzle",(message:string)=>{
                ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId).character.Teleport(new Vector3(40,0,0),Quaternion.identity);
                SceneManager.LoadScene("Puzzle");
                //this.curRoom.Send("ChangeScene","Surprise");
            });
            this.curRoom.AddMessageHandler("ChangeLobby",(message:string)=>{
                SceneManager.LoadScene("Lobby");
                ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId).character.Teleport(new Vector3(10,0,-2.4+Math.floor(Math.random()*5)),Quaternion.Euler(new Vector3(0,-90,0)));
                this.camera.SetActive(true);
                this.UI.SetActive(true);
                //this.curRoom.Send("ChangeScene","Puzzle");
            });
            this.curRoom.AddMessageHandler("SyncAura",(message:AuraMessage)=>{
                if(ZepetoPlayers.instance.HasPlayer(message.sessionId)){
                    this.auraCtrl.GenerateAura(ZepetoPlayers.instance.GetPlayer(message.sessionId).character.gameObject,message.auraNum);
                }
            });
            console.log(this.camera.name,this.UI.name);
            this.curRoom.Send("RequestPlayers");

        }
        const SceneName:String = SceneManager.GetActiveScene().name;
        if(SceneName == "Surprise" && this.camera.activeSelf){
            this.localAnimator.SetBool("isFloating",false);
            this.camera.SetActive(false);
            return;
        }
        else if(SceneName == "Init" && this.UI.activeSelf){
            this.UI.SetActive(false);
            return;
        }else if(SceneName == "Lobby" && !this.UI.activeSelf && !this.isWaiting){
            this.UI.SetActive(true);
        }
    }
    private OnStateChange(state:State, isFirst:boolean){
        if(isFirst){
            ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(()=>{
                const myPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
                this.zepetoPlayer = myPlayer;
                this.localAnimator = myPlayer.character.gameObject.GetComponentInChildren<Animator>();
            });
            ZepetoPlayers.instance.OnAddedPlayer.AddListener((sessionId:string)=>{
                const isLocal = this.curRoom.SessionId === sessionId;
                if(!isLocal){
                    const player:Player = this.currentPlayers.get(sessionId);
                    let _player = ZepetoPlayers.instance.GetPlayer(sessionId);
                    console.log("OnAddPlayer",_player,_player.character.gameObject);
                    if(_player != undefined){
                        GameObject.DontDestroyOnLoad(_player.character.gameObject);
                        console.log("Updated ddl");
                        this.ChangeLayerRecursively(_player.character.gameObject.transform);
                    }
                }
            });
        }
        let join = new Map<string,Player>();
        let leave = new Map<string,Player>(this.currentPlayers);
        state.players.ForEach((sessionId:string,player:Player)=>{
            if(!this.currentPlayers.has(sessionId)){
                join.set(sessionId,player);
            }
            leave.delete(sessionId);
        });
        join.forEach((player:Player,sessionId:string)=>this.OnJoinPlayer(sessionId,player));
        leave.forEach((player:Player,sessionId:string)=>this.OnLeavePlayer(sessionId,player));
    }
    private OnJoinPlayer(sessionId:string,player:Player){
        this.currentPlayers.set(sessionId,player);
    }
    private OnLeavePlayer(sessionId:string,player:Player){
        this.currentPlayers.delete(sessionId);
    }
    private ChangeLayerRecursively(trans:Transform){
        trans.gameObject.layer = 7;
        for(let i = 0; i<trans.childCount; i++){
            this.ChangeLayerRecursively(trans.GetChild(i));
        }
    }
}
interface AuraMessage{
    sessionId:string,
    auraNum:number
}
interface PlayerMessage{
    players:string[],
    auras:number[]
}