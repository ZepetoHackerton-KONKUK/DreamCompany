#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<ZEPETO.Module.TextureResponse>
struct Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4;
// System.Action`2<System.Boolean,ZEPETO.Module.BaseException>
struct Action_2_t17636316C0E8F9177F38AECF733289E94C921915;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5;
// System.Action`2<Zepeto.ZepetoAssetRequest,System.Boolean>
struct Action_2_tF016FE38593BE9C29AFD174EBCCD51CBC2C9DB7C;
// ZEPETO.Module.BaseRequest`1<System.Object>
struct BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0;
// ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>
struct BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Zepeto.ZepetoPreloadAsset>
struct Dictionary_2_t2D9A25EED69507E98AEB1A73C53C2EFAC0AFF6B0;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<Zepeto.ZepetoAssetPath,Zepeto.ZepetoAssetRequest>
struct Dictionary_2_tB4548D0AED29FC644CD3E173ABBB85B6CB419179;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// UniRx.IObservable`1<UniRx.Unit>
struct IObservable_1_t08623191452C3407204500061B0D900E559AC465;
// UniRx.IObservable`1<Zepeto.ZepetoAssetRequest/RequestResult>
struct IObservable_1_tA761AA637DBE66AB4588A404D3E7E0F73F730FB7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Func`3<Zepeto.ZepetoAssetRequest/RequestResult,System.Byte[],UnityEngine.Texture>>
struct List_1_tB97F809DC952D9C9813573EA20DA39871BD33C29;
// System.Collections.Generic.List`1<Zepeto.ZepetoAssetRequest>
struct List_1_t7CE096E6A1C8B92BE46FD65330239227B0A4F9BC;
// UnityEngine.Events.UnityAction`1<Newtonsoft.Json.Linq.JObject>
struct UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// ZEPETO.Module.BaseException
struct BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7;
// ZEPETO.Module.BaseRequest
struct BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431;
// ZEPETO.Module.BaseResponse
struct BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ZEPETO.Module.ISettings
struct ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9;
// Zepeto.IZepetoAssetCacheHandler
struct IZepetoAssetCacheHandler_t64FD01FDD12C93E171152CFF13F09B73C15593D4;
// ZEPETO.Module.Content.Item
struct Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// ZEPETO.Module.LocalizationRuntime
struct LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ZEPETO.Module.ModulePackageInfo
struct ModulePackageInfo_t98378D2691F63C279585857863617CED91105113;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ZEPETO.Module.TextureRequest
struct TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0;
// ZEPETO.Module.TextureResponse
struct TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Zepeto.ZepetoAssetPath
struct ZepetoAssetPath_tEDE8D5A696B5CB674D016E14ECC5D22E111AA451;
// Zepeto.ZepetoAssetRequest
struct ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64;
// ZEPETO.Script.ZepetoScriptPackageInfo
struct ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5;
// ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate
struct ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E;
// ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate
struct LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C;
// ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate
struct ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083;
// ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate
struct SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D;
// ZEPETO.Module.RuntimeInitializer/<>c
struct U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F;
// ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d
struct U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C;
// ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127;
// Zepeto.ZepetoAssetBundleRequest/AssetBundleRef
struct AssetBundleRef_t6EB048AF3530691E04F7AD827B5E9A9A0331A857;
// Zepeto.ZepetoAssetRequest/RequestResult
struct RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Observable_t9050413DAEC890B431CE18A1AC54DA94584CAC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral017276F6A830F22238549FF448BC439C75C6D364;
IL2CPP_EXTERN_C String_t* _stringLiteral02E6C98DF14705D2ABAA73F642007C89EBB45B1B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6538C3807B1180E939841A6CCE04EA1A7BDB0E;
IL2CPP_EXTERN_C String_t* _stringLiteral0DEEEB76217C5584A28A69C4EE37783D816E1513;
IL2CPP_EXTERN_C String_t* _stringLiteral0ECAFB9B3C7701DBA15C882131CA7E9C992C17B8;
IL2CPP_EXTERN_C String_t* _stringLiteral167D2A052E4BC125D5D859265CEECF17EA2B97D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1AAAD9145424237C5D18F9CECC27B558073F546E;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral22F35F65591BB9F459BC702EEEB61512D768139B;
IL2CPP_EXTERN_C String_t* _stringLiteral265A1841E622537BC25CFFD32FFEC9910C587301;
IL2CPP_EXTERN_C String_t* _stringLiteral278E96C82DA48A0C619E47AD9438FA31B4006815;
IL2CPP_EXTERN_C String_t* _stringLiteral2B63BE2AA2C5C84B7F988F7E02DA10C449A25ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3E2D6CFB3C0CA8B119D1B7F9854E1F23A53626;
IL2CPP_EXTERN_C String_t* _stringLiteral2E93888A93BF1358F3EA9D0DABD03E7E287883DD;
IL2CPP_EXTERN_C String_t* _stringLiteral300BB5C0CC5E5ABE5184299EA9F3FDFD046C5D94;
IL2CPP_EXTERN_C String_t* _stringLiteral305796FD0E54569D8E25A569F283604693ABD7F6;
IL2CPP_EXTERN_C String_t* _stringLiteral328D47482B9B2817F9B48AF40F7D66D1C988C762;
IL2CPP_EXTERN_C String_t* _stringLiteral35BA8735A07A684C67FF08845C51B62688D304D6;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1A7AB323F9A75F4B58710A3EA27C832E47BB7E;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9D22131132FABDF1B9F989AA87C9A62414D309;
IL2CPP_EXTERN_C String_t* _stringLiteral40DD39FB9F12B5E59910A00E50589BA748AD5875;
IL2CPP_EXTERN_C String_t* _stringLiteral4D7D97013059C37988379E24E3D48E3972FF554A;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF1C819E70BAC2C0909C8EB07F9DF966A998584;
IL2CPP_EXTERN_C String_t* _stringLiteral4F928B933A5D214ACFC7FD351897916463C31832;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral521A60CF8F562F778BE94392BCC5B28DE03E24B0;
IL2CPP_EXTERN_C String_t* _stringLiteral59C205AA84B5EFAD6AFC33DE1A6095F6F6F89889;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF39474D8BB4A0D504BA34897EE0E3E85DCB7CD;
IL2CPP_EXTERN_C String_t* _stringLiteral5B030A01372BED8C6180537C217EBD94E319F6AF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D201E9173B40D356308AB000733F703AD565A0A;
IL2CPP_EXTERN_C String_t* _stringLiteral6036C4A0CD251C11674BE0E780D9CA802FB23A8F;
IL2CPP_EXTERN_C String_t* _stringLiteral62D7DC8E15054C73CDA139A18F8B2705B5FBD5D1;
IL2CPP_EXTERN_C String_t* _stringLiteral647726063F98BD6AE2C2C92281215C4D4492FDB5;
IL2CPP_EXTERN_C String_t* _stringLiteral64A99A10E7934C6D033E4D4BCD6D15239D625296;
IL2CPP_EXTERN_C String_t* _stringLiteral6671C86C5BE3308C34BAF9F5800DB0AFCC4B770D;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3929BF4B3D06B57E0E7DE248EB3A3910AED1FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6D496D42C9A2364AB851680FD17B5F0A4039D1F1;
IL2CPP_EXTERN_C String_t* _stringLiteral6D606415EA2A0BE797ED05067B82FB262A5C1CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDF21F72237DB81D35C7A8D97014EC5BDEDB379;
IL2CPP_EXTERN_C String_t* _stringLiteral7128B0D447C4128B784A3D6AA144645464C7313C;
IL2CPP_EXTERN_C String_t* _stringLiteral77D21118C5A09E90FADC2CB807C37FCEEE9DC137;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4747C6F31D92E294AE22C69762AE0C4A8429A6;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA85EE1B8671A2C45851662E085B615534A2B6D;
IL2CPP_EXTERN_C String_t* _stringLiteral80B07307BD0D562015949BF74BD101CF6382C94C;
IL2CPP_EXTERN_C String_t* _stringLiteral827CBE0AC8DC86D09C1A8CD4293ED412A436E442;
IL2CPP_EXTERN_C String_t* _stringLiteral87A4DA032FE9267B3EFA121836AFC2BE69BBF92E;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8FF8F0074CF423F353252D03D1508DAA2B3F68;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF1B7D52B1D9EB6799F920270BC13A2F010D6A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9930021DD4949B7A05D1303C5A4A6D7EE5FEF364;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA8CF7BA7B2A69A06F0994DC068C65A88F3515F45;
IL2CPP_EXTERN_C String_t* _stringLiteralA92081E5E6A14A67C522BD10A75979D21927F9CA;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8AEA63B925166C5B68F2DCFCAFE82014F65C76;
IL2CPP_EXTERN_C String_t* _stringLiteralABA728533702D0BB3507C9001523CDC9D53F9C4A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD267D9B26289CED2E57D4A35A961183A3682C4A;
IL2CPP_EXTERN_C String_t* _stringLiteralADA0A60F1C1B49B283CE171FBD37A32170738F68;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4E115CCDB8FFE04B677AD224509067DD82A495;
IL2CPP_EXTERN_C String_t* _stringLiteralB1A51EFD7CFACEDF6B4415CC48AAE880E854852C;
IL2CPP_EXTERN_C String_t* _stringLiteralB38DAC65F6C186D716872223BDED8E595D783700;
IL2CPP_EXTERN_C String_t* _stringLiteralB7621CD64E3675299E8F49662836BB1A9664501E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E80FA212D06ABFA124B4089D1B52EA76D62046;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC158E2D03924FABE8CB0D1C090E4FA1C5D1CEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E4C75293E02D24B9DBD7FC5E0F8B7CF426B507;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C35209011D767ACFAFC889C38FE0E35C144D13;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD0B3333B92B357F1647ACB0B0E4F69DB37A9BE;
IL2CPP_EXTERN_C String_t* _stringLiteralCC568223B9E38430A16D510201CC6463F84C09BD;
IL2CPP_EXTERN_C String_t* _stringLiteralCD147DD43A5B62C762BCDD58029A892F28943A0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05;
IL2CPP_EXTERN_C String_t* _stringLiteralD64C9FE10F888C12A84AC9CE76DCD72FF8977C76;
IL2CPP_EXTERN_C String_t* _stringLiteralD6BC540BD2F8E2176FBB6777CAF101C195B76B56;
IL2CPP_EXTERN_C String_t* _stringLiteralD864BF28F47F52F27809E1673AFB246C5BBB1859;
IL2CPP_EXTERN_C String_t* _stringLiteralD864E08B002988940D584BC700A83040389B4AC0;
IL2CPP_EXTERN_C String_t* _stringLiteralD929B357007DC91E5502BB7076502EE5BE389C63;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBCDD949DAF9559A94A30ACD46FD32AA066009D2;
IL2CPP_EXTERN_C String_t* _stringLiteralDED1C9B191E2DB9E05F1A479F30FFFBAB38CF594;
IL2CPP_EXTERN_C String_t* _stringLiteralE07C036A3D841D6F8A940A3355A22FC6A938D72E;
IL2CPP_EXTERN_C String_t* _stringLiteralE100CA69C7B0A2CE17F96981D0E8150B71ECF2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralE498DD81BD9E076BCE80B0821DE7522A230A2B72;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CAA3E8F9398446BC83D331EA464049A56F7DB4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7C90B8809693DCD2C6BB8A8BDDB88E1C766701;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D559A82DDCFB84D3FD9A652253733833553DDB;
IL2CPP_EXTERN_C String_t* _stringLiteralF9E9BE601B6B04022C4D382AC7B11294F8D26552;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRequest_1_Build_m861A57EA0F9ECF3ADAA2F671E41EC9D62E38EC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRequest_1__ctor_m861AD1C21BCDA75AD96BD5894C5E43B7004EB13E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRequest_HandleRequestOperation_m36B6B52165C1F0B767BC192EC2E51AC47737811E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_1_Raise_mD3A9F248B43A4D6765E7771F568C331B202CE38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_1_Subscribe_m4102D0478B7C27BB9F65211E5C5BC2FDBD3C223E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mC4ADA5776323C8EEC559FC89CFB95D27F3AE8E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisModulePackageInfo_t98378D2691F63C279585857863617CED91105113_m530178C57558C4474DDBB08365872E9A1554769D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m4478DD45F3600E6DFAA7436A576054CC8F785136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureRequest_U3CSendRequestU3Eg__sendRequestU7C3_0_m795DCAF583528C2DB9AD6F534FD85B6F29363DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_MoveNext_m72FF5CF5EF994A276CA4E8D13B4B3FDC25B4635C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_Collections_IEnumerator_Reset_mD8285B2580F621B5590F7A51E3E7D999966365B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeOnLoadU3Eb__0_0_m2910BA067267EC81240F5D18FA9529428667ED27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CSendRequestU3Eb__1_m0281980D090BEADCADD6EDB4F6A85613CBD3DF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m5F35B629E101B0B589F21783546CBA3948B23C94_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC700967CEFAA9EF2BCC99774ED2E50F16A8F3928 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ZEPETO.Module.BaseResponse
struct BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57  : public RuntimeObject
{
public:
	// System.Boolean ZEPETO.Module.BaseResponse::isSuccess
	bool ___isSuccess_0;
	// System.String ZEPETO.Module.BaseResponse::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_isSuccess_0() { return static_cast<int32_t>(offsetof(BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57, ___isSuccess_0)); }
	inline bool get_isSuccess_0() const { return ___isSuccess_0; }
	inline bool* get_address_of_isSuccess_0() { return &___isSuccess_0; }
	inline void set_isSuccess_0(bool value)
	{
		___isSuccess_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// ZEPETO.Module.LocalizationRuntime
struct LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2  : public RuntimeObject
{
public:

public:
};

struct LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.Module.LocalizationRuntime::_localizationData
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____localizationData_1;

public:
	inline static int32_t get_offset_of__localizationData_1() { return static_cast<int32_t>(offsetof(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields, ____localizationData_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__localizationData_1() const { return ____localizationData_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__localizationData_1() { return &____localizationData_1; }
	inline void set__localizationData_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____localizationData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localizationData_1), (void*)value);
	}
};


// ZEPETO.Module.ModuleDelegate
struct ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2  : public RuntimeObject
{
public:

public:
};

struct ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields
{
public:
	// ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate ZEPETO.Module.ModuleDelegate::ProcessIAP
	ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * ___ProcessIAP_0;
	// ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate ZEPETO.Module.ModuleDelegate::LocalizationGetRaw
	LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * ___LocalizationGetRaw_1;
	// ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate ZEPETO.Module.ModuleDelegate::ExitWorldForSignUp
	ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * ___ExitWorldForSignUp_2;
	// ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate ZEPETO.Module.ModuleDelegate::SendModuleAnalytics
	SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * ___SendModuleAnalytics_3;

public:
	inline static int32_t get_offset_of_ProcessIAP_0() { return static_cast<int32_t>(offsetof(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields, ___ProcessIAP_0)); }
	inline ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * get_ProcessIAP_0() const { return ___ProcessIAP_0; }
	inline ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 ** get_address_of_ProcessIAP_0() { return &___ProcessIAP_0; }
	inline void set_ProcessIAP_0(ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * value)
	{
		___ProcessIAP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessIAP_0), (void*)value);
	}

	inline static int32_t get_offset_of_LocalizationGetRaw_1() { return static_cast<int32_t>(offsetof(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields, ___LocalizationGetRaw_1)); }
	inline LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * get_LocalizationGetRaw_1() const { return ___LocalizationGetRaw_1; }
	inline LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C ** get_address_of_LocalizationGetRaw_1() { return &___LocalizationGetRaw_1; }
	inline void set_LocalizationGetRaw_1(LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * value)
	{
		___LocalizationGetRaw_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalizationGetRaw_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExitWorldForSignUp_2() { return static_cast<int32_t>(offsetof(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields, ___ExitWorldForSignUp_2)); }
	inline ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * get_ExitWorldForSignUp_2() const { return ___ExitWorldForSignUp_2; }
	inline ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E ** get_address_of_ExitWorldForSignUp_2() { return &___ExitWorldForSignUp_2; }
	inline void set_ExitWorldForSignUp_2(ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * value)
	{
		___ExitWorldForSignUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExitWorldForSignUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_SendModuleAnalytics_3() { return static_cast<int32_t>(offsetof(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields, ___SendModuleAnalytics_3)); }
	inline SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * get_SendModuleAnalytics_3() const { return ___SendModuleAnalytics_3; }
	inline SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D ** get_address_of_SendModuleAnalytics_3() { return &___SendModuleAnalytics_3; }
	inline void set_SendModuleAnalytics_3(SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * value)
	{
		___SendModuleAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendModuleAnalytics_3), (void*)value);
	}
};


// ZEPETO.Module.ModuleLocalization
struct ModuleLocalization_tE37E13659E08DAB7EBD86FEE2B9D7AFD0E100B3D  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Module.ModuleLocalizationKeys
struct ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D  : public RuntimeObject
{
public:

public:
};

struct ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields
{
public:
	// System.String ZEPETO.Module.ModuleLocalizationKeys::COMMON_ERROR_NETWORK_OCCURED
	String_t* ___COMMON_ERROR_NETWORK_OCCURED_0;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::COMMON_CONFIRM_CANCLE
	String_t* ___COMMON_CONFIRM_CANCLE_1;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::COMMON_CONFIRM
	String_t* ___COMMON_CONFIRM_2;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::LEAVE_WORLD_POPUP
	String_t* ___LEAVE_WORLD_POPUP_3;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::TOAST_FAILED_IAP
	String_t* ___TOAST_FAILED_IAP_4;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::USER_CANCLLED
	String_t* ___USER_CANCLLED_5;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE
	String_t* ___ITEM_PURCHASE_6;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_SUCCESS
	String_t* ___ITEM_PURCHASE_SUCCESS_7;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_BUTTON
	String_t* ___ITEM_PURCHASE_BUTTON_8;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_INACTIVE
	String_t* ___ITEM_INACTIVE_9;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_CHARGE
	String_t* ___ITEM_PURCHASE_CHARGE_10;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_CHARGE_BUTTON
	String_t* ___ITEM_PURCHASE_CHARGE_BUTTON_11;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_CHARGE_GUIDE
	String_t* ___ITEM_PURCHASE_CHARGE_GUIDE_12;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_PRICE_CHANGE_TITLE
	String_t* ___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_PRICE_CHANGE_DESC
	String_t* ___ITEM_PURCHASE_PRICE_CHANGE_DESC_14;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_PRICE_CHANGE_BUTTON
	String_t* ___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_TESTER_GUIDE
	String_t* ___ITEM_PURCHASE_TESTER_GUIDE_16;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ALERT_PURCHASE_ALREADY_HAVE
	String_t* ___ALERT_PURCHASE_ALREADY_HAVE_17;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::PURCHASE_INACTIVE_ITEM
	String_t* ___PURCHASE_INACTIVE_ITEM_18;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::PURCHASE_CHARGE_CUSTOM_CURRENCY
	String_t* ___PURCHASE_CHARGE_CUSTOM_CURRENCY_19;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::GUEST_ITEM_PURCHASE
	String_t* ___GUEST_ITEM_PURCHASE_20;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::GUEST_DESCRIPTION
	String_t* ___GUEST_DESCRIPTION_21;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::GUEST_SIGNUP_BUTTON
	String_t* ___GUEST_SIGNUP_BUTTON_22;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::CREDITSHOP_USAGE_TITLE
	String_t* ___CREDITSHOP_USAGE_TITLE_23;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::CREDITSHOP_USAGE_DESCRIPTION
	String_t* ___CREDITSHOP_USAGE_DESCRIPTION_24;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::CREDITSHOP_GOOGLE_PENDING_MSG
	String_t* ___CREDITSHOP_GOOGLE_PENDING_MSG_25;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::CURRENCY_ZEM
	String_t* ___CURRENCY_ZEM_26;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::CURRENCY_COIN
	String_t* ___CURRENCY_COIN_27;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_PURCHASE
	String_t* ___SHOP_PURCHASE_28;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT
	String_t* ___SHOP_GIFT_29;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ITEM_INACTIVE
	String_t* ___SHOP_GIFT_ITEM_INACTIVE_30;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ITEM_SHOULD
	String_t* ___SHOP_GIFT_ITEM_SHOULD_31;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ITEM_REMAINING_BALACE
	String_t* ___SHOP_GIFT_ITEM_REMAINING_BALACE_32;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_RECEIVED_ITEM_SHOULD
	String_t* ___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_TO
	String_t* ___SHOP_GIFT_TO_34;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_COIN_CHARGE_LATER
	String_t* ___SHOP_COIN_CHARGE_LATER_35;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ITEM_SUCCESS
	String_t* ___SHOP_GIFT_ITEM_SUCCESS_36;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_CHARGE_BUTTON
	String_t* ___SHOP_GIFT_CHARGE_BUTTON_37;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GUEST_CHARGE_JOIN
	String_t* ___SHOP_GUEST_CHARGE_JOIN_38;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ALERT_ALREADY_HAVE
	String_t* ___SHOP_GIFT_ALERT_ALREADY_HAVE_39;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_CHARGE_CUSTOM_CURRENCY
	String_t* ___SHOP_CHARGE_CUSTOM_CURRENCY_40;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_PRICE_CHANGE_DESCRIPTION
	String_t* ___SHOP_PRICE_CHANGE_DESCRIPTION_41;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_INVALID_USER_CREATED
	String_t* ___SHOP_GIFT_INVALID_USER_CREATED_42;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ALREADY_HAS_ITEM
	String_t* ___SHOP_GIFT_ALREADY_HAS_ITEM_43;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ALLOWED_SELF
	String_t* ___SHOP_GIFT_ALLOWED_SELF_44;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_ONLY_REGISTERED
	String_t* ___SHOP_GIFT_ONLY_REGISTERED_45;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SHOP_GIFT_INVALID_MESSAGE
	String_t* ___SHOP_GIFT_INVALID_MESSAGE_46;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::USER_NO_DATA
	String_t* ___USER_NO_DATA_47;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::GIFTBOX_REFUSED
	String_t* ___GIFTBOX_REFUSED_48;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::ITEM_PURCHASE_CHARGE_TERMS
	String_t* ___ITEM_PURCHASE_CHARGE_TERMS_49;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::TERMS_PAID_SERVICE
	String_t* ___TERMS_PAID_SERVICE_50;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SIGNUP_SUBTITLE_USE_SOCIAL
	String_t* ___SIGNUP_SUBTITLE_USE_SOCIAL_51;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::GS_SUGGEST_SIGNUP_BTN
	String_t* ___GS_SUGGEST_SIGNUP_BTN_52;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::LIVE_HOST_THANKS_MSG_DONE
	String_t* ___LIVE_HOST_THANKS_MSG_DONE_53;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::LIVE_HOST_THANKS_MSG_FAIL
	String_t* ___LIVE_HOST_THANKS_MSG_FAIL_54;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::COMMON_SEND_BTN
	String_t* ___COMMON_SEND_BTN_55;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SOCIAL_INCLUDE_USER_NO_DATA
	String_t* ___SOCIAL_INCLUDE_USER_NO_DATA_56;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SOCIAL_GUEST_SEND_MESSAGE
	String_t* ___SOCIAL_GUEST_SEND_MESSAGE_57;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SOCIAL_POLICY_LIMITS
	String_t* ___SOCIAL_POLICY_LIMITS_58;
	// System.String ZEPETO.Module.ModuleLocalizationKeys::SOCIAL_INVAILD_MESSAGE
	String_t* ___SOCIAL_INVAILD_MESSAGE_59;

public:
	inline static int32_t get_offset_of_COMMON_ERROR_NETWORK_OCCURED_0() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___COMMON_ERROR_NETWORK_OCCURED_0)); }
	inline String_t* get_COMMON_ERROR_NETWORK_OCCURED_0() const { return ___COMMON_ERROR_NETWORK_OCCURED_0; }
	inline String_t** get_address_of_COMMON_ERROR_NETWORK_OCCURED_0() { return &___COMMON_ERROR_NETWORK_OCCURED_0; }
	inline void set_COMMON_ERROR_NETWORK_OCCURED_0(String_t* value)
	{
		___COMMON_ERROR_NETWORK_OCCURED_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___COMMON_ERROR_NETWORK_OCCURED_0), (void*)value);
	}

	inline static int32_t get_offset_of_COMMON_CONFIRM_CANCLE_1() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___COMMON_CONFIRM_CANCLE_1)); }
	inline String_t* get_COMMON_CONFIRM_CANCLE_1() const { return ___COMMON_CONFIRM_CANCLE_1; }
	inline String_t** get_address_of_COMMON_CONFIRM_CANCLE_1() { return &___COMMON_CONFIRM_CANCLE_1; }
	inline void set_COMMON_CONFIRM_CANCLE_1(String_t* value)
	{
		___COMMON_CONFIRM_CANCLE_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___COMMON_CONFIRM_CANCLE_1), (void*)value);
	}

	inline static int32_t get_offset_of_COMMON_CONFIRM_2() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___COMMON_CONFIRM_2)); }
	inline String_t* get_COMMON_CONFIRM_2() const { return ___COMMON_CONFIRM_2; }
	inline String_t** get_address_of_COMMON_CONFIRM_2() { return &___COMMON_CONFIRM_2; }
	inline void set_COMMON_CONFIRM_2(String_t* value)
	{
		___COMMON_CONFIRM_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___COMMON_CONFIRM_2), (void*)value);
	}

	inline static int32_t get_offset_of_LEAVE_WORLD_POPUP_3() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___LEAVE_WORLD_POPUP_3)); }
	inline String_t* get_LEAVE_WORLD_POPUP_3() const { return ___LEAVE_WORLD_POPUP_3; }
	inline String_t** get_address_of_LEAVE_WORLD_POPUP_3() { return &___LEAVE_WORLD_POPUP_3; }
	inline void set_LEAVE_WORLD_POPUP_3(String_t* value)
	{
		___LEAVE_WORLD_POPUP_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LEAVE_WORLD_POPUP_3), (void*)value);
	}

	inline static int32_t get_offset_of_TOAST_FAILED_IAP_4() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___TOAST_FAILED_IAP_4)); }
	inline String_t* get_TOAST_FAILED_IAP_4() const { return ___TOAST_FAILED_IAP_4; }
	inline String_t** get_address_of_TOAST_FAILED_IAP_4() { return &___TOAST_FAILED_IAP_4; }
	inline void set_TOAST_FAILED_IAP_4(String_t* value)
	{
		___TOAST_FAILED_IAP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TOAST_FAILED_IAP_4), (void*)value);
	}

	inline static int32_t get_offset_of_USER_CANCLLED_5() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___USER_CANCLLED_5)); }
	inline String_t* get_USER_CANCLLED_5() const { return ___USER_CANCLLED_5; }
	inline String_t** get_address_of_USER_CANCLLED_5() { return &___USER_CANCLLED_5; }
	inline void set_USER_CANCLLED_5(String_t* value)
	{
		___USER_CANCLLED_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USER_CANCLLED_5), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_6() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_6)); }
	inline String_t* get_ITEM_PURCHASE_6() const { return ___ITEM_PURCHASE_6; }
	inline String_t** get_address_of_ITEM_PURCHASE_6() { return &___ITEM_PURCHASE_6; }
	inline void set_ITEM_PURCHASE_6(String_t* value)
	{
		___ITEM_PURCHASE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_6), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_SUCCESS_7() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_SUCCESS_7)); }
	inline String_t* get_ITEM_PURCHASE_SUCCESS_7() const { return ___ITEM_PURCHASE_SUCCESS_7; }
	inline String_t** get_address_of_ITEM_PURCHASE_SUCCESS_7() { return &___ITEM_PURCHASE_SUCCESS_7; }
	inline void set_ITEM_PURCHASE_SUCCESS_7(String_t* value)
	{
		___ITEM_PURCHASE_SUCCESS_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_SUCCESS_7), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_BUTTON_8() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_BUTTON_8)); }
	inline String_t* get_ITEM_PURCHASE_BUTTON_8() const { return ___ITEM_PURCHASE_BUTTON_8; }
	inline String_t** get_address_of_ITEM_PURCHASE_BUTTON_8() { return &___ITEM_PURCHASE_BUTTON_8; }
	inline void set_ITEM_PURCHASE_BUTTON_8(String_t* value)
	{
		___ITEM_PURCHASE_BUTTON_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_BUTTON_8), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_INACTIVE_9() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_INACTIVE_9)); }
	inline String_t* get_ITEM_INACTIVE_9() const { return ___ITEM_INACTIVE_9; }
	inline String_t** get_address_of_ITEM_INACTIVE_9() { return &___ITEM_INACTIVE_9; }
	inline void set_ITEM_INACTIVE_9(String_t* value)
	{
		___ITEM_INACTIVE_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_INACTIVE_9), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_CHARGE_10() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_CHARGE_10)); }
	inline String_t* get_ITEM_PURCHASE_CHARGE_10() const { return ___ITEM_PURCHASE_CHARGE_10; }
	inline String_t** get_address_of_ITEM_PURCHASE_CHARGE_10() { return &___ITEM_PURCHASE_CHARGE_10; }
	inline void set_ITEM_PURCHASE_CHARGE_10(String_t* value)
	{
		___ITEM_PURCHASE_CHARGE_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_CHARGE_10), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_CHARGE_BUTTON_11() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_CHARGE_BUTTON_11)); }
	inline String_t* get_ITEM_PURCHASE_CHARGE_BUTTON_11() const { return ___ITEM_PURCHASE_CHARGE_BUTTON_11; }
	inline String_t** get_address_of_ITEM_PURCHASE_CHARGE_BUTTON_11() { return &___ITEM_PURCHASE_CHARGE_BUTTON_11; }
	inline void set_ITEM_PURCHASE_CHARGE_BUTTON_11(String_t* value)
	{
		___ITEM_PURCHASE_CHARGE_BUTTON_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_CHARGE_BUTTON_11), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_CHARGE_GUIDE_12() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_CHARGE_GUIDE_12)); }
	inline String_t* get_ITEM_PURCHASE_CHARGE_GUIDE_12() const { return ___ITEM_PURCHASE_CHARGE_GUIDE_12; }
	inline String_t** get_address_of_ITEM_PURCHASE_CHARGE_GUIDE_12() { return &___ITEM_PURCHASE_CHARGE_GUIDE_12; }
	inline void set_ITEM_PURCHASE_CHARGE_GUIDE_12(String_t* value)
	{
		___ITEM_PURCHASE_CHARGE_GUIDE_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_CHARGE_GUIDE_12), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_PRICE_CHANGE_TITLE_13() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13)); }
	inline String_t* get_ITEM_PURCHASE_PRICE_CHANGE_TITLE_13() const { return ___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13; }
	inline String_t** get_address_of_ITEM_PURCHASE_PRICE_CHANGE_TITLE_13() { return &___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13; }
	inline void set_ITEM_PURCHASE_PRICE_CHANGE_TITLE_13(String_t* value)
	{
		___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_PRICE_CHANGE_TITLE_13), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_PRICE_CHANGE_DESC_14() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_PRICE_CHANGE_DESC_14)); }
	inline String_t* get_ITEM_PURCHASE_PRICE_CHANGE_DESC_14() const { return ___ITEM_PURCHASE_PRICE_CHANGE_DESC_14; }
	inline String_t** get_address_of_ITEM_PURCHASE_PRICE_CHANGE_DESC_14() { return &___ITEM_PURCHASE_PRICE_CHANGE_DESC_14; }
	inline void set_ITEM_PURCHASE_PRICE_CHANGE_DESC_14(String_t* value)
	{
		___ITEM_PURCHASE_PRICE_CHANGE_DESC_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_PRICE_CHANGE_DESC_14), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15)); }
	inline String_t* get_ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15() const { return ___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15; }
	inline String_t** get_address_of_ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15() { return &___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15; }
	inline void set_ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15(String_t* value)
	{
		___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_TESTER_GUIDE_16() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_TESTER_GUIDE_16)); }
	inline String_t* get_ITEM_PURCHASE_TESTER_GUIDE_16() const { return ___ITEM_PURCHASE_TESTER_GUIDE_16; }
	inline String_t** get_address_of_ITEM_PURCHASE_TESTER_GUIDE_16() { return &___ITEM_PURCHASE_TESTER_GUIDE_16; }
	inline void set_ITEM_PURCHASE_TESTER_GUIDE_16(String_t* value)
	{
		___ITEM_PURCHASE_TESTER_GUIDE_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_TESTER_GUIDE_16), (void*)value);
	}

	inline static int32_t get_offset_of_ALERT_PURCHASE_ALREADY_HAVE_17() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ALERT_PURCHASE_ALREADY_HAVE_17)); }
	inline String_t* get_ALERT_PURCHASE_ALREADY_HAVE_17() const { return ___ALERT_PURCHASE_ALREADY_HAVE_17; }
	inline String_t** get_address_of_ALERT_PURCHASE_ALREADY_HAVE_17() { return &___ALERT_PURCHASE_ALREADY_HAVE_17; }
	inline void set_ALERT_PURCHASE_ALREADY_HAVE_17(String_t* value)
	{
		___ALERT_PURCHASE_ALREADY_HAVE_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALERT_PURCHASE_ALREADY_HAVE_17), (void*)value);
	}

	inline static int32_t get_offset_of_PURCHASE_INACTIVE_ITEM_18() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___PURCHASE_INACTIVE_ITEM_18)); }
	inline String_t* get_PURCHASE_INACTIVE_ITEM_18() const { return ___PURCHASE_INACTIVE_ITEM_18; }
	inline String_t** get_address_of_PURCHASE_INACTIVE_ITEM_18() { return &___PURCHASE_INACTIVE_ITEM_18; }
	inline void set_PURCHASE_INACTIVE_ITEM_18(String_t* value)
	{
		___PURCHASE_INACTIVE_ITEM_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PURCHASE_INACTIVE_ITEM_18), (void*)value);
	}

	inline static int32_t get_offset_of_PURCHASE_CHARGE_CUSTOM_CURRENCY_19() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___PURCHASE_CHARGE_CUSTOM_CURRENCY_19)); }
	inline String_t* get_PURCHASE_CHARGE_CUSTOM_CURRENCY_19() const { return ___PURCHASE_CHARGE_CUSTOM_CURRENCY_19; }
	inline String_t** get_address_of_PURCHASE_CHARGE_CUSTOM_CURRENCY_19() { return &___PURCHASE_CHARGE_CUSTOM_CURRENCY_19; }
	inline void set_PURCHASE_CHARGE_CUSTOM_CURRENCY_19(String_t* value)
	{
		___PURCHASE_CHARGE_CUSTOM_CURRENCY_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PURCHASE_CHARGE_CUSTOM_CURRENCY_19), (void*)value);
	}

	inline static int32_t get_offset_of_GUEST_ITEM_PURCHASE_20() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___GUEST_ITEM_PURCHASE_20)); }
	inline String_t* get_GUEST_ITEM_PURCHASE_20() const { return ___GUEST_ITEM_PURCHASE_20; }
	inline String_t** get_address_of_GUEST_ITEM_PURCHASE_20() { return &___GUEST_ITEM_PURCHASE_20; }
	inline void set_GUEST_ITEM_PURCHASE_20(String_t* value)
	{
		___GUEST_ITEM_PURCHASE_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUEST_ITEM_PURCHASE_20), (void*)value);
	}

	inline static int32_t get_offset_of_GUEST_DESCRIPTION_21() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___GUEST_DESCRIPTION_21)); }
	inline String_t* get_GUEST_DESCRIPTION_21() const { return ___GUEST_DESCRIPTION_21; }
	inline String_t** get_address_of_GUEST_DESCRIPTION_21() { return &___GUEST_DESCRIPTION_21; }
	inline void set_GUEST_DESCRIPTION_21(String_t* value)
	{
		___GUEST_DESCRIPTION_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUEST_DESCRIPTION_21), (void*)value);
	}

	inline static int32_t get_offset_of_GUEST_SIGNUP_BUTTON_22() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___GUEST_SIGNUP_BUTTON_22)); }
	inline String_t* get_GUEST_SIGNUP_BUTTON_22() const { return ___GUEST_SIGNUP_BUTTON_22; }
	inline String_t** get_address_of_GUEST_SIGNUP_BUTTON_22() { return &___GUEST_SIGNUP_BUTTON_22; }
	inline void set_GUEST_SIGNUP_BUTTON_22(String_t* value)
	{
		___GUEST_SIGNUP_BUTTON_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUEST_SIGNUP_BUTTON_22), (void*)value);
	}

	inline static int32_t get_offset_of_CREDITSHOP_USAGE_TITLE_23() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___CREDITSHOP_USAGE_TITLE_23)); }
	inline String_t* get_CREDITSHOP_USAGE_TITLE_23() const { return ___CREDITSHOP_USAGE_TITLE_23; }
	inline String_t** get_address_of_CREDITSHOP_USAGE_TITLE_23() { return &___CREDITSHOP_USAGE_TITLE_23; }
	inline void set_CREDITSHOP_USAGE_TITLE_23(String_t* value)
	{
		___CREDITSHOP_USAGE_TITLE_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CREDITSHOP_USAGE_TITLE_23), (void*)value);
	}

	inline static int32_t get_offset_of_CREDITSHOP_USAGE_DESCRIPTION_24() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___CREDITSHOP_USAGE_DESCRIPTION_24)); }
	inline String_t* get_CREDITSHOP_USAGE_DESCRIPTION_24() const { return ___CREDITSHOP_USAGE_DESCRIPTION_24; }
	inline String_t** get_address_of_CREDITSHOP_USAGE_DESCRIPTION_24() { return &___CREDITSHOP_USAGE_DESCRIPTION_24; }
	inline void set_CREDITSHOP_USAGE_DESCRIPTION_24(String_t* value)
	{
		___CREDITSHOP_USAGE_DESCRIPTION_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CREDITSHOP_USAGE_DESCRIPTION_24), (void*)value);
	}

	inline static int32_t get_offset_of_CREDITSHOP_GOOGLE_PENDING_MSG_25() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___CREDITSHOP_GOOGLE_PENDING_MSG_25)); }
	inline String_t* get_CREDITSHOP_GOOGLE_PENDING_MSG_25() const { return ___CREDITSHOP_GOOGLE_PENDING_MSG_25; }
	inline String_t** get_address_of_CREDITSHOP_GOOGLE_PENDING_MSG_25() { return &___CREDITSHOP_GOOGLE_PENDING_MSG_25; }
	inline void set_CREDITSHOP_GOOGLE_PENDING_MSG_25(String_t* value)
	{
		___CREDITSHOP_GOOGLE_PENDING_MSG_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CREDITSHOP_GOOGLE_PENDING_MSG_25), (void*)value);
	}

	inline static int32_t get_offset_of_CURRENCY_ZEM_26() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___CURRENCY_ZEM_26)); }
	inline String_t* get_CURRENCY_ZEM_26() const { return ___CURRENCY_ZEM_26; }
	inline String_t** get_address_of_CURRENCY_ZEM_26() { return &___CURRENCY_ZEM_26; }
	inline void set_CURRENCY_ZEM_26(String_t* value)
	{
		___CURRENCY_ZEM_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CURRENCY_ZEM_26), (void*)value);
	}

	inline static int32_t get_offset_of_CURRENCY_COIN_27() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___CURRENCY_COIN_27)); }
	inline String_t* get_CURRENCY_COIN_27() const { return ___CURRENCY_COIN_27; }
	inline String_t** get_address_of_CURRENCY_COIN_27() { return &___CURRENCY_COIN_27; }
	inline void set_CURRENCY_COIN_27(String_t* value)
	{
		___CURRENCY_COIN_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CURRENCY_COIN_27), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_PURCHASE_28() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_PURCHASE_28)); }
	inline String_t* get_SHOP_PURCHASE_28() const { return ___SHOP_PURCHASE_28; }
	inline String_t** get_address_of_SHOP_PURCHASE_28() { return &___SHOP_PURCHASE_28; }
	inline void set_SHOP_PURCHASE_28(String_t* value)
	{
		___SHOP_PURCHASE_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_PURCHASE_28), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_29() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_29)); }
	inline String_t* get_SHOP_GIFT_29() const { return ___SHOP_GIFT_29; }
	inline String_t** get_address_of_SHOP_GIFT_29() { return &___SHOP_GIFT_29; }
	inline void set_SHOP_GIFT_29(String_t* value)
	{
		___SHOP_GIFT_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_29), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ITEM_INACTIVE_30() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ITEM_INACTIVE_30)); }
	inline String_t* get_SHOP_GIFT_ITEM_INACTIVE_30() const { return ___SHOP_GIFT_ITEM_INACTIVE_30; }
	inline String_t** get_address_of_SHOP_GIFT_ITEM_INACTIVE_30() { return &___SHOP_GIFT_ITEM_INACTIVE_30; }
	inline void set_SHOP_GIFT_ITEM_INACTIVE_30(String_t* value)
	{
		___SHOP_GIFT_ITEM_INACTIVE_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ITEM_INACTIVE_30), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ITEM_SHOULD_31() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ITEM_SHOULD_31)); }
	inline String_t* get_SHOP_GIFT_ITEM_SHOULD_31() const { return ___SHOP_GIFT_ITEM_SHOULD_31; }
	inline String_t** get_address_of_SHOP_GIFT_ITEM_SHOULD_31() { return &___SHOP_GIFT_ITEM_SHOULD_31; }
	inline void set_SHOP_GIFT_ITEM_SHOULD_31(String_t* value)
	{
		___SHOP_GIFT_ITEM_SHOULD_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ITEM_SHOULD_31), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ITEM_REMAINING_BALACE_32() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ITEM_REMAINING_BALACE_32)); }
	inline String_t* get_SHOP_GIFT_ITEM_REMAINING_BALACE_32() const { return ___SHOP_GIFT_ITEM_REMAINING_BALACE_32; }
	inline String_t** get_address_of_SHOP_GIFT_ITEM_REMAINING_BALACE_32() { return &___SHOP_GIFT_ITEM_REMAINING_BALACE_32; }
	inline void set_SHOP_GIFT_ITEM_REMAINING_BALACE_32(String_t* value)
	{
		___SHOP_GIFT_ITEM_REMAINING_BALACE_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ITEM_REMAINING_BALACE_32), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_RECEIVED_ITEM_SHOULD_33() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33)); }
	inline String_t* get_SHOP_GIFT_RECEIVED_ITEM_SHOULD_33() const { return ___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33; }
	inline String_t** get_address_of_SHOP_GIFT_RECEIVED_ITEM_SHOULD_33() { return &___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33; }
	inline void set_SHOP_GIFT_RECEIVED_ITEM_SHOULD_33(String_t* value)
	{
		___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_RECEIVED_ITEM_SHOULD_33), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_TO_34() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_TO_34)); }
	inline String_t* get_SHOP_GIFT_TO_34() const { return ___SHOP_GIFT_TO_34; }
	inline String_t** get_address_of_SHOP_GIFT_TO_34() { return &___SHOP_GIFT_TO_34; }
	inline void set_SHOP_GIFT_TO_34(String_t* value)
	{
		___SHOP_GIFT_TO_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_TO_34), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_COIN_CHARGE_LATER_35() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_COIN_CHARGE_LATER_35)); }
	inline String_t* get_SHOP_COIN_CHARGE_LATER_35() const { return ___SHOP_COIN_CHARGE_LATER_35; }
	inline String_t** get_address_of_SHOP_COIN_CHARGE_LATER_35() { return &___SHOP_COIN_CHARGE_LATER_35; }
	inline void set_SHOP_COIN_CHARGE_LATER_35(String_t* value)
	{
		___SHOP_COIN_CHARGE_LATER_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_COIN_CHARGE_LATER_35), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ITEM_SUCCESS_36() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ITEM_SUCCESS_36)); }
	inline String_t* get_SHOP_GIFT_ITEM_SUCCESS_36() const { return ___SHOP_GIFT_ITEM_SUCCESS_36; }
	inline String_t** get_address_of_SHOP_GIFT_ITEM_SUCCESS_36() { return &___SHOP_GIFT_ITEM_SUCCESS_36; }
	inline void set_SHOP_GIFT_ITEM_SUCCESS_36(String_t* value)
	{
		___SHOP_GIFT_ITEM_SUCCESS_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ITEM_SUCCESS_36), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_CHARGE_BUTTON_37() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_CHARGE_BUTTON_37)); }
	inline String_t* get_SHOP_GIFT_CHARGE_BUTTON_37() const { return ___SHOP_GIFT_CHARGE_BUTTON_37; }
	inline String_t** get_address_of_SHOP_GIFT_CHARGE_BUTTON_37() { return &___SHOP_GIFT_CHARGE_BUTTON_37; }
	inline void set_SHOP_GIFT_CHARGE_BUTTON_37(String_t* value)
	{
		___SHOP_GIFT_CHARGE_BUTTON_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_CHARGE_BUTTON_37), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GUEST_CHARGE_JOIN_38() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GUEST_CHARGE_JOIN_38)); }
	inline String_t* get_SHOP_GUEST_CHARGE_JOIN_38() const { return ___SHOP_GUEST_CHARGE_JOIN_38; }
	inline String_t** get_address_of_SHOP_GUEST_CHARGE_JOIN_38() { return &___SHOP_GUEST_CHARGE_JOIN_38; }
	inline void set_SHOP_GUEST_CHARGE_JOIN_38(String_t* value)
	{
		___SHOP_GUEST_CHARGE_JOIN_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GUEST_CHARGE_JOIN_38), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ALERT_ALREADY_HAVE_39() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ALERT_ALREADY_HAVE_39)); }
	inline String_t* get_SHOP_GIFT_ALERT_ALREADY_HAVE_39() const { return ___SHOP_GIFT_ALERT_ALREADY_HAVE_39; }
	inline String_t** get_address_of_SHOP_GIFT_ALERT_ALREADY_HAVE_39() { return &___SHOP_GIFT_ALERT_ALREADY_HAVE_39; }
	inline void set_SHOP_GIFT_ALERT_ALREADY_HAVE_39(String_t* value)
	{
		___SHOP_GIFT_ALERT_ALREADY_HAVE_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ALERT_ALREADY_HAVE_39), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_CHARGE_CUSTOM_CURRENCY_40() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_CHARGE_CUSTOM_CURRENCY_40)); }
	inline String_t* get_SHOP_CHARGE_CUSTOM_CURRENCY_40() const { return ___SHOP_CHARGE_CUSTOM_CURRENCY_40; }
	inline String_t** get_address_of_SHOP_CHARGE_CUSTOM_CURRENCY_40() { return &___SHOP_CHARGE_CUSTOM_CURRENCY_40; }
	inline void set_SHOP_CHARGE_CUSTOM_CURRENCY_40(String_t* value)
	{
		___SHOP_CHARGE_CUSTOM_CURRENCY_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_CHARGE_CUSTOM_CURRENCY_40), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_PRICE_CHANGE_DESCRIPTION_41() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_PRICE_CHANGE_DESCRIPTION_41)); }
	inline String_t* get_SHOP_PRICE_CHANGE_DESCRIPTION_41() const { return ___SHOP_PRICE_CHANGE_DESCRIPTION_41; }
	inline String_t** get_address_of_SHOP_PRICE_CHANGE_DESCRIPTION_41() { return &___SHOP_PRICE_CHANGE_DESCRIPTION_41; }
	inline void set_SHOP_PRICE_CHANGE_DESCRIPTION_41(String_t* value)
	{
		___SHOP_PRICE_CHANGE_DESCRIPTION_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_PRICE_CHANGE_DESCRIPTION_41), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_INVALID_USER_CREATED_42() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_INVALID_USER_CREATED_42)); }
	inline String_t* get_SHOP_GIFT_INVALID_USER_CREATED_42() const { return ___SHOP_GIFT_INVALID_USER_CREATED_42; }
	inline String_t** get_address_of_SHOP_GIFT_INVALID_USER_CREATED_42() { return &___SHOP_GIFT_INVALID_USER_CREATED_42; }
	inline void set_SHOP_GIFT_INVALID_USER_CREATED_42(String_t* value)
	{
		___SHOP_GIFT_INVALID_USER_CREATED_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_INVALID_USER_CREATED_42), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ALREADY_HAS_ITEM_43() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ALREADY_HAS_ITEM_43)); }
	inline String_t* get_SHOP_GIFT_ALREADY_HAS_ITEM_43() const { return ___SHOP_GIFT_ALREADY_HAS_ITEM_43; }
	inline String_t** get_address_of_SHOP_GIFT_ALREADY_HAS_ITEM_43() { return &___SHOP_GIFT_ALREADY_HAS_ITEM_43; }
	inline void set_SHOP_GIFT_ALREADY_HAS_ITEM_43(String_t* value)
	{
		___SHOP_GIFT_ALREADY_HAS_ITEM_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ALREADY_HAS_ITEM_43), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ALLOWED_SELF_44() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ALLOWED_SELF_44)); }
	inline String_t* get_SHOP_GIFT_ALLOWED_SELF_44() const { return ___SHOP_GIFT_ALLOWED_SELF_44; }
	inline String_t** get_address_of_SHOP_GIFT_ALLOWED_SELF_44() { return &___SHOP_GIFT_ALLOWED_SELF_44; }
	inline void set_SHOP_GIFT_ALLOWED_SELF_44(String_t* value)
	{
		___SHOP_GIFT_ALLOWED_SELF_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ALLOWED_SELF_44), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_ONLY_REGISTERED_45() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_ONLY_REGISTERED_45)); }
	inline String_t* get_SHOP_GIFT_ONLY_REGISTERED_45() const { return ___SHOP_GIFT_ONLY_REGISTERED_45; }
	inline String_t** get_address_of_SHOP_GIFT_ONLY_REGISTERED_45() { return &___SHOP_GIFT_ONLY_REGISTERED_45; }
	inline void set_SHOP_GIFT_ONLY_REGISTERED_45(String_t* value)
	{
		___SHOP_GIFT_ONLY_REGISTERED_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_ONLY_REGISTERED_45), (void*)value);
	}

	inline static int32_t get_offset_of_SHOP_GIFT_INVALID_MESSAGE_46() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SHOP_GIFT_INVALID_MESSAGE_46)); }
	inline String_t* get_SHOP_GIFT_INVALID_MESSAGE_46() const { return ___SHOP_GIFT_INVALID_MESSAGE_46; }
	inline String_t** get_address_of_SHOP_GIFT_INVALID_MESSAGE_46() { return &___SHOP_GIFT_INVALID_MESSAGE_46; }
	inline void set_SHOP_GIFT_INVALID_MESSAGE_46(String_t* value)
	{
		___SHOP_GIFT_INVALID_MESSAGE_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SHOP_GIFT_INVALID_MESSAGE_46), (void*)value);
	}

	inline static int32_t get_offset_of_USER_NO_DATA_47() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___USER_NO_DATA_47)); }
	inline String_t* get_USER_NO_DATA_47() const { return ___USER_NO_DATA_47; }
	inline String_t** get_address_of_USER_NO_DATA_47() { return &___USER_NO_DATA_47; }
	inline void set_USER_NO_DATA_47(String_t* value)
	{
		___USER_NO_DATA_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USER_NO_DATA_47), (void*)value);
	}

	inline static int32_t get_offset_of_GIFTBOX_REFUSED_48() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___GIFTBOX_REFUSED_48)); }
	inline String_t* get_GIFTBOX_REFUSED_48() const { return ___GIFTBOX_REFUSED_48; }
	inline String_t** get_address_of_GIFTBOX_REFUSED_48() { return &___GIFTBOX_REFUSED_48; }
	inline void set_GIFTBOX_REFUSED_48(String_t* value)
	{
		___GIFTBOX_REFUSED_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GIFTBOX_REFUSED_48), (void*)value);
	}

	inline static int32_t get_offset_of_ITEM_PURCHASE_CHARGE_TERMS_49() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___ITEM_PURCHASE_CHARGE_TERMS_49)); }
	inline String_t* get_ITEM_PURCHASE_CHARGE_TERMS_49() const { return ___ITEM_PURCHASE_CHARGE_TERMS_49; }
	inline String_t** get_address_of_ITEM_PURCHASE_CHARGE_TERMS_49() { return &___ITEM_PURCHASE_CHARGE_TERMS_49; }
	inline void set_ITEM_PURCHASE_CHARGE_TERMS_49(String_t* value)
	{
		___ITEM_PURCHASE_CHARGE_TERMS_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ITEM_PURCHASE_CHARGE_TERMS_49), (void*)value);
	}

	inline static int32_t get_offset_of_TERMS_PAID_SERVICE_50() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___TERMS_PAID_SERVICE_50)); }
	inline String_t* get_TERMS_PAID_SERVICE_50() const { return ___TERMS_PAID_SERVICE_50; }
	inline String_t** get_address_of_TERMS_PAID_SERVICE_50() { return &___TERMS_PAID_SERVICE_50; }
	inline void set_TERMS_PAID_SERVICE_50(String_t* value)
	{
		___TERMS_PAID_SERVICE_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TERMS_PAID_SERVICE_50), (void*)value);
	}

	inline static int32_t get_offset_of_SIGNUP_SUBTITLE_USE_SOCIAL_51() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SIGNUP_SUBTITLE_USE_SOCIAL_51)); }
	inline String_t* get_SIGNUP_SUBTITLE_USE_SOCIAL_51() const { return ___SIGNUP_SUBTITLE_USE_SOCIAL_51; }
	inline String_t** get_address_of_SIGNUP_SUBTITLE_USE_SOCIAL_51() { return &___SIGNUP_SUBTITLE_USE_SOCIAL_51; }
	inline void set_SIGNUP_SUBTITLE_USE_SOCIAL_51(String_t* value)
	{
		___SIGNUP_SUBTITLE_USE_SOCIAL_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SIGNUP_SUBTITLE_USE_SOCIAL_51), (void*)value);
	}

	inline static int32_t get_offset_of_GS_SUGGEST_SIGNUP_BTN_52() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___GS_SUGGEST_SIGNUP_BTN_52)); }
	inline String_t* get_GS_SUGGEST_SIGNUP_BTN_52() const { return ___GS_SUGGEST_SIGNUP_BTN_52; }
	inline String_t** get_address_of_GS_SUGGEST_SIGNUP_BTN_52() { return &___GS_SUGGEST_SIGNUP_BTN_52; }
	inline void set_GS_SUGGEST_SIGNUP_BTN_52(String_t* value)
	{
		___GS_SUGGEST_SIGNUP_BTN_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GS_SUGGEST_SIGNUP_BTN_52), (void*)value);
	}

	inline static int32_t get_offset_of_LIVE_HOST_THANKS_MSG_DONE_53() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___LIVE_HOST_THANKS_MSG_DONE_53)); }
	inline String_t* get_LIVE_HOST_THANKS_MSG_DONE_53() const { return ___LIVE_HOST_THANKS_MSG_DONE_53; }
	inline String_t** get_address_of_LIVE_HOST_THANKS_MSG_DONE_53() { return &___LIVE_HOST_THANKS_MSG_DONE_53; }
	inline void set_LIVE_HOST_THANKS_MSG_DONE_53(String_t* value)
	{
		___LIVE_HOST_THANKS_MSG_DONE_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LIVE_HOST_THANKS_MSG_DONE_53), (void*)value);
	}

	inline static int32_t get_offset_of_LIVE_HOST_THANKS_MSG_FAIL_54() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___LIVE_HOST_THANKS_MSG_FAIL_54)); }
	inline String_t* get_LIVE_HOST_THANKS_MSG_FAIL_54() const { return ___LIVE_HOST_THANKS_MSG_FAIL_54; }
	inline String_t** get_address_of_LIVE_HOST_THANKS_MSG_FAIL_54() { return &___LIVE_HOST_THANKS_MSG_FAIL_54; }
	inline void set_LIVE_HOST_THANKS_MSG_FAIL_54(String_t* value)
	{
		___LIVE_HOST_THANKS_MSG_FAIL_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LIVE_HOST_THANKS_MSG_FAIL_54), (void*)value);
	}

	inline static int32_t get_offset_of_COMMON_SEND_BTN_55() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___COMMON_SEND_BTN_55)); }
	inline String_t* get_COMMON_SEND_BTN_55() const { return ___COMMON_SEND_BTN_55; }
	inline String_t** get_address_of_COMMON_SEND_BTN_55() { return &___COMMON_SEND_BTN_55; }
	inline void set_COMMON_SEND_BTN_55(String_t* value)
	{
		___COMMON_SEND_BTN_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___COMMON_SEND_BTN_55), (void*)value);
	}

	inline static int32_t get_offset_of_SOCIAL_INCLUDE_USER_NO_DATA_56() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SOCIAL_INCLUDE_USER_NO_DATA_56)); }
	inline String_t* get_SOCIAL_INCLUDE_USER_NO_DATA_56() const { return ___SOCIAL_INCLUDE_USER_NO_DATA_56; }
	inline String_t** get_address_of_SOCIAL_INCLUDE_USER_NO_DATA_56() { return &___SOCIAL_INCLUDE_USER_NO_DATA_56; }
	inline void set_SOCIAL_INCLUDE_USER_NO_DATA_56(String_t* value)
	{
		___SOCIAL_INCLUDE_USER_NO_DATA_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOCIAL_INCLUDE_USER_NO_DATA_56), (void*)value);
	}

	inline static int32_t get_offset_of_SOCIAL_GUEST_SEND_MESSAGE_57() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SOCIAL_GUEST_SEND_MESSAGE_57)); }
	inline String_t* get_SOCIAL_GUEST_SEND_MESSAGE_57() const { return ___SOCIAL_GUEST_SEND_MESSAGE_57; }
	inline String_t** get_address_of_SOCIAL_GUEST_SEND_MESSAGE_57() { return &___SOCIAL_GUEST_SEND_MESSAGE_57; }
	inline void set_SOCIAL_GUEST_SEND_MESSAGE_57(String_t* value)
	{
		___SOCIAL_GUEST_SEND_MESSAGE_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOCIAL_GUEST_SEND_MESSAGE_57), (void*)value);
	}

	inline static int32_t get_offset_of_SOCIAL_POLICY_LIMITS_58() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SOCIAL_POLICY_LIMITS_58)); }
	inline String_t* get_SOCIAL_POLICY_LIMITS_58() const { return ___SOCIAL_POLICY_LIMITS_58; }
	inline String_t** get_address_of_SOCIAL_POLICY_LIMITS_58() { return &___SOCIAL_POLICY_LIMITS_58; }
	inline void set_SOCIAL_POLICY_LIMITS_58(String_t* value)
	{
		___SOCIAL_POLICY_LIMITS_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOCIAL_POLICY_LIMITS_58), (void*)value);
	}

	inline static int32_t get_offset_of_SOCIAL_INVAILD_MESSAGE_59() { return static_cast<int32_t>(offsetof(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields, ___SOCIAL_INVAILD_MESSAGE_59)); }
	inline String_t* get_SOCIAL_INVAILD_MESSAGE_59() const { return ___SOCIAL_INVAILD_MESSAGE_59; }
	inline String_t** get_address_of_SOCIAL_INVAILD_MESSAGE_59() { return &___SOCIAL_INVAILD_MESSAGE_59; }
	inline void set_SOCIAL_INVAILD_MESSAGE_59(String_t* value)
	{
		___SOCIAL_INVAILD_MESSAGE_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOCIAL_INVAILD_MESSAGE_59), (void*)value);
	}
};


// ZEPETO.Module.ModuleSettings
struct ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97  : public RuntimeObject
{
public:

public:
};

struct ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields
{
public:
	// System.Boolean ZEPETO.Module.ModuleSettings::isHorizontal
	bool ___isHorizontal_0;
	// ZEPETO.Module.ISettings ZEPETO.Module.ModuleSettings::Settings
	RuntimeObject* ___Settings_1;

public:
	inline static int32_t get_offset_of_isHorizontal_0() { return static_cast<int32_t>(offsetof(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields, ___isHorizontal_0)); }
	inline bool get_isHorizontal_0() const { return ___isHorizontal_0; }
	inline bool* get_address_of_isHorizontal_0() { return &___isHorizontal_0; }
	inline void set_isHorizontal_0(bool value)
	{
		___isHorizontal_0 = value;
	}

	inline static int32_t get_offset_of_Settings_1() { return static_cast<int32_t>(offsetof(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields, ___Settings_1)); }
	inline RuntimeObject* get_Settings_1() const { return ___Settings_1; }
	inline RuntimeObject** get_address_of_Settings_1() { return &___Settings_1; }
	inline void set_Settings_1(RuntimeObject* value)
	{
		___Settings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_1), (void*)value);
	}
};


// ZEPETO.Module.ModuleUtils
struct ModuleUtils_tC755380702C8F661BFFA11445DCB960E4A82A77B  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Module.RuntimeInitializer
struct RuntimeInitializer_tD6A764FBEEFA1089476BEE52DB952BE648FF9569  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ZEPETO.Script.ZepetoScriptPackageInfo
struct ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Module.RuntimeInitializer/<>c
struct U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields
{
public:
	// ZEPETO.Module.RuntimeInitializer/<>c ZEPETO.Module.RuntimeInitializer/<>c::<>9
	U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction`1<Newtonsoft.Json.Linq.JObject> ZEPETO.Module.RuntimeInitializer/<>c::<>9__0_0
	UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d
struct U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C  : public RuntimeObject
{
public:
	// System.Int32 ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ZEPETO.Module.TextureRequest ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::<>4__this
	TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * ___U3CU3E4__this_2;
	// ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0 ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::<>8__1
	U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C, ___U3CU3E4__this_2)); }
	inline TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127  : public RuntimeObject
{
public:
	// Zepeto.ZepetoAssetRequest ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0::request
	ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127, ___request_0)); }
	inline ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * get_request_0() const { return ___request_0; }
	inline ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}
};


// Zepeto.ZepetoAssetRequest/RequestResult
struct RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963  : public RuntimeObject
{
public:
	// System.Object Zepeto.ZepetoAssetRequest/RequestResult::asset
	RuntimeObject * ___asset_0;
	// System.IDisposable Zepeto.ZepetoAssetRequest/RequestResult::dependency
	RuntimeObject* ___dependency_1;
	// Zepeto.ZepetoAssetBundleRequest/AssetBundleRef Zepeto.ZepetoAssetRequest/RequestResult::assetBundle
	AssetBundleRef_t6EB048AF3530691E04F7AD827B5E9A9A0331A857 * ___assetBundle_2;
	// System.Boolean Zepeto.ZepetoAssetRequest/RequestResult::CanRelease
	bool ___CanRelease_3;
	// System.Int32 Zepeto.ZepetoAssetRequest/RequestResult::referenceCount
	int32_t ___referenceCount_4;
	// System.Action Zepeto.ZepetoAssetRequest/RequestResult::Destroy
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___Destroy_5;

public:
	inline static int32_t get_offset_of_asset_0() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___asset_0)); }
	inline RuntimeObject * get_asset_0() const { return ___asset_0; }
	inline RuntimeObject ** get_address_of_asset_0() { return &___asset_0; }
	inline void set_asset_0(RuntimeObject * value)
	{
		___asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_dependency_1() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___dependency_1)); }
	inline RuntimeObject* get_dependency_1() const { return ___dependency_1; }
	inline RuntimeObject** get_address_of_dependency_1() { return &___dependency_1; }
	inline void set_dependency_1(RuntimeObject* value)
	{
		___dependency_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dependency_1), (void*)value);
	}

	inline static int32_t get_offset_of_assetBundle_2() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___assetBundle_2)); }
	inline AssetBundleRef_t6EB048AF3530691E04F7AD827B5E9A9A0331A857 * get_assetBundle_2() const { return ___assetBundle_2; }
	inline AssetBundleRef_t6EB048AF3530691E04F7AD827B5E9A9A0331A857 ** get_address_of_assetBundle_2() { return &___assetBundle_2; }
	inline void set_assetBundle_2(AssetBundleRef_t6EB048AF3530691E04F7AD827B5E9A9A0331A857 * value)
	{
		___assetBundle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetBundle_2), (void*)value);
	}

	inline static int32_t get_offset_of_CanRelease_3() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___CanRelease_3)); }
	inline bool get_CanRelease_3() const { return ___CanRelease_3; }
	inline bool* get_address_of_CanRelease_3() { return &___CanRelease_3; }
	inline void set_CanRelease_3(bool value)
	{
		___CanRelease_3 = value;
	}

	inline static int32_t get_offset_of_referenceCount_4() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___referenceCount_4)); }
	inline int32_t get_referenceCount_4() const { return ___referenceCount_4; }
	inline int32_t* get_address_of_referenceCount_4() { return &___referenceCount_4; }
	inline void set_referenceCount_4(int32_t value)
	{
		___referenceCount_4 = value;
	}

	inline static int32_t get_offset_of_Destroy_5() { return static_cast<int32_t>(offsetof(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963, ___Destroy_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_Destroy_5() const { return ___Destroy_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_Destroy_5() { return &___Destroy_5; }
	inline void set_Destroy_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___Destroy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Destroy_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// ZEPETO.Module.ModulePackageInfo
struct ModulePackageInfo_t98378D2691F63C279585857863617CED91105113  : public ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5
{
public:
	// System.String ZEPETO.Module.ModulePackageInfo::launcherMediaUrl
	String_t* ___launcherMediaUrl_0;
	// System.String ZEPETO.Module.ModulePackageInfo::launcherMediaType
	String_t* ___launcherMediaType_1;

public:
	inline static int32_t get_offset_of_launcherMediaUrl_0() { return static_cast<int32_t>(offsetof(ModulePackageInfo_t98378D2691F63C279585857863617CED91105113, ___launcherMediaUrl_0)); }
	inline String_t* get_launcherMediaUrl_0() const { return ___launcherMediaUrl_0; }
	inline String_t** get_address_of_launcherMediaUrl_0() { return &___launcherMediaUrl_0; }
	inline void set_launcherMediaUrl_0(String_t* value)
	{
		___launcherMediaUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___launcherMediaUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_launcherMediaType_1() { return static_cast<int32_t>(offsetof(ModulePackageInfo_t98378D2691F63C279585857863617CED91105113, ___launcherMediaType_1)); }
	inline String_t* get_launcherMediaType_1() const { return ___launcherMediaType_1; }
	inline String_t** get_address_of_launcherMediaType_1() { return &___launcherMediaType_1; }
	inline void set_launcherMediaType_1(String_t* value)
	{
		___launcherMediaType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___launcherMediaType_1), (void*)value);
	}
};


// ZEPETO.Module.TextureResponse
struct TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA  : public BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57
{
public:
	// UnityEngine.Texture2D ZEPETO.Module.TextureResponse::texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture_2;

public:
	inline static int32_t get_offset_of_texture_2() { return static_cast<int32_t>(offsetof(TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA, ___texture_2)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_texture_2() const { return ___texture_2; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_texture_2() { return &___texture_2; }
	inline void set_texture_2(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_2), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// Zepeto.ZepetoAssetRequest
struct ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// Zepeto.ZepetoAssetRequest/RequestResult Zepeto.ZepetoAssetRequest::_result
	RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * ____result_11;
	// UniRx.IObservable`1<Zepeto.ZepetoAssetRequest/RequestResult> Zepeto.ZepetoAssetRequest::_assetLoader
	RuntimeObject* ____assetLoader_12;
	// Zepeto.ZepetoAssetPath Zepeto.ZepetoAssetRequest::assetPath
	ZepetoAssetPath_tEDE8D5A696B5CB674D016E14ECC5D22E111AA451 * ___assetPath_13;
	// System.Boolean Zepeto.ZepetoAssetRequest::_isComplete
	bool ____isComplete_14;
	// System.Collections.Generic.List`1<Zepeto.ZepetoAssetRequest> Zepeto.ZepetoAssetRequest::_callbacks
	List_1_t7CE096E6A1C8B92BE46FD65330239227B0A4F9BC * ____callbacks_15;
	// Zepeto.ZepetoAssetRequest Zepeto.ZepetoAssetRequest::cachedRequest
	ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * ___cachedRequest_16;
	// System.Exception Zepeto.ZepetoAssetRequest::exception
	Exception_t * ___exception_17;

public:
	inline static int32_t get_offset_of__result_11() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ____result_11)); }
	inline RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * get__result_11() const { return ____result_11; }
	inline RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 ** get_address_of__result_11() { return &____result_11; }
	inline void set__result_11(RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * value)
	{
		____result_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_11), (void*)value);
	}

	inline static int32_t get_offset_of__assetLoader_12() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ____assetLoader_12)); }
	inline RuntimeObject* get__assetLoader_12() const { return ____assetLoader_12; }
	inline RuntimeObject** get_address_of__assetLoader_12() { return &____assetLoader_12; }
	inline void set__assetLoader_12(RuntimeObject* value)
	{
		____assetLoader_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetLoader_12), (void*)value);
	}

	inline static int32_t get_offset_of_assetPath_13() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ___assetPath_13)); }
	inline ZepetoAssetPath_tEDE8D5A696B5CB674D016E14ECC5D22E111AA451 * get_assetPath_13() const { return ___assetPath_13; }
	inline ZepetoAssetPath_tEDE8D5A696B5CB674D016E14ECC5D22E111AA451 ** get_address_of_assetPath_13() { return &___assetPath_13; }
	inline void set_assetPath_13(ZepetoAssetPath_tEDE8D5A696B5CB674D016E14ECC5D22E111AA451 * value)
	{
		___assetPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetPath_13), (void*)value);
	}

	inline static int32_t get_offset_of__isComplete_14() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ____isComplete_14)); }
	inline bool get__isComplete_14() const { return ____isComplete_14; }
	inline bool* get_address_of__isComplete_14() { return &____isComplete_14; }
	inline void set__isComplete_14(bool value)
	{
		____isComplete_14 = value;
	}

	inline static int32_t get_offset_of__callbacks_15() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ____callbacks_15)); }
	inline List_1_t7CE096E6A1C8B92BE46FD65330239227B0A4F9BC * get__callbacks_15() const { return ____callbacks_15; }
	inline List_1_t7CE096E6A1C8B92BE46FD65330239227B0A4F9BC ** get_address_of__callbacks_15() { return &____callbacks_15; }
	inline void set__callbacks_15(List_1_t7CE096E6A1C8B92BE46FD65330239227B0A4F9BC * value)
	{
		____callbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacks_15), (void*)value);
	}

	inline static int32_t get_offset_of_cachedRequest_16() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ___cachedRequest_16)); }
	inline ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * get_cachedRequest_16() const { return ___cachedRequest_16; }
	inline ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 ** get_address_of_cachedRequest_16() { return &___cachedRequest_16; }
	inline void set_cachedRequest_16(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * value)
	{
		___cachedRequest_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRequest_16), (void*)value);
	}

	inline static int32_t get_offset_of_exception_17() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64, ___exception_17)); }
	inline Exception_t * get_exception_17() const { return ___exception_17; }
	inline Exception_t ** get_address_of_exception_17() { return &___exception_17; }
	inline void set_exception_17(Exception_t * value)
	{
		___exception_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_17), (void*)value);
	}
};

struct ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Func`3<Zepeto.ZepetoAssetRequest/RequestResult,System.Byte[],UnityEngine.Texture>> Zepeto.ZepetoAssetRequest::customTextureLoader
	List_1_tB97F809DC952D9C9813573EA20DA39871BD33C29 * ___customTextureLoader_0;
	// System.Action`2<Zepeto.ZepetoAssetRequest,System.Boolean> Zepeto.ZepetoAssetRequest::RequestHandler
	Action_2_tF016FE38593BE9C29AFD174EBCCD51CBC2C9DB7C * ___RequestHandler_1;
	// Zepeto.IZepetoAssetCacheHandler Zepeto.ZepetoAssetRequest::CacheHandler
	RuntimeObject* ___CacheHandler_2;
	// System.Int32 Zepeto.ZepetoAssetRequest::_activeRequestCount
	int32_t ____activeRequestCount_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Zepeto.ZepetoPreloadAsset> Zepeto.ZepetoAssetRequest::_preloadAssets
	Dictionary_2_t2D9A25EED69507E98AEB1A73C53C2EFAC0AFF6B0 * ____preloadAssets_4;
	// System.Int64 Zepeto.ZepetoAssetRequest::_cacheSize
	int64_t ____cacheSize_5;
	// System.Collections.Generic.HashSet`1<System.String> Zepeto.ZepetoAssetRequest::_loadedKeys
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____loadedKeys_6;
	// System.String Zepeto.ZepetoAssetRequest::_temporaryCachePath
	String_t* ____temporaryCachePath_7;
	// System.String Zepeto.ZepetoAssetRequest::_assetCachePath
	String_t* ____assetCachePath_8;
	// System.Collections.Generic.Dictionary`2<Zepeto.ZepetoAssetPath,Zepeto.ZepetoAssetRequest> Zepeto.ZepetoAssetRequest::AssetRequestCache
	Dictionary_2_tB4548D0AED29FC644CD3E173ABBB85B6CB419179 * ___AssetRequestCache_9;
	// System.Boolean Zepeto.ZepetoAssetRequest::<ForceAsyncRequest>k__BackingField
	bool ___U3CForceAsyncRequestU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_customTextureLoader_0() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ___customTextureLoader_0)); }
	inline List_1_tB97F809DC952D9C9813573EA20DA39871BD33C29 * get_customTextureLoader_0() const { return ___customTextureLoader_0; }
	inline List_1_tB97F809DC952D9C9813573EA20DA39871BD33C29 ** get_address_of_customTextureLoader_0() { return &___customTextureLoader_0; }
	inline void set_customTextureLoader_0(List_1_tB97F809DC952D9C9813573EA20DA39871BD33C29 * value)
	{
		___customTextureLoader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTextureLoader_0), (void*)value);
	}

	inline static int32_t get_offset_of_RequestHandler_1() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ___RequestHandler_1)); }
	inline Action_2_tF016FE38593BE9C29AFD174EBCCD51CBC2C9DB7C * get_RequestHandler_1() const { return ___RequestHandler_1; }
	inline Action_2_tF016FE38593BE9C29AFD174EBCCD51CBC2C9DB7C ** get_address_of_RequestHandler_1() { return &___RequestHandler_1; }
	inline void set_RequestHandler_1(Action_2_tF016FE38593BE9C29AFD174EBCCD51CBC2C9DB7C * value)
	{
		___RequestHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequestHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_CacheHandler_2() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ___CacheHandler_2)); }
	inline RuntimeObject* get_CacheHandler_2() const { return ___CacheHandler_2; }
	inline RuntimeObject** get_address_of_CacheHandler_2() { return &___CacheHandler_2; }
	inline void set_CacheHandler_2(RuntimeObject* value)
	{
		___CacheHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CacheHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of__activeRequestCount_3() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____activeRequestCount_3)); }
	inline int32_t get__activeRequestCount_3() const { return ____activeRequestCount_3; }
	inline int32_t* get_address_of__activeRequestCount_3() { return &____activeRequestCount_3; }
	inline void set__activeRequestCount_3(int32_t value)
	{
		____activeRequestCount_3 = value;
	}

	inline static int32_t get_offset_of__preloadAssets_4() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____preloadAssets_4)); }
	inline Dictionary_2_t2D9A25EED69507E98AEB1A73C53C2EFAC0AFF6B0 * get__preloadAssets_4() const { return ____preloadAssets_4; }
	inline Dictionary_2_t2D9A25EED69507E98AEB1A73C53C2EFAC0AFF6B0 ** get_address_of__preloadAssets_4() { return &____preloadAssets_4; }
	inline void set__preloadAssets_4(Dictionary_2_t2D9A25EED69507E98AEB1A73C53C2EFAC0AFF6B0 * value)
	{
		____preloadAssets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preloadAssets_4), (void*)value);
	}

	inline static int32_t get_offset_of__cacheSize_5() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____cacheSize_5)); }
	inline int64_t get__cacheSize_5() const { return ____cacheSize_5; }
	inline int64_t* get_address_of__cacheSize_5() { return &____cacheSize_5; }
	inline void set__cacheSize_5(int64_t value)
	{
		____cacheSize_5 = value;
	}

	inline static int32_t get_offset_of__loadedKeys_6() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____loadedKeys_6)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__loadedKeys_6() const { return ____loadedKeys_6; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__loadedKeys_6() { return &____loadedKeys_6; }
	inline void set__loadedKeys_6(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____loadedKeys_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadedKeys_6), (void*)value);
	}

	inline static int32_t get_offset_of__temporaryCachePath_7() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____temporaryCachePath_7)); }
	inline String_t* get__temporaryCachePath_7() const { return ____temporaryCachePath_7; }
	inline String_t** get_address_of__temporaryCachePath_7() { return &____temporaryCachePath_7; }
	inline void set__temporaryCachePath_7(String_t* value)
	{
		____temporaryCachePath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____temporaryCachePath_7), (void*)value);
	}

	inline static int32_t get_offset_of__assetCachePath_8() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ____assetCachePath_8)); }
	inline String_t* get__assetCachePath_8() const { return ____assetCachePath_8; }
	inline String_t** get_address_of__assetCachePath_8() { return &____assetCachePath_8; }
	inline void set__assetCachePath_8(String_t* value)
	{
		____assetCachePath_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetCachePath_8), (void*)value);
	}

	inline static int32_t get_offset_of_AssetRequestCache_9() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ___AssetRequestCache_9)); }
	inline Dictionary_2_tB4548D0AED29FC644CD3E173ABBB85B6CB419179 * get_AssetRequestCache_9() const { return ___AssetRequestCache_9; }
	inline Dictionary_2_tB4548D0AED29FC644CD3E173ABBB85B6CB419179 ** get_address_of_AssetRequestCache_9() { return &___AssetRequestCache_9; }
	inline void set_AssetRequestCache_9(Dictionary_2_tB4548D0AED29FC644CD3E173ABBB85B6CB419179 * value)
	{
		___AssetRequestCache_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssetRequestCache_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CForceAsyncRequestU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_StaticFields, ___U3CForceAsyncRequestU3Ek__BackingField_10)); }
	inline bool get_U3CForceAsyncRequestU3Ek__BackingField_10() const { return ___U3CForceAsyncRequestU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CForceAsyncRequestU3Ek__BackingField_10() { return &___U3CForceAsyncRequestU3Ek__BackingField_10; }
	inline void set_U3CForceAsyncRequestU3Ek__BackingField_10(bool value)
	{
		___U3CForceAsyncRequestU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ZEPETO.Module.ErrorCode
struct ErrorCode_tF39E50A45B7E11C8E8CFE34991DB45BCAC051A78 
{
public:
	// System.Int32 ZEPETO.Module.ErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_tF39E50A45B7E11C8E8CFE34991DB45BCAC051A78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_18)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ZEPETO.Module.RequestMethod
struct RequestMethod_tAC557574FAA850877BB9ABE5302C7C9652F764E2 
{
public:
	// System.Int32 ZEPETO.Module.RequestMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestMethod_tAC557574FAA850877BB9ABE5302C7C9652F764E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SystemLanguage
struct SystemLanguage_tF8A9C86102588DE9A5041719609C2693D283B3A6 
{
public:
	// System.Int32 UnityEngine.SystemLanguage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemLanguage_tF8A9C86102588DE9A5041719609C2693D283B3A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Zepeto.ZepetoPropertyFlag
struct ZepetoPropertyFlag_t400C0522F2ED79D1193144B3792E353301368307 
{
public:
	// System.Byte Zepeto.ZepetoPropertyFlag::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZepetoPropertyFlag_t400C0522F2ED79D1193144B3792E353301368307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zepeto.ZepetoAssetRequest/AssetType
struct AssetType_tA428381532A073CC58F968A4FC2502ABE1BA38E8 
{
public:
	// System.Int32 Zepeto.ZepetoAssetRequest/AssetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssetType_tA428381532A073CC58F968A4FC2502ABE1BA38E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZEPETO.Module.BaseException
struct BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7  : public Exception_t
{
public:
	// System.Int32 ZEPETO.Module.BaseException::errorCode
	int32_t ___errorCode_17;
	// System.String ZEPETO.Module.BaseException::downloadHandlerRawText
	String_t* ___downloadHandlerRawText_18;

public:
	inline static int32_t get_offset_of_errorCode_17() { return static_cast<int32_t>(offsetof(BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7, ___errorCode_17)); }
	inline int32_t get_errorCode_17() const { return ___errorCode_17; }
	inline int32_t* get_address_of_errorCode_17() { return &___errorCode_17; }
	inline void set_errorCode_17(int32_t value)
	{
		___errorCode_17 = value;
	}

	inline static int32_t get_offset_of_downloadHandlerRawText_18() { return static_cast<int32_t>(offsetof(BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7, ___downloadHandlerRawText_18)); }
	inline String_t* get_downloadHandlerRawText_18() const { return ___downloadHandlerRawText_18; }
	inline String_t** get_address_of_downloadHandlerRawText_18() { return &___downloadHandlerRawText_18; }
	inline void set_downloadHandlerRawText_18(String_t* value)
	{
		___downloadHandlerRawText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___downloadHandlerRawText_18), (void*)value);
	}
};


// ZEPETO.Module.BaseRequest
struct BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Boolean ZEPETO.Module.BaseRequest::_isDone
	bool ____isDone_0;
	// ZEPETO.Module.RequestMethod ZEPETO.Module.BaseRequest::_method
	int32_t ____method_1;
	// UnityEngine.Networking.UnityWebRequest ZEPETO.Module.BaseRequest::_request
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____request_2;
	// System.String ZEPETO.Module.BaseRequest::_host
	String_t* ____host_3;
	// System.String ZEPETO.Module.BaseRequest::_path
	String_t* ____path_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.Module.BaseRequest::_mHeader
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____mHeader_5;
	// Newtonsoft.Json.Linq.JObject ZEPETO.Module.BaseRequest::_postBody
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ____postBody_6;
	// System.Action`2<System.Boolean,ZEPETO.Module.BaseException> ZEPETO.Module.BaseRequest::_onChainActionCompleted
	Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * ____onChainActionCompleted_7;
	// ZEPETO.Module.BaseRequest ZEPETO.Module.BaseRequest::_preRequest
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * ____preRequest_8;
	// System.String ZEPETO.Module.BaseRequest::_appendQueryString
	String_t* ____appendQueryString_9;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____method_1)); }
	inline int32_t get__method_1() const { return ____method_1; }
	inline int32_t* get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(int32_t value)
	{
		____method_1 = value;
	}

	inline static int32_t get_offset_of__request_2() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____request_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__request_2() const { return ____request_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__request_2() { return &____request_2; }
	inline void set__request_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____request_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_2), (void*)value);
	}

	inline static int32_t get_offset_of__host_3() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____host_3)); }
	inline String_t* get__host_3() const { return ____host_3; }
	inline String_t** get_address_of__host_3() { return &____host_3; }
	inline void set__host_3(String_t* value)
	{
		____host_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__mHeader_5() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____mHeader_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__mHeader_5() const { return ____mHeader_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__mHeader_5() { return &____mHeader_5; }
	inline void set__mHeader_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____mHeader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mHeader_5), (void*)value);
	}

	inline static int32_t get_offset_of__postBody_6() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____postBody_6)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get__postBody_6() const { return ____postBody_6; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of__postBody_6() { return &____postBody_6; }
	inline void set__postBody_6(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		____postBody_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____postBody_6), (void*)value);
	}

	inline static int32_t get_offset_of__onChainActionCompleted_7() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____onChainActionCompleted_7)); }
	inline Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * get__onChainActionCompleted_7() const { return ____onChainActionCompleted_7; }
	inline Action_2_t17636316C0E8F9177F38AECF733289E94C921915 ** get_address_of__onChainActionCompleted_7() { return &____onChainActionCompleted_7; }
	inline void set__onChainActionCompleted_7(Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * value)
	{
		____onChainActionCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onChainActionCompleted_7), (void*)value);
	}

	inline static int32_t get_offset_of__preRequest_8() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____preRequest_8)); }
	inline BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * get__preRequest_8() const { return ____preRequest_8; }
	inline BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 ** get_address_of__preRequest_8() { return &____preRequest_8; }
	inline void set__preRequest_8(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * value)
	{
		____preRequest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preRequest_8), (void*)value);
	}

	inline static int32_t get_offset_of__appendQueryString_9() { return static_cast<int32_t>(offsetof(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431, ____appendQueryString_9)); }
	inline String_t* get__appendQueryString_9() const { return ____appendQueryString_9; }
	inline String_t** get_address_of__appendQueryString_9() { return &____appendQueryString_9; }
	inline void set__appendQueryString_9(String_t* value)
	{
		____appendQueryString_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____appendQueryString_9), (void*)value);
	}
};


// ZEPETO.Module.Content.Item
struct Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008  : public RuntimeObject
{
public:
	// System.String ZEPETO.Module.Content.Item::id
	String_t* ___id_0;
	// Zepeto.ZepetoPropertyFlag ZEPETO.Module.Content.Item::property
	uint8_t ___property_1;
	// System.Boolean ZEPETO.Module.Content.Item::isZem
	bool ___isZem_2;
	// System.String ZEPETO.Module.Content.Item::badge
	String_t* ___badge_3;
	// System.String[] ZEPETO.Module.Content.Item::keywords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords_4;
	// System.String ZEPETO.Module.Content.Item::creator
	String_t* ___creator_5;
	// System.String ZEPETO.Module.Content.Item::type
	String_t* ___type_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___property_1)); }
	inline uint8_t get_property_1() const { return ___property_1; }
	inline uint8_t* get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(uint8_t value)
	{
		___property_1 = value;
	}

	inline static int32_t get_offset_of_isZem_2() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___isZem_2)); }
	inline bool get_isZem_2() const { return ___isZem_2; }
	inline bool* get_address_of_isZem_2() { return &___isZem_2; }
	inline void set_isZem_2(bool value)
	{
		___isZem_2 = value;
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___badge_3)); }
	inline String_t* get_badge_3() const { return ___badge_3; }
	inline String_t** get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(String_t* value)
	{
		___badge_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___badge_3), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_4() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___keywords_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_keywords_4() const { return ___keywords_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_keywords_4() { return &___keywords_4; }
	inline void set_keywords_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___keywords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_4), (void*)value);
	}

	inline static int32_t get_offset_of_creator_5() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___creator_5)); }
	inline String_t* get_creator_5() const { return ___creator_5; }
	inline String_t** get_address_of_creator_5() { return &___creator_5; }
	inline void set_creator_5(String_t* value)
	{
		___creator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creator_5), (void*)value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_6), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Module.TextureResponse>
struct Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,ZEPETO.Module.BaseException>
struct Action_2_t17636316C0E8F9177F38AECF733289E94C921915  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Module.BaseRequest`1<System.Object>
struct BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0  : public BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431
{
public:
	// TResponse ZEPETO.Module.BaseRequest`1::<responseData>k__BackingField
	RuntimeObject * ___U3CresponseDataU3Ek__BackingField_10;
	// System.Action`1<TResponse> ZEPETO.Module.BaseRequest`1::onCompleted
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onCompleted_11;
	// System.Action`1<TResponse> ZEPETO.Module.BaseRequest`1::onFailed
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onFailed_12;

public:
	inline static int32_t get_offset_of_U3CresponseDataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0, ___U3CresponseDataU3Ek__BackingField_10)); }
	inline RuntimeObject * get_U3CresponseDataU3Ek__BackingField_10() const { return ___U3CresponseDataU3Ek__BackingField_10; }
	inline RuntimeObject ** get_address_of_U3CresponseDataU3Ek__BackingField_10() { return &___U3CresponseDataU3Ek__BackingField_10; }
	inline void set_U3CresponseDataU3Ek__BackingField_10(RuntimeObject * value)
	{
		___U3CresponseDataU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseDataU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleted_11() { return static_cast<int32_t>(offsetof(BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0, ___onCompleted_11)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_onCompleted_11() const { return ___onCompleted_11; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_onCompleted_11() { return &___onCompleted_11; }
	inline void set_onCompleted_11(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___onCompleted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleted_11), (void*)value);
	}

	inline static int32_t get_offset_of_onFailed_12() { return static_cast<int32_t>(offsetof(BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0, ___onFailed_12)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_onFailed_12() const { return ___onFailed_12; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_onFailed_12() { return &___onFailed_12; }
	inline void set_onFailed_12(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___onFailed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFailed_12), (void*)value);
	}
};


// ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>
struct BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0  : public BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431
{
public:
	// TResponse ZEPETO.Module.BaseRequest`1::<responseData>k__BackingField
	TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * ___U3CresponseDataU3Ek__BackingField_10;
	// System.Action`1<TResponse> ZEPETO.Module.BaseRequest`1::onCompleted
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * ___onCompleted_11;
	// System.Action`1<TResponse> ZEPETO.Module.BaseRequest`1::onFailed
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * ___onFailed_12;

public:
	inline static int32_t get_offset_of_U3CresponseDataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0, ___U3CresponseDataU3Ek__BackingField_10)); }
	inline TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * get_U3CresponseDataU3Ek__BackingField_10() const { return ___U3CresponseDataU3Ek__BackingField_10; }
	inline TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA ** get_address_of_U3CresponseDataU3Ek__BackingField_10() { return &___U3CresponseDataU3Ek__BackingField_10; }
	inline void set_U3CresponseDataU3Ek__BackingField_10(TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * value)
	{
		___U3CresponseDataU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseDataU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleted_11() { return static_cast<int32_t>(offsetof(BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0, ___onCompleted_11)); }
	inline Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * get_onCompleted_11() const { return ___onCompleted_11; }
	inline Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 ** get_address_of_onCompleted_11() { return &___onCompleted_11; }
	inline void set_onCompleted_11(Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * value)
	{
		___onCompleted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleted_11), (void*)value);
	}

	inline static int32_t get_offset_of_onFailed_12() { return static_cast<int32_t>(offsetof(BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0, ___onFailed_12)); }
	inline Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * get_onFailed_12() const { return ___onFailed_12; }
	inline Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 ** get_address_of_onFailed_12() { return &___onFailed_12; }
	inline void set_onFailed_12(Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * value)
	{
		___onFailed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFailed_12), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Newtonsoft.Json.Linq.JObject>
struct UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate
struct ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate
struct LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate
struct ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate
struct SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Module.TextureRequest
struct TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0  : public BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0
{
public:
	// System.String ZEPETO.Module.TextureRequest::_assetPath
	String_t* ____assetPath_13;

public:
	inline static int32_t get_offset_of__assetPath_13() { return static_cast<int32_t>(offsetof(TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0, ____assetPath_13)); }
	inline String_t* get__assetPath_13() const { return ____assetPath_13; }
	inline String_t** get_address_of__assetPath_13() { return &____assetPath_13; }
	inline void set__assetPath_13(String_t* value)
	{
		____assetPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetPath_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ZEPETO.Event.Bus.EventManager`1<System.Object>::Subscribe(System.String,UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_1_Subscribe_m1C1E7699EC707ECE6288BB9C0F833CB24DA79023_gshared (String_t* ___eventName0, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action1, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseRequest`1<System.Object>::.ctor(ZEPETO.Module.RequestMethod,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_1__ctor_mB185E551B11C16D53A4A210E835A2207A8F3946F_gshared (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, int32_t ___method0, String_t* ___host1, String_t* ___path2, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseRequest`1<System.Object>::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_1_Build_mA8EE7DA44DB6B9FDC45AB2A03461DDBC90675AA0_gshared (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IDisposable UniRx.ObservableExtensions::Subscribe<UniRx.Unit>(UniRx.IObservable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseRequest`1<System.Object>::set_responseData(TResponse)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRequest_1_set_responseData_mB3E1A18FC0FB85F4BF9854A30436866CE0AD5F0A_gshared_inline (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// TResponse ZEPETO.Module.BaseRequest`1<System.Object>::get_responseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseRequest_1_get_responseData_m3FF5297BBFE8EE24E5FB56466F5C599ED03C4926_gshared_inline (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void ZEPETO.Event.Bus.EventManager`1<System.Object>::Raise(System.String,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_1_Raise_m076A10094CF30C936AAE5871AB54CB3E8CA91D03_gshared (String_t* ___eventName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String ZEPETO.Module.ModuleSettings::get_AuthToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_AuthToken_mFD231031B542E2699F192751F6BA9CB6D147800B (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ZEPETO.Module.BaseRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_Send_m2C1F056DE05A504735B6D792C49F73347D4C018C (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseException__ctor_mDD31AB4384045E70382849B568F486577B085694 (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * __this, int32_t ___errorCode0, String_t* ___message1, String_t* ___downloadHandlerText2, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,ZEPETO.Module.BaseException>::Invoke(!0,!1)
inline void Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E (Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * __this, bool ___arg10, BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t17636316C0E8F9177F38AECF733289E94C921915 *, bool, BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// ZEPETO.Module.BaseRequest ZEPETO.Module.BaseRequest::get_preRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * BaseRequest_get_preRequest_m6B5184B25FAA46763E27CC0772BF57A96D808373 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Newtonsoft.Json.Linq.JObject::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_ContainsKey_mD4BA92B095F1B11DB804732A5F7D9A05CF432420 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_Item_m1E9323973BC7087419D4608D1E818E6006D1867F (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void ZEPETO.Module.LocalizationRuntime::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRuntime_Initialize_mECC8553F6465CDBF0336B126AA2F9F2339293826 (const RuntimeMethod* method);
// System.String ZEPETO.Module.LocalizationRuntime::LoadJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_LoadJson_m323511092356592EFB3B1CCACA61B7458DEEB084 (const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.String)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared)(___value0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7 (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  (*) (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_inline (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045 (const RuntimeMethod* method);
// System.String ZEPETO.Module.LocalizationRuntime::GetLanguageCode(UnityEngine.SystemLanguage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_GetLanguageCode_m701E1FDB03FF3F762A1C38497DE7C878AFA32992 (int32_t ___language0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m4478DD45F3600E6DFAA7436A576054CC8F785136 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationProxyDelegate_Invoke_m1A598F051DEFCC2405732AE4B27BDD40EF25BEF6 (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String ZEPETO.Module.LocalizationRuntime::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_GetText_m35AD302AA12C6025E650EA6232282AFE2F85CD73 (String_t* ___key0, const RuntimeMethod* method);
// System.Void ZEPETO.Script.ZepetoScriptPackageInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoScriptPackageInfo__ctor_mF34AC04737AB9B86F9DD114A8118AF8213C62A40 (ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Char::IsSurrogatePair(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSurrogatePair_m6EAA02AF7F2918866B74A89988A00373EFF50709 (Il2CppChar ___highSurrogate0, Il2CppChar ___lowSurrogate1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Newtonsoft.Json.Linq.JObject>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m5F35B629E101B0B589F21783546CBA3948B23C94 (UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Event.Bus.EventManager`1<Newtonsoft.Json.Linq.JObject>::Subscribe(System.String,UnityEngine.Events.UnityAction`1<!0>)
inline void EventManager_1_Subscribe_m4102D0478B7C27BB9F65211E5C5BC2FDBD3C223E (String_t* ___eventName0, UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * ___action1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC *, const RuntimeMethod*))EventManager_1_Subscribe_m1C1E7699EC707ECE6288BB9C0F833CB24DA79023_gshared)(___eventName0, ___action1, method);
}
// System.Void ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>::.ctor(ZEPETO.Module.RequestMethod,System.String,System.String)
inline void BaseRequest_1__ctor_m861AD1C21BCDA75AD96BD5894C5E43B7004EB13E (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 * __this, int32_t ___method0, String_t* ___host1, String_t* ___path2, const RuntimeMethod* method)
{
	((  void (*) (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *, int32_t, String_t*, String_t*, const RuntimeMethod*))BaseRequest_1__ctor_mB185E551B11C16D53A4A210E835A2207A8F3946F_gshared)(__this, ___method0, ___host1, ___path2, method);
}
// System.Void ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>::Build()
inline void BaseRequest_1_Build_m861A57EA0F9ECF3ADAA2F671E41EC9D62E38EC1D (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *, const RuntimeMethod*))BaseRequest_1_Build_mA8EE7DA44DB6B9FDC45AB2A03461DDBC90675AA0_gshared)(__this, method);
}
// System.Void System.Func`1<System.Collections.IEnumerator>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mC4ADA5776323C8EEC559FC89CFB95D27F3AE8E9D (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// UniRx.IObservable`1<UniRx.Unit> UniRx.Observable::FromCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_FromCoroutine_m7F80BBFDF3476120EDDF98C20F1E2F9A39F5FCF0 (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * ___coroutine0, bool ___publishEveryYield1, const RuntimeMethod* method);
// System.IDisposable UniRx.ObservableExtensions::Subscribe<UniRx.Unit>(UniRx.IObservable`1<!!0>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1_gshared)(___source0, method);
}
// System.Void ZEPETO.Module.TextureResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResponse__ctor_m3886FA59A0FB45218B351C699473F7A1FA1F62A8 (TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>::set_responseData(TResponse)
inline void BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_inline (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 * __this, TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *, TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA *, const RuntimeMethod*))BaseRequest_1_set_responseData_mB3E1A18FC0FB85F4BF9854A30436866CE0AD5F0A_gshared_inline)(__this, ___value0, method);
}
// TResponse ZEPETO.Module.BaseRequest`1<ZEPETO.Module.TextureResponse>::get_responseData()
inline TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_inline (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 * __this, const RuntimeMethod* method)
{
	return ((  TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * (*) (BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *, const RuntimeMethod*))BaseRequest_1_get_responseData_m3FF5297BBFE8EE24E5FB56466F5C599ED03C4926_gshared_inline)(__this, method);
}
// System.Void System.Action`1<ZEPETO.Module.TextureResponse>::Invoke(!0)
inline void Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F (Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * __this, TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 *, TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed__ctor_mCE575FA62C4350CE8AA27B7959DEA5104F030865 (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ZEPETO.Module.BaseResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse__ctor_m81C60976C987C81339D5424EB3A29D21CE77051B (BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Module.RuntimeInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m62FCCE06651E4E53C256B10F3D0AB21C17DDA581 (U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<ZEPETO.Module.ModulePackageInfo>(System.String)
inline ModulePackageInfo_t98378D2691F63C279585857863617CED91105113 * JsonUtility_FromJson_TisModulePackageInfo_t98378D2691F63C279585857863617CED91105113_m530178C57558C4474DDBB08365872E9A1554769D (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ModulePackageInfo_t98378D2691F63C279585857863617CED91105113 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void ZEPETO.Event.Bus.EventManager`1<ZEPETO.Script.ZepetoScriptPackageInfo>::Raise(System.String,!0)
inline void EventManager_1_Raise_mD3A9F248B43A4D6765E7771F568C331B202CE38E (String_t* ___eventName0, ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, ZepetoScriptPackageInfo_t38C510E142E2BA7CAD427019FD8A65478627E2F5 *, const RuntimeMethod*))EventManager_1_Raise_m076A10094CF30C936AAE5871AB54CB3E8CA91D03_gshared)(___eventName0, ___value1, method);
}
// System.Void ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mBA251CA855217AA535055DAD613F6C8E33B6B085 (U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * __this, const RuntimeMethod* method);
// Zepeto.ZepetoAssetRequest Zepeto.ZepetoAssetRequest::Create(System.String,Zepeto.ZepetoAssetRequest/AssetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * ZepetoAssetRequest_Create_mA86B23945864615B877CF8C8E50521C815111DEA (String_t* ___assetPath0, int32_t ___assetType1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Zepeto.ZepetoAssetRequest/RequestResult Zepeto.ZepetoAssetRequest::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * ZepetoAssetRequest_get_Result_mD9CA53A52BB4593A41289639C5B8EF1AA4010FAA_inline (ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * __this, const RuntimeMethod* method);
// System.Boolean Zepeto.ZepetoAssetRequest::get_isComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZepetoAssetRequest_get_isComplete_mBD6E8A1ABA0D5DF9FE14F83EB61E23275EAD776F_inline (ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.BaseException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseException__ctor_mDD31AB4384045E70382849B568F486577B085694 (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * __this, int32_t ___errorCode0, String_t* ___message1, String_t* ___downloadHandlerText2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		__this->set_downloadHandlerRawText_18(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___errorCode0;
		__this->set_errorCode_17(L_1);
		String_t* L_2 = ___downloadHandlerText2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_002f;
	}

IL_0028:
	{
		String_t* L_5 = ___downloadHandlerText2;
		__this->set_downloadHandlerRawText_18(L_5);
	}

IL_002f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ZEPETO.Module.BaseRequest::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRequest_get_keepWaiting_m19ADF0BC306543355D46FFB729B9F2FA595E8BEB (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isDone_0();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void ZEPETO.Module.BaseRequest::.ctor(ZEPETO.Module.RequestMethod,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest__ctor_m996BD37F3512B283EF3F84B029243DB5A8BE564C (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, int32_t ___method0, String_t* ___host1, String_t* ___path2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_0, /*hidden argument*/NULL);
		__this->set__postBody_6(L_0);
		__this->set__preRequest_8((BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 *)NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__appendQueryString_9(L_1);
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___method0;
		__this->set__method_1(L_2);
		String_t* L_3 = ___host1;
		__this->set__host_3(L_3);
		String_t* L_4 = ___path2;
		__this->set__path_4(L_4);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.Module.BaseRequest::get__header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * BaseRequest_get__header_mE180A75093EED4602379B4BDF07593D532E7D783 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDED1C9B191E2DB9E05F1A479F30FFFBAB38CF594);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__mHeader_5();
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = ModuleSettings_get_AuthToken_mFD231031B542E2699F192751F6BA9CB6D147800B(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralDED1C9B191E2DB9E05F1A479F30FFFBAB38CF594, L_3, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_2, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_4, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		__this->set__mHeader_5(L_2);
	}

IL_0034:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = __this->get__mHeader_5();
		V_0 = L_5;
		goto IL_003d;
	}

IL_003d:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = V_0;
		return L_6;
	}
}
// ZEPETO.Module.BaseRequest ZEPETO.Module.BaseRequest::get_preRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * BaseRequest_get_preRequest_m6B5184B25FAA46763E27CC0772BF57A96D808373 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * V_0 = NULL;
	{
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_0 = __this->get__preRequest_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_1 = V_0;
		return L_1;
	}
}
// System.Void ZEPETO.Module.BaseRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_Send_m2C1F056DE05A504735B6D792C49F73347D4C018C (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_0 = __this->get__preRequest_8();
		V_0 = (bool)((!(((RuntimeObject*)(BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_2 = __this->get__preRequest_8();
		NullCheck(L_2);
		BaseRequest_Send_m2C1F056DE05A504735B6D792C49F73347D4C018C(L_2, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001e:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void ZEPETO.Module.BaseRequest::SendRequest() */, __this);
	}

IL_0027:
	{
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::SendRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_SendRequest_m8651717B1D8FA3E06041E6112A241ED000E90DFE (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRequest_HandleRequestOperation_m36B6B52165C1F0B767BC192EC2E51AC47737811E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_1 = NULL;
	BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		bool L_0 = __this->get__isDone_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_006c;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(11 /* System.Void ZEPETO.Module.BaseRequest::Build() */, __this);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = __this->get__request_2();
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_3;
		L_3 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_4 = V_1;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_5 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_5, __this, (intptr_t)((intptr_t)BaseRequest_HandleRequestOperation_m36B6B52165C1F0B767BC192EC2E51AC47737811E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_4);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_4, L_5, /*hidden argument*/NULL);
		goto IL_006c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004c;
		}
		throw e;
	}

CATCH_0038:
	{ // begin catch(ZEPETO.Module.BaseException)
		V_2 = ((BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)IL2CPP_GET_ACTIVE_EXCEPTION(BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *));
		BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_6 = V_2;
		VirtActionInvoker1< BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * >::Invoke(14 /* System.Void ZEPETO.Module.BaseRequest::OnFailed(ZEPETO.Module.BaseException) */, __this, L_6);
		VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, __this);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006c;
	} // end catch (depth: 1)

CATCH_004c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_9 = (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var)));
		BaseException__ctor_mDD31AB4384045E70382849B568F486577B085694(L_9, (-1), L_8, (String_t*)NULL, /*hidden argument*/NULL);
		VirtActionInvoker1< BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * >::Invoke(14 /* System.Void ZEPETO.Module.BaseRequest::OnFailed(ZEPETO.Module.BaseException) */, __this, L_9);
		VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, __this);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006c;
	} // end catch (depth: 1)

IL_006c:
	{
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::HandleRequestOperation(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_HandleRequestOperation_m36B6B52165C1F0B767BC192EC2E51AC47737811E (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral305796FD0E54569D8E25A569F283604693ABD7F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * V_1 = NULL;
	bool V_2 = false;
	BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * G_B12_0 = NULL;
	Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * G_B11_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get__request_2();
				NullCheck(L_0);
				int32_t L_1;
				L_1 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_0, /*hidden argument*/NULL);
				V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_0043;
				}
			}

IL_0017:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = __this->get__request_2();
				NullCheck(L_3);
				String_t* L_4;
				L_4 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_3, /*hidden argument*/NULL);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get__request_2();
				NullCheck(L_5);
				DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_6;
				L_6 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_5, /*hidden argument*/NULL);
				DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_7 = L_6;
				G_B3_0 = L_7;
				G_B3_1 = L_4;
				G_B3_2 = 0;
				if (L_7)
				{
					G_B4_0 = L_7;
					G_B4_1 = L_4;
					G_B4_2 = 0;
					goto IL_0036;
				}
			}

IL_0032:
			{
				G_B5_0 = ((String_t*)(NULL));
				G_B5_1 = G_B3_1;
				G_B5_2 = G_B3_2;
				goto IL_003b;
			}

IL_0036:
			{
				NullCheck(G_B4_0);
				String_t* L_8;
				L_8 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(G_B4_0, /*hidden argument*/NULL);
				G_B5_0 = L_8;
				G_B5_1 = G_B4_1;
				G_B5_2 = G_B4_2;
			}

IL_003b:
			{
				BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_9 = (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var)));
				BaseException__ctor_mDD31AB4384045E70382849B568F486577B085694(L_9, G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
				V_1 = L_9;
				BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_10 = V_1;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseRequest_HandleRequestOperation_m36B6B52165C1F0B767BC192EC2E51AC47737811E_RuntimeMethod_var)));
			}

IL_0043:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get__request_2();
				NullCheck(L_11);
				DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_12;
				L_12 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_11, /*hidden argument*/NULL);
				DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_13 = L_12;
				G_B7_0 = L_13;
				G_B7_1 = _stringLiteral305796FD0E54569D8E25A569F283604693ABD7F6;
				if (L_13)
				{
					G_B8_0 = L_13;
					G_B8_1 = _stringLiteral305796FD0E54569D8E25A569F283604693ABD7F6;
					goto IL_005a;
				}
			}

IL_0056:
			{
				G_B9_0 = ((String_t*)(NULL));
				G_B9_1 = G_B7_1;
				goto IL_005f;
			}

IL_005a:
			{
				NullCheck(G_B8_0);
				String_t* L_14;
				L_14 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(G_B8_0, /*hidden argument*/NULL);
				G_B9_0 = L_14;
				G_B9_1 = G_B8_1;
			}

IL_005f:
			{
				String_t* L_15;
				L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B9_1, G_B9_0, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
				VirtActionInvoker0::Invoke(13 /* System.Void ZEPETO.Module.BaseRequest::OnBeforeCompleted() */, __this);
				bool L_16 = __this->get__isDone_0();
				V_2 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0094;
				}
			}

IL_007e:
			{
				Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * L_18 = __this->get__onChainActionCompleted_7();
				Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * L_19 = L_18;
				G_B11_0 = L_19;
				if (L_19)
				{
					G_B12_0 = L_19;
					goto IL_008b;
				}
			}

IL_0088:
			{
				goto IL_0093;
			}

IL_008b:
			{
				NullCheck(G_B12_0);
				Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E(G_B12_0, (bool)1, (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)NULL, /*hidden argument*/Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E_RuntimeMethod_var);
			}

IL_0093:
			{
			}

IL_0094:
			{
				goto IL_00bf;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0097;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a4;
			}
			throw e;
		}

CATCH_0097:
		{ // begin catch(ZEPETO.Module.BaseException)
			V_3 = ((BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)IL2CPP_GET_ACTIVE_EXCEPTION(BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *));
			BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_20 = V_3;
			VirtActionInvoker1< BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * >::Invoke(14 /* System.Void ZEPETO.Module.BaseRequest::OnFailed(ZEPETO.Module.BaseException) */, __this, L_20);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00bf;
		} // end catch (depth: 2)

CATCH_00a4:
		{ // begin catch(System.Exception)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_21 = V_4;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_21);
			BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_23 = (BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7_il2cpp_TypeInfo_var)));
			BaseException__ctor_mDD31AB4384045E70382849B568F486577B085694(L_23, (-1), L_22, (String_t*)NULL, /*hidden argument*/NULL);
			VirtActionInvoker1< BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * >::Invoke(14 /* System.Void ZEPETO.Module.BaseRequest::OnFailed(ZEPETO.Module.BaseException) */, __this, L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00bf;
		} // end catch (depth: 2)

IL_00bf:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, __this);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::OnFailed(ZEPETO.Module.BaseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_OnFailed_mC37808DD8E0EBB92EA87434E355CB72F098D2712 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * G_B2_0 = NULL;
	Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * G_B1_0 = NULL;
	{
		Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * L_0 = __this->get__onChainActionCompleted_7();
		Action_2_t17636316C0E8F9177F38AECF733289E94C921915 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		BaseException_tF74626855858DB2F78B91F42C321411F54E65DF7 * L_2 = ___exception0;
		NullCheck(G_B2_0);
		Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E(G_B2_0, (bool)0, L_2, /*hidden argument*/Action_2_Invoke_m44CBB5307C03515B117566DE91D1DF497409CD0E_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_Dispose_mBDC11A2749FDD1A1A34220BB8CE7D3B35C7C88AC (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, const RuntimeMethod* method)
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * G_B2_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * G_B1_0 = NULL;
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * G_B5_0 = NULL;
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * G_B4_0 = NULL;
	{
		__this->set__isDone_0((bool)1);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get__request_2();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8(G_B2_0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_2;
		L_2 = BaseRequest_get_preRequest_m6B5184B25FAA46763E27CC0772BF57A96D808373(__this, /*hidden argument*/NULL);
		BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0026;
		}
	}
	{
		goto IL_002c;
	}

IL_0026:
	{
		NullCheck(G_B5_0);
		VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, G_B5_0);
	}

IL_002c:
	{
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::SetQueryParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_SetQueryParameter_mC3DD8D988F5903635314211E2DA2385A412023A1 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2 = __this->get__appendQueryString_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = ___key0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___value1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_7, /*hidden argument*/NULL);
		__this->set__appendQueryString_9(L_9);
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::SetQueryParameter(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_SetQueryParameter_m8B81B887287A4F0A272B66D3F898C91F50035628 (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * G_B3_4 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2 = __this->get__appendQueryString_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = ___key0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		bool L_8 = ___value1;
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = __this;
		if (L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = __this;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0035;
	}

IL_0030:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0035:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B3_3, /*hidden argument*/NULL);
		NullCheck(G_B3_4);
		G_B3_4->set__appendQueryString_9(L_9);
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::SetHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_SetHeader_mE51E8B40DB8BFD29BB70666E53C941DF538325DE (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0;
		L_0 = VirtFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(10 /* System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.Module.BaseRequest::get__header() */, __this);
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		return;
	}
}
// System.Void ZEPETO.Module.BaseRequest::SetPostBody(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRequest_SetPostBody_m699E659B5F891EED0C40514A7EE96788A48900BD (BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 * __this, String_t* ___key0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = __this->get__postBody_6();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = JObject_ContainsKey_mD4BA92B095F1B11DB804732A5F7D9A05CF432420(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4 = __this->get__postBody_6();
		String_t* L_5 = ___key0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6 = ___value1;
		NullCheck(L_4);
		JObject_set_Item_m1E9323973BC7087419D4608D1E818E6006D1867F(L_4, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0023:
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_7 = __this->get__postBody_6();
		String_t* L_8 = ___key0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_9 = ___value1;
		NullCheck(L_7);
		JObject_Add_m474A38563A62F0E8E9070E971E98E380B21AE9A7(L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.BaseResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse__ctor_m81C60976C987C81339D5424EB3A29D21CE77051B (BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isSuccess_0((bool)0);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_message_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.Content.Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m6FDDB169FDA394176C9A337804B5FBE15617DB64 (Item_t26343413A732B3DAA7D6C301AE8A15B2F550A008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_id_0(L_0);
		__this->set_property_1(0);
		__this->set_isZem_2((bool)0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_badge_3(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		__this->set_keywords_4(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_creator_5(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_type_6(L_4);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.LocalizationRuntime::OnLocalizationInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRuntime_OnLocalizationInitialize_m3381979B6431F517390B6A3B8629090019882932 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * L_0 = ((ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields*)il2cpp_codegen_static_fields_for(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var))->get_LocalizationGetRaw_1();
		V_0 = (bool)((!(((RuntimeObject*)(LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0015;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		LocalizationRuntime_Initialize_mECC8553F6465CDBF0336B126AA2F9F2339293826(/*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void ZEPETO.Module.LocalizationRuntime::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRuntime_Initialize_mECC8553F6465CDBF0336B126AA2F9F2339293826 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = LocalizationRuntime_LoadJson_m323511092356592EFB3B1CCACA61B7458DEEB084(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2;
		L_2 = JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870(L_1, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m638A5B5CCA6164E8E879D42F9304C67BD7993870_RuntimeMethod_var);
		V_1 = L_2;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_3, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		((LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var))->set__localizationData_1(L_3);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = V_1;
		NullCheck(L_4);
		KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * L_5;
		L_5 = Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825(L_4, /*hidden argument*/Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  L_6;
		L_6 = KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7(L_5, /*hidden argument*/KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0027:
		{
			String_t* L_7;
			L_7 = Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_inline((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var);
			V_3 = L_7;
			IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = ((LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var))->get__localizationData_1();
			String_t* L_9 = V_3;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = V_1;
			String_t* L_11 = V_3;
			NullCheck(L_10);
			String_t* L_12;
			L_12 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
			NullCheck(L_8);
			Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_8, L_9, L_12, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		}

IL_0044:
		{
			bool L_13;
			L_13 = Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0027;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		return;
	}
}
// System.String ZEPETO.Module.LocalizationRuntime::LoadJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_LoadJson_m323511092356592EFB3B1CCACA61B7458DEEB084 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m4478DD45F3600E6DFAA7436A576054CC8F785136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E4C75293E02D24B9DBD7FC5E0F8B7CF426B507);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteralC1E4C75293E02D24B9DBD7FC5E0F8B7CF426B507, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		int32_t L_6;
		L_6 = Application_get_systemLanguage_m97271242ECD614FD02DC6BEB912CDDB6DD2BD045(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = LocalizationRuntime_GetLanguageCode_m701E1FDB03FF3F762A1C38497DE7C878AFA32992(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_5, L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_11;
		L_11 = Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m4478DD45F3600E6DFAA7436A576054CC8F785136(L_10, /*hidden argument*/Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m4478DD45F3600E6DFAA7436A576054CC8F785136_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0043;
	}

IL_0043:
	{
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.String ZEPETO.Module.LocalizationRuntime::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_GetText_m35AD302AA12C6025E650EA6232282AFE2F85CD73 (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ((LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var))->get__localizationData_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ((LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var))->get__localizationData_1();
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD(L_1, L_2, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_5 = ___key0;
		V_2 = L_5;
		goto IL_0027;
	}

IL_0023:
	{
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String ZEPETO.Module.LocalizationRuntime::GetLanguageCode(UnityEngine.SystemLanguage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationRuntime_GetLanguageCode_m701E1FDB03FF3F762A1C38497DE7C878AFA32992 (int32_t ___language0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DEEEB76217C5584A28A69C4EE37783D816E1513);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAAD9145424237C5D18F9CECC27B558073F546E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F928B933A5D214ACFC7FD351897916463C31832);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF39474D8BB4A0D504BA34897EE0E3E85DCB7CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D606415EA2A0BE797ED05067B82FB262A5C1CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDF21F72237DB81D35C7A8D97014EC5BDEDB379);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF1B7D52B1D9EB6799F920270BC13A2F010D6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9930021DD4949B7A05D1303C5A4A6D7EE5FEF364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1A51EFD7CFACEDF6B4415CC48AAE880E854852C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9E80FA212D06ABFA124B4089D1B52EA76D62046);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE07C036A3D841D6F8A940A3355A22FC6A938D72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE100CA69C7B0A2CE17F96981D0E8150B71ECF2B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE498DD81BD9E076BCE80B0821DE7522A230A2B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB7C90B8809693DCD2C6BB8A8BDDB88E1C766701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D559A82DDCFB84D3FD9A652253733833553DDB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___language0;
		if ((((int32_t)L_0) > ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___language0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = ___language0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_0126;
	}

IL_001a:
	{
		int32_t L_3 = ___language0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = ___language0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)14))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_5 = ___language0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)20))))
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_00c6;
			}
			case 2:
			{
				goto IL_00ce;
			}
			case 3:
			{
				goto IL_00d6;
			}
			case 4:
			{
				goto IL_0126;
			}
			case 5:
			{
				goto IL_0126;
			}
			case 6:
			{
				goto IL_0126;
			}
			case 7:
			{
				goto IL_0126;
			}
			case 8:
			{
				goto IL_00de;
			}
			case 9:
			{
				goto IL_0126;
			}
			case 10:
			{
				goto IL_00e6;
			}
			case 11:
			{
				goto IL_0126;
			}
			case 12:
			{
				goto IL_0126;
			}
			case 13:
			{
				goto IL_0126;
			}
			case 14:
			{
				goto IL_00b6;
			}
			case 15:
			{
				goto IL_0126;
			}
			case 16:
			{
				goto IL_00ee;
			}
			case 17:
			{
				goto IL_0116;
			}
			case 18:
			{
				goto IL_0126;
			}
			case 19:
			{
				goto IL_00f6;
			}
			case 20:
			{
				goto IL_00fe;
			}
			case 21:
			{
				goto IL_0106;
			}
			case 22:
			{
				goto IL_011e;
			}
		}
	}
	{
		goto IL_0126;
	}

IL_0098:
	{
		V_0 = _stringLiteral0DEEEB76217C5584A28A69C4EE37783D816E1513;
		goto IL_012e;
	}

IL_00a3:
	{
		V_0 = _stringLiteralF5D559A82DDCFB84D3FD9A652253733833553DDB;
		goto IL_012e;
	}

IL_00ae:
	{
		V_0 = _stringLiteral4F928B933A5D214ACFC7FD351897916463C31832;
		goto IL_012e;
	}

IL_00b6:
	{
		V_0 = _stringLiteral4F928B933A5D214ACFC7FD351897916463C31832;
		goto IL_012e;
	}

IL_00be:
	{
		V_0 = _stringLiteralB1A51EFD7CFACEDF6B4415CC48AAE880E854852C;
		goto IL_012e;
	}

IL_00c6:
	{
		V_0 = _stringLiteral6D606415EA2A0BE797ED05067B82FB262A5C1CCE;
		goto IL_012e;
	}

IL_00ce:
	{
		V_0 = _stringLiteralB9E80FA212D06ABFA124B4089D1B52EA76D62046;
		goto IL_012e;
	}

IL_00d6:
	{
		V_0 = _stringLiteral1AAAD9145424237C5D18F9CECC27B558073F546E;
		goto IL_012e;
	}

IL_00de:
	{
		V_0 = _stringLiteral5AF39474D8BB4A0D504BA34897EE0E3E85DCB7CD;
		goto IL_012e;
	}

IL_00e6:
	{
		V_0 = _stringLiteralE07C036A3D841D6F8A940A3355A22FC6A938D72E;
		goto IL_012e;
	}

IL_00ee:
	{
		V_0 = _stringLiteralE498DD81BD9E076BCE80B0821DE7522A230A2B72;
		goto IL_012e;
	}

IL_00f6:
	{
		V_0 = _stringLiteral6EDF21F72237DB81D35C7A8D97014EC5BDEDB379;
		goto IL_012e;
	}

IL_00fe:
	{
		V_0 = _stringLiteral8EF1B7D52B1D9EB6799F920270BC13A2F010D6A7;
		goto IL_012e;
	}

IL_0106:
	{
		V_0 = _stringLiteralEB7C90B8809693DCD2C6BB8A8BDDB88E1C766701;
		goto IL_012e;
	}

IL_010e:
	{
		V_0 = _stringLiteral9930021DD4949B7A05D1303C5A4A6D7EE5FEF364;
		goto IL_012e;
	}

IL_0116:
	{
		V_0 = _stringLiteralE100CA69C7B0A2CE17F96981D0E8150B71ECF2B5;
		goto IL_012e;
	}

IL_011e:
	{
		V_0 = _stringLiteralF5D559A82DDCFB84D3FD9A652253733833553DDB;
		goto IL_012e;
	}

IL_0126:
	{
		V_0 = _stringLiteralF5D559A82DDCFB84D3FD9A652253733833553DDB;
		goto IL_012e;
	}

IL_012e:
	{
		String_t* L_6 = V_0;
		V_1 = L_6;
		goto IL_0132;
	}

IL_0132:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void ZEPETO.Module.LocalizationRuntime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRuntime__ctor_mCA6EF8F8A8C317C3DCEB026C7B683455E7BFBE6D (LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Module.LocalizationRuntime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRuntime__cctor_m6360799007406A2E0F3E73AC846D39F611B21D17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		((LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var))->set__localizationData_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZEPETO.Module.ModuleLocalization::Localize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleLocalization_Localize_m60409927E25DFE27AF0B828D9B0DFA034EAA1A0F (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B10_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * L_0 = ((ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields*)il2cpp_codegen_static_fields_for(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var))->get_LocalizationGetRaw_1();
		V_1 = (bool)((!(((RuntimeObject*)(LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * L_2 = ((ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_StaticFields*)il2cpp_codegen_static_fields_for(ModuleDelegate_t8B0A0FE98B207DC64155F9892813C5081FE7F8D2_il2cpp_TypeInfo_var))->get_LocalizationGetRaw_1();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = LocalizationProxyDelegate_Invoke_m1A598F051DEFCC2405732AE4B27BDD40EF25BEF6(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0021:
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_7 = V_0;
		String_t* L_8 = ___key0;
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_7, L_9, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 1;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_12 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(LocalizationRuntime_tD6251A09F1B526B6AAE0C26D549D2118394FA2C2_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = LocalizationRuntime_GetText_m35AD302AA12C6025E650EA6232282AFE2F85CD73(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_004a:
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_16 = V_0;
		G_B10_0 = L_16;
		goto IL_0056;
	}

IL_0055:
	{
		String_t* L_17 = ___key0;
		G_B10_0 = L_17;
	}

IL_0056:
	{
		V_3 = G_B10_0;
		goto IL_0059;
	}

IL_0059:
	{
		String_t* L_18 = V_3;
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.ModuleLocalizationKeys::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLocalizationKeys__cctor_m873A09A48ED3629296C0273B85D508CA0E54036D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017276F6A830F22238549FF448BC439C75C6D364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E6C98DF14705D2ABAA73F642007C89EBB45B1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A6538C3807B1180E939841A6CCE04EA1A7BDB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ECAFB9B3C7701DBA15C882131CA7E9C992C17B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral167D2A052E4BC125D5D859265CEECF17EA2B97D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F35F65591BB9F459BC702EEEB61512D768139B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265A1841E622537BC25CFFD32FFEC9910C587301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral278E96C82DA48A0C619E47AD9438FA31B4006815);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B63BE2AA2C5C84B7F988F7E02DA10C449A25ACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3E2D6CFB3C0CA8B119D1B7F9854E1F23A53626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E93888A93BF1358F3EA9D0DABD03E7E287883DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300BB5C0CC5E5ABE5184299EA9F3FDFD046C5D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328D47482B9B2817F9B48AF40F7D66D1C988C762);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35BA8735A07A684C67FF08845C51B62688D304D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1A7AB323F9A75F4B58710A3EA27C832E47BB7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9D22131132FABDF1B9F989AA87C9A62414D309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40DD39FB9F12B5E59910A00E50589BA748AD5875);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D7D97013059C37988379E24E3D48E3972FF554A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF1C819E70BAC2C0909C8EB07F9DF966A998584);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521A60CF8F562F778BE94392BCC5B28DE03E24B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59C205AA84B5EFAD6AFC33DE1A6095F6F6F89889);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B030A01372BED8C6180537C217EBD94E319F6AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D201E9173B40D356308AB000733F703AD565A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6036C4A0CD251C11674BE0E780D9CA802FB23A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D7DC8E15054C73CDA139A18F8B2705B5FBD5D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647726063F98BD6AE2C2C92281215C4D4492FDB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A99A10E7934C6D033E4D4BCD6D15239D625296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6671C86C5BE3308C34BAF9F5800DB0AFCC4B770D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3929BF4B3D06B57E0E7DE248EB3A3910AED1FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D496D42C9A2364AB851680FD17B5F0A4039D1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7128B0D447C4128B784A3D6AA144645464C7313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D21118C5A09E90FADC2CB807C37FCEEE9DC137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D4747C6F31D92E294AE22C69762AE0C4A8429A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA85EE1B8671A2C45851662E085B615534A2B6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B07307BD0D562015949BF74BD101CF6382C94C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827CBE0AC8DC86D09C1A8CD4293ED412A436E442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A4DA032FE9267B3EFA121836AFC2BE69BBF92E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B8FF8F0074CF423F353252D03D1508DAA2B3F68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8CF7BA7B2A69A06F0994DC068C65A88F3515F45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA92081E5E6A14A67C522BD10A75979D21927F9CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8AEA63B925166C5B68F2DCFCAFE82014F65C76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA728533702D0BB3507C9001523CDC9D53F9C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD267D9B26289CED2E57D4A35A961183A3682C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA0A60F1C1B49B283CE171FBD37A32170738F68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4E115CCDB8FFE04B677AD224509067DD82A495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB38DAC65F6C186D716872223BDED8E595D783700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7621CD64E3675299E8F49662836BB1A9664501E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC158E2D03924FABE8CB0D1C090E4FA1C5D1CEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C35209011D767ACFAFC889C38FE0E35C144D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD0B3333B92B357F1647ACB0B0E4F69DB37A9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC568223B9E38430A16D510201CC6463F84C09BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD147DD43A5B62C762BCDD58029A892F28943A0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64C9FE10F888C12A84AC9CE76DCD72FF8977C76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6BC540BD2F8E2176FBB6777CAF101C195B76B56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD864BF28F47F52F27809E1673AFB246C5BBB1859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD864E08B002988940D584BC700A83040389B4AC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD929B357007DC91E5502BB7076502EE5BE389C63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBCDD949DAF9559A94A30ACD46FD32AA066009D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CAA3E8F9398446BC83D331EA464049A56F7DB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9E9BE601B6B04022C4D382AC7B11294F8D26552);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_COMMON_ERROR_NETWORK_OCCURED_0(_stringLiteralB38DAC65F6C186D716872223BDED8E595D783700);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_COMMON_CONFIRM_CANCLE_1(_stringLiteral300BB5C0CC5E5ABE5184299EA9F3FDFD046C5D94);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_COMMON_CONFIRM_2(_stringLiteralBAC158E2D03924FABE8CB0D1C090E4FA1C5D1CEB);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_LEAVE_WORLD_POPUP_3(_stringLiteral4DF1C819E70BAC2C0909C8EB07F9DF966A998584);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_TOAST_FAILED_IAP_4(_stringLiteralAF4E115CCDB8FFE04B677AD224509067DD82A495);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_USER_CANCLLED_5(_stringLiteral278E96C82DA48A0C619E47AD9438FA31B4006815);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_6(_stringLiteral7128B0D447C4128B784A3D6AA144645464C7313C);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_SUCCESS_7(_stringLiteral77D21118C5A09E90FADC2CB807C37FCEEE9DC137);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_BUTTON_8(_stringLiteral017276F6A830F22238549FF448BC439C75C6D364);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_INACTIVE_9(_stringLiteral0A6538C3807B1180E939841A6CCE04EA1A7BDB0E);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_CHARGE_10(_stringLiteralD929B357007DC91E5502BB7076502EE5BE389C63);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_CHARGE_BUTTON_11(_stringLiteralF9E9BE601B6B04022C4D382AC7B11294F8D26552);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_CHARGE_GUIDE_12(_stringLiteral5B030A01372BED8C6180537C217EBD94E319F6AF);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_PRICE_CHANGE_TITLE_13(_stringLiteralCBD0B3333B92B357F1647ACB0B0E4F69DB37A9BE);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_PRICE_CHANGE_DESC_14(_stringLiteral521A60CF8F562F778BE94392BCC5B28DE03E24B0);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_PRICE_CHANGE_BUTTON_15(_stringLiteralA92081E5E6A14A67C522BD10A75979D21927F9CA);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_TESTER_GUIDE_16(_stringLiteralD864E08B002988940D584BC700A83040389B4AC0);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ALERT_PURCHASE_ALREADY_HAVE_17(_stringLiteral6B3929BF4B3D06B57E0E7DE248EB3A3910AED1FD);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_PURCHASE_INACTIVE_ITEM_18(_stringLiteral22F35F65591BB9F459BC702EEEB61512D768139B);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_PURCHASE_CHARGE_CUSTOM_CURRENCY_19(_stringLiteral6671C86C5BE3308C34BAF9F5800DB0AFCC4B770D);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_GUEST_ITEM_PURCHASE_20(_stringLiteral647726063F98BD6AE2C2C92281215C4D4492FDB5);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_GUEST_DESCRIPTION_21(_stringLiteral0ECAFB9B3C7701DBA15C882131CA7E9C992C17B8);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_GUEST_SIGNUP_BUTTON_22(_stringLiteral62D7DC8E15054C73CDA139A18F8B2705B5FBD5D1);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_CREDITSHOP_USAGE_TITLE_23(_stringLiteralD64C9FE10F888C12A84AC9CE76DCD72FF8977C76);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_CREDITSHOP_USAGE_DESCRIPTION_24(_stringLiteral7FA85EE1B8671A2C45851662E085B615534A2B6D);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_CREDITSHOP_GOOGLE_PENDING_MSG_25(_stringLiteral2C3E2D6CFB3C0CA8B119D1B7F9854E1F23A53626);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_CURRENCY_ZEM_26(_stringLiteral4D7D97013059C37988379E24E3D48E3972FF554A);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_CURRENCY_COIN_27(_stringLiteralCD147DD43A5B62C762BCDD58029A892F28943A0F);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_PURCHASE_28(_stringLiteral8B8FF8F0074CF423F353252D03D1508DAA2B3F68);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_29(_stringLiteralDBCDD949DAF9559A94A30ACD46FD32AA066009D2);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ITEM_INACTIVE_30(_stringLiteralABA728533702D0BB3507C9001523CDC9D53F9C4A);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ITEM_SHOULD_31(_stringLiteral827CBE0AC8DC86D09C1A8CD4293ED412A436E442);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ITEM_REMAINING_BALACE_32(_stringLiteralCC568223B9E38430A16D510201CC6463F84C09BD);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_RECEIVED_ITEM_SHOULD_33(_stringLiteral59C205AA84B5EFAD6AFC33DE1A6095F6F6F89889);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_TO_34(_stringLiteralE6CAA3E8F9398446BC83D331EA464049A56F7DB4);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_COIN_CHARGE_LATER_35(_stringLiteral2B63BE2AA2C5C84B7F988F7E02DA10C449A25ACA);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ITEM_SUCCESS_36(_stringLiteral2E93888A93BF1358F3EA9D0DABD03E7E287883DD);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_CHARGE_BUTTON_37(_stringLiteral7D4747C6F31D92E294AE22C69762AE0C4A8429A6);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GUEST_CHARGE_JOIN_38(_stringLiteral02E6C98DF14705D2ABAA73F642007C89EBB45B1B);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ALERT_ALREADY_HAVE_39(_stringLiteral6036C4A0CD251C11674BE0E780D9CA802FB23A8F);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_CHARGE_CUSTOM_CURRENCY_40(_stringLiteral87A4DA032FE9267B3EFA121836AFC2BE69BBF92E);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_PRICE_CHANGE_DESCRIPTION_41(_stringLiteral6D496D42C9A2364AB851680FD17B5F0A4039D1F1);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_INVALID_USER_CREATED_42(_stringLiteral265A1841E622537BC25CFFD32FFEC9910C587301);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ALREADY_HAS_ITEM_43(_stringLiteral35BA8735A07A684C67FF08845C51B62688D304D6);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ALLOWED_SELF_44(_stringLiteralAD267D9B26289CED2E57D4A35A961183A3682C4A);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_ONLY_REGISTERED_45(_stringLiteral80B07307BD0D562015949BF74BD101CF6382C94C);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SHOP_GIFT_INVALID_MESSAGE_46(_stringLiteral3E9D22131132FABDF1B9F989AA87C9A62414D309);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_USER_NO_DATA_47(_stringLiteralD864BF28F47F52F27809E1673AFB246C5BBB1859);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_GIFTBOX_REFUSED_48(_stringLiteralAB8AEA63B925166C5B68F2DCFCAFE82014F65C76);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_ITEM_PURCHASE_CHARGE_TERMS_49(_stringLiteral5D201E9173B40D356308AB000733F703AD565A0A);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_TERMS_PAID_SERVICE_50(_stringLiteral328D47482B9B2817F9B48AF40F7D66D1C988C762);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SIGNUP_SUBTITLE_USE_SOCIAL_51(_stringLiteralADA0A60F1C1B49B283CE171FBD37A32170738F68);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_GS_SUGGEST_SIGNUP_BTN_52(_stringLiteral3C1A7AB323F9A75F4B58710A3EA27C832E47BB7E);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_LIVE_HOST_THANKS_MSG_DONE_53(_stringLiteralB7621CD64E3675299E8F49662836BB1A9664501E);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_LIVE_HOST_THANKS_MSG_FAIL_54(_stringLiteral40DD39FB9F12B5E59910A00E50589BA748AD5875);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_COMMON_SEND_BTN_55(_stringLiteral167D2A052E4BC125D5D859265CEECF17EA2B97D9);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SOCIAL_INCLUDE_USER_NO_DATA_56(_stringLiteral64A99A10E7934C6D033E4D4BCD6D15239D625296);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SOCIAL_GUEST_SEND_MESSAGE_57(_stringLiteralD6BC540BD2F8E2176FBB6777CAF101C195B76B56);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SOCIAL_POLICY_LIMITS_58(_stringLiteralA8CF7BA7B2A69A06F0994DC068C65A88F3515F45);
		((ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLocalizationKeys_t195CC6E9A099AFFEAAB3700A3C1D22CCFDD0D20D_il2cpp_TypeInfo_var))->set_SOCIAL_INVAILD_MESSAGE_59(_stringLiteralC7C35209011D767ACFAFC889C38FE0E35C144D13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.ModulePackageInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePackageInfo__ctor_mDF2F1B2331702FE23D788067407980125213F2F9 (ModulePackageInfo_t98378D2691F63C279585857863617CED91105113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_launcherMediaUrl_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_launcherMediaType_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		ZepetoScriptPackageInfo__ctor_mF34AC04737AB9B86F9DD114A8118AF8213C62A40(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZEPETO.Module.ModuleSettings::get_AuthToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_AuthToken_mFD231031B542E2699F192751F6BA9CB6D147800B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String ZEPETO.Module.ISettings::get_AuthToken() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001a;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_4;
	}

IL_001a:
	{
		return G_B5_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_APIHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_APIHost_m10D1476DB8FCAE17FC74C7B3F05289BC0D5CB133 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String ZEPETO.Module.ISettings::get_APIHost() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001a;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_4;
	}

IL_001a:
	{
		return G_B5_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_FrontGatewayProxyApiHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_FrontGatewayProxyApiHost_mE48F47A4149E0A77303DE5D9B54E834703261C55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ZEPETO.Module.ISettings::get_FrontGatewayProxyAPIHost() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_Platform_m3FA9F642007AC4F437BDCD7B9FD1268911449986 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String ZEPETO.Module.ISettings::get_Platform() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_Language()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_Language_m341DFC77A034F2D4927A004169CA706CB1651672 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String ZEPETO.Module.ISettings::get_Language() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_AppVersion_m9D3803E38C0AD696FD310E25D4E3D4C8CD5BB010 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String ZEPETO.Module.ISettings::get_AppVersion() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_UserAgent_m2D0D1631A94D60FA0CD45FB5939A963A6890DAA7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String ZEPETO.Module.ISettings::get_UserAgent() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.Boolean ZEPETO.Module.ModuleSettings::get_isZaiZai()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleSettings_get_isZaiZai_m720C35C33FC7D48366294B48C11783B9BFE97FCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean ZEPETO.Module.ISettings::get_isZaiZai() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_PlaybaasAPIHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_PlaybaasAPIHost_mD37CB6B97158AA1650B5BE2CDC46CF49E8136AE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String ZEPETO.Module.ISettings::get_PlaybaasAPIHost() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001a;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_4;
	}

IL_001a:
	{
		return G_B5_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_WorldId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_WorldId_m07061C1E78EB766A9BF4294B2B89DADA00008DFF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String ZEPETO.Module.ISettings::get_WorldId() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001a;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_4;
	}

IL_001a:
	{
		return G_B5_0;
	}
}
// System.String ZEPETO.Module.ModuleSettings::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleSettings_get_UserId_m81629AA5EA9295318C09583C28203A74E2C59D79 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String ZEPETO.Module.ISettings::get_UserId() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean ZEPETO.Module.ModuleSettings::get_IsLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleSettings_get_IsLoggedIn_m928BC9BA8CC3A7293D371161400D72F5DE0985BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->get_Settings_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean ZEPETO.Module.ISettings::get_IsLoggedIn() */, ISettings_t82669283FABD0F9EC71E08C1CDD886B40792E8B9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void ZEPETO.Module.ModuleSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleSettings__cctor_m226454C53EB732F34551E753DA3545D156F8DB38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_StaticFields*)il2cpp_codegen_static_fields_for(ModuleSettings_t6576A33323B22529C26E8A5100571F19F4938A97_il2cpp_TypeInfo_var))->set_isHorizontal_0((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZEPETO.Module.ModuleUtils::GetShortenString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleUtils_GetShortenString_m1FFE4B278091102EC6F019D0F2A5306A72BF738D (String_t* ___value0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B19_0 = 0;
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00e9;
		}
	}
	{
		V_1 = 0;
		goto IL_00d6;
	}

IL_0019:
	{
		String_t* L_3 = ___value0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_6, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		G_B6_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)1327)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B6_0 = 0;
	}

IL_0042:
	{
		V_4 = (bool)G_B6_0;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_12 = ___maxLength1;
		___maxLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0058;
	}

IL_0051:
	{
		int32_t L_13 = ___maxLength1;
		___maxLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)2));
	}

IL_0058:
	{
		int32_t L_14 = ___maxLength1;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		___maxLength1 = 0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_006b:
	{
		goto IL_00a1;
	}

IL_006e:
	{
		Il2CppChar L_17 = V_2;
		String_t* L_18 = ___value0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Char_IsSurrogatePair_m6EAA02AF7F2918866B74A89988A00373EFF50709(L_17, L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_23 = ___maxLength1;
		___maxLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)2));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = ___maxLength1;
		V_7 = (bool)((((int32_t)L_25) < ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00a0;
		}
	}
	{
		___maxLength1 = 0;
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)2));
	}

IL_00a0:
	{
	}

IL_00a1:
	{
		int32_t L_28 = ___maxLength1;
		if (L_28)
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_29 = V_1;
		String_t* L_30 = ___value0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_30, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1))))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B19_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B19_0;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_00d1;
		}
	}
	{
		String_t* L_33 = ___value0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35;
		L_35 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_33, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, /*hidden argument*/NULL);
		V_9 = L_36;
		goto IL_00ee;
	}

IL_00d1:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00d6:
	{
		int32_t L_38 = V_1;
		String_t* L_39 = ___value0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_39, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_38) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0019;
		}
	}
	{
	}

IL_00e9:
	{
		String_t* L_42 = ___value0;
		V_9 = L_42;
		goto IL_00ee;
	}

IL_00ee:
	{
		String_t* L_43 = V_9;
		return L_43;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.RuntimeInitializer::InitializeOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializer_InitializeOnLoad_m326F388D425D47FCD31A470A8A96CB4F6060FB19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_1_Subscribe_m4102D0478B7C27BB9F65211E5C5BC2FDBD3C223E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeOnLoadU3Eb__0_0_m2910BA067267EC81240F5D18FA9529428667ED27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m5F35B629E101B0B589F21783546CBA3948B23C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var);
		UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * L_0 = ((U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var);
		U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * L_2 = ((U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * L_3 = (UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC *)il2cpp_codegen_object_new(UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m5F35B629E101B0B589F21783546CBA3948B23C94(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CInitializeOnLoadU3Eb__0_0_m2910BA067267EC81240F5D18FA9529428667ED27_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m5F35B629E101B0B589F21783546CBA3948B23C94_RuntimeMethod_var);
		UnityAction_1_tA5389CE894003AA2896DE12A63199294D54823AC * L_4 = L_3;
		((U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		EventManager_1_Subscribe_m4102D0478B7C27BB9F65211E5C5BC2FDBD3C223E(G_B2_1, G_B2_0, /*hidden argument*/EventManager_1_Subscribe_m4102D0478B7C27BB9F65211E5C5BC2FDBD3C223E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.TextureRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureRequest__ctor_mC995AB3895EB5402FAC3BFDB08FC3D31B8DB1368 (TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * __this, String_t* ___host0, String_t* ___path1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRequest_1__ctor_m861AD1C21BCDA75AD96BD5894C5E43B7004EB13E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___host0;
		String_t* L_1 = ___path1;
		BaseRequest_1__ctor_m861AD1C21BCDA75AD96BD5894C5E43B7004EB13E(__this, 0, L_0, L_1, /*hidden argument*/BaseRequest_1__ctor_m861AD1C21BCDA75AD96BD5894C5E43B7004EB13E_RuntimeMethod_var);
		return;
	}
}
// System.Void ZEPETO.Module.TextureRequest::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureRequest_Build_mA5E445C62ADEB97C42F723EC6B6C480CCB715A9F (TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRequest_1_Build_m861A57EA0F9ECF3ADAA2F671E41EC9D62E38EC1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRequest_1_Build_m861A57EA0F9ECF3ADAA2F671E41EC9D62E38EC1D(__this, /*hidden argument*/BaseRequest_1_Build_m861A57EA0F9ECF3ADAA2F671E41EC9D62E38EC1D_RuntimeMethod_var);
		String_t* L_0 = ((BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 *)__this)->get__host_3();
		String_t* L_1 = ((BaseRequest_t4198827F68DD5F963F90D62CDAFC87B351903431 *)__this)->get__path_4();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
		__this->set__assetPath_13(L_2);
		return;
	}
}
// System.Void ZEPETO.Module.TextureRequest::SendRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureRequest_SendRequest_m83A4D493F0B5E87E42321AA886BC458C8DAF4C3E (TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mC4ADA5776323C8EEC559FC89CFB95D27F3AE8E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observable_t9050413DAEC890B431CE18A1AC54DA94584CAC09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureRequest_U3CSendRequestU3Eg__sendRequestU7C3_0_m795DCAF583528C2DB9AD6F534FD85B6F29363DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * G_B4_0 = NULL;
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * G_B3_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(11 /* System.Void ZEPETO.Module.BaseRequest::Build() */, __this);
		Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * L_0 = (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D *)il2cpp_codegen_object_new(Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D_il2cpp_TypeInfo_var);
		Func_1__ctor_mC4ADA5776323C8EEC559FC89CFB95D27F3AE8E9D(L_0, __this, (intptr_t)((intptr_t)TextureRequest_U3CSendRequestU3Eg__sendRequestU7C3_0_m795DCAF583528C2DB9AD6F534FD85B6F29363DAA_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mC4ADA5776323C8EEC559FC89CFB95D27F3AE8E9D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Observable_t9050413DAEC890B431CE18A1AC54DA94584CAC09_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Observable_FromCoroutine_m7F80BBFDF3476120EDDF98C20F1E2F9A39F5FCF0(L_0, (bool)0, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1(L_1, /*hidden argument*/ObservableExtensions_Subscribe_TisUnit_t1382B7272A119BEAC05055BF3A77281E378181DB_m8CF8961C64E168EFB896C7D6018ADB4E830ECDF1_RuntimeMethod_var);
		goto IL_006e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_3 = (TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA_il2cpp_TypeInfo_var)));
			TextureResponse__ctor_m3886FA59A0FB45218B351C699473F7A1FA1F62A8(L_3, /*hidden argument*/NULL);
			TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_4 = L_3;
			NullCheck(L_4);
			((BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 *)L_4)->set_isSuccess_0((bool)0);
			TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_5 = L_4;
			Exception_t * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
			NullCheck(L_5);
			((BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 *)L_5)->set_message_1(L_7);
			TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_8 = L_5;
			NullCheck(L_8);
			L_8->set_texture_2((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
			BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_inline(__this, L_8, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_RuntimeMethod_var)));
			Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * L_9 = ((BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *)__this)->get_onFailed_12();
			Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * L_10 = L_9;
			G_B3_0 = L_10;
			if (L_10)
			{
				G_B4_0 = L_10;
				goto IL_0058;
			}
		}

IL_0055:
		{
			goto IL_0064;
		}

IL_0058:
		{
			TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_11;
			L_11 = BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_inline(__this, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_RuntimeMethod_var)));
			NullCheck(G_B4_0);
			Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F(G_B4_0, L_11, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F_RuntimeMethod_var)));
		}

IL_0064:
		{
			VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, __this);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_006e;
		}
	} // end catch (depth: 1)

IL_006e:
	{
		return;
	}
}
// System.Collections.IEnumerator ZEPETO.Module.TextureRequest::<SendRequest>g__sendRequest|3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureRequest_U3CSendRequestU3Eg__sendRequestU7C3_0_m795DCAF583528C2DB9AD6F534FD85B6F29363DAA (TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * L_0 = (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C *)il2cpp_codegen_object_new(U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C_il2cpp_TypeInfo_var);
		U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed__ctor_mCE575FA62C4350CE8AA27B7959DEA5104F030865(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * L_2 = V_0;
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.TextureResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResponse__ctor_m3886FA59A0FB45218B351C699473F7A1FA1F62A8 (TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * __this, const RuntimeMethod* method)
{
	{
		BaseResponse__ctor_m81C60976C987C81339D5424EB3A29D21CE77051B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E (ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitWorldForSignUpDelegate__ctor_m02AABB2A156B3BCEF2195109DBE64F49E25D9D3F (ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitWorldForSignUpDelegate_Invoke_m9DA43740184397086C2F910F8C1D6F5F0636CDD0 (ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExitWorldForSignUpDelegate_BeginInvoke_mD1336FC1970B156411E946D2980ECBC46FB99FF4 (ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ZEPETO.Module.ModuleDelegate/ExitWorldForSignUpDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitWorldForSignUpDelegate_EndInvoke_m238D6618F5C521DB9EE2A486D90D26837A39E4A8 (ExitWorldForSignUpDelegate_t6B6DAD66CA86F0D992C2A6D311BDC0647D7DD69E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____key0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationProxyDelegate__ctor_m809A0CEB797C47BFEF06AF16628775B3007D0C9D (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationProxyDelegate_Invoke_m1A598F051DEFCC2405732AE4B27BDD40EF25BEF6 (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___key0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___key0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___key0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___key0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationProxyDelegate_BeginInvoke_m13FFF14513B8F4D831F343145326EDDD1CD2F0B0 (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, String_t* ___key0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String ZEPETO.Module.ModuleDelegate/LocalizationProxyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationProxyDelegate_EndInvoke_mFC7A4342344E0E75A8C99EEBF1F549361DF45620 (LocalizationProxyDelegate_tF5DB8A9D8035E845FE8C4D6B281B1186B2DD0D0C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 (ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * __this, String_t* ___productId0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCompleted1, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onFailed2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Il2CppMethodPointer, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___productId0' to native representation
	char* ____productId0_marshaled = NULL;
	____productId0_marshaled = il2cpp_codegen_marshal_string(___productId0);

	// Marshaling of parameter '___onCompleted1' to native representation
	Il2CppMethodPointer ____onCompleted1_marshaled = NULL;
	____onCompleted1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onCompleted1));

	// Marshaling of parameter '___onFailed2' to native representation
	Il2CppMethodPointer ____onFailed2_marshaled = NULL;
	____onFailed2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onFailed2));

	// Native function invocation
	il2cppPInvokeFunc(____productId0_marshaled, ____onCompleted1_marshaled, ____onFailed2_marshaled);

	// Marshaling cleanup of parameter '___productId0' native representation
	il2cpp_codegen_marshal_free(____productId0_marshaled);
	____productId0_marshaled = NULL;

}
// System.Void ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessIAPDelegate__ctor_mD47BCB4B5AF76E501B6E70EE42D00C3E71D1FCF7 (ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate::Invoke(System.String,System.Action,System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessIAPDelegate_Invoke_m8D21210188732F7CF09424D230E7413B7348BF34 (ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * __this, String_t* ___productId0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCompleted1, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onFailed2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___productId0, ___onCompleted1, ___onFailed2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___productId0, ___onCompleted1, ___onFailed2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(targetMethod, ___productId0, ___onCompleted1, ___onFailed2);
					else
						GenericVirtActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(targetMethod, ___productId0, ___onCompleted1, ___onFailed2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___productId0, ___onCompleted1, ___onFailed2);
					else
						VirtActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___productId0, ___onCompleted1, ___onFailed2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___productId0, ___onCompleted1, ___onFailed2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(targetMethod, targetThis, ___productId0, ___onCompleted1, ___onFailed2);
					else
						GenericVirtActionInvoker3< String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(targetMethod, targetThis, ___productId0, ___onCompleted1, ___onFailed2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___productId0, ___onCompleted1, ___onFailed2);
					else
						VirtActionInvoker3< String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___productId0, ___onCompleted1, ___onFailed2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___productId0, ___onCompleted1, ___onFailed2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___productId0, ___onCompleted1, ___onFailed2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate::BeginInvoke(System.String,System.Action,System.Action`2<System.Int32,System.String>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessIAPDelegate_BeginInvoke_mE611F69DA56D0C31CDEB5BDBA8A1F858A0AC263A (ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * __this, String_t* ___productId0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCompleted1, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onFailed2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___productId0;
	__d_args[1] = ___onCompleted1;
	__d_args[2] = ___onFailed2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ZEPETO.Module.ModuleDelegate/ProcessIAPDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessIAPDelegate_EndInvoke_m6C855F6B1B2B126E3F6640DB90CEEFA05D6CFD12 (ProcessIAPDelegate_t7780C5AA8C49022B87F065FF285EADBB74EF0083 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendModuleAnalyticsDelegate__ctor_m81EB4418BE5325294E32097CEE73DE3D00993F30 (SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendModuleAnalyticsDelegate_Invoke_m8DE5E3C93A323998BE82B04C4948AAACB16EEA3A (SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___payload0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___payload0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___payload0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___payload0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(targetMethod, targetThis, ___payload0);
					else
						GenericVirtActionInvoker1< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(targetMethod, targetThis, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___payload0);
					else
						VirtActionInvoker1< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___payload0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SendModuleAnalyticsDelegate_BeginInvoke_mD7B09B7D90317D04F1005687B99DD76268388028 (SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___payload0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___payload0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ZEPETO.Module.ModuleDelegate/SendModuleAnalyticsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendModuleAnalyticsDelegate_EndInvoke_m287CAF664DCD4BD7E9E2AC2173B488D872C62172 (SendModuleAnalyticsDelegate_tE8ADDA9661D7683D5BEDC628FC733D2B1A78845D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.RuntimeInitializer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC9F961979F4C9907C8821FEC222ADC9D5D8C908B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * L_0 = (U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F *)il2cpp_codegen_object_new(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m62FCCE06651E4E53C256B10F3D0AB21C17DDA581(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ZEPETO.Module.RuntimeInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m62FCCE06651E4E53C256B10F3D0AB21C17DDA581 (U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Module.RuntimeInitializer/<>c::<InitializeOnLoad>b__0_0(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitializeOnLoadU3Eb__0_0_m2910BA067267EC81240F5D18FA9529428667ED27 (U3CU3Ec_tAB4D6363D94A1BEE5D2DF2046DBC70E4CAD9592F * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___allPackageInfos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_1_Raise_mD3A9F248B43A4D6765E7771F568C331B202CE38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisModulePackageInfo_t98378D2691F63C279585857863617CED91105113_m530178C57558C4474DDBB08365872E9A1554769D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05);
		s_Il2CppMethodInitialized = true;
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = ___allPackageInfos0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		ModulePackageInfo_t98378D2691F63C279585857863617CED91105113 * L_2;
		L_2 = JsonUtility_FromJson_TisModulePackageInfo_t98378D2691F63C279585857863617CED91105113_m530178C57558C4474DDBB08365872E9A1554769D(L_1, /*hidden argument*/JsonUtility_FromJson_TisModulePackageInfo_t98378D2691F63C279585857863617CED91105113_m530178C57558C4474DDBB08365872E9A1554769D_RuntimeMethod_var);
		EventManager_1_Raise_mD3A9F248B43A4D6765E7771F568C331B202CE38E(_stringLiteralD40BDA4579371F9C632551314CDBBBD1FAF9CB05, L_2, /*hidden argument*/EventManager_1_Raise_mD3A9F248B43A4D6765E7771F568C331B202CE38E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed__ctor_mCE575FA62C4350CE8AA27B7959DEA5104F030865 (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_IDisposable_Dispose_m2252480BEC62DCBD46BC3A95EDADFC257891F31E (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_MoveNext_m72FF5CF5EF994A276CA4E8D13B4B3FDC25B4635C (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CSendRequestU3Eb__1_m0281980D090BEADCADD6EDB4F6A85613CBD3DF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B11_0 = 0;
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * G_B15_0 = NULL;
	Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_006c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_3 = (U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mBA251CA855217AA535055DAD613F6C8E33B6B085(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_3);
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_4 = __this->get_U3CU3E8__1_3();
		TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		String_t* L_6 = L_5->get__assetPath_13();
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64_il2cpp_TypeInfo_var);
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_7;
		L_7 = ZepetoAssetRequest_Create_mA86B23945864615B877CF8C8E50521C815111DEA(L_6, 1, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_request_0(L_7);
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_8 = __this->get_U3CU3E8__1_3();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CSendRequestU3Eb__1_m0281980D090BEADCADD6EDB4F6A85613CBD3DF60_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_11 = __this->get_U3CU3E8__1_3();
		NullCheck(L_11);
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_12 = L_11->get_request_0();
		NullCheck(L_12);
		RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * L_13;
		L_13 = ZepetoAssetRequest_get_Result_mD9CA53A52BB4593A41289639C5B8EF1AA4010FAA_inline(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_14 = __this->get_U3CU3E8__1_3();
		NullCheck(L_14);
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_15 = L_14->get_request_0();
		NullCheck(L_15);
		bool L_16;
		L_16 = ZepetoAssetRequest_get_isComplete_mBD6E8A1ABA0D5DF9FE14F83EB61E23275EAD776F_inline(L_15, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B11_0 = 1;
	}

IL_009b:
	{
		V_1 = (bool)G_B11_0;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_18 = __this->get_U3CU3E8__1_3();
		NullCheck(L_18);
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_19 = L_18->get_request_0();
		NullCheck(L_19);
		Exception_t * L_20 = L_19->get_exception_17();
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
		Exception_t * L_22 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_MoveNext_m72FF5CF5EF994A276CA4E8D13B4B3FDC25B4635C_RuntimeMethod_var)));
	}

IL_00bb:
	{
		TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * L_23 = __this->get_U3CU3E4__this_2();
		TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_24 = (TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA *)il2cpp_codegen_object_new(TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA_il2cpp_TypeInfo_var);
		TextureResponse__ctor_m3886FA59A0FB45218B351C699473F7A1FA1F62A8(L_24, /*hidden argument*/NULL);
		TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_25 = L_24;
		NullCheck(L_25);
		((BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 *)L_25)->set_isSuccess_0((bool)1);
		TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_26 = L_25;
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_26);
		((BaseResponse_tE87DFA370BEE6FB165B180B5EB3CBD5CA7F61A57 *)L_26)->set_message_1(L_27);
		TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_28 = L_26;
		U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * L_29 = __this->get_U3CU3E8__1_3();
		NullCheck(L_29);
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_30 = L_29->get_request_0();
		NullCheck(L_30);
		RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * L_31;
		L_31 = ZepetoAssetRequest_get_Result_mD9CA53A52BB4593A41289639C5B8EF1AA4010FAA_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		RuntimeObject * L_32 = L_31->get_asset_0();
		NullCheck(L_28);
		L_28->set_texture_2(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_32, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_inline(L_23, L_28, /*hidden argument*/BaseRequest_1_set_responseData_m7D2C34BBE90884048399D0EF7280621F52BEF89B_RuntimeMethod_var);
		TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * L_34 = ((BaseRequest_1_tF3B029DB1A500458C409E0DA7C790D83994D40C0 *)L_33)->get_onCompleted_11();
		Action_1_tB3AA31F11CEF4A9FCA321C54BD024D46C6CFE4F4 * L_35 = L_34;
		G_B14_0 = L_35;
		if (L_35)
		{
			G_B15_0 = L_35;
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_010f:
	{
		TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * L_36 = __this->get_U3CU3E4__this_2();
		NullCheck(L_36);
		TextureResponse_t96835E1EC0CF4DA9B2A48399661DEF76CAD0F3BA * L_37;
		L_37 = BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_inline(L_36, /*hidden argument*/BaseRequest_1_get_responseData_mF4B6E96946F7A18BB9ABEC4CC6C3F6EA31583C14_RuntimeMethod_var);
		NullCheck(G_B15_0);
		Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F(G_B15_0, L_37, /*hidden argument*/Action_1_Invoke_mAA4673733A1A9BF55E3219012F8567D3E6419E7F_RuntimeMethod_var);
	}

IL_0120:
	{
		TextureRequest_tE74DF2D793FE4EFB13549B560A9A6F001D8207F0 * L_38 = __this->get_U3CU3E4__this_2();
		NullCheck(L_38);
		VirtActionInvoker0::Invoke(15 /* System.Void ZEPETO.Module.BaseRequest::Dispose() */, L_38);
		return (bool)0;
	}
}
// System.Object ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E386D56BA5E6F359ACDA06023DF5DF40D637931 (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_Collections_IEnumerator_Reset_mD8285B2580F621B5590F7A51E3E7D999966365B5 (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_Collections_IEnumerator_Reset_mD8285B2580F621B5590F7A51E3E7D999966365B5_RuntimeMethod_var)));
	}
}
// System.Object ZEPETO.Module.TextureRequest/<<SendRequest>g__sendRequest|3_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_System_Collections_IEnumerator_get_Current_mEB0B50D79CE5E3A89B9FAC6F7B9B1FED1C3AD0BE (U3CU3CSendRequestU3Eg__sendRequestU7C3_0U3Ed_t18556E8F9CFA78B0DB82303B39D1C0A949A3694C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mBA251CA855217AA535055DAD613F6C8E33B6B085 (U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZEPETO.Module.TextureRequest/<>c__DisplayClass3_0::<SendRequest>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CSendRequestU3Eb__1_m0281980D090BEADCADD6EDB4F6A85613CBD3DF60 (U3CU3Ec__DisplayClass3_0_tE12F208D84ECE496D60BAE6325D9F3FBF28D3127 * __this, const RuntimeMethod* method)
{
	{
		ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * L_0 = __this->get_request_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.CustomYieldInstruction::get_keepWaiting() */, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * ZepetoAssetRequest_get_Result_mD9CA53A52BB4593A41289639C5B8EF1AA4010FAA_inline (ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * __this, const RuntimeMethod* method)
{
	{
		RequestResult_t2A64BD68D67F9210C243B70CA0D7F79E45200963 * L_0 = __this->get__result_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZepetoAssetRequest_get_isComplete_mBD6E8A1ABA0D5DF9FE14F83EB61E23275EAD776F_inline (ZepetoAssetRequest_tA62CD9AC55DE9D41B77E21DFA422D38E25386F64 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isComplete_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRequest_1_set_responseData_mB3E1A18FC0FB85F4BF9854A30436866CE0AD5F0A_gshared_inline (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CresponseDataU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseRequest_1_get_responseData_m3FF5297BBFE8EE24E5FB56466F5C599ED03C4926_gshared_inline (BaseRequest_1_t239DD9AD2AF31C1F0439DE5994781BCD699635B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CresponseDataU3Ek__BackingField_10();
		return (RuntimeObject *)L_0;
	}
}
