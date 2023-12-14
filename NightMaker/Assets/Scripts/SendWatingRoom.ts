import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {Collider,Vector3,Quaternion, GameObject,RectTransform} from 'UnityEngine'
import { ZepetoPlayers } from 'ZEPETO.Character.Controller'
import { Room } from 'ZEPETO.Multiplay';
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { SceneManager } from 'UnityEngine.SceneManagement';
import {Text} from 'UnityEngine.UI'

export default class SendWatingRoom extends ZepetoScriptBehaviour {

    public WaitUI:GameObject;
    public NpcCanvas:RectTransform;
    public Information:GameObject;
    private curRoom:Room;
    Start() { 
        this.curRoom = MultiplayManager.instance.room;
        this.curRoom.AddMessageHandler("EnterPerm",(message:number)=>{
            console.log(message);
            if(this.WaitUI == null){
                return;
            }
            if(message==1){
                ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.Teleport(new Vector3(0,6.5,10.8),Quaternion.Euler(new Vector3(0,180,0)));
                this.WaitUI.SetActive(true);
            }
            else{
                console.log(message);
                this.OpenInformation("Game is already started!");
                console.log("Cant Enter");
            }
        });
    }
    OnTriggerEnter(coll:Collider){
        if(coll.gameObject == ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId).character.gameObject){
            this.curRoom.Send("TryEnterWaiting");
        }
    }
    private OpenInformation(message:string){
        const inforObj = GameObject.Instantiate(this.Information,this.NpcCanvas) as GameObject;
        inforObj.GetComponentInChildren<Text>().text = message;
    }
    OnDestroy(){
        this.WaitUI = null;
    }
}