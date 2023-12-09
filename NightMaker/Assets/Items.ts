import { ZepetoScriptBehaviour } from 'ZEPETO.Script';
import { Content } from 'ZEPETO.World';
import { RawImage, Text } from 'UnityEngine.UI';
import { Texture2D } from 'UnityEngine';

export default class ItemController extends ZepetoScriptBehaviour {
    private IsOwned: boolean = false;
    private Equipped: boolean = false;
    private Cost: RawImage;
    private EquippedImage: RawImage;

    Start() {
        // 여기에서 Cost와 EquippedImage에 대한 참조를 초기화합니다.
        this.Cost = this.gameObject.transform.Find("Cost").GetComponent<RawImage>() as RawImage;
        this.EquippedImage = this.gameObject.transform.Find("EquippedImage").GetComponent<RawImage>() as RawImage;

        // 기본 설정에 따라 이미지를 설정합니다.
        this.Cost.enabled = !this.IsOwned; // IsOwned가 true이면 비활성화, false이면 활성화
        this.EquippedImage.enabled = this.Equipped; // Equipped가 true이면 활성화, false이면 비활성화
    }

    // IsOwned의 상태를 업데이트하는 메서드
    public SetIsOwned(owned: boolean) {
        this.IsOwned = true;
        this.Cost.enabled = !this.IsOwned;
    }

    // Equipped 상태를 업데이트하는 메서드
    public SetEquipped(equipped: boolean) {
        this.Equipped = true;
        this.EquippedImage.enabled = this.Equipped;
    }
}
