    import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
import {Button,Text,Toggle} from 'UnityEngine.UI'
import { EventSystem } from 'UnityEngine.EventSystems'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import {ZepetoPlayers} from 'ZEPETO.Character.Controller'
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
    public TicknessBtns:Toggle[];
    public OpenTicknessBtn:Button;
    public TicknessGroup:UnityEngine.GameObject;

    public ColorBtns:Toggle[];
    public OpenColorBtn:Button;
    public ColorGroup:UnityEngine.GameObject;
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
    private WinnerTexture:UnityEngine.Texture2D;
    Start() {   
        this.z_camera = UnityEngine.GameObject.Find("ZepetoCamera") as UnityEngine.GameObject;
        this.z_CtrlUI = UnityEngine.GameObject.Find("UIZepetoPlayerControl") as UnityEngine.GameObject;
        this.z_CtrlUI.SetActive(false);
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
            this.TicknessBtns[i].onValueChanged.AddListener((on:boolean)=>{
                if(on){
                    this.SetTickness(0.2*(i+1));
                }
            });
        }
        this.OpenTicknessBtn.onClick.AddListener(()=>{
            this.TicknessGroup.SetActive(!this.TicknessGroup.activeSelf);
        });
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
    
        this.curRoom = MultiplayManager.instance.room;
        this.localSketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
        this.localSketchBook.name = "S_"+this.curRoom.SessionId;
        this.Sketches.set(this.curRoom.SessionId,this.localSketchBook);
        this.timer = 60; // 그림그리기 60초
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
            this.m_camera.orthographic = false;
            this.m_camera.transform.position = new UnityEngine.Vector3(0,1,-20);
            this.timer = 10;
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
        this.curRoom.AddMessageHandler("EndVote",(message:string)=>{
            this.ShowWinner();
            console.log("the winner is "+message);

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
                this.DrawMouse();
                break;
            case "Vote":
                if(this.timer<0){
                    this.timer = 0;
                    this.SendVote();
                }
                this.CheckVote();
                break;
            case "Wait":
                this.timer=0;
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
            this.firstSketch.transform.position = new UnityEngine.Vector3(-10,1,0.5);
            this.secondSketch.transform.position = new UnityEngine.Vector3(10,1,0.5);
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
    }
    ShowWinner(){
        this.m_camera.orthographic = true;
        this.m_camera.transform.position = new UnityEngine.Vector3(0,1,-10);
        this.puzzleSketch = this.Sketches.get(this.playerList[0].toString()) as UnityEngine.GameObject;
        this.puzzleSketch.transform.position = new UnityEngine.Vector3(0,1,0.5);
        this.puzzleSketch.SetActive(true);
    }
    SetTickness(tick:float){
        this.Setting.Tickness = tick;
    }
    SetColor(color:number){
        this.Setting.ColorType = color;
    }
    *CaptureCoroutine(){
        yield new UnityEngine.WaitForSeconds(0.2);
        this.CaptureRenderTexture();
    }
    CaptureRenderTexture(){
        let rt:UnityEngine.RenderTexture = this.p_camera.targetTexture;
        this.p_camera.Render();
        UnityEngine.RenderTexture.active = rt;
        this.WinnerTexture = new UnityEngine.Texture2D(14,8,UnityEngine.TextureFormat.RGB24,false);
        this.WinnerTexture.ReadPixels(new UnityEngine.Rect(0,0,rt.width,rt.height),0,0);
        let mat:UnityEngine.Material = new UnityEngine.Material(UnityEngine.Shader.Find("Standard"));
        mat.SetTexture("_MainTex",this.WinnerTexture);
        this.puzzleSketch.GetComponent<UnityEngine.MeshRenderer>().material = mat;
        
    }
}

class PenSetting{
    Tickness:float; //0.2 0.4 0.6 0.8 1.0
    ColorType:number; // 0 black 1 red 2 yello 3 blue 4 White
    constructor(){
        this.Tickness = 0.6;
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

