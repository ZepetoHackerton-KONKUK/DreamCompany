import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Vector3, Rigidbody, GameObject, Time, Random, AudioClip, Quaternion, AudioSource } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';

export default class BoilingPot extends ZepetoScriptBehaviour {

    public potPrefabRigidbody: Rigidbody; // Rigidbody 컴포넌트 참조
    public boilingSoupSound: AudioClip;
    public audioSource: AudioSource;

    private shakingDuration: number = 5;
    private originalPotPosition: Vector3;
    private originalPotRotation: Quaternion;
    private isShaking: boolean = false;
    private shakeTimer: number = 0;
    private sumTimer:number = 0;
    private shakeInterval: number = 0.5;

    OnEnable() {
        console.log("Enable Pot");
        this.originalPotPosition = this.potPrefabRigidbody.transform.position; // 초기 위치 저장
        this.originalPotRotation = this.potPrefabRigidbody.transform.rotation; // 초기 회전 저장
        this.StartShaking();
        this.PlayBoilingSound();
        this.shakeTimer = 0;
        this.sumTimer = 0;
    }

    Update() {
        if (this.isShaking) {
            this.sumTimer += Time.deltaTime;
            this.shakeTimer += Time.deltaTime;
            if(this.shakeTimer >= this.shakeInterval){
                this.shakeTimer = 0;
                this.ShakePot();
            }
            if(this.sumTimer >= this.shakingDuration){
                this.StopShaking();
            }
        }
    }

    private PlayBoilingSound() {
        this.audioSource.clip = this.boilingSoupSound;
        this.audioSource.Play();
    }



    private StartShaking() {
        this.isShaking = true;
    }

    private ShakePot() {
        // 랜덤한 힘과 회전을 적용
        let force = new Vector3(Random.Range(0, 0), Random.Range(100, 150), Random.Range(0, 0));
        let torque = new Vector3(Random.Range(-10, 10), Random.Range(-10, 10), Random.Range(0, 0));
        this.potPrefabRigidbody.AddForce(force);
        this.potPrefabRigidbody.AddTorque(torque);
    }

    private StopShaking() {
        this.isShaking = false;
        this.potPrefabRigidbody.gameObject.transform.position = this.originalPotPosition;
        this.potPrefabRigidbody.gameObject.transform.rotation = this.originalPotRotation;
        this.gameObject.SetActive(false);
    }
}
