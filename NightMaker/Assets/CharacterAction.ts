import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator} from "ZEPETO.Character.Controller";
import {AnimationClip, GameObject, Vector3, WaitForSeconds } from 'UnityEngine';
 
export default class CharacterActionSample extends ZepetoScriptBehaviour {
 
    public targetPosition: Vector3;
    public danceGesture: AnimationClip;
    public zepetoId: string;
    public exitObject: GameObject;
    
    private _cloneCharacter: ZepetoCharacter;
 
    Start() {
 
        
        ZepetoCharacterCreator.CreateByZepetoId(this.zepetoId, new SpawnInfo(), (character: ZepetoCharacter) => {
            
            this._cloneCharacter = character;
            this.StartCoroutine(this.ActionCoroutine());
        })
    }
 
    *ActionCoroutine() {
        while(Vector3.Distance(this._cloneCharacter.transform.position, this.exitObject.transform.position) < 0.1){
            this._cloneCharacter.MoveToPosition(this.exitObject.transform.position);
            this._cloneCharacter.SetGesture(this.danceGesture);
        }

        this._cloneCharacter.CancelGesture();
    }
}