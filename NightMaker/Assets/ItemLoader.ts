import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Button, RawImage,Image,Text } from 'UnityEngine.UI';
import { GameObject, Resources, Texture2D, Sprite,Transform } from 'UnityEngine';
export default class ItemLoader extends ZepetoScriptBehaviour {

    public _itemPrefab: GameObject; // Item 프리팹에 대한 참조
    public _parent: Transform;      // 생성된 인스턴스의 부모가 될 Transform
    private _count : number = 14;    // 아이템 패널을 여는 버튼에 대한 참조

    public itemImages: Sprite[];
    public costPrice:number[];

    // 아이템 로딩 메서드
    public LoadItems():GameObject[] {
        let objects=[];
        for (let i = 0; i < this._count; i++) {
            // 프리팹 인스턴스화
            const newItemThumb : GameObject = GameObject.Instantiate(this._itemPrefab, this._parent) as GameObject;

            // Item 이미지 로드 및 적용
            const ItemImage = newItemThumb.transform.GetChild(0).gameObject as GameObject;
            ItemImage.GetComponent<Image>().sprite = this.itemImages[i];
            

            // Cost 이미지 로드 및 적용
            let Cost = newItemThumb.transform.Find("Cost").GetComponentInChildren<Text>().text = this.costPrice[i].toString();
            objects.push(newItemThumb);
        }
        return objects;
    }
}


