import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import {GameObject,Color} from 'UnityEngine'
import {Image,Button} from 'UnityEngine.UI'
export default class Guidebook extends ZepetoScriptBehaviour {
    public GuideContent:GameObject[];
    public GuideName:Image[];
    public LRBtns:Button[];
    private OriginColor:Color = new Color(1,1,1);
    private CurrentColor:Color = new Color(198/255,200/255,1);
    private currentIndex:number = 0;
    Start(){
        this.LRBtns[0].onClick.AddListener(()=>{
            if(this.currentIndex == 0){
                return;
            }
            else{
                this.GuideContent[this.currentIndex].SetActive(false);
                this.GuideName[this.currentIndex].color = this.OriginColor;
                this.currentIndex--;
                this.GuideContent[this.currentIndex].SetActive(true);
                this.GuideName[this.currentIndex].color = this.CurrentColor;
            }
        });
        this.LRBtns[1].onClick.AddListener(()=>{
            if(this.currentIndex == this.GuideContent.length-1){
                return;
            }
            else{
                this.GuideContent[this.currentIndex].SetActive(false);
                this.GuideName[this.currentIndex].color = this.OriginColor;
                this.currentIndex++;
                this.GuideContent[this.currentIndex].SetActive(true);
                this.GuideName[this.currentIndex].color = this.CurrentColor;
            }
        });
    }
    OnEnable(){
        this.currentIndex = 0;
        this.GuideContent[0].SetActive(true);
        this.GuideName[0].color = this.CurrentColor;
    }
    OnDisable(){
        this.GuideContent.forEach((value,index)=>{
            value.SetActive(false);
            this.GuideName[index].color = this.OriginColor;
        });
    }


}