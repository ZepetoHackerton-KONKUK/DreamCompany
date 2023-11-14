import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Button } from 'UnityEngine.UI';
import { Animator, AnimationClip } from 'UnityEngine';
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter } from 'ZEPETO.Character.Controller';
import { WorldService } from 'ZEPETO.World';

export default class CharacterController extends ZepetoScriptBehaviour {

    public customAnimationClip: AnimationClip;
    public playCustomAnimationButton: Button;
    private _localPlayerAnimator: Animator;

    Start() {
        this.playCustomAnimationButton.onClick.AddListener(() => {
            this._localPlayerAnimator.Play(this.customAnimationClip.name);
        })

        ZepetoPlayers.instance.CreatePlayerWithUserId(WorldService.userId, new SpawnInfo(), true);

        ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(() => {
            const player: LocalPlayer = ZepetoPlayers.instance.LocalPlayer;
            this._localPlayerAnimator = player.zepetoPlayer.character.GetComponentInChildren<Animator>();
        });

    }

}