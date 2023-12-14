import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import InteractionIcon from './InteractionIcon';
import {GameObject, RectTransform,AudioSource} from 'UnityEngine'
export default class NPCCtrl extends ZepetoScriptBehaviour {

    public npcDialogCanvas:GameObject;
    public npcPanels:GameObject[];
    public DockPoints:GameObject[];
    public audioSource:AudioSource;
    private interactionBtns:InteractionIcon[]=[];
    Start() {    
        var canvasRectTransform = this.npcDialogCanvas.GetComponent<RectTransform>();
        this.npcPanels.forEach((value,index)=>{
            this.interactionBtns.push(this.DockPoints[index].GetComponent<InteractionIcon>());
            this.interactionBtns[index].OnClickEvent.AddListener(()=>{
                this.audioSource.Stop();
                this.audioSource.Play();
                value.SetActive(true);

            });
        });
    }

}