import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { SpawnInfo, ZepetoCharacter, ZepetoCharacterCreator } from 'ZEPETO.Character.Controller';
import { Time, Animator, RuntimeAnimatorController, Vector3, GameObject, RaycastHit, Physics, Ray, TerrainHeightmapSyncControl, WaitForSeconds } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';

export default class NPCAction extends ZepetoScriptBehaviour {

    
    public zepetoId: string[];
    public npcAnimator: RuntimeAnimatorController;
    public Button: Button;
    
    public Miss: GameObject;
    public Bad: GameObject;
    public Good: GameObject;
    public Great: GameObject;
    public Excellent: GameObject;
    public Perfect: GameObject;

    public Dream: GameObject;
    public Nightmare: GameObject;

    public scoreText: Text;

    private _npc: ZepetoCharacter;
    private _isButtonPressed: boolean = false;
    private _maxTime: number = 60;
    private _score: number = 0;
    
    Start() {
    
        this.StartCoroutine(this.MainCoroutine());
    }
        *MainCoroutine() {
            const startTime = Time.time;
        while (Time.time - startTime < this._maxTime){
            const spawnInfo = new SpawnInfo();
            spawnInfo.position = this.transform.position;
            spawnInfo.rotation = this.transform.rotation;

            const zepetoIds = ["jjiyeiye"];
            const randomIndex = Math.floor(Math.random() * this.zepetoId.length);
            const randomZepetoId = zepetoIds[randomIndex];

            this.Button.onClick.AddListener(() => {
                this._isButtonPressed = true;
            });

            ZepetoCharacterCreator.CreateByZepetoId(randomZepetoId, spawnInfo, (character: ZepetoCharacter) => {
              this._npc = character;
            
                this._npc.GetComponentInChildren<Animator>().runtimeAnimatorController = this.npcAnimator;
                this.StartCoroutine(this.ActionCoroutine());
            
           });
           yield new WaitForSeconds(1);
    }
}


    *ActionCoroutine() {
        let moving = true;
        let combo = 0;
        let speed = 0.1;
        while (moving) {
            const direction = new Vector3(
                this.Miss.transform.position.x - this._npc.transform.position.x,
                this.Miss.transform.position.y - this._npc.transform.position.y,
                this.Miss.transform.position.z - this._npc.transform.position.z
            ).normalized;

            this._npc.transform.position = new Vector3(
                this._npc.transform.position.x + direction.x * speed * Time.deltaTime,
                this._npc.transform.position.y + direction.y * speed * Time.deltaTime,
                this._npc.transform.position.z + direction.z * speed * Time.deltaTime
            );
            const ray = new Ray(this._npc.transform.position, Vector3.down);
            let ref = $ref<RaycastHit>();

            
            if (Physics.Raycast(ray, ref, 1000)) {
                let hitInfo = $unref(ref);
                if (hitInfo.collider.gameObject === this.Miss && this._isButtonPressed) { //Miss일때
                    combo=0;
                    speed=0.1;
                    moving = false;
                    this.StartCoroutine(this.DreamCoroutine());
                    this._isButtonPressed = false;
                }
                else if(hitInfo.collider.gameObject === this.Bad && this._isButtonPressed){ //Bad일때
                    combo++;
                    if (combo=5){
                        combo=0;
                        speed = 0.12;
                    }
                    moving = false;
                    this._score += 10;
                    this.StartCoroutine(this.NightmareCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this._isButtonPressed = false;
                }
                else if(hitInfo.collider.gameObject === this.Good && this._isButtonPressed) { //Good일때
                    combo++;
                    if (combo=5){
                        combo=0;
                        speed = 0.14;
                    }
                    moving = false;
                    this._score +=20;
                    this.StartCoroutine(this.NightmareCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this._isButtonPressed = false;
                }
                else if(hitInfo.collider.gameObject === this.Great && this._isButtonPressed){ //Great일때
                    combo++;
                    if (combo=5){
                        combo=0;
                        speed = 0.16;
                    }
                    moving = false;
                    this._score += 30;
                    this.StartCoroutine(this.NightmareCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this,this._isButtonPressed = false;
                }
                else if(hitInfo.collider.gameObject === this.Excellent && this._isButtonPressed){ //Excellent일때
                    combo++;
                    if (combo=5){
                        combo=0;
                        speed = 0.18;
                    }
                    moving = false;
                    this._score += 40;
                    this.StartCoroutine(this.NightmareCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this._isButtonPressed = false;
                }
                else if(hitInfo.collider.gameObject === this.Perfect && this._isButtonPressed){ //Perfect일때
                    combo++;
                    if (combo=5){
                        combo=0;
                        speed = 0.2;
                    }
                    moving = false;
                    this._score += 50;
                    this.StartCoroutine(this.NightmareCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this._isButtonPressed = false;
                }
                else{
                    combo=0;
                    speed=0.1;
                    moving = false;
                    this.StartCoroutine(this.DreamCoroutine());
                    this.StartCoroutine(this.UpdateScoreText());
                    this._isButtonPressed = false;
                }
            }
        }
    }

    *UpdateScoreText() {
        this.scoreText.textContent = "Score: " + this._score.toString();
    }

    *DreamCoroutine() {
        let moving = true;
        let speed = 0.15;
        while (moving) {
            const direction = new Vector3(
                this.Dream.transform.position.x - this._npc.transform.position.x,
                this.Dream.transform.position.y - this._npc.transform.position.y,
                this.Dream.transform.position.z - this._npc.transform.position.z
            ).normalized;

            this._npc.transform.position = new Vector3(
                this._npc.transform.position.x + direction.x * speed * Time.deltaTime,
                this._npc.transform.position.y + direction.y * speed * Time.deltaTime,
                this._npc.transform.position.z + direction.z * speed * Time.deltaTime
            );
            const ray = new Ray(this._npc.transform.position, Vector3.down);
            let ref = $ref<RaycastHit>();
            if (Physics.Raycast(ray, ref, 1000)) {
                let hitInfo = $unref(ref);
                if (hitInfo.collider.gameObject === this.Dream){
                    moving = false;
                    GameObject.Destroy(this._npc.gameObject);
                }
            }
    }
}

    *NightmareCoroutine() {
        let moving = true;
        let speed = 0.15;
        while (moving) {
            const direction = new Vector3(
                this.Nightmare.transform.position.x - this._npc.transform.position.x,
                this.Nightmare.transform.position.y - this._npc.transform.position.y,
                this.Nightmare.transform.position.z - this._npc.transform.position.z
            ).normalized;

            this._npc.transform.position = new Vector3(
                this._npc.transform.position.x + direction.x * speed * Time.deltaTime,
                this._npc.transform.position.y + direction.y * speed * Time.deltaTime,
                this._npc.transform.position.z + direction.z * speed * Time.deltaTime
            );
            const ray = new Ray(this._npc.transform.position, Vector3.down);
            let ref = $ref<RaycastHit>();
            if (Physics.Raycast(ray, ref, 1000)) {
                let hitInfo = $unref(ref);
                if (hitInfo.collider.gameObject === this.Dream){
                    moving = false;
                   GameObject.Destroy(this._npc.gameObject);
                }
            }
        }
    }
}