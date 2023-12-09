import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import InteractionIcon from './InteractionIcon';
import {GameObject, RectTransform} from 'UnityEngine'
export default class NPCCtrl extends ZepetoScriptBehaviour {

    public npcDialogCanvas:GameObject;
    public npcPanels:GameObject[];
    public DockPoints:GameObject[];
    private interactionBtns:InteractionIcon[]=[];
    Start() {    
        var canvasRectTransform = this.npcDialogCanvas.GetComponent<RectTransform>();
        this.npcPanels.forEach((value,index)=>{
            this.interactionBtns.push(this.DockPoints[index].GetComponent<InteractionIcon>());
            this.interactionBtns[index].OnClickEvent.AddListener(()=>{
                value.SetActive(true);
            });
        });
    }

}