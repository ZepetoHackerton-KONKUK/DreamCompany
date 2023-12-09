import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {GameObject,ParticleSystem} from 'UnityEngine'

export default class AuraCtrl extends ZepetoScriptBehaviour {
    @SerializeField() private Aura:GameObject[];

    Start(){
        GameObject.DontDestroyOnLoad(this.gameObject);
    }
    public GenerateAura(obj:GameObject,index:number){
        let particle:ParticleSystem;
        particle = obj.GetComponentInChildren<ParticleSystem>();
        if(particle != null){
            GameObject.Destroy(obj.GetComponentInChildren<ParticleSystem>().gameObject);
        }
        if(index > -1){
            GameObject.Instantiate(this.Aura[index],obj.transform);
        }

    }

}