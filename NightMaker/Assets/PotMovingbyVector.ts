import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Vector3, Transform, Quaternion, GameObject, Time, Random} from 'UnityEngine';
import { Button } from 'UnityEngine.UI';

export default class PotMovingbyVector extends ZepetoScriptBehaviour {

    public potPrefab: Transform;
    public YesButton: Button;
    public BoilingPotCamera: GameObject;
    
    private shakingDuration: number = 3;
    private isShaking: boolean = false;

    Start() {
        this.BoilingPotCamera.SetActive(false);
        this.YesButton.onClick.AddListener(() => this.OnYesButtonClicked());
    }

    private OnYesButtonClicked() {
        this.BoilingPotCamera.SetActive(true);
        this.StartShaking();
    }

    Update() {
        if (this.isShaking) {
            this.ShakePot();
        }
    }

    private StartShaking() {
        this.isShaking = true;
        this.Invoke("StopShaking", this.shakingDuration);
    }

    private ShakePot() {
        let randomRotation = Quaternion.Euler(0, 0, Random.Range(-15, 15));
        this.potPrefab.rotation = Quaternion.Slerp(this.potPrefab.rotation, randomRotation, Time.deltaTime);

        
        let randomYMovement = Random.Range(-0.1, 0.1);
        this.potPrefab.position = new Vector3(
            this.potPrefab.position.x,
            this.potPrefab.position.y + randomYMovement,
            this.potPrefab.position.z
        );
    }

    private StopShaking() {
        
        this.isShaking = false;
        this.BoilingPotCamera.SetActive(false);
    }
}