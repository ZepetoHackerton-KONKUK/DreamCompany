import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Button } from 'UnityEngine.UI'
import { SceneManager } from 'UnityEngine.SceneManagement'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import { ClothSphereColliderPair } from 'UnityEngine'
export default class ChangePuzzle extends ZepetoScriptBehaviour {

    public ChangePuzzle:Button;
    private curRoom:Room;
    private isInit:boolean = false;
    Start() {    
        this.ChangePuzzle.onClick.AddListener(()=>{
            this.curRoom.Send("StartPuzzle");
        });
    }
    Update(){
        if(this.curRoom == null){

            this.curRoom = MultiplayManager.instance.room;
        }
        if(this.curRoom != null && !this.isInit){
            this.isInit = true;
            this.curRoom.AddMessageHandler("StartPuzzle",(message:string)=>{
                console.log("Get Message from Server"+message);
                SceneManager.LoadScene("Puzzle");
            });
            console.log("Init Success");
        }
    }
}