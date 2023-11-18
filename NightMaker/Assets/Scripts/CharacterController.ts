import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Button } from 'UnityEngine.UI';
import {AnimationClip,Vector3 ,GameObject,Quaternion,RuntimeAnimatorController,Animator} from 'UnityEngine';
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter,ZepetoPlayer } from 'ZEPETO.Character.Controller';
import { WorldService } from 'ZEPETO.World';
import { SceneManager } from 'UnityEngine.SceneManagement';
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
        ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(() => {
            this._localPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
        });       
        if(!ZepetoPlayers.instance.HasPlayer(WorldService.userId)){
            const Spawn = new SpawnInfo();
            Spawn.position = new Vector3(-2.5,-7.5,20);
            Spawn.rotation = Quaternion.Euler(new Vector3(0,100,0));
            ZepetoPlayers.instance.CreatePlayerWithUserId(WorldService.userId, Spawn, true);
        }
        else{
            this._localPlayer = ZepetoPlayers.instance.GetPlayer(WorldService.userId);
        }
        const z_CtrlUI = GameObject.Find("UIZepetoPlayerControl") as GameObject;
        const z_camera = GameObject.Find("ZepetoCamera") as GameObject;
        z_CtrlUI.SetActive(false);
        z_camera.SetActive(false);
        this.curRoom.AddMessageHandler("MoveToPuzzle",(message:string)=>{
            console.log("message get by"+message);
            SceneManager.LoadScene("Puzzle");
        });
        //this._localPlayer.character.Teleport(new Vector3(-7.66,-6,11.69),Quaternion.identity);
        //console.log(this._localPlayer.character.transform.position);


    }
    Update(){
        if(this._localPlayer != null && !this.isInit){
            ZepetoPlayers.instance.LocalPlayer.zepetoCamera.enabled = false;
            this.AnimCtrl = this._localPlayer.character.gameObject.GetComponentInChildren<Animator>();
            this.AnimCtrl.runtimeAnimatorController = this.playerAnimCtrl;
            this.playCustomAnimationButton.onClick.AddListener(() => {
                this.AnimCtrl.SetTrigger("Scream");
            });
            this.isInit = true;
        }
    }
}