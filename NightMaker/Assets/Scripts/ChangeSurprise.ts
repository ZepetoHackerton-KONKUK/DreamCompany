import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Button } from 'UnityEngine.UI'
import { SceneManager,LoadSceneMode,Scene } from 'UnityEngine.SceneManagement'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
export default class ChangePuzzle extends ZepetoScriptBehaviour {

    public ChangeSurprise:Button;
    private curRoom:Room;
    private isInit:bool = false;
    Start() {    
        this.ChangeSurprise.onClick.AddListener(()=>{
            this.curRoom.Send("StartSurprise");
        });
    }
    Update(){
        if(this.curRoom == null){
            this.curRoom = MultiplayManager.instance.room;
        }
        if(!this.isInit && this.curRoom != null){
            this.curRoom.AddMessageHandler("StartSurprise",(message:string)=>{
                SceneManager.LoadScene("Surprise");
            });
            this.curRoom.AddMessageHandler("StartPuzzle",(message:string)=>{
                console.log("Get Message from Server"+message);
                SceneManager.LoadScene("Puzzle");
            });
            this.isInit = true;
        }
        
    }

}