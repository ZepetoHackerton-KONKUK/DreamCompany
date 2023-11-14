import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator } from 'ZEPETO.Character.Controller';
import { Button } from 'UnityEngine.UI';
import { GameObject, Object, Vector3 } from 'UnityEngine';
export default class GenerateKids extends ZepetoScriptBehaviour {
 
    public zepetoId: string;
    public removeCloneCharacterButton : Button;
    public removeCloneCharacterModelButton : Button;
 
    private _cloneCharacter : ZepetoCharacter;
    private _cloneCharacterModel : GameObject;
 
    Start() {
        // Create a new instance of the SpawnInfo class
        const firstCloneSpawnInfo = new SpawnInfo();
        firstCloneSpawnInfo.position = new Vector3(0,0,1);
 
        const secondCloneSpawnInfo = new SpawnInfo();
        secondCloneSpawnInfo.position = new Vector3(0,0,3);
 
 
 
        // Create a `ZepetoCharacter` using ZepetoId
        ZepetoCharacterCreator.CreateByZepetoId(this.zepetoId, firstCloneSpawnInfo, (character: ZepetoCharacter) => {
            this._cloneCharacter = character;
        });
 
 
        // Create a `ZepetoCharacterModel` using ZepetoId
        ZepetoCharacterCreator.CreateModelByZepetoId(this.zepetoId, secondCloneSpawnInfo, (object) => {
            this._cloneCharacterModel = object;
        });
 
        // Create a `ZepetoCharacter` using UserId
        /*
        ZepetoCharacterCreator.CreateByUserId(WorldService.userId, new SpawnInfo(), (character: ZepetoCharacter) => {
            this._cloneCharacter = character;
        })
  
        // Create a `ZepetoCharacterModel` using UserId
        ZepetoCharacterCreator.CreateModelByUserId(WorldService.userId, new SpawnInfo(), (object) => {
            this._cloneCharacterModel = object;
        })
        */
 
        // Set up a click event for the `removeCloneCharacterButton` to remove the clone character.
        this.removeCloneCharacterButton.onClick.AddListener(() => {
            ZepetoCharacterCreator.RemoveCharacter(this._cloneCharacter);
        });
 
        // Set up a click event for the `removeCloneCharacterModelButton` to destroy the clone character model.
        this.removeCloneCharacterModelButton.onClick.AddListener(() => {
            Object.Destroy(this._cloneCharacterModel);
        });
    }
 
}