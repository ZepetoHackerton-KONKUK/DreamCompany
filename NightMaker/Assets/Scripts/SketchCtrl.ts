import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
import {Button} from 'UnityEngine.UI'
import { EventSystem } from 'UnityEngine.EventSystems'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import TransformSyncHelper from '../Zepeto Multiplay Component/ZepetoScript/Transform/TransformSyncHelper'
export default class SketchCtrl extends ZepetoScriptBehaviour {
    
    public m_camera:UnityEngine.Camera;
    public Pen:UnityEngine.GameObject;
    public ChangeEraser:Button;
    public ChangePen:Button;
    public Materials:UnityEngine.Material[] = [];
    public puzzleEventSystem:EventSystem;
    public SketchPrefab:UnityEngine.GameObject;

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
    Start() {   
        this.z_camera = UnityEngine.GameObject.Find("ZepetoCamera") as UnityEngine.GameObject;
        this.z_camera.SetActive(false);
        this.Setting = new PenSetting(); 

        console.log(this.Setting.ColorType);
        this.ChangeEraser.onClick.AddListener(()=>{
            this.Setting.ColorType = 4;
        });
        this.ChangePen.onClick.AddListener(()=>{
            this.Setting.ColorType = 0;
        });
        this.puzzleEventSystem.enabled = true;
        this.curRoom = MultiplayManager.instance.room;
        console.log(this.curRoom.SessionId);
        this.localSketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
        this.localSketchBook.name = this.curRoom.SessionId;
        this.curRoom.AddMessageHandler("puzzle",(message:LineModel)=>{
            console.log(message.name);
            let SketchBook:UnityEngine.GameObject;
            if(!this.Sketches.has(message.name)){
                SketchBook = UnityEngine.Object.Instantiate(this.SketchPrefab) as UnityEngine.GameObject;
                SketchBook.name = message.name;
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
    }
    FixedUpdate(){
        this.DrawMouse();
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
        let lineMessage = {name:this.curRoom.SessionId, pos:posData,Tick:this.Setting.Tickness,Color:this.Setting.ColorType,sOrder:this.OrderLayer,Count:this.positionCount,isNew:true} as LineModel;
        this.curRoom.Send("puzzle",lineMessage);
    }
    connectLine(mousePos:UnityEngine.RaycastHit){
        if(this.PrevPos && Math.abs(UnityEngine.Vector3.Distance(this.PrevPos,mousePos.point))>=0.001){
            this.PrevPos = mousePos.point;
            this.positionCount++;
            this.curLine.positionCount = this.positionCount;
            this.curLine.SetPosition(this.positionCount -1, mousePos.point);
            let posData:number[] = [mousePos.point.x,mousePos.point.y,mousePos.point.z];
            let lineMessage = {name:this.curRoom.SessionId, pos:posData,Tick:this.Setting.Tickness,Color:this.Setting.ColorType,sOrder:this.OrderLayer,Count:this.positionCount,isNew:false} as LineModel;
            this.curRoom.Send("puzzle",lineMessage);
        }
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
