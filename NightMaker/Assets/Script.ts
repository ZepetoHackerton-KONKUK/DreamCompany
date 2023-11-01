import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
export default class Script extends ZepetoScriptBehaviour {

    Start() {    

    }
    Update(){
        this.gameObject.transform.Rotate(UnityEngine.Vector3.forward, UnityEngine.Space.Self);
    }

}