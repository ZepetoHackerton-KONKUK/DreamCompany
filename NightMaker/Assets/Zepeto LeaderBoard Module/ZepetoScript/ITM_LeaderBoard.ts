import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Image, Text } from 'UnityEngine.UI'
import { Texture, Texture2D, Sprite, Rect, Vector2, GameObject,Color } from 'UnityEngine'
import { ZepetoWorldHelper, Users } from 'ZEPETO.World'
import { GetRangeRankResponse, LeaderboardAPI, ResetRule, Rank } from "ZEPETO.Script.Leaderboard";
import MultiplayManager from '../../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import { Room } from 'ZEPETO.Multiplay';
import TextSize from '../../Scripts/TextSize';
export default class ITM_LeaderBoard extends ZepetoScriptBehaviour {
    @SerializeField() private playerImage: Image;
    @SerializeField() private playerColor:Image;
    @SerializeField() private playerRankText: Text;
    @SerializeField() private playerNameText: Text;
    @SerializeField() private playerScoreText: Text;
    @SerializeField() private playerTier:Image;
    @SerializeField() private TierImages:Sprite[];
    @SerializeField() private isLocal:bool;
    @SerializeField() private ScoreImages:GameObject[];
    private _rankCache : Rank;
    
    public SetGroup(rank : Rank){
        this.ScoreImages[0].SetActive(false);
        this.ScoreImages[1].SetActive(false);
        this.ScoreImages[2].SetActive(false);
        if(this._rankCache?.member != rank.member){
            if(rank.name != null) {
                // Set player's ProfileTexture
                ZepetoWorldHelper.GetProfileTexture(rank.member, (texture: Texture) => {
                    if(texture!=null)
                        this.playerImage.sprite = this.GetSprite(texture);
                }, (error) => {
                    console.warn("GetProfileTexture Error : " + error);
                });
            }
            else{
                console.warn(rank.rank+" member null : " + rank.name);
            }
            this.playerNameText.text = rank.name ?? "withdrawn user.";
        }
        // Set player's rank, and score
        const Tier = this.GetTier(rank.score);
        if(rank.rank>4){
            this.playerRankText.text = rank.rank.toString()+"th";
        }
        else if(rank.rank == 1){
            this.playerRankText.text = "";
            this.ScoreImages[0].SetActive(true);
            if(!this.isLocal){
                this.playerColor.color = new Color(223,0,245);
            }
            const ranking = GameObject.FindGameObjectsWithTag("Ranking")[0];
            ranking.transform.GetChild(0).GetComponent<Image>().sprite = this.TierImages[Tier];
            ranking.transform.GetChild(1).GetComponent<TextSize>().SetText(rank.name);
            ranking.transform.GetChild(2).GetComponent<TextSize>().SetText(rank.score.toString());
        }
        else if(rank.rank==2){
            this.playerRankText.text = "";
            this.ScoreImages[1].SetActive(true);
            if(!this.isLocal){
                this.playerColor.color = new Color(223,0,245);
            }
            const ranking = GameObject.FindGameObjectsWithTag("Ranking")[1];
            ranking.transform.GetChild(0).GetComponent<Image>().sprite = this.TierImages[Tier];
            ranking.transform.GetChild(1).GetComponent<TextSize>().SetText(rank.name);
            ranking.transform.GetChild(2).GetComponent<TextSize>().SetText(rank.score.toString());
        
        }
        else if(rank.rank==3){
            this.playerRankText.text = "";
            this.ScoreImages[2].SetActive(true);
            if(!this.isLocal){
                this.playerColor.color = new Color(223,0,245);
            }
            const ranking = GameObject.FindGameObjectsWithTag("Ranking")[2];
            ranking.transform.GetChild(0).GetComponent<Image>().sprite = this.TierImages[Tier];
            ranking.transform.GetChild(1).GetComponent<TextSize>().SetText(rank.name);
            ranking.transform.GetChild(2).GetComponent<TextSize>().SetText(rank.score.toString());
        }


        if(this.isLocal){
            const curRoom:Room = MultiplayManager.instance.room;
            curRoom.AddMessageHandler("onGetStorageResult",(message:StorageMessage)=>{
                if(message.key == "Tier"){
                    if(Number(message.value)<Tier){
                        curRoom.Send("UpdateTier",Tier);
                    }
                }
            });
            curRoom.Send("onSetStorage",{key:"Points",value:rank.score.toString()} as StorageMessage);
            curRoom.Send("onGetStorage",{key:"Tier"} as StorageMessage);
        }
        this.playerScoreText.text = rank.score.toString();
        this.playerTier.sprite = this.TierImages[Tier];
        this._rankCache = rank;
    }

    GetSprite(texture:Texture){
        let rect:Rect = new Rect(0, 0, texture.width, texture.height);
        return Sprite.Create(texture as Texture2D, rect, new Vector2(0.5, 0.5));
    }
    GetTier(score:number):number{
        if(score>3079000){
            return 9;
        }else if(score>1631000){
            return 8;
        }else if(score>1119000){
            return 7;
        }else if(score>727000){
            return 6;
        }else if(score>439000){
            return 5;
        }else if(score>239000){
            return 4;
        }else if(score>111000){
            return 3;
        }else if(score>39000){
            return 2;
        }else if(score>7000){
            return 1;
        }else{
            return 0;
        }
    }

}
interface StorageMessage {
    key: string,
    value?: string,
}