import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {Collider,Vector3,Quaternion, GameObject} from 'UnityEngine'
import { ZepetoPlayers } from 'ZEPETO.Character.Controller'
import { Room } from 'ZEPETO.Multiplay';
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { SceneManager } from 'UnityEngine.SceneManagement';

export default class SendWatingRoom extends ZepetoScriptBehaviour {

    public WaitUI:GameObject;
    private curRoom:Room;
    Start() { 
        this.curRoom = MultiplayManager.instance.room;
        this.curRoom.AddMessageHandler("EnterPerm",(message:bool)=>{
            if(this.WaitUI == null){
                return;
            }
            if(message){
                ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.Teleport(new Vector3(-11,6.6,2.2),Quaternion.Euler(new Vector3(0,90,0)));
                this.WaitUI.SetActive(true);
            }
            else{
                console.log("Cant Enter");
            }
        });
    }
    OnTriggerEnter(coll:Collider){
        if(coll.gameObject == ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId).character.gameObject){
            coll.gameObject.transform.position = new Vector3(43,0,0);
            coll.gameObject.transform.rotation = Quaternion.Euler(new Vector3(0,0,0));
            this.curRoom.Send("TryEnterWaiting");
        }
    }
    OnDestroy(){
        this.WaitUI = null;
    }
}