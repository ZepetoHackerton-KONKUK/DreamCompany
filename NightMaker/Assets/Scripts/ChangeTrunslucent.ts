import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {LocalPlayer, ZepetoCharacter, ZepetoPlayers} from "ZEPETO.Character.Controller";
import { GameObject, Material, Renderer, SkinnedMeshRenderer, Transform, WaitForSeconds } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';


export default class ChangeTrunslucent extends ZepetoScriptBehaviour {

    public newColorMaterial : Material;
    public changeColorButton : Button;
    public originalColorButton : Button;

    private _originalMaterials : Material[] = new Array();
    private _bodyRends : Renderer[];
    private _localCharacter: ZepetoCharacter;

    Start() {
        // Find the local player and Set it to _localCharacter
        ZepetoPlayers.instance.OnAddedLocalPlayer.AddListener(() => {
            this._localCharacter = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character;
            
            // Save to keep original materials
            this._bodyRends= this._localCharacter.GetComponentsInChildren<SkinnedMeshRenderer>();
            this._bodyRends.forEach((currentRenderer) =>{
                for(let i=0; i<currentRenderer.sharedMaterials.length;i++){
                    this._originalMaterials.push(currentRenderer.sharedMaterials[i]);
                }
            });
        });

        // Replace with the preset material when the button is pressed
        this.changeColorButton.onClick.AddListener(() => {
            if(this._localCharacter != null) {
                this._bodyRends.forEach((currentRenderer) =>{
                    let tempMaterials : Material[] = new Array();
                    for(let i=0; i<currentRenderer.sharedMaterials.length;i++){
                        tempMaterials.push(this.newColorMaterial);
                    }
                    currentRenderer.sharedMaterials = tempMaterials;
                });
            }
        });

        // Return to the original material when the button is pressed
        this.originalColorButton.onClick.AddListener(() => {
            if(this._localCharacter != null) {
                let indexNum = 0;
                this._bodyRends= this._localCharacter.GetComponentsInChildren<SkinnedMeshRenderer>();
                this._bodyRends.forEach((currentRenderer) =>{
                    let tempMaterials : Material[] = new Array();
                    for(let i=0; i<currentRenderer.sharedMaterials.length;i++){
                        tempMaterials.push(this._originalMaterials[indexNum]);
                        indexNum++;
                    }
                    currentRenderer.sharedMaterials = tempMaterials; 
                });
            }
        });
    }
}  