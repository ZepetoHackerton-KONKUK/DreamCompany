import {Sandbox, SandboxOptions, SandboxPlayer} from "ZEPETO.Multiplay";
import { Player} from "ZEPETO.Multiplay.Schema";
import { IModule } from "./ServerModule/IModule";
import SyncComponentModule from "./ServerModule/Modules/SyncComponentModule";
import MannequinModule from "./ServerModule/Modules/MannequinModule";
import ProductModule from "./ServerModule/Modules/ProductModule";
import {loadCurrency} from 'ZEPETO.Multiplay.Currency';
import {loadInventory} from 'ZEPETO.Multiplay.Inventory';
import {loadDataStorage} from 'ZEPETO.Multiplay.DataStorage';
export default class extends Sandbox {

    private readonly _modules: IModule[] = [];
    private _isCreated: boolean = false;
    private voteMap:Map<string,number> = new Map<string,number>();
    private playerScore:Map<string,number> = new Map<string,number>();
    private voteNum:number = 0;
    private endSurpNum:number = 0;
    private isWaiting:boolean = false; 
    private isGame:boolean = false;
    private waitingTime:number = 40;
    private playersinGame:Map<string,SandboxPlayer> = new Map<string,SandboxPlayer>();
    private readyPlayer:number = 0;
    private endPlayer:number = 0;
    private playersTier:Map<string,number> = new Map<string,number>();
    private playersAura:Map<string,number> = new Map<string,number>();
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
        this.onMessage("StartSurprise",(client:SandboxPlayer)=>{
            console.log("Get Message StartSurprise");
            this.broadcast("StartSurprise","msg");
        })
        this.onMessage("InitProfile",(client:SandboxPlayer)=>{
            client.send("UpdatePlayers",this.currentPlayerList());
        })
        this.onMessage("puzzle",(client:SandboxPlayer,message:LineModel)=>{
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                if(value.sessionId != client.sessionId){
                    value.send("puzzle",message);
                }
            });
        });
        
        this.onMessage("EndDraw",(client:SandboxPlayer)=>{
            if(endDraw) return;
            endDraw=true;
            let playerList:string[] = Array.from(this.playersinGame.keys());
            playerList = this.shuffleList(playerList) as string[];
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                value.send("EndDraw",playerList);
            });      
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
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                value.send("EndVote",puzzleMessage);
            });
        });
        this.onMessage("EndSurprise",(client:SandboxPlayer)=>{
            this.endSurpNum+=1;
            if(this.endSurpNum>=this.playersinGame.size){
                this.playersinGame.forEach((value:SandboxPlayer)=>{
                    value.send("MoveToPuzzle",client.userId);
                });
                this.endSurpNum = 0;
            }
        });
        this.onMessage("UpdateScore",(client:SandboxPlayer,message:number)=>{
            console.log(client.userId+":"+message);
            this.playerScore.set(client.userId,message);
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                value.send("UpdateScoreRank", this.currentRank());
            });
        });
        this.onMessage("RequestScore",(client:SandboxPlayer)=>{
            this.endPlayer++;
            if(this.endPlayer >= this.playersinGame.size){
                this.playersinGame.forEach((value:SandboxPlayer)=>{
                    value.send("RespondScore", client.userId);
                });
            }
        });
        this.onMessage("UpdateTier",(client:SandboxPlayer,message:number)=>{
            client.send("UpdateTier",message);
        });
        this.onMessage("PuzzleScore",async (client:SandboxPlayer,message:number)=>{
            endDraw = false;
            endVote = false;
            this.voteNum = 0;
            this.voteMap.clear();
            const surpScore:number = this.playerScore.get(client.userId);
            const puzzleScore:number = message;
            const _bonus:number = Number(await this.GetStorageServer(client,"Bonus"));
            const tier:number = Number(await this.GetStorageServer(client,"Tier"));
            const _member:number = this.playerScore.size;
            const _multi = Math.floor(Math.floor(surpScore+puzzleScore)*(0.1*(_member-1)))
            const total = Math.floor((Math.floor((surpScore+puzzleScore) +_multi)*(1+(_bonus/100))));
            await this.SetStorageServer(client,"Points",(Number(await this.GetStorageServer(client,"Points"))+total).toString());
            const _crystal:number = Math.floor(total/(50-2*tier));
            this.playerScore.set(client.userId,total);

            let mapToArray = Array.from(this.playerScore);
            mapToArray.sort((a,b)=>b[1]-a[1]);
            const _rank:number = mapToArray.findIndex((value,index,obj)=>value[0]===client.userId);
            await this.SetStorageServer(client,"Crystal",_crystal.toString());
            console.log(`${client.userId} surp ${surpScore}, puzzle ${puzzleScore}, bonus ${_bonus}, tier ${tier}, crystal ${_crystal}`);
            this.UseInventory(client,"n_soup",1);
            this.AddCredit(client,"crystal",_crystal);
            client.send("TotalScore",{total:total,surprise:surpScore,puzzle:puzzleScore,rank:_rank,member:_member,bonus:_bonus,crystal:_crystal,multi:_multi,Tier:tier} as TotalScore);
        });
        this.onMessage("TryEnterWaiting",(client:SandboxPlayer)=>{
            console.log(this.isGame);
            if(this.isGame == true){
                client.send("EnterPerm",0);
            }else{
                client.send("EnterPerm",1);
            }
        });
        this.onMessage("EnterWaiting",(client:SandboxPlayer)=>{
            console.log(this.isWaiting,this.waitingTime);
            if(this.isWaiting){
                client.send("WaitGame",this.waitingTime);
            }else{
                this.waitingTime = 40;
                client.send("WaitGame",this.waitingTime);
                this.isWaiting = true;
            }
            console.log(this.waitingTime,client.sessionId);
            this.playersinGame.set(client.sessionId, client);
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                value.send("UpdateWaiters", this.playersinGame.size);
            });
        });
        this.onMessage("ExitWaiting",(client:SandboxPlayer)=>{
            this.playersinGame.delete(client.sessionId);
        });
        this.onMessage("ReadyGame",(client:SandboxPlayer)=>{
            this.isGame = true;
            client.send("ReadySurprise",Array.from(this.playersinGame.keys()));
        });
        this.onMessage("StartGame",(client:SandboxPlayer)=>{
            this.readyPlayer+=1;
            if(this.readyPlayer >= this.playersinGame.size){
                this.playersinGame.forEach((value:SandboxPlayer)=>{
                    value.send("StartGame",Array.from(this.playersinGame.keys()));
                    this.playerScore.set(value.userId,0);
                });
            }
            this.isWaiting = false;
        });
        this.onMessage("EndGame",(client:SandboxPlayer)=>{
            this.endPlayer = 0;
            this.readyPlayer = 0;
            this.isGame = false;
            this.playersinGame.delete(client.sessionId);
            this.playerScore.delete(client.userId);
            client.send("ChangeLobby","msg");
        });
        this.onMessage("RequestPlayers",(client:SandboxPlayer)=>{
            let array = Array.from(this.state.players.keys()) as string[];
            let auras = [] as number[];
            array.forEach((value)=>auras.push(this.playersAura.get(value)));
            client.send("RespondPlayers",{players:array,auras:auras}as PlayerMessage);
        });
        this.onMessage("ChangeScene",(client:SandboxPlayer,message:string)=>{
            console.log(message);
            client.send("RemovePrevScene",message);
        });
        this.onMessage("RequestPlayersinGame",(client:SandboxPlayer)=>{
            let array = Array.from(this.playersinGame.keys());
            console.log(array,array.length);
            client.send("ChangePlayerAnims",array);
        });
        this.onMessage("RequestPlayerTier",(client:SandboxPlayer)=>{
            let _players:string[] =[];
            let _tiers:number[] = [];
            this.playersTier.forEach((value,key)=>{
                _players.push(key);
                _tiers.push(value);
            });
            console.log(_players);
            console.log(_tiers);
            client.send("RespondPlayerTier", {players:_players,tiers:_tiers} as TierModel);
        });
        this.onMessage("RequestUserInfo",async (client:SandboxPlayer)=>{
            const _Tier = Number(await this.GetStorageServer(client,"Tier"));
            const _Frame = Number(await this.GetStorageServer(client,"Frame"));
            const _Crystal = Number(await this.GetStorageServer(client,"Crystal"));
            const _Bonus = Number(await this.GetStorageServer(client,"Bonus"));
            const _RemainBonus = Number(await this.GetStorageServer(client,"RemainBonus"));
            const _Points = Number(await this.GetStorageServer(client,"Points"));
            client.send("UserInfo",{Points:_Points,Frame:_Frame,Tier:_Tier,Crystal:_Crystal,Bonus:_Bonus,RemainBonus:_RemainBonus} as UserInfo);
        });
        this.onMessage("onCredit", (client:SandboxPlayer, message:CurrencyMessage) => {

            console.log(`[onCredit]`);
            const currencyId = message.currencyId;
            const quantity = message.quantity ?? 1;
            
            this.AddCredit(client, currencyId, quantity);
        });
        
        this.onMessage("onDebit", (client:SandboxPlayer, message:CurrencyMessage) => {

            console.log(`[onDebit]`);
            const currencyId = message.currencyId;
            const quantity = message.quantity ?? 1;

            this.OnDebit(client, currencyId, quantity);
        });


        this.onMessage("onAddInventory", (client:SandboxPlayer, message:InventoryMessage) => {

            console.log(`[onAddInventory]`);
            const productId = message.productId;
            const quantity = message.quantity ?? 1;

            this.AddInventory(client, productId, quantity);
        });


        this.onMessage("onUseInventory", (client:SandboxPlayer, message:InventoryMessage) => {

            console.log(`[onUseInventory]`);
            const productId = message.productId;
            const quantity = message.quantity ?? 1;

            this.UseInventory(client, productId, quantity);
        });

        this.onMessage("onRemoveInventory", (client:SandboxPlayer, message:InventoryMessage) => {

            console.log(`[onRemoveInventory]`);
            const productId = message.productId;

            this.RemoveInventory(client, productId);
        });


        // DataStorage
        this.onMessage("onSetStorage", async (client:SandboxPlayer, message:StorageMessage) => {

            console.log(`[onSetStorage] ${message.value}`);
            const key = message.key;
            const value = message.value ?? "";

            this.SetStorage(client, key, value);
        });

        this.onMessage("onGetStorage", (client:SandboxPlayer, message:StorageMessage) => {

            const key = message.key;
            console.log(`[onGetStorage] ${key}`);

            this.GetStorage(client, key);
        });
        this.onMessage("SetBonus", async (client:SandboxPlayer,message:BonusMessage)=>{
            this.SetStorage(client,"Bonus",(message.bonus).toString());
            this.SetStorage(client,"RemainBonus",(message.remain).toString());
        });
        this.onMessage("SetTier", async (client:SandboxPlayer,message:number)=>{
            this.SetStorage(client,"Tier",(message).toString());
        });
        this.onMessage("SetFrame", async (client:SandboxPlayer,message:number)=>{
            this.playersTier.set(client.userId,message);
            this.SetStorage(client,"Frame",message.toString());
        });
        this.onMessage("SetAura", async (client:SandboxPlayer,message:number)=>{
            this.SetStorage(client,"Aura",message.toString());
        });
        this.onMessage("SyncAura",(client:SandboxPlayer,message:number)=>{
            this.broadcast("SyncAura",{sessionId:client.sessionId,auraNum:message} as AuraMessage);
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

        await this.CheckStorage(client,"Points","0");
        await this.CheckStorage(client,"Bonus","0");
        await this.CheckStorage(client,"Tier","0");
        await this.CheckStorage(client,"Frame","0");
        await this.CheckStorage(client,"Crystal","0");
        await this.CheckStorage(client,"RemainBonus","0");
        await this.CheckStorage(client,"Achievement","0,0,0,0,0,0,0,0,0,0");
        await this.CheckStorage(client,"AttendanceDate","0");
        await this.CheckStorage(client,"AttendanceCount","0");
        await this.CheckStorage(client,"Aura","-1");
        this.playersAura.set(client.sessionId,Number(await this.GetStorageServer(client,"Aura")));
        this.playersTier.set(client.userId,Number(await this.GetStorageServer(client,"Frame"))); // 테두리
        console.log(`join player, ${client.sessionId}`);
    }
    

    async onLeave(client: SandboxPlayer, consented?: boolean) {
        for (const module of this._modules) {
            await module.OnLeave(client);
        }
        this.state.players.delete(client.sessionId);
        this.playerScore.delete(client.userId);
        if(this.playersinGame.has(client.sessionId)){
            this.playersinGame.delete(client.sessionId);
        }
        this.playersinGame.forEach((value:SandboxPlayer)=>{
            value.send("UpdatePlayers",this.currentPlayerList());
        });

        this.playersinGame.forEach((value:SandboxPlayer)=>{
            value.send("UpdateWaiters", this.playersinGame.size);
        });
        console.log(`leave player, ${client.sessionId}`);
    }

    async onTick(deltaTime: number) {
        if (!this._isCreated) {
            return;
        }
        for (const module of this._modules) {
            module.OnTick(deltaTime);
        }
        if(this.isWaiting){
            this.waitingTime-=deltaTime/1000;
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
        let playerList:string[] = Array.from(this.playersinGame.keys());
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

        if(this.voteNum >= this.playersinGame.size){
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
            this.playersinGame.forEach((value:SandboxPlayer)=>{
                value.send("Vote",winner);
            });
        }
        return 1;
    }
    currentRank():SurpScore{
        let mapToArray = Array.from(this.playerScore);
        console.log("init array");
        mapToArray.sort((a,b)=>b[1]-a[1]);
        console.log("sort Array");
        let _players:string[] = [];
        let _scores:number[] = [];
        mapToArray.forEach((value,index)=>{
            _players.push(value[0]);
            _scores.push(value[1]);
        });
        const scoreInfo = {players:_players,scores:_scores} as SurpScore;
        return scoreInfo;
    }
    async SetStorage(client: SandboxPlayer, key: string, value: string) {

        try {
            const dataStorage = await loadDataStorage(client.userId);
            const result = await dataStorage.set(key, value);
            console.log(key,value);
            client.send("onSetStorageResult", result);
        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }

    async CheckStorage(client:SandboxPlayer,key:string,value:string){
        try{
            const dataStorage = await loadDataStorage(client.userId);
            const result = await dataStorage.get(key) as string;
            if(result == null){
                console.log("value is null");
                await dataStorage.set(key,value);
            }
        }
        catch(e){
            console.log(`${e}`);
        }
    }
    async SetStorageServer(client:SandboxPlayer,key:string,value:string){
        try {
            const dataStorage = await loadDataStorage(client.userId);
            await dataStorage.set(key, value);
        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }
    async GetStorageServer(client:SandboxPlayer,key:string):Promise<string>{
        try {
            const dataStorage = await loadDataStorage(client.userId);
            const result = await dataStorage.get(key) as string;
            console.log(result);
            if (result === undefined) {
                // It is an empty string
                return null;
            } else
            {
                return result;
            }

        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }

    async GetStorage(client: SandboxPlayer, key: string) {

        try {
            const dataStorage = await loadDataStorage(client.userId);
            const result = await dataStorage.get(key) as string;
            console.log(result);
            if (result === undefined) {
                // It is an empty string
                client.send("onGetStorageResult", "");
            } else
            {
                client.send("onGetStorageResult", {key:key,value:result} as StorageMessage);
            }

        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }


    async AddInventory(client: SandboxPlayer, productId: string, quantity: number) {

        try {
            const inventory = await loadInventory(client.userId);
            await inventory.add(productId, quantity);
            const inventorySync: InventorySync = {
                productId : productId,
                inventoryAction : InventoryAction.Add
            }
            client.send("SyncInventories",inventorySync);
            console.log("success add");

        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }


    async UseInventory(client: SandboxPlayer, productId: string, quantity: number) {

        try {
            const inventory = await loadInventory(client.userId);
            if (await inventory.use(productId, quantity) === true) {
                const inventorySync: InventorySync = {
                    productId: productId,
                    inventoryAction: InventoryAction.Use
                }
                client.send("SyncInventories", inventorySync);
                console.log("success use");

            }
            else{
                console.log("use error");
            }
        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }


    async RemoveInventory(client: SandboxPlayer, productId: string) {

        try {
            const inventory = await loadInventory(client.userId);
            if (await inventory.remove(productId) === true) {
                const inventorySync: InventorySync = {
                    productId: productId,
                    inventoryAction: InventoryAction.Remove
                }
                client.send("SyncInventories", inventorySync);
                console.log("success rm");
            }
            else{
                console.log("remove error");
            }
        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }



    async AddCredit(client: SandboxPlayer, currencyId: string, quantity: number) {

        try {
            const currency = await loadCurrency(client.userId);
            await currency.credit(currencyId, quantity);
            const currencySync: CurrencyMessage = {
                currencyId : currencyId,
                quantity : quantity
            }
            console.log("addcredit",currency);
            client.send("SyncBalances",currencySync);
        }
        catch (e)
        {
            console.log(`${e}`);
        }
    }

    async OnDebit(client: SandboxPlayer, currencyId: string, quantity: number) {

        try {
            const currency = await loadCurrency(client.userId);
            if(await currency.debit(currencyId, quantity) === true) {
                const currencySync: CurrencyMessage = {
                    currencyId: currencyId,
                    quantity: -quantity
                }
                client.send("SyncBalances", currencySync);
            }
            else{
                //It's usually the case that there's no balance.
                client.send("DebitError", "Currency Not Enough");
            }
        }
        catch (e)
        {
            console.log(`${e}`);
        }
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
interface SurpScore{
    players:string[],
    scores:number[]
}
interface TotalScore{
    total:number,
    surprise:number,
    puzzle:number,
    rank:number,
    member:number,
    bonus:number,
    crystal:number,
    multi:number,
    Tier:number
}
interface TierModel{
    players:string[],
    tiers:number[]
}
interface UserInfo{
    Points:number,
    Frame:number,
    Tier:number,
    Crystal:number,
    Bonus:number,
    RemainBonus:number
}
interface CurrencyMessage {
    currencyId: string,
    quantity?: number,
}

interface InventoryMessage {
    productId: string,
    quantity?: number,
}

interface StorageMessage {
    key: string,
    value?: string,
}

interface InventorySync {
    productId: string,
    inventoryAction: InventoryAction,
}
interface BonusMessage{
    bonus:number,
    remain:number
}
interface AuraMessage{
    sessionId:string,
    auraNum:number
}
export enum InventoryAction{
    Remove = -1,
    Use,
    Add,
}
interface PlayerMessage{
    players:string[],
    auras:number[]
}