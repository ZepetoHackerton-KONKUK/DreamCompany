import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Button } from 'UnityEngine.UI'
import { SceneManager } from 'UnityEngine.SceneManagement'
export default class ChangePuzzle extends ZepetoScriptBehaviour {

    public ChangePuzzle:Button;
    Start() {    
        this.ChangePuzzle.onClick.AddListener(()=>{
            SceneManager.LoadScene("Puzzle");
        });
    }

}