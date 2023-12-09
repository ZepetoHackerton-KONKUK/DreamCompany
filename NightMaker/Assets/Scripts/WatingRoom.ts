import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import {Text} from 'UnityEngine.UI'
import {Time,Vector3,CharacterController,AnimationClip} from 'UnityEngine'
import {ZepetoPlayers,ZepetoPlayer} from 'ZEPETO.Character.Controller'
export default class WatingRoom extends ZepetoScriptBehaviour {
    public timerText:Text;
    private localPlayer:ZepetoPlayer;
    private curRoom:Room;
    private timer:number = -1;
    private readyForGame:boolean = false;
    private isStart:boolean = false;
    private impact:Vector3 = new Vector3(0,2,0);
    Start() {    
        this.curRoom = MultiplayManager.instance.room;
        this.localPlayer = ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId);
        this.curRoom.AddMessageHandler("WaitGame",(message:number)=>{
            this.timer = message as number;
        });
        this.curRoom.Send("EnterWaiting");
        this.isStart = false;
        this.timer = -1;
    }
    Update(){
        if(this.isStart){
            this.timerText.text = "";
            return;
        }
        if(this.timer == -1){
            return;
        }
        this.timerText.text = Number(this.timer).toFixed(0);
        if(this.timer <= 0 && this.readyForGame){
            this.curRoom.Send("StartGame");
            this.readyForGame = false;
            this.isStart = true;
        }
        else if(this.timer<=0 && !this.readyForGame){
            this.curRoom.Send("ReadyGame");
            this.timer = 15;
            this.readyForGame = true;
        }
        this.timer -= Time.deltaTime;
    }
}