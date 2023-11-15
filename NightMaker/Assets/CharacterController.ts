import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Button } from 'UnityEngine.UI';
import { Animator, AnimationClip,Vector3 ,GameObject,Quaternion} from 'UnityEngine';
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter,ZepetoPlayer } from 'ZEPETO.Character.Controller';
import { WorldService } from 'ZEPETO.World';

export default class CharacterController extends ZepetoScriptBehaviour {

    public customAnimationClip: AnimationClip;
    public playCustomAnimationButton: Button;
    private _localPlayer:ZepetoPlayer;
    Start() {
        ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(() => {
            this._localPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
            ZepetoPlayers.instance.LocalPlayer.zepetoCamera.enabled = false;
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
        this.playCustomAnimationButton.onClick.AddListener(() => {
            this._localPlayer.character.SetGesture(this.customAnimationClip);
        });
        const z_CtrlUI = GameObject.Find("UIZepetoPlayerControl") as GameObject;
        const z_camera = GameObject.Find("ZepetoCamera") as GameObject;
        z_CtrlUI.SetActive(false);
        z_camera.SetActive(false);
        //this._localPlayer.character.Teleport(new Vector3(-7.66,-6,11.69),Quaternion.identity);
        //console.log(this._localPlayer.character.transform.position);


    }

}