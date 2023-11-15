    import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
import {Button,Text,Slider,RawImage,Image} from 'UnityEngine.UI'
import { EventSystem } from 'UnityEngine.EventSystems'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import {SpawnInfo,ZepetoPlayers, ZepetoCharacter, ZepetoCharacterCreator} from 'ZEPETO.Character.Controller'
import {WorldService,ZepetoWorldHelper,Users} from 'ZEPETO.World'
export default class SketchCtrl extends ZepetoScriptBehaviour {
    
    public m_camera:UnityEngine.Camera;
    public p_camera:UnityEngine.Camera;
    public Pen:UnityEngine.GameObject;
    public ChangeEraser:Button;
    public ChangePen:Button;
    public EndDrawBtn:Button;
    public Materials:UnityEngine.Material[] = [];
    public SketchPrefab:UnityEngine.GameObject;
    public TimerText:Text;
    public TicknessBtns:Button[];
    public PuzzleFrame:UnityEngine.GameObject;
    public PuzzlePosition:UnityEngine.Vector3[];
    public ColorBtns:Button[];
    public OpenColorBtn:Button;
    public ColorGroup:UnityEngine.GameObject;
    public UIGroup:UnityEngine.GameObject[];
    public RotationBtns:Button[];
    public Loading:UnityEngine.GameObject;
    public PuzzleLogo:UnityEngine.SpriteRenderer;
    public VoteTimer:Slider;
    public StartImage:UnityEngine.GameObject;
    public ScareAnim:UnityEngine.AnimationClip;
    public SleepAnim:UnityEngine.AnimationClip;
    public WakeAnim:UnityEngine.AnimationClip;
    public Profiles:UnityEngine.GameObject[];
    public ProfileImages:RawImage[];
    public Bed:UnityEngine.GameObject;
    public KidAnimator:UnityEngine.RuntimeAnimatorController;
    private puzzleState = "Draw";
    private z_camera:UnityEngine.GameObject;
    private curLine:UnityEngine.LineRenderer;
    private positionCount:number = 2;
    private PrevPos:UnityEngine.Vector3 = UnityEngine.Vector3.zero;
    private Setting:PenSetting;
    private OrderLayer:number = 0;
    private localSketchBook:UnityEngine.GameObject;
    private curRoom:Room;
    private Sketches:Map<string,UnityEngine.GameObject> = new Map<string,UnityEngine.GameObject>();
    private playerCurLine:Map<string,UnityEngine.LineRenderer> = new Map<string,UnityEngine.LineRenderer>();
    private playerList:string[] =[];
    private timer:number;
    private VoteSketch:string="";
    private firstSketch:UnityEngine.GameObject;
    private secondSketch:UnityEngine.GameObject;
    private VoteLeftSelect:UnityEngine.GameObject;
    private VoteRightSelect:UnityEngine.GameObject;
    private z_CtrlUI:UnityEngine.GameObject;
    private puzzleSketch:UnityEngine.GameObject;
    private puzzlePieces:UnityEngine.GameObject[] = [null,null,null,null,null,null,null,null]; // 0 전체,1 판, 2 왼아래, 3 왼얼굴 4 왼위 5 오른아래 6오른얼굴 7 오른위
    private AnswerPosition:UnityEngine.Vector3[] = [null,null,null,null,null,null];
    private CurrentPiece:UnityEngine.GameObject; // 현재 조각
    private CorrectPiece:number = 0; // 맞춘 퍼즐 수
    private Canvas:UnityEngine.RectTransform;
    private _clonePlayer:ZepetoCharacter;
    private _puzzleKid:ZepetoCharacter = null;
    private _puzzleKidObject:UnityEngine.GameObject;
    private isFindKid:boolean = false;
    private puzzleAnimator:UnityEngine.Animator;
    private puzzleScore:number;
    Start() {   
        let kidID:string[] = ["jjiyeiye","tstscscs"];
        const ClonePlayerSpawnInfo = new SpawnInfo();
        ClonePlayerSpawnInfo.position = new UnityEngine.Vector3(500,-1,0);
        ClonePlayerSpawnInfo.rotation = UnityEngine.Quaternion.Euler(new UnityEngine.Vector3(0,-180,0));
        const KidSpawnInfo = new SpawnInfo();
        KidSpawnInfo.position = new UnityEngine.Vector3(199.8,0,0);
        KidSpawnInfo.rotation = UnityEngine.Quaternion.Euler(new UnityEngine.Vector3(0,90,0)); 
        
        ZepetoCharacterCreator.CreateByZepetoId(kidID[Math.floor(Math.random()*2)],KidSpawnInfo,(character:ZepetoCharacter)=>{
            this._puzzleKid = character;
        });
        this.z_camera = UnityEngine.GameObject.Find("ZepetoCamera") as UnityEngine.GameObject;
        this.z_CtrlUI = UnityEngine.GameObject.Find("UIZepetoPlayerControl") as UnityEngine.GameObject;
        this.Canvas = UnityEngine.GameObject.Find("Canvas").GetComponent<UnityEngine.RectTransform>();
        this.UIGroup[3].GetComponent<UnityEngine.RectTransform>().sizeDelta = new UnityEngine.Vector2(50,this.Canvas.sizeDelta.y);
        this.z_CtrlUI.SetActive(false);
        this.z_camera.SetActive(false);
        this.Setting = new PenSetting(); 
        this.ChangeEraser.onClick.AddListener(()=>{
            this.Setting.ColorType = 1;
            this.UIGroup[0].transform.GetChild(1).GetChild(0).gameObject.SetActive(true);
            this.UIGroup[0].transform.GetChild(0).GetChild(0).gameObject.SetActive(false);
        });
        this.ChangePen.onClick.AddListener(()=>{
            this.Setting.ColorType = 0;
            this.UIGroup[0].transform.GetChild(0).GetChild(0).gameObject.SetActive(true);
            this.UIGroup[0].transform.GetChild(1).GetChild(0).gameObject.SetActive(false);
        });
        this.EndDrawBtn.onClick.AddListener(()=>{
            this.EndDrawing();
        });
        for(let i = 0; i<this.TicknessBtns.length;i++){
            this.TicknessBtns[i].onClick.AddListener(()=>{
                    this.SetTickness(i); 
            });
        }
        for(let i:number = 0; i<this.ColorBtns.length; i++){
            this.ColorBtns[i].onClick.AddListener(()=>{
                this.SetColor(i);
            });
        }
        this.OpenColorBtn.onClick.AddListener(()=>{
            this.ColorGroup.SetActive(!this.ColorGroup.activeSelf);
        });
        this.RotationBtns[0].onClick.AddListener(()=>{
            console.log("버튼 왼");
            if(this.CurrentPiece != null){
                this.CurrentPiece.transform.Rotate(0,0,-45);
                this.checkMatch();
            }
        });
        this.RotationBtns[1].onClick.AddListener(()=>{
            console.log("버튼 오른");
            if(this.CurrentPiece != null){
                this.CurrentPiece.transform.Rotate(0,0,45);
                this.checkMatch();
            }
        });
        this.Loading.SetActive(true);
        this.curRoom = MultiplayManager.instance.room;
        console.log(WorldService.userId);
        ZepetoCharacterCreator.CreateByUserId(WorldService.userId,ClonePlayerSpawnInfo,(character:ZepetoCharacter)=>{
            this._clonePlayer = character;
        });
        this.timer = 45; // 그림그리기 40초
        this.curRoom.AddMessageHandler("UpdatePlayers",(message:string[])=>{
            ZepetoWorldHelper.GetUserInfo(message,(info:Users[])=>{
                for(let i = 0; i<info.length;i++){
                    this.Profiles[i].GetComponentInChildren<Text>().text = info[i].name;
                    ZepetoWorldHelper.GetProfileTexture(message[i],(texture:UnityEngine.Texture)=>{
                        this.ProfileImages[i].texture = texture;
                    },(error)=>{
                        console.log(error);
                    });
                }
            },(error)=>{
                console.log(error);
            });
            for(let i = 0; i<8; i++){
                this.Profiles[i].SetActive(false);
                if(i>=message.length)break;
                this.Profiles[i].SetActive(true);
            }
        });
        this.curRoom.AddMessageHandler("puzzle",(message:LineModel)=>{
            let SketchBook:UnityEngine.GameObject;
            if(!this.Sketches.has(message.name)){
                SketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
                SketchBook.name = "S_"+message.name;
                SketchBook.SetActive(false);
                this.Sketches.set(message.name,SketchBook);
            }else{
                SketchBook = this.Sketches.get(message.name);
            }
            let posData = new UnityEngine.Vector3(message.pos[0],message.pos[1],message.pos[2]);
            if(message.isNew){
                let line = new UnityEngine.GameObject("Line") as UnityEngine.GameObject;
                let lineRend = line.AddComponent<UnityEngine.LineRenderer>() as UnityEngine.LineRenderer;
                line.transform.parent = SketchBook.transform;
                lineRend.useWorldSpace = false;
                lineRend.startWidth = message.Tick;
                lineRend.endWidth = message.Tick;
                lineRend.shadowBias = message.Tick;
                lineRend.numCornerVertices = 5;
                lineRend.numCapVertices = 5;
                lineRend.sortingOrder = message.sOrder;
                lineRend.material = this.Materials[message.Color];

                lineRend.SetPosition(0,posData);
                lineRend.SetPosition(1,posData);
                this.playerCurLine.set(message.name,lineRend);
            }else{
                let lineRend = this.playerCurLine.get(message.name) as UnityEngine.LineRenderer;
                lineRend.positionCount = message.Count;
                lineRend.SetPosition(message.Count-1,posData);
            }
        });
        this.curRoom.AddMessageHandler("EndDraw",(message:string[])=>{
            this.puzzleState = "Wait";
            this.Loading.SetActive(true);
            this.UIGroup[0].SetActive(false);
            this.UIGroup[5].SetActive(false);
            this.timer = 11;
            this.puzzleState = "Vote";
            this.localSketchBook.SetActive(false);
            for(let i = 0; i<message.length; i++){
                if(this.Sketches.has(message[i])){
                    this.playerList.push(message[i]);
                }
            }
            if(!(this.startVote()==null)){
                this.EndVote();
            }
        });
        this.curRoom.AddMessageHandler("Vote",(message:string)=>{
            console.log("inVote"+typeof(message));
            this.playerList.push(message as string);
            console.log(typeof("inVote"+this.playerList[0]));
            this.timer = 10;
            this.puzzleState = "Vote";
            if(!(this.startVote()==null)){
                this.EndVote();
            }
        });
        this.curRoom.AddMessageHandler("EndVote",(message:PuzzleModel)=>{
            this.timer = 31;
            this.ShowWinner();
            this.UIGroup[4].SetActive(true);
            this.UIGroup[4].GetComponentInChildren<Text>().text = "꿈의 조각을 맞춰 악몽을 완성하자";
            this.UIGroup[3].SetActive(false);
            console.log("the winner is "+message);
            this.InitPuzzle(message.pos,message.rot);
        });
    }
    FixedUpdate(){
        if(!this.isFindKid){
            if(this._puzzleKid != null){
                //this._puzzleKid.SetGesture(this.SleepAnim);
                this._puzzleKidObject = this._puzzleKid.transform.gameObject;
                this._puzzleKidObject.transform.parent = this.Bed.transform;
                this.puzzleAnimator = this._puzzleKidObject.GetComponentInChildren<UnityEngine.Animator>();
                this.puzzleAnimator.runtimeAnimatorController = this.KidAnimator;
                
                this.isFindKid = true;
            }
        }
        this.TimerText.text = this.timer.toFixed(0)+"s";
        this.timer-=UnityEngine.Time.deltaTime;
        switch(this.puzzleState){
            
            case "Draw":
                if(this.timer<0){
                    this.timer=0;
                    this.EndDrawing();
                }
                if(this.Loading.activeSelf){
                    if(this.timer>44) return;
                    this.Loading.SetActive(false);
                    this.StartImage.SetActive(true);
                    this._clonePlayer.SetGesture(this.ScareAnim);
                    }
                if(this.StartImage.activeSelf){
                    if(this.timer>40) return;
                    this.curRoom.Send("InitProfile");
                    this.UIGroup[6].SetActive(true);
                    this.localSketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
                    this.localSketchBook.name = "S_"+this.curRoom.SessionId;
                    this.Sketches.set(this.curRoom.SessionId,this.localSketchBook);
                    this.UIGroup[5].SetActive(true);
                    this.StartImage.SetActive(false);
                }
                this.DrawMouse();
                break;
            case "Vote":
                this.VoteTimer.value = this.timer;
                if(this.Loading.activeSelf){
                    if(this.timer>10) return;
                    this.Loading.SetActive(false);
                    this.UIGroup[3].SetActive(true);
                    this.UIGroup[4].SetActive(true);
                }
                if(this.timer<0){
                    this.timer = 0;
                    this.SendVote();
                }
                this.CheckVote();
                break;
            case "Wait":
                this.timer=0;
                break;
            case "Puzzle":
                if(this.Loading.activeSelf){
                    if(this.timer>30) return;
                    this.Loading.SetActive(false);
                }
                if(this.timer<0){
                    this.timer=0;
                    this.EndPuzzle();
                }
                this.PuzzleGame();
                break;
        }
    }
    DrawMouse():void{
        if(UnityEngine.Input.GetMouseButtonDown(0)){
            this.OrderLayer++;
            let ray = this.m_camera.ScreenPointToRay(UnityEngine.Input.mousePosition);
            let SketchHit = $ref<UnityEngine.RaycastHit>();
            if(UnityEngine.Physics.Raycast(ray,SketchHit,100)){
                let hitInfo = $unref(SketchHit);
                if(hitInfo.collider.CompareTag("Canvas")){
                    this.createLine(hitInfo);
                }
            }
        }else if(UnityEngine.Input.GetMouseButton(0)){
            let ray = this.m_camera.ScreenPointToRay(UnityEngine.Input.mousePosition);
            let SketchHit = $ref<UnityEngine.RaycastHit>();
            if(UnityEngine.Physics.Raycast(ray,SketchHit,100)){
                let hitInfo = $unref(SketchHit);
                if(hitInfo.collider.CompareTag("Canvas")){
                    this.connectLine(hitInfo);
                }
            }
        }

    }

    private offset:UnityEngine.Vector3;
    PuzzleGame(){
        if(this.CorrectPiece == 6 && !this.puzzlePieces[0].GetComponentInChildren<UnityEngine.ParticleSystem>().isPlaying){
            this.puzzlePieces[0].GetComponentInChildren<UnityEngine.ParticleSystem>().Play();
            this.CorrectPiece = 7;
        }
        if(UnityEngine.Input.GetMouseButtonDown(0)){
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[1].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[1].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[1].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[1].transform.position.x+40){
                return;
            }
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[2].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[2].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[2].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[2].transform.position.x+40){
                return;
            }
            let ray = this.m_camera.ScreenPointToRay(UnityEngine.Input.mousePosition);
            let worldPoint = this.m_camera.ScreenToWorldPoint(UnityEngine.Input.mousePosition) as UnityEngine.Vector3;
            worldPoint = new UnityEngine.Vector3(worldPoint.x,worldPoint.y,-2);
            let PuzzleHit = $ref<UnityEngine.RaycastHit>();
            if(UnityEngine.Physics.Raycast(ray,PuzzleHit,100)){
                let hitInfo = $unref(PuzzleHit);
                if(hitInfo.collider.CompareTag("PuzzlePiece")){
                    if(this.CurrentPiece !=null){
                        this.CurrentPiece.transform.position = new UnityEngine.Vector3(this.CurrentPiece.transform.position.x,this.CurrentPiece.transform.position.y,-1);
                        this.CurrentPiece.transform.GetChild(0).gameObject.SetActive(false);
                        this.CurrentPiece = null;
                        
                    }
                    this.CurrentPiece = hitInfo.collider.gameObject;
                    this.CurrentPiece.transform.position = new UnityEngine.Vector3(this.CurrentPiece.transform.position.x,this.CurrentPiece.transform.position.y,-2);
                    this.CurrentPiece.transform.GetChild(0).gameObject.SetActive(true);
                    this.offset = this.CurrentPiece.transform.position-worldPoint;
                }
            }else{
                console.log("퍼즐");
                if(this.CurrentPiece !=null){
                    this.CurrentPiece.transform.position = new UnityEngine.Vector3(this.CurrentPiece.transform.position.x,this.CurrentPiece.transform.position.y,-1);
                    this.CurrentPiece.transform.GetChild(0).gameObject.SetActive(false);

                    this.CurrentPiece = null;
                }
            }
        }
        else if(UnityEngine.Input.GetMouseButton(0)){
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[1].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[1].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[1].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[1].transform.position.x+40){
                return;
            }
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[2].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[2].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[2].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[2].transform.position.x+40){
                return;
            }
            if(this.CurrentPiece != null){
                let mousePos = this.m_camera.ScreenToWorldPoint(UnityEngine.Input.mousePosition) as UnityEngine.Vector3;
                mousePos = new UnityEngine.Vector3(mousePos.x,mousePos.y,-2);
                this.CurrentPiece.transform.position = mousePos+this.offset;
            }
        }
        else if(UnityEngine.Input.GetMouseButtonUp(0)){
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[1].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[1].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[1].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[1].transform.position.x+40){
                return;
            }
            if(UnityEngine.Input.mousePosition.y>this.UIGroup[2].transform.position.y - 40 && UnityEngine.Input.mousePosition.y<this.UIGroup[2].transform.position.y+40 && UnityEngine.Input.mousePosition.x>this.UIGroup[2].transform.position.x-40&& UnityEngine.Input.mousePosition.x<this.UIGroup[2].transform.position.x+40){
                return;
            }
            if(this.CurrentPiece != null){
                this.checkMatch();
            }
        }
    }
    checkMatch(){
        let CheckRot = UnityEngine.Quaternion.Angle(this.CurrentPiece.transform.localRotation,UnityEngine.Quaternion.Euler(UnityEngine.Vector3.zero)) as number;
        let index;
        for(index = 0; index<6; index++){
            if(this.puzzlePieces[index+2].name === this.CurrentPiece.name){
                break;
            }
        }
        let CheckPos = UnityEngine.Vector3.Distance(this.CurrentPiece.transform.position,this.AnswerPosition[index]) as number;
        if(CheckRot == 0 && CheckPos < 0.5){
            this.CurrentPiece.transform.position = new UnityEngine.Vector3(this.AnswerPosition[index].x,this.AnswerPosition[index].y,0);
            this.CurrentPiece.transform.GetChild(0).gameObject.SetActive(false);
            this.CorrectPiece++;
            console.log(this.CorrectPiece);
            this.CurrentPiece.tag = "AnswerPiece"
            this.CurrentPiece = null;
        }
    }
    createLine(mousePos:UnityEngine.RaycastHit){
        this.positionCount = 2;
        let line = new UnityEngine.GameObject("Line") as UnityEngine.GameObject;
        let lineRend = line.AddComponent<UnityEngine.LineRenderer>() as UnityEngine.LineRenderer;
        line.transform.parent = mousePos.collider.transform;
        lineRend.useWorldSpace = false;  
        lineRend.startWidth = this.Setting.Tickness;
        lineRend.endWidth = this.Setting.Tickness;
        lineRend.shadowBias =this.Setting.Tickness;
        lineRend.numCornerVertices = 5;
        lineRend.numCapVertices = 5;
        lineRend.sortingOrder = this.OrderLayer;
        lineRend.material = this.Materials[this.Setting.ColorType];
        lineRend.SetPosition(0,mousePos.point);
        lineRend.SetPosition(1,mousePos.point);
        this.curLine = lineRend;
        let posData:number[] = [mousePos.point.x,mousePos.point.y,mousePos.point.z];
        let lineMessage = {name:this.curRoom.SessionId, pos:posData,Tick:this.Setting.Tickness,Color:this.Setting.ColorType,sOrder:this.OrderLayer,Count:this.positionCount as number,isNew:true} as LineModel;
        this.curRoom.Send("puzzle",lineMessage);
    }
    connectLine(mousePos:UnityEngine.RaycastHit){
        if(this.PrevPos && Math.abs(UnityEngine.Vector3.Distance(this.PrevPos,mousePos.point))>=0.001){
            this.PrevPos = mousePos.point;
            this.positionCount++;
            this.curLine.positionCount = this.positionCount;
            this.curLine.SetPosition(this.positionCount -1, mousePos.point);
            let posData:number[] = [mousePos.point.x,mousePos.point.y,mousePos.point.z];
            let lineMessage = {name:this.curRoom.SessionId, pos:posData,Tick:this.Setting.Tickness,Color:this.Setting.ColorType,sOrder:this.OrderLayer,Count:this.positionCount as number,isNew:false} as LineModel;
            this.curRoom.Send("puzzle",lineMessage);
        }
    }
    EndDrawing(){
        if(this.puzzleState === "Draw"){
            this.curRoom.Send("EndDraw");
        }
    }
    startVote():string{
        if(this.playerList.length == 1){
            console.log("sole Live "+this.playerList[0]);
            return this.playerList[0];
        }else{
            let first = this.playerList.shift();
            let second = this.playerList.shift();
            this.firstSketch = this.Sketches.get(first.toString()) as UnityEngine.GameObject;
            this.secondSketch = this.Sketches.get(second.toString()) as UnityEngine.GameObject;
            this.VoteSketch = first+"&"+second;
            this.firstSketch.transform.position = new UnityEngine.Vector3(-4.2,1,0.5);
            this.secondSketch.transform.position = new UnityEngine.Vector3(4.2,1,0.5);
            this.VoteLeftSelect = this.firstSketch.transform.GetChild(0).gameObject as UnityEngine.GameObject;
            this.VoteRightSelect = this.secondSketch.transform.GetChild(0).gameObject as UnityEngine.GameObject; 
            this.firstSketch.SetActive(true);
            this.secondSketch.SetActive(true);
            return null;
        }
    }
    CheckVote(){
        if(UnityEngine.Input.GetMouseButton(0)){
            const ray = this.m_camera.ScreenPointToRay(UnityEngine.Input.mousePosition);
            let SketchHit = $ref<UnityEngine.RaycastHit>();
            if(UnityEngine.Physics.Raycast(ray,SketchHit,200)){
                let hitInfo = $unref(SketchHit);
                if(hitInfo.collider.CompareTag("Canvas")){
                    this.VoteSketch = hitInfo.collider.name.slice(2);
                    if(this.VoteSketch === this.firstSketch.name.slice(2)){
                        this.VoteLeftSelect.SetActive(true);
                        this.VoteRightSelect.SetActive(false);
                    }else{
                        this.VoteLeftSelect.SetActive(false);
                        this.VoteRightSelect.SetActive(true);
                    }
                }
            }
        }
    }
    SendVote(){
        if(this.puzzleState ==="Vote"){
            this.VoteLeftSelect.SetActive(false);
            this.VoteRightSelect.SetActive(false);
            this.firstSketch.SetActive(false);
            this.secondSketch.SetActive(false);
            this.puzzleState = "Wait";
            this.curRoom.Send("Vote",this.VoteSketch);
        }
    }
    EndVote(){
        this.puzzleState = "Wait";
        this.curRoom.Send("EndVote", this.playerList[0]);
        this.Loading.SetActive(true);
    }
    ShowWinner(){
        this.puzzleSketch = this.Sketches.get(this.playerList[0].toString()) as UnityEngine.GameObject;
        this.puzzleSketch.transform.position = new UnityEngine.Vector3(-200,1,0.5);
        this.puzzleSketch.SetActive(true);
    }
    SetTickness(tick:float){
        this.Setting.Tickness = 0.2*(tick+1);
        for(let i = 0; i<3; i++){
            this.TicknessBtns[i].GetComponentsInChildren<Image>()[1].color = new UnityEngine.Color(1,1,1,1);
        }
        this.TicknessBtns[tick].GetComponentsInChildren<Image>()[1].color = new UnityEngine.Color(0,0,0,1);
    }
    SetColor(color:number){
        this.Setting.ColorType = color;
        this.UIGroup[0].transform.GetChild(0).GetChild(0).gameObject.SetActive(true);
        this.UIGroup[0].transform.GetChild(1).GetChild(0).gameObject.SetActive(false);
        if(this.ColorGroup.activeSelf)
            this.ColorGroup.SetActive(false);
    }
    InitPuzzle(pos:number[],rot:number[]){
        let puzzle = UnityEngine.Object.Instantiate(this.PuzzleFrame, new UnityEngine.Vector3(-2.7,3.7,0),UnityEngine.Quaternion.Euler(new UnityEngine.Vector3(0,-180,0))) as UnityEngine.GameObject;
        this.UIGroup[1].SetActive(true);
        this.UIGroup[2].SetActive(true);
        
        this.puzzlePieces[0]=puzzle;
        this.puzzlePieces[1]=puzzle.transform.GetChild(0).gameObject;
        for(let i = 0; i<6; i++){
            this.puzzlePieces[2+i]=this.puzzlePieces[0].transform.GetChild(1+i).gameObject;
            this.AnswerPosition[i] = new UnityEngine.Vector3(this.puzzlePieces[2+i].transform.position.x,this.puzzlePieces[2+i].transform.position.y,-2);
            this.puzzlePieces[2+i].transform.localPosition = this.PuzzlePosition[pos[i]];
            this.puzzlePieces[2+i].transform.localEulerAngles = new UnityEngine.Vector3(0,0,45*rot[i]);
        }
        this.puzzleState = "Puzzle";
    }
    EndPuzzle(){
        this.puzzleState = "Wait";
        this.StartCoroutine(this.GenerateLogo());
    }
    *GenerateLogo(){
        while(this.PuzzleLogo.color.a<1){
            this.PuzzleLogo.color = new UnityEngine.Color(1,1,1,this.PuzzleLogo.color.a+0.05);
            yield new UnityEngine.WaitForSeconds(0.1);
        }
        this.puzzlePieces[0].GetComponentInChildren<UnityEngine.ParticleSystem>().Stop();
        let Rigids:UnityEngine.Rigidbody[] = [null,null,null,null,null,null];
        for(let i = 2; i<8; i++){
            UnityEngine.Object.Destroy(this.puzzlePieces[i].GetComponent<UnityEngine.MeshCollider>());
            this.puzzlePieces[i].AddComponent<UnityEngine.Rigidbody>();
            Rigids[i-2] = this.puzzlePieces[i].GetComponent<UnityEngine.Rigidbody>();
            Rigids[i-2].useGravity = false;
        }
        yield new UnityEngine.WaitForSeconds(0.3);
        this.puzzlePieces[1].SetActive(false);
        this.UIGroup[6].transform.localScale = new UnityEngine.Vector3(2.5,2.5,2.5);
        this.m_camera.orthographic = false;
        Rigids[0].AddForce(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[0].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[1].AddForce(new UnityEngine.Vector3(0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[1].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[2].AddForce(new UnityEngine.Vector3(-0.5,-0.5,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[2].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[3].AddForce(new UnityEngine.Vector3(0.5,-0.5,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[3].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[4].AddForce(new UnityEngine.Vector3(0.5,0.5,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[4].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[5].AddForce(new UnityEngine.Vector3(-0.5,0.5,-0.2),UnityEngine.ForceMode.Impulse);
        Rigids[5].AddTorque(new UnityEngine.Vector3(-0.5,0,-0.2),UnityEngine.ForceMode.Impulse);
        this.PuzzleLogo.color = new UnityEngine.Color(1,1,1,0);
        this.Bed.transform.localScale = new UnityEngine.Vector3(4,4,4);
        this.Bed.transform.position = new UnityEngine.Vector3(0,-2,6);
        while(this.Bed.transform.position.z >3){
            this.Bed.transform.position = new UnityEngine.Vector3(0,-2,this.Bed.transform.position.z-0.1);
            yield new UnityEngine.WaitForSeconds(0.1);
        }
        this.PuzzleLogo.color = new UnityEngine.Color(1,1,1,0);
        let BedPos:UnityEngine.Vector3 = this.Bed.transform.position;
        for(let i = 0; i<6; i++){
            Rigids[i].AddForce(4*(BedPos-Rigids[i].position), UnityEngine.ForceMode.Impulse);
            yield new UnityEngine.WaitForSeconds(0.2);
            this.puzzlePieces[i+2].SetActive(false);
        }
        while(this.Bed.transform.position.z >0){
            this.Bed.transform.position = new UnityEngine.Vector3(0,-2,this.Bed.transform.position.z-0.05);
            yield new UnityEngine.WaitForSeconds(0.1);
        }
        yield new UnityEngine.WaitForSeconds(1);
        this.puzzleAnimator.SetTrigger("WakeUp");
        while(this.puzzleAnimator.GetCurrentAnimatorStateInfo(0).IsName("Wakeup")){
            yield new UnityEngine.WaitForSeconds(0.1);
        }
        

        



    }
}

class PenSetting{
    Tickness:float; //0.2 0.4 0.6
    ColorType:number;
    constructor(){
        this.Tickness = 0.4;
        this.ColorType = 0; 
    }
}
interface LineModel{
    name:string,
    pos:number[],
    Tick:number,
    Color:number,
    sOrder:number,
    Count:number,
    isNew:boolean
}
interface PuzzleModel{
    name:string,
    pos:number[],
    rot:number[]
}
