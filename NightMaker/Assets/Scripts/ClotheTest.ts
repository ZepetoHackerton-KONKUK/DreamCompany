import { ZepetoScriptBehaviour } from 'ZEPETO.Script'
import { ShopService, Category, ItemKeyword } from 'ZEPETO.Module.Shop'
import { ZepetoPropertyFlag } from 'Zepeto'
import { Texture2D, WaitUntil } from 'UnityEngine'
import { RawImage } from 'UnityEngine.UI'
import { Item } from 'ZEPETO.Module.Content'

export default class ClotheTest extends ZepetoScriptBehaviour {


    Start() {
        this.StartCoroutine(this.CoGetMyCategory());
    }

    *CoGetMyCategory() {
        var requestCategory = ShopService.GetMyCategoryAsync();
        yield new WaitUntil(() => requestCategory.keepWaiting == false);

        if (requestCategory.responseData.isSuccess) {
            let categoryInfo = requestCategory.responseData.category;
            console.log(`[Category Info] ${categoryInfo.displayName} - length : ${categoryInfo.categories.Length}`);

            let categories: Category[] = categoryInfo.categories;

            for (const category of categories) {
                console.log(`[Category displayName] ${category.displayName} `);
                //Category Keyword is used as an argument in the ShopService.GetMyContentItemListAsync function
                console.log(`[Category keyword] ${category.keyword} `);
            }
        }
        this.StartCoroutine(this.CoGetMyItem());
    }

    *CoGetMyItem() {
        var requestItemList = ShopService.GetMyContentItemListAsync(ItemKeyword.all, null);

        yield new WaitUntil(() => requestItemList.keepWaiting == false);

        if (requestItemList.responseData.isSuccess) {
            let items: Item[] = requestItemList.responseData.items;

            // The number of items received as a result of GetMyContentItemListAsync().
            console.log(items.length);

            for (let i = 0; i < items.length; ++i) {
                const property: ZepetoPropertyFlag = items[i].property;
                // Item ID and item property
                console.log(`[Content Item] (id): ${items[i].id} | (property): ${property}`);

                // Setting the item thumbnail as the texture of a rawImage


            }
        }
    }
}