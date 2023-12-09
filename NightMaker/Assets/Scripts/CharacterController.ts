import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Button } from 'UnityEngine.UI';
import {AnimationClip,Vector3 ,GameObject,Quaternion,RuntimeAnimatorController,Animator} from 'UnityEngine';
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter,ZepetoPlayer } from 'ZEPETO.Character.Controller';
import { WorldService } from 'ZEPETO.World';
import { SceneManager,LoadSceneMode } from 'UnityEngine.SceneManagement';
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import {Room} from 'ZEPETO.Multiplay';
export default class CharacterController extends ZepetoScriptBehaviour {

    public customAnimationClip: AnimationClip;
    public playCustomAnimationButton: Button;
    private _localPlayer:ZepetoPlayer = null;
    private isInit = false;
    private AnimCtrl:Animator;
    private curRoom:Room;
    Start() {
        this.curRoom = MultiplayManager.instance.room; 


        this.curRoom.AddMessageHandler("MoveToPuzzle",(message:string)=>{
            this._localPlayer.character.Teleport(new Vector3(0,-5,0),Quaternion.identity);
        });
        //
        //console.log(this._localPlayer.character.transform.position);


    }
    Update(){
        if(!this.isInit && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            this._localPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
            console.log(this._localPlayer);
            console.log(this._localPlayer.userId);
            //this._localPlayer.character.transform.position = new Vector3(-2.5,-7.5,20);
            console.log(this.curRoom.SessionId);
            console.log(this._localPlayer.userId);
            console.log(this._localPlayer.character);
            this.isInit = true;
        }
    }
}