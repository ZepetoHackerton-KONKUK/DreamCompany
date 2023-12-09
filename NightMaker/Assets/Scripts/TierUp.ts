import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { GameObject, Coroutine, WaitUntil,Input} from 'UnityEngine'
export default class TierUp extends ZepetoScriptBehaviour {

    public isDestroy:bool;
    OnEnable(){
        this.StartCoroutine(this.DisableAfterTouch());
    }
    *DisableAfterTouch(){
        yield new WaitUntil(()=>Input.GetMouseButton(0));
        if(this.isDestroy){
            GameObject.Destroy(this.gameObject);
        }
        this.gameObject.SetActive(false);
    }

}