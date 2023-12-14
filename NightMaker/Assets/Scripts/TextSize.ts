import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Text } from 'UnityEngine.UI';
import { RectTransform, Vector2 } from 'UnityEngine';

export default class TextSize extends ZepetoScriptBehaviour {
    private _nickname: Text;
    private rect:RectTransform;

    Start() {    
        this._nickname = this.GetComponent<Text>();
        this.rect = this.GetComponent<RectTransform>();
        this.ChangeFont();
    }
    public SetText(str:string) {
        this._nickname = this.GetComponent<Text>();
        this.rect = this.GetComponent<RectTransform>();
        this._nickname.text = str;
        this.ChangeFont();
        
    }
    private ChangeFont(){
        this._nickname.resizeTextForBestFit = true;
        this._nickname.resizeTextMinSize = 10;
        this._nickname.resizeTextMaxSize = 100;

        while(this._nickname.preferredWidth > this.rect.sizeDelta.x){
            this._nickname.fontSize--;
            if(this._nickname.fontSize <= this._nickname.resizeTextMinSize) {
                break;
            }
        }
    }
}
