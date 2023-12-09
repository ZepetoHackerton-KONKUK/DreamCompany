import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator } from 'ZEPETO.Character.Controller';
import { Animator, GameObject, RuntimeAnimatorController } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';
import AuraCtrl from './Scripts/AuraCtrl';

export default class MyChrGesture extends ZepetoScriptBehaviour {

    public ZepetoId: string;
    private _npc: ZepetoCharacter;
    private AC:AuraCtrl;

    Start(){
        this.AC = GameObject.Find("AuraController").GetComponent<AuraCtrl>();
    }
    public CharacterLoad(){
        const spawnInfo = new SpawnInfo();
        spawnInfo.position = this.transform.position;
        spawnInfo.rotation = this.transform.rotation;

       
        ZepetoCharacterCreator.CreateByZepetoId(this.ZepetoId, spawnInfo, (character: ZepetoCharacter) => {
            this._npc = character; 
        });
    }

    
    
    public ShowGesture(index:number){
        this.AC.GenerateAura(this._npc.gameObject,index);
    }

}