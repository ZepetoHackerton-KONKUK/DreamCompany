import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Rigidbody,Vector3,Time, Texture } from 'UnityEngine'
export default class LogoFloat extends ZepetoScriptBehaviour {
    private rigid:Rigidbody;
    private Dir:bool = true;
    private time:number = 0;
    Start() {      
        this.rigid = this.gameObject.GetComponent<Rigidbody>();
    }

    Update(){
        if(this.time < 0){
            this.Dir = true
        }
        else if(this.time > 1){
            this.Dir = false;
        }
        if(this.Dir){
            this.time+= Time.deltaTime;
            this.rigid.velocity = new Vector3(0,0.1,0);
        }
        else{
            this.time-= Time.deltaTime;
            this.rigid.velocity = new Vector3(0,-0.1,0);
        }
        this.transform.Rotate(Vector3.up*0.1);

    }

}