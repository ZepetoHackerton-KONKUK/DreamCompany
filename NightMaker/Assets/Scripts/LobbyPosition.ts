import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import {Room} from 'ZEPETO.Multiplay';
import {GameObject,Vector3,Quaternion,WaitUntil,Coroutine,Animator,RuntimeAnimatorController,Camera} from 'UnityEngine'
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter,ZepetoPlayer } from 'ZEPETO.Character.Controller';
import { WorldService } from 'ZEPETO.World';
export default class LobbyPosition extends ZepetoScriptBehaviour {
    public playerAnim:RuntimeAnimatorController;
    private curRoom:Room=null;
    Update(){
        if(this.curRoom == null){
            this.curRoom = MultiplayManager.instance.room;
        }
    }
    OnEnable(){
        console.log("코루틴");
        this.StartCoroutine(this.OnCamera());
    }
    *OnCamera(){
        yield new WaitUntil(()=>this.curRoom!=null);
        yield new WaitUntil(()=>ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId));
        ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.gameObject.GetComponentInChildren<Animator>().runtimeAnimatorController = this.playerAnim;
        GameObject.Find("ZepetoPlayers").transform.GetChild(4).gameObject.SetActive(true);
        GameObject.Find("ZepetoPlayers").GetComponentInChildren<Camera>().gameObject.SetActive(true);
        GameObject.Find("Camera").SetActive(false);
        console.log("camera,ui on");
    }

}