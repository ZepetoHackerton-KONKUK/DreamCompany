import { Animator } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';
import { ZepetoScriptBehaviour } from 'ZEPETO.Script'

export default class ButtonClick extends ZepetoScriptBehaviour {

    public Button: Button;
    public Animator: Animator;
    Start() {    
        let btn = this.Button.GetComponent<Button>();
        btn.onClick.AddListener(this.TaskOnClick);
    }

    TaskOnClick() {
        this.Animator.Play("Surprise");
    }
}