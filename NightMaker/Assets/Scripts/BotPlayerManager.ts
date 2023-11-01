import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Room } from 'ZEPETO.Multiplay';
import { ZepetoWorldMultiplay } from 'ZEPETO.World';
import {ZepetoCharacter, ZepetoPlayers} from 'ZEPETO.Character.Controller';
import {Button} from 'UnityEngine.UI';
export default class BotPlayerManager extends ZepetoScriptBehaviour {
    public zepetoWorldMultiplay: ZepetoWorldMultiplay;
    private _room: Room;
    private _botMapData: Map<string,ZepetoCharacter> = new Map<string,ZepetoCharacter>();
    public buttonCreateBot: Button;
    public botPlayerId:string;
    Start() {    
        this.zepetoWorldMultiplay.RoomJoined += (room: Room)=>{
            this._room = room;
        }
        ZepetoPlayers.instance.OnAddedPlayer.AddListener((userId:string)=>{
            const currentPlayer = this._room.State.players.get_Item(userId);
            if(currentPlayer.isBot){
                this.SetBotPlayer(currentPlayer.sessionId);
            }
        });
        this.buttonCreateBot.onClick.AddListener(()=>{
            this._room.Send("CreateBot",this.botPlayerId);
        })

    }
    SetBotPlayer(userId:string){
        const bot = ZepetoPlayers.instance.GetPlayer(userId).character;

        bot.gameObject.name = userId;
        this._botMapData.set(userId,bot);
    }

}