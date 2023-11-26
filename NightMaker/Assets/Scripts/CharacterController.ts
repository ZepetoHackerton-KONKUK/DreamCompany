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
    public playerAnimCtrl:RuntimeAnimatorController;
    public playCustomAnimationButton: Button;
    private _localPlayer:ZepetoPlayer = null;
    private isInit = false;
    private AnimCtrl:Animator;
    private curRoom:Room;
    Start() {
        this.curRoom = MultiplayManager.instance.room; 


        this.curRoom.AddMessageHandler("MoveToPuzzle",(message:string)=>{
            console.log("message get by"+message);
            SceneManager.LoadScene("Puzzle");
        });
        //
        //console.log(this._localPlayer.character.transform.position);


    }
    Update(){
        if(!this.isInit && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            this._localPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
            console.log(this._localPlayer);
            ZepetoPlayers.instance.LocalPlayer.zepetoCamera.enabled = false;
            console.log(this._localPlayer.userId);
            //this._localPlayer.character.transform.position = new Vector3(-2.5,-7.5,20);
            this._localPlayer.character.Teleport(new Vector3(-2.5,-7.5,20),Quaternion.Euler(new Vector3(0,100,0)));
            //this._localPlayer.character.transform.rotation = Quaternion.Euler(new Vector3(0,100,0));
            const z_CtrlUI = GameObject.Find("UIZepetoPlayerControl") as GameObject;
            const z_camera = GameObject.Find("ZepetoCamera") as GameObject;
            z_CtrlUI.SetActive(false);
            z_camera.SetActive(false);
            console.log(this.curRoom.SessionId);
            console.log(this._localPlayer.userId);
            console.log(this._localPlayer.character);
            this.AnimCtrl = this._localPlayer.character.gameObject.GetComponentInChildren<Animator>();
            this.AnimCtrl.runtimeAnimatorController = this.playerAnimCtrl;
            this.playCustomAnimationButton.onClick.AddListener(() => {
                this.AnimCtrl.SetTrigger("Scream");
            });
            this.isInit = true;
        }
    }
}