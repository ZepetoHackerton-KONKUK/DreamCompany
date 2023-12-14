import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Scene, SceneManager } from 'UnityEngine.SceneManagement'
import { Room } from 'ZEPETO.Multiplay'
import {GameObject} from 'UnityEngine'

export default class BlockDuplicate extends ZepetoScriptBehaviour {

    private curRoom:Room;
    private initScene:string;
    private isInit:bool = false;
    public Init():void{
        this.curRoom = MultiplayManager.instance.room;
        this.curRoom.AddMessageHandler("RemovePrevScene",(message:string)=>{
            if(message == this.initScene){
                if(this.transform.parent != null){
                    GameObject.Destroy(this.transform.parent.gameObject);
                }
            }
        });
        this.initScene = SceneManager.GetActiveScene().name;
    }
    Update(){
        if(this.transform.parent == null){
            return;
        }
        if(!this.isInit){
            this.isInit = true;
            this.Init();
        }
        if(SceneManager.GetActiveScene.name != this.initScene){
            GameObject.Destroy(this.gameObject);
        }
    }
}