import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Button } from 'UnityEngine.UI'
import { SceneManager,LoadSceneMode,Scene } from 'UnityEngine.SceneManagement'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager'
import { Room } from 'ZEPETO.Multiplay'
import { ClothSphereColliderPair,GameObject,Quaternion,Vector3 ,AudioListener,Coroutine,WaitUntil} from 'UnityEngine'
import { WorldService } from 'ZEPETO.World'
import { SpawnInfo, ZepetoPlayers, LocalPlayer, ZepetoCharacter,ZepetoPlayer } from 'ZEPETO.Character.Controller';
export default class ChangePuzzle extends ZepetoScriptBehaviour {

    public ChangeSurprise:Button;
    private curRoom:Room;
    private isInit:boolean = false;
    private z_camera:GameObject;
    private z_ctrlUI:GameObject;
    private _localPlayer:ZepetoPlayer = null;
    Start() {    
        this.ChangeSurprise.onClick.AddListener(()=>{
            this.curRoom.Send("StartSurprise");
        });
        this.z_camera = null;
        this.z_ctrlUI = null;
        //console.log(ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.name);
    }
    Update(){
        if(this.curRoom == null){

            this.curRoom = MultiplayManager.instance.room;
        }
        if(this.curRoom != null && !this.isInit && ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId)){
            this.isInit = true;
            this.curRoom.AddMessageHandler("StartSurprise",(message:string)=>{
                console.log("Get Message from Server"+message);
                SceneManager.LoadScene("SurprsiseScene");
            });
            console.log("Init Success");
            this._localPlayer = ZepetoPlayers.instance.LocalPlayer.zepetoPlayer;
            console.log(this._localPlayer.userId);
            GameObject.DontDestroyOnLoad(this._localPlayer.character.gameObject);
            this._localPlayer.character.gameObject.AddComponent<AudioListener>();
            console.log(this.curRoom.SessionId);
            console.log(this._localPlayer.name);
            console.log(this._localPlayer.character);

            
        }

        
    }
    OnEnable(){
        console.log("코루틴");
        this.StartCoroutine(this.OnCamera());
    }
    *OnCamera(){
        yield new WaitUntil(()=>this.curRoom!=null);
        yield new WaitUntil(()=>ZepetoPlayers.instance.HasPlayer(this.curRoom.SessionId));
        GameObject.Find("ZepetoPlayers").transform.GetChild(4).gameObject.SetActive(true);
        GameObject.Find("ZepetoPlayers").transform.GetChild(2).gameObject.SetActive(true);
        console.log("camera,ui on");
    }
}