import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import {ZepetoPlayers,ZepetoPlayer} from 'ZEPETO.Character.Controller'
import { SceneManager } from 'UnityEngine.SceneManagement'
import {GameObject,AudioListener, Time} from 'UnityEngine'
import {Button} from 'UnityEngine.UI'
export default class Init extends ZepetoScriptBehaviour {

    public Skip:Button;
    private curRoom:Room = null;
    private videoTime:number = 0;
    Start(){
        this.Skip.onClick.AddListener(()=>{
            const localPlayer:ZepetoPlayer = ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId);
            localPlayer.character.gameObject.AddComponent<AudioListener>();
            GameObject.DontDestroyOnLoad(localPlayer.character.gameObject);
            SceneManager.LoadScene("Lobby");
        });

    }
    Update(){
        if(this.curRoom == null){
            this.curRoom = MultiplayManager.instance.room;
            return;
        }
        if(!this.Skip.gameObject.activeSelf && this.curRoom != null && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            this.Skip.gameObject.SetActive(true);
        }
        this.videoTime+= Time.deltaTime;
        if(this.videoTime >= 14 && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            const localPlayer:ZepetoPlayer = ZepetoPlayers.instance.GetPlayer(this.curRoom.SessionId);
            localPlayer.character.gameObject.AddComponent<AudioListener>();
            GameObject.DontDestroyOnLoad(localPlayer.character.gameObject);
            console.log("Init",localPlayer.userId,localPlayer.isLocalPlayer);
            SceneManager.LoadScene("Lobby");
        }
    }
    

}