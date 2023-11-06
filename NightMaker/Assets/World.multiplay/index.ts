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
        this._modules.push(new SyncComponentModule(this));
        this._modules.push(new MannequinModule(this));
        this._modules.push(new ProductModule(this));
        for (const module of this._modules) {
            await module.OnCreate();
        }
        this.onMessage("puzzle",(client:SandboxPlayer,message:LineModel)=>{
            this.broadcast("puzzle",message, {except:client});
        });
        this.onMessage("EndDraw",(client:SandboxPlayer)=>{
            let playerList:string[] = Array.from(this.state.players.keys());
            playerList = this.shuffleList(playerList);
            this.broadcast("EndDraw",playerList);
        });
        this.onMessage("Vote", (client:SandboxPlayer, message:string)=>{
            this.voteNum++;
            if(!this.voteMap.has(message)){
                this.voteMap.set(message,1);
            }else{
                this.voteMap.set(message,this.voteMap.get(message)+1);
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
        });
        this.onMessage("EndVote",(client:SandboxPlayer,message:string)=>{
            this.broadcast("EndVote",this.state.players.get(message).zepetoUserId);
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

