import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { ZepetoPlayers, ZepetoCharacter } from "ZEPETO.Character.Controller";
import InteractionIcon from './InteractionIcon';
import { GameObject, RectTransform } from 'UnityEngine';
import { Button } from 'UnityEngine.UI';
import ButtonClick from '../ButtonClick';

export default class ClickIcon extends ZepetoScriptBehaviour {

    public npcDialogCanvas: GameObject;
    public npcPanel1: GameObject;
    public npcPanel2: GameObject;
    public npcPanel3: GameObject;
    public npcPanel4: GameObject;
    public YesButton: Button;
    public NoButton: Button;
    public CompleteSoup:GameObject;
    public BuySoup:GameObject;
    private _interactionIcon: InteractionIcon;

    private Start() {
        this.npcPanel1.SetActive(false);
        this.npcPanel2.SetActive(false);
        this.npcPanel3.SetActive(false);
        this.npcPanel4.SetActive(false);

        //this.CompleteButton.interactable = false;
        var canvasRectTransform = this.npcDialogCanvas.GetComponent<RectTransform>();
        var panelRectTransform = this.npcPanel1.GetComponent<RectTransform>();

        panelRectTransform.sizeDelta = canvasRectTransform.sizeDelta;

        this._interactionIcon = this.transform.GetComponent<InteractionIcon>();

        this._interactionIcon.OnClickEvent.AddListener(() => {
            this._interactionIcon.HideIcon();
            this.ShowDialog();
        });

        
        this.NoButton.onClick.AddListener(() => this.HidePanel());
    }

    private ShowDialog() {
        this.npcPanel1.SetActive(true);
    }

    private HidePanel() {
        this.BuySoup.SetActive(true);
        this.CompleteSoup.SetActive(false);
        this.npcPanel1.SetActive(false);

    }
}