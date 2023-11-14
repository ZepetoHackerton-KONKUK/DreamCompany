import {Sandbox, SandboxOptions, SandboxPlayer} from "ZEPETO.Multiplay";
import { Player} from "ZEPETO.Multiplay.Schema";
import { IModule } from "./ServerModule/IModule";
import SyncComponentModule from "./ServerModule/Modules/SyncComponentModule";
import MannequinModule from "./ServerModule/Modules/MannequinModule";
import ProductModule from "./ServerModule/Modules/ProductModule";

export default class extends Sandbox {

    private readonly _modules: IModule[] = [];
    private _isCreated: boolean = false;
    private voteMap:Map<string,number> = new Map<string,number>();
    private voteNum:number = 0;
    async onCreate(options: SandboxOptions) {
        let endDraw:boolean = false;
        let endVote:boolean = false;
        this._modules.push(new SyncComponentModule(this));
        this._modules.push(new MannequinModule(this));
        this._modules.push(new ProductModule(this));
        for (const module of this._modules) {
            await module.OnCreate();
        }
        this.onMessage("StartPuzzle",(client:SandboxPlayer)=>{
            console.log("Get Message StartPuzzle");
            this.broadcast("StartPuzzle","msg");         
        })
        this.onMessage("InitProfile",(client:SandboxPlayer)=>{
            client.send("UpdatePlayers",this.currentPlayerList());
        })
        this.onMessage("puzzle",(client:SandboxPlayer,message:LineModel)=>{
            this.broadcast("puzzle",message, {except:client});
        });
        
        this.onMessage("EndDraw",(client:SandboxPlayer)=>{
            if(endDraw) return;
            endDraw=true;
            let playerList:string[] = Array.from(this.state.players.keys());
            playerList = this.shuffleList(playerList) as string[];
            this.broadcast("EndDraw",playerList);
        });
        this.onMessage("Vote", (client:SandboxPlayer, message:string)=>{
            //this.VoteQueue.push(message);
            this.Vote(message);
        });
        this.onMessage("EndVote",(client:SandboxPlayer,message:string)=>{
            if(endVote) return;
            endVote = true;
            console.log("Get Message EndVote");
            let position = [0,1,2,3,4,5] as number[];
            position = this.shuffleNumberList(position) as number[];
            console.log(position);
            let rotation = this.generateRanList(6,5) as number[];
            console.log(rotation);
            let puzzleMessage = {name:message,pos:position,rot:rotation} as PuzzleModel;
            this.broadcast("EndVote",puzzleMessage);
        });
        this._isCreated = true;
    }

    async onJoin(client: SandboxPlayer) {
        for (const module of this._modules) {
            await module.OnJoin(client);
        }

        const player = new Player();
        player.sessionId = client.sessionId;
        if (client.hashCode) {
            player.zepetoHash = client.hashCode;
        }
        if (client.userId) {
            player.zepetoUserId = client.userId;
        }
        this.state.players.set(client.sessionId, player);
        
        console.log(`join player, ${client.sessionId}`);
    }
    

    async onLeave(client: SandboxPlayer, consented?: boolean) {
        for (const module of this._modules) {
            await module.OnLeave(client);
        }
        this.state.players.delete(client.sessionId);
        this.broadcast("UpdatePlayers",this.currentPlayerList());
        console.log(`leave player, ${client.sessionId}`);
    }

    async onTick(deltaTime: number) {
        if (!this._isCreated) {
            return;
        }
        for (const module of this._modules) {
            module.OnTick(deltaTime);
        }
        
    }
    shuffleList(array: string[]):string[]{
        for(let i = array.length-1; i>0; i--){
            const j = Math.floor(Math.random() * (i+1));
            [array[i],array[j]] = [array[j],array[i]];
        }
        return array;
    }
    shuffleNumberList(array: number[]):number[]{
        for(let i = array.length-1; i>0; i--){
            const j = Math.floor(Math.random() * (i+1));
            [array[i],array[j]] = [array[j],array[i]];
        }
        return array;
    }
    generateRanList(size:number, max:number):number[]{
        let arr = [];
        for(let i = 0; i<size; i++){
            arr.push(Math.floor(Math.random()*max));
        }
        return arr as number[];
    }
    currentPlayerList():string[]{
        let playerList:string[] = Array.from(this.state.players.keys());
        let array:string[]=[];
        for(let i = 0; i<playerList.length; i++){
            array.push(this.state.players.get(playerList[i]).zepetoUserId);
        }
        return array;
    }
    Vote(message:string):number{
        this.voteNum++;
        if(message.search("&") > -1){
            let getPlayers = message.split("&") as string[];
            for(const str of getPlayers){
                if(!this.voteMap.has(str)){
                    this.voteMap.set(str,0);
                }
            }
        }else{
            if(!this.voteMap.has(message)){
                this.voteMap.set(message,1);
            }else{
                this.voteMap.set(message,this.voteMap.get(message)+1);
            }
        }

        if(this.voteNum >= this.state.players.size){
            let candidates:string[] = Array.from(this.voteMap.keys());
            let winner:string;
            if(candidates.length==2){
                if(this.voteMap.get(candidates[0]) < this.voteMap.get(candidates[1])){
                    winner = candidates[1];
                }else if(this.voteMap.get(candidates[0])>this.voteMap.get(candidates[1])) {
                    winner = candidates[0];
                }else{
                    winner = candidates[Math.floor(Math.random()*2)];
                }
            }else{
                winner = candidates[0];
            }
            this.voteNum = 0;
            this.voteMap.clear();
            this.broadcast("Vote",winner);
        }
        return 1;
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
interface PuzzleModel{
    name:string,
    pos:number[],
    rot:number[]
}

