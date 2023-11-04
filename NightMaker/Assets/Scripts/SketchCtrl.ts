import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import * as UnityEngine from 'UnityEngine'
import {Button} from 'UnityEngine.UI'
export default class SketchCtrl extends ZepetoScriptBehaviour {

    public Pen:UnityEngine.GameObject;
    public ChangeEraser:Button;
    public ChangePen:Button;

    private PenSpriteRenderer:UnityEngine.SpriteRenderer;
    private Setting:PenSetting = new PenSetting();

    Start() {    
        this.Setting.isPen = true;
        this.ChangeEraser.onClick.AddListener(()=>{
            this.Setting.isPen = false;
        });
        this.ChangePen.onClick.AddListener(()=>{
            this.Setting.isPen = true;
        });
    }
    FixedUpdate(){
        if(UnityEngine.Input.GetMouseButton(0)){
            let ray = UnityEngine.Camera.main.ScreenPointToRay(UnityEngine.Input.mousePosition);
            let SketchHit = $ref<UnityEngine.RaycastHit>();
            let PenHit = $ref<UnityEngine.RaycastHit>();
            if(UnityEngine.Physics.Raycast(ray,SketchHit,100)){
                let hitInfo = $unref(SketchHit);
                if(hitInfo.collider.CompareTag("Pen")){
                    if(!this.Setting.isPen){
                        UnityEngine.Object.Destroy(hitInfo.collider.gameObject);
                    }
                    return;
                }else{
                    if(!this.Setting.isPen){
                        return;
                    }
                    const SketchPen = UnityEngine.Object.Instantiate(this.Pen,new UnityEngine.Vector3(hitInfo.point.x,hitInfo.point.y,0),UnityEngine.Quaternion.identity) as UnityEngine.GameObject;
                    this.PenSpriteRenderer = SketchPen.GetComponent<UnityEngine.SpriteRenderer>();
                    SketchPen.transform.localScale = new UnityEngine.Vector3(0.4,0.4,0.4);
                }


            }
        }
    }

}

class PenSetting{
    Tickness:float; //0.2 0.4 0.6 0.8 1.0
    ColorType:UnityEngine.Color;
    isPen:boolean;
    PenSetting(){
        this.Tickness = 0.6;
        this.ColorType = new UnityEngine.Color(255,255,255);
        this.isPen = true;
    }
}
