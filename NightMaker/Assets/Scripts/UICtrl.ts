import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { Room } from 'ZEPETO.Multiplay'
import MultiplayManager from '../Zepeto Multiplay Component/ZepetoScript/Common/MultiplayManager';
import {Text,Image,RawImage,Button} from 'UnityEngine.UI'
import {Sprite, TextAnchor,Texture,WaitUntil,GameObject,Transform,RectTransform} from 'UnityEngine'
import {WorldService,ZepetoWorldHelper,Users} from 'ZEPETO.World'
import {CurrencyService} from 'ZEPETO.Currency'
import {RoomData} from 'ZEPETO.Multiplay'
import { ProductService,ProductRecord,ProductType } from 'ZEPETO.Product'
import {InventoryRecord, InventoryService} from "ZEPETO.Inventory"
import LeaderboardManager from '../Zepeto LeaderBoard Module/ZepetoScript/LeaderBoardManager';
import { ZepetoPlayers } from 'ZEPETO.Character.Controller';
import ItemLoader from '../ItemLoader';
import MyChrGesture from '../MyChrGesture';
import ZepetoPlayersCtrl from './ZepetoPlayersCtrl';
import AuraCtrl from './AuraCtrl';
export default class UICtrl extends ZepetoScriptBehaviour {
    
    public TextUI:Text[]; // 0 이름 1 크리스탈 2 보너스 3 보너스 남은판
    public ImageUI:Image[];
    public ProfileTexture:RawImage;
    public TierImages:Sprite[];
    public FrameImages:Sprite[];
    public TierNames:Sprite[];
    public BoilingPot:GameObject;
    public Information:GameObject;
    public NpcCanvas:Transform;
    public CloseBtn:Button[];
    public ChangeCrystalBtn:Button[];
    public Achievements:GameObject[];
    public TierUpUI:GameObject;
    public TierInfo:Image[];
    public Attendances:GameObject[];
    public AttendCrystal:number[];
    public TierUpParticle:GameObject;
    public ItemLoader:GameObject;
    public CharGenerator:GameObject;
    private curRoom:Room;
    private myScore:number =0;
    private myTier:number = 0;
    private remainSoup:number = 0;
    private ItemPackages:ProductRecord[] = [];
    private CurrencyPackages:ProductRecord[] = [];
    private bonusNum:number;
    private AchieveNum:string[] = [];
    private SoupRecord:InventoryRecord = null;
    private canAttend:bool = false;
    private AuraItem:ProductRecord[] = [];
    private AuraMap:Map<string,GameObject> = new Map<string,GameObject>();
    public needScore:number[];
    public AchieveCrystal:number[];
    public CompleteUI:GameObject;
    public BuyUI:GameObject;
    public buySoupByCrystal:Button;
    public buySoupByZem:Button;
    public testCrystal:Button;
    public FrameContent:RectTransform;
    public CheckPurchasAura:GameObject;
    public BlockOtherAura:GameObject;
    private currentFrame:number;
    private FrameSelects:Transform[]=[];
    private AuraCharGenerator:MyChrGesture;
    private Auras:GameObject[]=[];
    private AuraNum:number;
    Start() {  
        if(this.NpcCanvas == null){
            return;
            console.log("noreturn");
        }  
        this.ItemPackages = [];
        this.CurrencyPackages = [];
        this.AchieveNum = [];
        this.AuraItem = [];
        console.log("Hi");        
        this.curRoom = MultiplayManager.instance.room;
        this.testCrystal.onClick.AddListener(()=>{
            const data = new RoomData();
            data.Add("currencyId",Currency.crystal);
            data.Add("quantity",100000);
            console.log(data);
            this.TierUpReward();
            this.curRoom.Send("onCredit",data.GetObject());
            

        });
        this.curRoom.AddMessageHandler<BalanceSync>("SyncBalances",(message)=>{
            console.log(this.NpcCanvas);
            if(this.NpcCanvas == null){
                return;
            }
            this.RefreshAllBalanceUI();
        });
        this.curRoom.AddMessageHandler("onGetStorageResult",(message:StorageMessage)=>{
            console.log(this.NpcCanvas);
            if(this.NpcCanvas == null){
                return;
                console.log("noreturn");
            }
            if(message.key == "Achievement"){
                this.AchieveNum = message.value.split(",");
                console.log(this.AchieveNum);
                for(let i = 0; i<this.AchieveNum.length; i++){
                    if(this.Achievements[i] == null){
                        return;
                    }
                    this.Achievements[i].GetComponentInChildren<Button>().onClick.AddListener(()=>{
                        this.AquireAchievement(i);
                    });
                    if(this.AchieveNum[i] == "0"){
                        if(i<=this.myTier){
                            this.ActiveAchievement(Number(this.AchieveNum[i]));
                        }
                    }
                    else{
                        this.Achievements[i].transform.GetChild(1).gameObject.SetActive(true);
                    }
                }
            }
            else if(message.key == "AttendanceDate"){
                if(message.value == this.GetDayInfo()){
                    this.canAttend = false;
                }
                else{
                    this.canAttend = true;
                }
                this.curRoom.Send("onGetStorage",{key:"AttendanceCount"});
            }
            else if(message.key == "AttendanceCount"){
                let value:number = Number(message.value);
                if(this.canAttend && message.value == "7"){
                    value = 0;
                    this.curRoom.Send("onSetStorage",{key:"AttendanceCount",value:"0"});
                }
                for(let i = 0; i<=value; i++){
                    this.Attendances[i].transform.GetChild(0).gameObject.SetActive(true);
                    this.Attendances[i].GetComponent<Button>().onClick.AddListener(()=>{
                        this.Attend(i);
                    });
                }
                if(this.canAttend){
                    this.Attendances[value].transform.GetChild(0).gameObject.SetActive(true);
                    this.Attendances[value].GetComponent<Button>().interactable = true;
                }
            }
            else if(message.key=="Aura"){
                this.AuraNum = Number(message.value);
                this.InitAura();
            }

        });
        this.curRoom.AddMessageHandler("UserInfo",(message:UserInfo)=>{
            console.log(this.NpcCanvas);
            if(this.NpcCanvas == null){
                return;
                console.log("noreturn");
            }
            const offset = message.Points - this.myScore;
            this.myTier = message.Tier;
            this.IncreaseScore(offset);
            LeaderboardManager.instance.SendScore(offset);
            const name = [WorldService.userId];
            this.bonusNum = message.Bonus;
            ZepetoWorldHelper.GetUserInfo(name,(info:Users[])=>{
                this.TextUI[0].text = info[0].name;
            },(error)=>{
                console.log(error);
            });
            ZepetoWorldHelper.GetProfileTexture(name[0],(texture:Texture)=>{
                this.ProfileTexture.texture = texture;
            },(error)=>{
                console.log(error);
            });
            this.ImageUI[0].sprite = this.FrameImages[message.Frame];
            this.ImageUI[1].sprite = this.TierImages[this.myTier];
            this.currentFrame = message.Frame;
            this.FrameSelects.forEach((value,index)=>{
                const btn = value.gameObject.GetComponentInChildren<Button>(true) as Button;
                if(index <= message.Tier){
                    btn.interactable = true;
                    value.GetChild(3).gameObject.SetActive(false);
                }else{
                    btn.interactable = false;
                }
                if(index == message.Frame){
                    value.GetChild(1).gameObject.SetActive(true);
                }
                btn.onClick.AddListener(()=>{
                    this.FrameSelects[this.currentFrame].GetChild(1).gameObject.SetActive(false);
                    value.GetChild(1).gameObject.SetActive(true);
                    this.currentFrame = index;
                    this.ImageUI[0].sprite = this.FrameImages[this.currentFrame];
                    this.curRoom.Send("SetFrame",this.currentFrame);
                });
            });
            this.curRoom.Send("onGetStorage",{key:"AttendanceDate"}as StorageMessage);
            this.curRoom.Send("onGetStorage",{key:"Achievement"} as StorageMessage);
            this.RefreshAllBalanceUI();
            this.RefreshScoreUI();
            
            
            
        });

        this.StartCoroutine(this.LoadPackages());
        this.buySoupByCrystal.onClick.AddListener(()=>this.StartCoroutine(this.PurchaseSoupCrystal("soup_c")));
        this.buySoupByZem.onClick.AddListener(()=>{
            const Item = this.ItemPackages.find(ir=>ir.productId == "soup_z");
            if(Item){
                this.PurchaseSoupZem(Item);
            }else{
                this.OpenInformation(`Soup product does not exit`);
            }
        });
        this.ChangeCrystalBtn[0].onClick.AddListener(()=>{
            const Item = this.CurrencyPackages.find(ir=>ir.productId =="package_crystal1");
            if(Item){
                this.ChangeCrystal(Item);
            }else{
                this.OpenInformation("Error");
            }
        });
        this.ChangeCrystalBtn[1].onClick.AddListener(()=>{
            const Item = this.CurrencyPackages.find(ir=>ir.productId =="package_crystal2");
            if(Item){
                this.ChangeCrystal(Item);
            }else{
                this.OpenInformation("Error");
            }
        });
        this.ChangeCrystalBtn[2].onClick.AddListener(()=>{
            const Item = this.CurrencyPackages.find(ir=>ir.productId =="package_crystal3");
            if(Item){
                this.ChangeCrystal(Item);
            }else{
                this.OpenInformation("Error");
            }
        });
        ProductService.OnPurchaseCompleted.AddListener((product,response)=>{
            if(this.NpcCanvas == null){
                return;
            }
            if(response.productId == "n_soup"){
                this.BuyUI.SetActive(false);
                this.CompleteUI.SetActive(true);
                const message = "Get Soup Bonus +"+this.bonusNum.toString()+"% for 3 Games!";
                console.log(message);
                this.OpenInformation(message);
                this.curRoom.Send("SetBonus",{bonus:this.bonusNum,remain:3});
            
            }
        });
        this.FrameSelects = this.GetChildren(this.FrameContent);
        this.Auras = this.ItemLoader.GetComponent<ItemLoader>().LoadItems();
        this.AuraCharGenerator = this.CharGenerator.GetComponent<MyChrGesture>();
        this.AuraCharGenerator.CharacterLoad();
        this.curRoom.Send("RequestUserInfo");
        
    }
    private InitAura(){
        console.log(this.AuraItem);
        this.Auras.forEach((value,index)=>{
            const Btns = value.GetComponentsInChildren<Button>(true) as Button[];
            const id="aura"+(index+1).toString();
            const Item = this.AuraItem.find(ir=>ir.productId==id);
            Btns[0].onClick.AddListener(()=>{
                this.AuraCharGenerator.ShowGesture(index);
            });
            this.AuraMap.set(id,value);
            console.log(Item.productId);
            Btns[1].onClick.AddListener(()=>{

                if(Item){
                    this.BlockOtherAura.SetActive(true);
                    this.CheckPurchasAura.SetActive(true);
                    this.CheckPurchasAura.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(()=>{
                        this.StartCoroutine(this.PurchaseAura(Item.productId));
                    });
                }else{
                    this.OpenInformation("Error");
                }
            });
            Btns[2].onClick.AddListener(()=>{
                const selected = value.transform.GetChild(2).gameObject as GameObject;
                if(this.AuraNum>=0 && this.AuraNum != index){
                    this.Auras[this.AuraNum].transform.GetChild(2).gameObject.SetActive(false);
                    selected.SetActive(true);
                    this.AuraNum = index;
                }else if(this.AuraNum>= 0 && this.AuraNum == index){
                    selected.SetActive(false);
                    this.AuraNum = -1;
                }else{
                    selected.SetActive(true);
                    this.AuraNum = index;
                }
                this.curRoom.Send("SetAura",index);
                this.curRoom.Send("SyncAura",this.AuraNum);
            });
            if(Item){
                if(Item.isPurchased){
                    value.transform.GetChild(1).gameObject.SetActive(false);
                    value.transform.GetChild(3).gameObject.SetActive(true);
                }else{
                    value.transform.GetChild(1).gameObject.SetActive(true);
                    value.transform.GetChild(3).gameObject.SetActive(false);
                }
            }
            if(index == this.AuraNum){
                value.transform.GetChild(2).gameObject.SetActive(true);
                this.curRoom.Send("SyncAura",index);
            }
        });
    }
    private RefreshAllBalanceUI(){
        this.StartCoroutine(this.RefreshBalanceUI());
        this.StartCoroutine(this.RefreshSoup());
    }
    private *RefreshBalanceUI(){
        const request = CurrencyService.GetUserCurrencyBalancesAsync();
        yield new WaitUntil(()=>request.keepWaiting == false);
        if(request.responseData.isSuccess) {
            this.TextUI[1].text = request.responseData.currencies?.ContainsKey(Currency.crystal) ? request.responseData.currencies?.get_Item(Currency.crystal).toString() :"0";
        }
    }
    private GetDayInfo():string{
        const today = new Date();
        return today.getFullYear().toString()+today.getMonth().toString()+today.getDate().toString();
    }
    private *RefreshSoup(){
        const request = InventoryService.GetListAsync();
        yield new WaitUntil(()=>request.keepWaiting == false);
        if(request.responseData.isSuccess){
            const items:InventoryRecord[] = request.responseData.products;
            items.forEach((ir,index)=>{
                if(ir.productId == "n_soup"){
                    this.SoupRecord = ir;
                }
            });
        }
        if(this.SoupRecord != null){
            this.remainSoup = Number(this.SoupRecord.quantity);
        }
        if(this.remainSoup == 0){
            this.TextUI[2].alignment = TextAnchor.MiddleCenter;
            this.bonusNum = 0;
            this.TextUI[3].text = "";
        }else{
            this.TextUI[2].alignment = TextAnchor.MiddleLeft;
            this.TextUI[3].text = this.remainSoup.toString()+"/3";
        }
        this.TextUI[2].text = "+"+this.bonusNum.toString()+"%";
        
    }
    public IncreaseScore(quantity:number){
        this.myScore +=quantity;
        if(this.myScore >= this.needScore[this.myTier]){
            this.myTier++;
            this.TierUpReward();
        }
        this.RefreshScoreUI();
    }
    private TierUpReward(){
        GameObject.Instantiate(this.TierUpParticle,ZepetoPlayers.instance.LocalPlayer.zepetoPlayer.character.transform);
        this.TierInfo[0].sprite = this.TierImages[this.myTier];
        this.TierInfo[1].sprite = this.FrameImages[this.myTier];
        this.TierInfo[2].sprite = this.TierNames[this.myTier];
        this.TierUpUI.SetActive(true);
        this.ActiveAchievement(this.myTier-1);
        this.curRoom.Send("SetTier",this.myTier);
    }
    private ActiveAchievement(index:number){
        if(index<0){
            return;
        }
        const Achive = this.Achievements[index] as GameObject;
        Achive.GetComponentInChildren<Button>().interactable = true;
        Achive.transform.GetChild(1).gameObject.SetActive(true);
    }
    private AquireAchievement(index:number){
        this.AchieveNum[index]="1";
        this.Achievements[index].GetComponentInChildren<Button>().interactable =false;
        const _quantity = this.AchieveCrystal[index];
        this.OpenInformation(`Earned ${_quantity} Crystal!s`);
        const data = new RoomData();
        data.Add("currencyId",Currency.crystal);
        data.Add("quantity",this.AchieveCrystal.get_Item(index));
        let message:string = this.AchieveNum[0];
        for(let i = 1; i <this.AchieveNum.length; i++){
            message+=","+this.AchieveNum[i];
        }
        this.curRoom.Send("onCredit",data.GetObject());
        this.curRoom.Send("onSetStorage",{key:"Achievement",value:message});
    }
    private RefreshScoreUI(){
        switch(this.myTier){
            case 0:
                this.TextUI[4].text = "NightMaker";
                break;
            case 1:
                this.TextUI[4].text = "Intruder of Dream";
                break;
            case 2:
                this.TextUI[4].text = "Nightmare Artisan";
                break;
            case 3:
                this.TextUI[4].text = "Maestro of Nightmare";
                break;
            case 4:
                this.TextUI[4].text = "Master of Nightmare";
                break;
            case 5:
                this.TextUI[4].text = "Wicked Nightmare";
                break;
            case 6:
                this.TextUI[4].text = "Evil Nightmare";
                break;
            case 7:
                this.TextUI[4].text = "Diabolical Nightmaker";
                break;
            case 8:
                this.TextUI[4].text = "Malevolent Nightmaker";
                break;
            case 9:
                this.TextUI[4].text = "CEO of Nightmare";
                break;
        }
    }
    private OpenInformation(message:string){
        const inforObj = GameObject.Instantiate(this.Information,this.NpcCanvas) as GameObject;
        inforObj.GetComponentInChildren<Text>().text = message;
    }
    private *PurchaseAura(productId:string){
        const request = ProductService.PurchaseProductAsync(productId);
        yield new WaitUntil(()=>request.keepWaiting == false);
        if(request.responseData.isSuccess){
            const Aura = this.AuraMap.get(productId) as GameObject;
            Aura.transform.GetChild(1).gameObject.SetActive(false);
            Aura.transform.GetChild(3).gameObject.SetActive(true);
            const message = "Purchase Success!";
            this.OpenInformation(message);
        }
        else{
            const message = "Not Enough Crystal!";
            this.OpenInformation(message);
        }
        this.BlockOtherAura.SetActive(false);
        this.CheckPurchasAura.SetActive(false);
        this.RefreshAllBalanceUI();
    }
    private *PurchaseSoupCrystal(productId: string) {
        this.buySoupByCrystal.interactable = false;
        this.buySoupByZem.interactable = false;
        this.CloseBtn[0].interactable = false;
        const prevdata = new RoomData();
        prevdata.Add("productId","n_soup");
        prevdata.Add("quantity",this.remainSoup);
        this.curRoom.Send("onUseInventory",prevdata.GetObject());
        const request = ProductService.PurchaseProductAsync(productId);
        yield new WaitUntil(() => request.keepWaiting == false);
        if (request.responseData.isSuccess) {
            // Is purchase success
            this.BoilingPot.SetActive(true);
            yield new WaitUntil(()=>!this.BoilingPot.activeSelf);
            this.bonusNum = this.GetRandomBonus();
            const message = "Get Soup Bonus +"+this.bonusNum.toString()+"% for 3 Games!";
            console.log(message);
            this.curRoom.Send("SetBonus",{bonus:this.bonusNum,remain:3});

            this.OpenInformation(message);
            this.BuyUI.SetActive(false);
            this.CompleteUI.SetActive(true);
        } else {
            // Is purchase fail
            const message = "Not Enough Crystal!";
            this.OpenInformation(message);
            const data = new RoomData();
            data.Add("productId","n_soup");
            data.Add("quantity",this.remainSoup);
            this.curRoom.Send("onAddInventory",prevdata.GetObject());
        }
        this.buySoupByCrystal.interactable = true;
        this.buySoupByZem.interactable = true;
        this.CloseBtn[0].interactable = true;
        this.RefreshAllBalanceUI();
    }
    private GetRandomBonus():number{
        const bonusIndex = Math.floor(Math.random()*1000);
        let bonus:number;
        if(bonusIndex > 399){
            bonus = Math.floor(Math.random()*4)+1;
        }
        else if(bonusIndex > 199){
            bonus = Math.floor(Math.random()*5)+5;
        }
        else if(bonusIndex > 99){
            bonus = Math.floor(Math.random()*10)+10;
        }
        else if(bonusIndex > 49){
            bonus = Math.floor(Math.random()*20)+20;
        }
        else if(bonusIndex > 19){
            bonus = Math.floor(Math.random()*20)+40;
        }
        else if(bonusIndex > 9){
            bonus = Math.floor(Math.random()*20)+60;
        }
        else if(bonusIndex > 2){
            bonus = Math.floor(Math.random()*20)+80;
        }
        else{
            bonus = 100;
        }
        return bonus;
    }
    private PurchaseSoupZem(productRecord:ProductRecord){
        ProductService.OpenPurchaseUI(productRecord);
    }
    private ChangeCrystal(productRecord:ProductRecord){
        ProductService.OpenPurchaseUI(productRecord);
    }
    private *LoadPackages(){
        const request = ProductService.GetProductsAsync();
        yield new WaitUntil(()=>request.keepWaiting == false);
        if(request.responseData.isSuccess){
            request.responseData.products.forEach((pr)=>{
                console.log(pr.productId);
                if(pr.ProductType == ProductType.ItemPackage){
                    this.ItemPackages.push(pr);
                }
                else if(pr.ProductType == ProductType.CurrencyPackage){
                    this.CurrencyPackages.push(pr);
                }
                else if(pr.productId.indexOf("aura") != -1){
                    this.AuraItem.push(pr);
                }
            });
            this.curRoom.Send("onGetStorage",{key:"Aura"} as StorageMessage);
        }
        
        
        else{
            console.warn("Product Load Failed");
        }
    }
    private Attend(index:number){
        this.Attendances[index].GetComponent<Button>().interactable = false;
        const data = new RoomData();
        if(index < 6){
            const data = new RoomData();
            data.Add("currencyId",Currency.crystal);
            data.Add("quantity",this.AttendCrystal[index]);
            this.OpenInformation(`Earned ${this.AttendCrystal[index]} Crystals!`);
            this.curRoom.Send("onCredit",data.GetObject());
        }
        else if(index == 6){
            const prevdata = new RoomData();
            prevdata.Add("productId","n_soup");
            prevdata.Add("quantity",this.remainSoup);
            this.curRoom.Send("onUseInventory",prevdata.GetObject());
            const data = new RoomData();
            data.Add("productId","n_soup");
            data.Add("quantity",3);
            this.curRoom.Send("onAddInventory",data.GetObject());
            this.bonusNum = this.GetRandomBonus();
            const message = "Get Soup Bonus +"+this.bonusNum.toString()+"% for 3 Games!";
            console.log(message);
            this.curRoom.Send("SetBonus",{bonus:this.bonusNum,remain:3});

            this.OpenInformation(message);
        }
        this.curRoom.Send("onSetStorage",{key:"AttendanceDate",value:this.GetDayInfo()} as StorageMessage);
        this.curRoom.Send("onSetStorage",{key:"AttendanceCount",value:(index+1).toString()} as StorageMessage);
        this.RefreshAllBalanceUI();
        
    }
    private GetChildren(parent:RectTransform):Transform[]{
        let Children:Transform[] = [];
        for(let i = 0; i<parent.childCount; i++){
            Children.push(parent.GetChild(i));
        }
        return Children;
    }   
    OnDestroy(){
        this.NpcCanvas = null;
    }
}

interface UserInfo{
    Points:number,
    Frame:number,
    Tier:number,
    Crystal:number,
    Bonus:number,
    RemainBonus:number
}
interface BonusMessage{
    bonus:number,
    remain:number
}
interface StorageMessage {
    key: string,
    value?: string,
}
export interface BalanceSync {
    currencyId: string,
    quantity: number,
}

export interface InventorySync {
    productId: string,
    inventoryAction: InventoryAction,
}

export enum InventoryAction{
    Removed = -1,
    Used,
    Added,
}

export enum Currency{
    crystal = "crystal",
    soup = "soup",
}
