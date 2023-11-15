import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Button } from 'UnityEngine.UI'
import { SceneManager } from 'UnityEngine.SceneManagement'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import { ClothSphereColliderPair } from 'UnityEngine'
export default class ChangePuzzle extends ZepetoScriptBehaviour {

    public ChangeSurprise:Button;
    private curRoom:Room;
    private isInit:boolean = false;
    Start() {    
        this.ChangeSurprise.onClick.AddListener(()=>{
            this.curRoom.Send("StartSurprise");
        });
    }
    Update(){
        if(this.curRoom == null){

            this.curRoom = MultiplayManager.instance.room;
        }
        if(this.curRoom != null && !this.isInit){
            this.isInit = true;
            this.curRoom.AddMessageHandler("StartSurprise",(message:string)=>{
                console.log("Get Message from Server"+message);
                SceneManager.LoadScene("SurprsiseScene");
            });
            console.log("Init Success");
        }
    }
}