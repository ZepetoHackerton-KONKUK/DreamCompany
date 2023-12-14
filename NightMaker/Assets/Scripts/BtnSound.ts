import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {Button} from 'UnityEngine.UI'
import {AudioSource,GameObject} from 'UnityEngine'
export default class BtnSound extends ZepetoScriptBehaviour {

    private audioSource:AudioSource;
    public isJump:bool = false;
    Start() {    
        this.audioSource = this.GetComponent<AudioSource>();
        GameObject.FindObjectsOfType<Button>(true).forEach((value)=>{
            if(value.transform.name == "Jump" && this.isJump){
                value.onClick.AddListener(()=>{
                    this.audioSource.Stop();
                    this.audioSource.Play();
                })
                return;
            }
            else if(!this.isJump && value.transform.name != "Jump"){
                value.onClick.AddListener(()=>{
                    this.audioSource.Stop();
                    this.audioSource.Play();
                })
            }

        });
    }

}