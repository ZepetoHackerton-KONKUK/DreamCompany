import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { RawImage} from 'UnityEngine.UI';
import {Vector2,RectTransform,Color, WaitForSeconds,Object} from 'UnityEngine';
export default class SurpriseScore extends ZepetoScriptBehaviour {
    private _image:RawImage;
    private trans:RectTransform;
    Start() {    
        this._image = this.GetComponent<RawImage>();
        this.trans = this.GetComponent<RectTransform>();
        this.trans.anchoredPosition = new Vector2(0,0);
        this.StartCoroutine(this.Floating());
    }
    *Floating(){
        while(this._image.color.a >=0){
            this.trans.anchoredPosition = new Vector2(this.trans.anchoredPosition.x, this.trans.anchoredPosition.y+1);
            this._image.color = new Color(1,1,1,this._image.color.a-0.1);
            yield new WaitForSeconds(0.02);
        }
        Object.Destroy(this.gameObject);
    }

}