    import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
import {Button,Text,Toggle,Slider,RawImage} from 'UnityEngine.UI'
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
    public ColorBtns:Toggle[];
    public OpenColorBtn:Button;
    public ColorGroup:UnityEngine.GameObject;
    public UIGroup:UnityEngine.GameObject[];
    public RotationBtns:Button[];
    public Loading:UnityEngine.GameObject;
    public PuzzleLogo:UnityEngine.SpriteRenderer;
    public VoteTimer:Slider;
    public StartImage:UnityEngine.GameObject;
    public ScareAnim:UnityEngine.AnimationClip;
    public Profiles:UnityEngine.GameObject[];
    public ProfileImages:RawImage[];
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
    private playerList:string[];
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
    Start() {   
        const ClonePlayerSpawnInfo = new SpawnInfo();
        ClonePlayerSpawnInfo.position = new UnityEngine.Vector3(500,-1,0);
        ClonePlayerSpawnInfo.rotation = UnityEngine.Quaternion.Euler(new UnityEngine.Vector3(0,-180,0));
        this.z_camera = UnityEngine.GameObject.Find("ZepetoCamera") as UnityEngine.GameObject;
        this.z_CtrlUI = UnityEngine.GameObject.Find("UIZepetoPlayerControl") as UnityEngine.GameObject;
        this.Canvas = UnityEngine.GameObject.Find("Canvas").GetComponent<UnityEngine.RectTransform>();
        this.UIGroup[3].GetComponent<UnityEngine.RectTransform>().sizeDelta = new UnityEngine.Vector2(20,this.Canvas.sizeDelta.y);
        //this.z_CtrlUI.SetActive(false);
        this.z_camera.SetActive(false);
        this.Setting = new PenSetting(); 
        this.ChangeEraser.onClick.AddListener(()=>{
            this.Setting.ColorType = 4;
        });
        this.ChangePen.onClick.AddListener(()=>{
            this.Setting.ColorType = 0;
        });
        this.EndDrawBtn.onClick.AddListener(()=>{
            this.EndDrawing();
        });
        for(let i = 0; i<this.TicknessBtns.length;i++){
            this.TicknessBtns[i].onClick.AddListener(()=>{
                    this.SetTickness(0.2*(i+1)); 
            });
        }
        for(let i:number = 0; i<this.ColorBtns.length; i++){
            this.ColorBtns[i].onValueChanged.AddListener((on:boolean)=>{
                if(on){
                    this.SetColor(i);
                }
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
        this.timer = 65; // 그림그리기 60초
        this.curRoom.AddMessageHandler("UpdatePlayers",(message:string[])=>{
            for(let i = 0; i<8; i++){
                this.Profiles[i].SetActive(false);
                if(i>=message.length)break;
                this.Profiles[i].SetActive(true);
            }
            ZepetoWorldHelper.GetUserInfo(message,(info:Users[])=>{
                for(let i = 0; i<info.length;i++){
                    ZepetoWorldHelper.GetProfileTexture(message[i],(texture:UnityEngine.Texture)=>{
                        this.ProfileImages[i].texture = texture;
                    },(error)=>{
                        console.log(error);
                    });
                }
            },(error)=>{
                console.log(error);
            });
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
            this.UIGroup[0].SetActive(false);
            this.timer = 11;
            this.puzzleState = "Vote";
            this.localSketchBook.SetActive(false);
            this.playerList = message;
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
            this.timer = 41;
            this.ShowWinner();
            this.UIGroup[3].SetActive(false);
            console.log("the winner is "+message);
            this.InitPuzzle(message.pos,message.rot);
        });
    }
    FixedUpdate(){
        this.TimerText.text = this.timer.toFixed(0)+"s";
        this.timer-=UnityEngine.Time.deltaTime;
        switch(this.puzzleState){
            case "Draw":
                if(this.timer<0){
                    this.timer=0;
                    this.EndDrawing();
                }
                if(this.Loading.activeSelf){
                    if(this.timer>64) return;
                    this.Loading.SetActive(false);
                    this.StartImage.SetActive(true);
                    this._clonePlayer.SetGesture(this.ScareAnim);
                }
                if(this.StartImage.activeSelf){
                    if(this.timer>60) return;
                    this.curRoom.Send("InitProfile");
                    this.localSketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
                    this.localSketchBook.name = "S_"+this.curRoom.SessionId;
                    this.Sketches.set(this.curRoom.SessionId,this.localSketchBook);
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
                    if(this.timer>40) return;
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
            this.puzzleState = "Wait";
        }
        this.Loading.SetActive(true);
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
                    this.VoteSketch = hitInfo.collider.name;
                    if(this.VoteSketch === this.firstSketch.name){
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
            this.curRoom.Send("Vote",this.VoteSketch.slice(2));
        }
    }
    EndVote(){
        this.puzzleState = "Wait";
        this.curRoom.Send("EndVote", this.playerList[0]);
        this.Loading.SetActive(true);
    }
    ShowWinner(){
        this.puzzleSketch = this.Sketches.get(this.playerList[0].toString()) as UnityEngine.GameObject;
        this.puzzleSketch.transform.position = new UnityEngine.Vector3(-100,1,0.5);
        this.puzzleSketch.SetActive(true);
    }
    SetTickness(tick:float){
        this.Setting.Tickness = tick;
    }
    SetColor(color:number){
        this.Setting.ColorType = color;
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
    }
}

class PenSetting{
    Tickness:float; //0.2 0.4 0.6
    ColorType:number; // 0 black 1 red 2 yello 3 blue 4 White
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
