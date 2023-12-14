import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {GameObject,ParticleSystem,Transform} from 'UnityEngine'
import { ZepetoPlayers } from 'ZEPETO.Character.Controller';
export default class AuraCtrl extends ZepetoScriptBehaviour {
    @SerializeField() private Aura:GameObject[];

    Start(){
        GameObject.DontDestroyOnLoad(this.gameObject);
    }
    public GenerateAura(obj:GameObject,index:number){
        let particle:ParticleSystem[];
        particle = obj.GetComponentsInChildren<ParticleSystem>();
        if(particle.length >0){
            particle.forEach((value)=>{
                GameObject.Destroy(value.GetComponentInChildren<ParticleSystem>().gameObject);
            });
        }
        if(index > -1){
            const Aura = GameObject.Instantiate(this.Aura[index],obj.transform) as GameObject;
            if(!(obj == ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.gameObject)){
                this.ChangeLayerRecursively(Aura.transform);
            }
            Aura.transform.localScale *= 0.5;
        }

    }
    private ChangeLayerRecursively(trans:Transform){
        trans.gameObject.layer = 7;
        for(let i = 0; i<trans.childCount; i++){
            this.ChangeLayerRecursively(trans.GetChild(i));
        }
    }
}