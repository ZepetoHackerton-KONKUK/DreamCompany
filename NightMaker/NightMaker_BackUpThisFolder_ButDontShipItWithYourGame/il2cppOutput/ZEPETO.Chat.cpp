#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>>
struct Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909;
// System.Action`1<ZEPETO.Chat.IMessage>
struct Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2;
// System.Action`1<ZEPETO.Multiplay.MPack>
struct Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<ZEPETO.Multiplay.RoomBase>
struct Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989;
// System.Action`1<ZEPETO.Multiplay.RoomErrorEvent>
struct Action_1_t5A1766E597EE13270E033DC01531D383AFFB06E1;
// System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent>
struct Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50;
// System.Action`1<ZEPETO.Multiplay.RoomWeakConnectionEvent>
struct Action_1_t4A083563B52F80149D9D798AF63CFB6E11B0D2EC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<ZEPETO.Multiplay.ZepetoMultiplayBase>
struct Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D;
// System.Action`1<ZEPETO.Chat.ChatFilter/ResponseData>
struct Action_1_t135532E32DE72A3A9210C67F0B7829393B432658;
// System.Action`1<ZEPETO.Chat.UserInfos/Response>
struct Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`2<ZEPETO.Chat.IMessage,System.Action`1<ZEPETO.Chat.IMessage>>
struct Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>
struct BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB;
// System.Collections.Generic.Dictionary`2<System.Int32,ZEPETO.Multiplay.RPCMessage>
struct Dictionary_2_t730A66591DE2879A7F0EE02746459EFB04C651D8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String>
struct Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55;
// System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Multiplay.IMessageHandler>
struct Dictionary_2_tD1AEBC551A793E7555CCBE7FD83D3D2578AD3035;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>
struct Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<ZEPETO.Chat.UserDataMessage,System.String>
struct Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<ZEPETO.Chat.UserDataMessage>
struct IEnumerable_1_t0898DA54F25AE10A70A8AA29BA374F20378AAF86;
// System.Collections.Generic.IEqualityComparer`1<ZEPETO.Chat.RequestTypes>
struct IEqualityComparer_1_tC70004D9ECBA855CC6BF9DEC2E9F622D96CDC89D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<ZEPETO.Chat.RequestTypes,System.String>
struct KeyCollection_t304CA9D190A207E3E94FDED3314170D978E99B3A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,ZEPETO.Chat.UserInfo>
struct KeyCollection_t2CF954C7B70CB64C9FFA23053CC50755ECDEAB16;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// UnityEngine.Events.UnityEvent`1<ZEPETO.Chat.IMessage>
struct UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.Dictionary`2/ValueCollection<ZEPETO.Chat.RequestTypes,System.String>
struct ValueCollection_tD4FA889462BFBDD442BB0404DEA9AB847E89A611;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ZEPETO.Chat.UserInfo>
struct ValueCollection_t174AF97DD0FAB6BB94E0850A2B9A2F940EC64E88;
// System.Collections.Generic.Dictionary`2/Entry<ZEPETO.Chat.RequestTypes,System.String>[]
struct EntryU5BU5D_tEE25CF7444E845631F5379DAD75D20A5FDBEFFBB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,ZEPETO.Chat.UserInfo>[]
struct EntryU5BU5D_t49528BF0A86D50D460D66C08E4385F2183F640DE;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// ZEPETO.Chat.UserDataMessage[]
struct UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689;
// ZEPETO.Chat.UserInfo[]
struct UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// ZEPETO.Multiplay.ColyseusClientBase
struct ColyseusClientBase_tDCA534C81196EF9CBC9BFE12AFFD23B90BF8CA87;
// ZEPETO.Multiplay.ColyseusCloseEventHandler
struct ColyseusCloseEventHandler_tE1093624734C2242659C6E34C3B661FB0C4EE80E;
// ZEPETO.Multiplay.ColyseusErrorEventHandler
struct ColyseusErrorEventHandler_t7ECCB99DC966881E8DDD0D4BFB97152666D7C1F9;
// ZEPETO.Multiplay.ColyseusOpenEventHandler
struct ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A;
// ZEPETO.Multiplay.ColyseusWeakConnectionEventHandler
struct ColyseusWeakConnectionEventHandler_tCA6F4282E3534308E46A38EBC02E739687259A5C;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// ZEPETO.Multiplay.Decoder
struct Decoder_tA462413B5F6AA4DD3739A7193203BDCA498BFA78;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// ZEPETO.Multiplay.Encoder
struct Encoder_t0C9CE0EAFFD3A306BDC22A9A2D95593785339D48;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ZEPETO.Chat.IMessage
struct IMessage_tE565F076B63C9F6B279202EC8033CBCDCB8FD833;
// ZEPETO.Chat.IRequest
struct IRequest_t23D1A9064409DAB56CA855DA40A516452D0202A7;
// ZEPETO.Multiplay.ISchemaRegistry
struct ISchemaRegistry_t9B20BACD445D434966467B3778CC54A728E3B557;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// ZEPETO.Multiplay.MPack
struct MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3;
// ZEPETO.Chat.MessageData
struct MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// ZEPETO.Chat.ResponseBase
struct ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418;
// ZEPETO.Multiplay.RoomBase
struct RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7;
// ZEPETO.Multiplay.RoomLeaveEvent
struct RoomLeaveEvent_t357416DFCC1CF0C2EEA78959C1682719CAAA7BF2;
// ZEPETO.Chat.RoomUserDataMessage
struct RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// ZEPETO.Chat.SystemMessage
struct SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// ZEPETO.Multiplay.TransportBase
struct TransportBase_t23806CE69AA21022F7953C96E3BC1E67955E68F5;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// ZEPETO.Chat.UserData
struct UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2;
// ZEPETO.Chat.UserDataMessage
struct UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE;
// ZEPETO.Chat.UserInfo
struct UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA;
// ZEPETO.Chat.UserMessage
struct UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ZEPETO.Chat.ZepetoChatImplementation
struct ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD;
// ZEPETO.Multiplay.ZepetoMultiplayBase
struct ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49;
// ZEPETO.Chat.ChatFilter/Data
struct Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017;
// ZEPETO.Chat.ChatFilter/Request
struct Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4;
// ZEPETO.Chat.ChatFilter/ResponseData
struct ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// ZEPETO.Chat.UserInfos/Request
struct Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1;
// ZEPETO.Chat.UserInfos/Response
struct Response_t6E766D2144F91E5C162CB6433534B9946D8913DC;
// ZEPETO.Chat.ZepetoChatImplementation/<>c
struct U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416;
// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B;
// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1;
// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F;
// ZEPETO.Chat.ZepetoChatImplementation/InternalAction
struct InternalAction_t991429916C5993620BD9278E25563278C6CE0785;
// ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage
struct OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t135532E32DE72A3A9210C67F0B7829393B432658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalAction_t991429916C5993620BD9278E25563278C6CE0785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestTypes_t79B936BC185A91FAB730F1120DF5B4A5A0362412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral106C5CBA11906F5B9E89907DB266C425FCEA1224;
IL2CPP_EXTERN_C String_t* _stringLiteral20C4CF2575250ED3C93D2EEBEF760715357FF9AA;
IL2CPP_EXTERN_C String_t* _stringLiteral224F5E1284ABD323C230BEAC2A5B1988B555DD45;
IL2CPP_EXTERN_C String_t* _stringLiteral260B722647037B88E324949F3B4C8525312D97A8;
IL2CPP_EXTERN_C String_t* _stringLiteral274C2A569EFF1ACFFB3F20803E12E0065929F2FD;
IL2CPP_EXTERN_C String_t* _stringLiteral44D11B11706482652D3A481A1FF0222AF625DB61;
IL2CPP_EXTERN_C String_t* _stringLiteral463D565270F8F53D7BE2BC657B9A27F9A690FC14;
IL2CPP_EXTERN_C String_t* _stringLiteral4982B305CE3243A4FFCE81E97648F45B0435C1BB;
IL2CPP_EXTERN_C String_t* _stringLiteral515F4566707B15CF93CF9F9A85C39E0134D62593;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral6C6831D06777E90A212DE2409537E460B8A98F27;
IL2CPP_EXTERN_C String_t* _stringLiteral7090A22D72DFF6FDACF079043CC1699F66ACD1A9;
IL2CPP_EXTERN_C String_t* _stringLiteral723AB20ADDD3A2839FC99702E2F1FE0286AF914D;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE831301ED107CFE7742BCC40D2B21308658933;
IL2CPP_EXTERN_C String_t* _stringLiteral7DFE227CDEDF9A99DD56F2CC40261FFA1F244F63;
IL2CPP_EXTERN_C String_t* _stringLiteral80A7E034996BD73C5452870A8D33D2BF2196085F;
IL2CPP_EXTERN_C String_t* _stringLiteral90CAC3DEC85C3550F09F6232BEB3EF8F3E48D505;
IL2CPP_EXTERN_C String_t* _stringLiteral93A38D10ED0F4ABA3072B5319887455F6BEE1B56;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA54A449BC1959F5D26EB973A0A66BF05E8F0CB26;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BBA864DE9FB1CE56CFBD12A04474B845BB895D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FB0C18E24534DDC172EE89839C78275642B54A;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A64F3EB4DECC1C55DA5EE442B1C59D952EEA48;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD9F14884DA90BF94638412653B547B4AC562BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE58D7D671D30D5A8E7EAA4F4E5D8323FC41F3918;
IL2CPP_EXTERN_C String_t* _stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m3411EEBC000035F785FE7E340C0529413E67E05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m54C626C082B91735A2F30A15018386822ACE5C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5F084AF153D2A8E55DC5D3CD83324B6718CAE6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m27DAB6BE460A62FF2514719217CDE27F1700B459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m633F506830FFEB1667B4F8E6747A8EBE6E18F086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFE429C5FDFE94EE45175951ED6201431061D92A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m94E70F81C0A424EAA0C5A4A51D12470FF21206DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m61D05585460FFFA86FCD5DA9A58254FE28F9CA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m80AB1BB4DFE483E10C537A53508D7F84433EF31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m66A140B304BA06C43B8B32BC241FCC84E121CBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_m8134C49AFCD61B121F51D991E4D073706CD279D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_TisString_t_m77DCAB75604B45125C7C49E3FFF438FCA3B321B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0D21E557635474D6D02FC81CE808D919C1EA71C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m3F315D6238238E223153B2CCCA518517FDC6F917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MPack_To_TisRoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036_mECE06BFBA7A1E5B7EBD0C2D94E84B24D26E7CE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestHelper_Post_TisResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81_mF79EC1F06D4D271FE742A20375563ADC613C7445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomBase_AddMessageHandler_TisBroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB_m7FAE233825E5B7309A4C859ED1A510781532C268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFilterU3Eb__28_1_m5874D83C4F5D11D8B7AFC91D152390B3A1AC2816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnRoomDataSessionListHandlerU3Eb__22_0_m2C05AF013E09B9AEEE1B3A4B1B8EE256FE602197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3COnMultiplayRoomCreatedU3Eb__0_m03A7445BE76806F5690B097D965D9A209F3C5C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CFilterU3Eb__0_mE18FDDCFB94EC79B108D110F6C2C664C0CE42281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass30_0_U3CGetUserInfoAsSessionIdU3Eb__0_m6552C90786B5DAA48AA9735802A96EF8D2AC6C39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnJoinRoomBroadcastHandler_m2B1D1A37845282B805AAABCBD2D22F1DAD804CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnLeaveRoomBroadcastHandler_m3E15C404C86F7D7A069F0F52AA8716C03C8F8CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnReceiveMessageData_m5D6F3975563F55C7328DEB404835C8B4263B00C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnRoomDataSessionListError_mEC9BA559DCFA2C6BF325A32D21EA8F9298539D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnRoomDataSessionListHandler_m3132F829E96C43C27373686047EE84A520BD1EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_OnRoomDataSessionListResponse_m06DA1E40C372AE70D15A84FA1F90DFBDD566DA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_U3CReceiveMessageU3Eb__26_0_mE6F73624EFE3D0B109ACB93113E0DB6D551038FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZepetoChatImplementation_U3CSendU3Eb__27_0_m7981D77A6BCB3A9FDFE53B82D1246B845A847E92_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689;
struct UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF8DDF3BDF357A5D8B921C23FABD1956EF876DE8B 
{
public:

public:
};


// System.Object


// ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>
struct BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB  : public RuntimeObject
{
public:
	// T ZEPETO.Multiplay.BroadcastMessage`1::data
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB, ___data_0)); }
	inline MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * get_data_0() const { return ___data_0; }
	inline MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String>
struct Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEE25CF7444E845631F5379DAD75D20A5FDBEFFBB* ___entries_1;
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
	KeyCollection_t304CA9D190A207E3E94FDED3314170D978E99B3A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD4FA889462BFBDD442BB0404DEA9AB847E89A611 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___entries_1)); }
	inline EntryU5BU5D_tEE25CF7444E845631F5379DAD75D20A5FDBEFFBB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEE25CF7444E845631F5379DAD75D20A5FDBEFFBB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEE25CF7444E845631F5379DAD75D20A5FDBEFFBB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___keys_7)); }
	inline KeyCollection_t304CA9D190A207E3E94FDED3314170D978E99B3A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t304CA9D190A207E3E94FDED3314170D978E99B3A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t304CA9D190A207E3E94FDED3314170D978E99B3A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ___values_8)); }
	inline ValueCollection_tD4FA889462BFBDD442BB0404DEA9AB847E89A611 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD4FA889462BFBDD442BB0404DEA9AB847E89A611 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD4FA889462BFBDD442BB0404DEA9AB847E89A611 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55, ____syncRoot_9)); }
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


// System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>
struct Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t49528BF0A86D50D460D66C08E4385F2183F640DE* ___entries_1;
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
	KeyCollection_t2CF954C7B70CB64C9FFA23053CC50755ECDEAB16 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t174AF97DD0FAB6BB94E0850A2B9A2F940EC64E88 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___entries_1)); }
	inline EntryU5BU5D_t49528BF0A86D50D460D66C08E4385F2183F640DE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t49528BF0A86D50D460D66C08E4385F2183F640DE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t49528BF0A86D50D460D66C08E4385F2183F640DE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___keys_7)); }
	inline KeyCollection_t2CF954C7B70CB64C9FFA23053CC50755ECDEAB16 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2CF954C7B70CB64C9FFA23053CC50755ECDEAB16 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2CF954C7B70CB64C9FFA23053CC50755ECDEAB16 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ___values_8)); }
	inline ValueCollection_t174AF97DD0FAB6BB94E0850A2B9A2F940EC64E88 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t174AF97DD0FAB6BB94E0850A2B9A2F940EC64E88 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t174AF97DD0FAB6BB94E0850A2B9A2F940EC64E88 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ZEPETO.Chat.ChatFilter
struct ChatFilter_tDFB372D5D9715B16B4096F19B0C65582E613337D  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Chat.Internal.ChatSettings
struct ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9  : public RuntimeObject
{
public:

public:
};

struct ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields
{
public:
	// System.String ZEPETO.Chat.Internal.ChatSettings::<APIHost>k__BackingField
	String_t* ___U3CAPIHostU3Ek__BackingField_0;
	// System.String ZEPETO.Chat.Internal.ChatSettings::<FilterHost>k__BackingField
	String_t* ___U3CFilterHostU3Ek__BackingField_1;
	// System.Boolean ZEPETO.Chat.Internal.ChatSettings::<isZaizai>k__BackingField
	bool ___U3CisZaizaiU3Ek__BackingField_2;
	// System.String ZEPETO.Chat.Internal.ChatSettings::<AuthToken>k__BackingField
	String_t* ___U3CAuthTokenU3Ek__BackingField_3;
	// System.String ZEPETO.Chat.Internal.ChatSettings::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.String ZEPETO.Chat.Internal.ChatSettings::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_5;
	// System.String ZEPETO.Chat.Internal.ChatSettings::_language
	String_t* ____language_6;

public:
	inline static int32_t get_offset_of_U3CAPIHostU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CAPIHostU3Ek__BackingField_0)); }
	inline String_t* get_U3CAPIHostU3Ek__BackingField_0() const { return ___U3CAPIHostU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAPIHostU3Ek__BackingField_0() { return &___U3CAPIHostU3Ek__BackingField_0; }
	inline void set_U3CAPIHostU3Ek__BackingField_0(String_t* value)
	{
		___U3CAPIHostU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAPIHostU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterHostU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CFilterHostU3Ek__BackingField_1)); }
	inline String_t* get_U3CFilterHostU3Ek__BackingField_1() const { return ___U3CFilterHostU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFilterHostU3Ek__BackingField_1() { return &___U3CFilterHostU3Ek__BackingField_1; }
	inline void set_U3CFilterHostU3Ek__BackingField_1(String_t* value)
	{
		___U3CFilterHostU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterHostU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisZaizaiU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CisZaizaiU3Ek__BackingField_2)); }
	inline bool get_U3CisZaizaiU3Ek__BackingField_2() const { return ___U3CisZaizaiU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisZaizaiU3Ek__BackingField_2() { return &___U3CisZaizaiU3Ek__BackingField_2; }
	inline void set_U3CisZaizaiU3Ek__BackingField_2(bool value)
	{
		___U3CisZaizaiU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CAuthTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CAuthTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CAuthTokenU3Ek__BackingField_3() const { return ___U3CAuthTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CAuthTokenU3Ek__BackingField_3() { return &___U3CAuthTokenU3Ek__BackingField_3; }
	inline void set_U3CAuthTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CAuthTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ___U3CUserNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_5() const { return ___U3CUserNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_5() { return &___U3CUserNameU3Ek__BackingField_5; }
	inline void set_U3CUserNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of__language_6() { return static_cast<int32_t>(offsetof(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields, ____language_6)); }
	inline String_t* get__language_6() const { return ____language_6; }
	inline String_t** get_address_of__language_6() { return &____language_6; }
	inline void set__language_6(String_t* value)
	{
		____language_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____language_6), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// ZEPETO.Chat.MessageData
struct MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.MessageData::senderSessionId
	String_t* ___senderSessionId_0;
	// System.String ZEPETO.Chat.MessageData::messageType
	String_t* ___messageType_1;
	// System.String ZEPETO.Chat.MessageData::message
	String_t* ___message_2;
	// System.Boolean ZEPETO.Chat.MessageData::isFiltered
	bool ___isFiltered_3;

public:
	inline static int32_t get_offset_of_senderSessionId_0() { return static_cast<int32_t>(offsetof(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B, ___senderSessionId_0)); }
	inline String_t* get_senderSessionId_0() const { return ___senderSessionId_0; }
	inline String_t** get_address_of_senderSessionId_0() { return &___senderSessionId_0; }
	inline void set_senderSessionId_0(String_t* value)
	{
		___senderSessionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___senderSessionId_0), (void*)value);
	}

	inline static int32_t get_offset_of_messageType_1() { return static_cast<int32_t>(offsetof(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B, ___messageType_1)); }
	inline String_t* get_messageType_1() const { return ___messageType_1; }
	inline String_t** get_address_of_messageType_1() { return &___messageType_1; }
	inline void set_messageType_1(String_t* value)
	{
		___messageType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageType_1), (void*)value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_isFiltered_3() { return static_cast<int32_t>(offsetof(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B, ___isFiltered_3)); }
	inline bool get_isFiltered_3() const { return ___isFiltered_3; }
	inline bool* get_address_of_isFiltered_3() { return &___isFiltered_3; }
	inline void set_isFiltered_3(bool value)
	{
		___isFiltered_3 = value;
	}
};


// ZEPETO.Chat.RequestAPIHost
struct RequestAPIHost_t1AE0FFC260C340C12E7FC5A7AE8B7EBC3AF91E5E  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Chat.RequestAPIs
struct RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21  : public RuntimeObject
{
public:

public:
};

struct RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String> ZEPETO.Chat.RequestAPIs::apis
	Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * ___apis_0;

public:
	inline static int32_t get_offset_of_apis_0() { return static_cast<int32_t>(offsetof(RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_StaticFields, ___apis_0)); }
	inline Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * get_apis_0() const { return ___apis_0; }
	inline Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 ** get_address_of_apis_0() { return &___apis_0; }
	inline void set_apis_0(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * value)
	{
		___apis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apis_0), (void*)value);
	}
};


// ZEPETO.Chat.RequestHelper
struct RequestHelper_t9318D3B67083614B137105B3779631DC83891113  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Chat.ResponseBase
struct ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418  : public RuntimeObject
{
public:
	// System.Boolean ZEPETO.Chat.ResponseBase::isSuccess
	bool ___isSuccess_0;
	// System.String ZEPETO.Chat.ResponseBase::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_isSuccess_0() { return static_cast<int32_t>(offsetof(ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418, ___isSuccess_0)); }
	inline bool get_isSuccess_0() const { return ___isSuccess_0; }
	inline bool* get_address_of_isSuccess_0() { return &___isSuccess_0; }
	inline void set_isSuccess_0(bool value)
	{
		___isSuccess_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// ZEPETO.Multiplay.RoomLeaveEvent
struct RoomLeaveEvent_t357416DFCC1CF0C2EEA78959C1682719CAAA7BF2  : public RuntimeObject
{
public:
	// System.Int32 ZEPETO.Multiplay.RoomLeaveEvent::Code
	int32_t ___Code_0;
	// System.String ZEPETO.Multiplay.RoomLeaveEvent::Message
	String_t* ___Message_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(RoomLeaveEvent_t357416DFCC1CF0C2EEA78959C1682719CAAA7BF2, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(RoomLeaveEvent_t357416DFCC1CF0C2EEA78959C1682719CAAA7BF2, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}
};


// ZEPETO.Chat.RoomUserDataMessage
struct RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036  : public RuntimeObject
{
public:
	// ZEPETO.Chat.UserDataMessage[] ZEPETO.Chat.RoomUserDataMessage::sessions
	UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* ___sessions_0;

public:
	inline static int32_t get_offset_of_sessions_0() { return static_cast<int32_t>(offsetof(RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036, ___sessions_0)); }
	inline UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* get_sessions_0() const { return ___sessions_0; }
	inline UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689** get_address_of_sessions_0() { return &___sessions_0; }
	inline void set_sessions_0(UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* value)
	{
		___sessions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessions_0), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// ZEPETO.Chat.UserData
struct UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.UserData::userId
	String_t* ___userId_0;

public:
	inline static int32_t get_offset_of_userId_0() { return static_cast<int32_t>(offsetof(UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2, ___userId_0)); }
	inline String_t* get_userId_0() const { return ___userId_0; }
	inline String_t** get_address_of_userId_0() { return &___userId_0; }
	inline void set_userId_0(String_t* value)
	{
		___userId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_0), (void*)value);
	}
};


// ZEPETO.Chat.UserDataMessage
struct UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.UserDataMessage::sessionId
	String_t* ___sessionId_0;
	// ZEPETO.Chat.UserData ZEPETO.Chat.UserDataMessage::userData
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * ___userData_1;

public:
	inline static int32_t get_offset_of_sessionId_0() { return static_cast<int32_t>(offsetof(UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE, ___sessionId_0)); }
	inline String_t* get_sessionId_0() const { return ___sessionId_0; }
	inline String_t** get_address_of_sessionId_0() { return &___sessionId_0; }
	inline void set_sessionId_0(String_t* value)
	{
		___sessionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_0), (void*)value);
	}

	inline static int32_t get_offset_of_userData_1() { return static_cast<int32_t>(offsetof(UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE, ___userData_1)); }
	inline UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * get_userData_1() const { return ___userData_1; }
	inline UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 ** get_address_of_userData_1() { return &___userData_1; }
	inline void set_userData_1(UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * value)
	{
		___userData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_1), (void*)value);
	}
};


// ZEPETO.Chat.UserInfo
struct UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.UserInfo::userId
	String_t* ___userId_0;
	// System.String ZEPETO.Chat.UserInfo::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_userId_0() { return static_cast<int32_t>(offsetof(UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA, ___userId_0)); }
	inline String_t* get_userId_0() const { return ___userId_0; }
	inline String_t** get_address_of_userId_0() { return &___userId_0; }
	inline void set_userId_0(String_t* value)
	{
		___userId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};


// ZEPETO.Chat.UserInfos
struct UserInfos_t9A4757BDE29102D35263CE0E795E14CFDC897AFB  : public RuntimeObject
{
public:

public:
};


// ZEPETO.Chat.UserMessage
struct UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.UserMessage::sessionId
	String_t* ___sessionId_0;
	// System.String ZEPETO.Chat.UserMessage::messageType
	String_t* ___messageType_1;
	// System.String ZEPETO.Chat.UserMessage::message
	String_t* ___message_2;
	// System.String ZEPETO.Chat.UserMessage::userId
	String_t* ___userId_3;
	// System.String ZEPETO.Chat.UserMessage::userName
	String_t* ___userName_4;
	// System.Boolean ZEPETO.Chat.UserMessage::isFiltered
	bool ___isFiltered_5;

public:
	inline static int32_t get_offset_of_sessionId_0() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___sessionId_0)); }
	inline String_t* get_sessionId_0() const { return ___sessionId_0; }
	inline String_t** get_address_of_sessionId_0() { return &___sessionId_0; }
	inline void set_sessionId_0(String_t* value)
	{
		___sessionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_0), (void*)value);
	}

	inline static int32_t get_offset_of_messageType_1() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___messageType_1)); }
	inline String_t* get_messageType_1() const { return ___messageType_1; }
	inline String_t** get_address_of_messageType_1() { return &___messageType_1; }
	inline void set_messageType_1(String_t* value)
	{
		___messageType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageType_1), (void*)value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_userId_3() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___userId_3)); }
	inline String_t* get_userId_3() const { return ___userId_3; }
	inline String_t** get_address_of_userId_3() { return &___userId_3; }
	inline void set_userId_3(String_t* value)
	{
		___userId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_3), (void*)value);
	}

	inline static int32_t get_offset_of_userName_4() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___userName_4)); }
	inline String_t* get_userName_4() const { return ___userName_4; }
	inline String_t** get_address_of_userName_4() { return &___userName_4; }
	inline void set_userName_4(String_t* value)
	{
		___userName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userName_4), (void*)value);
	}

	inline static int32_t get_offset_of_isFiltered_5() { return static_cast<int32_t>(offsetof(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316, ___isFiltered_5)); }
	inline bool get_isFiltered_5() const { return ___isFiltered_5; }
	inline bool* get_address_of_isFiltered_5() { return &___isFiltered_5; }
	inline void set_isFiltered_5(bool value)
	{
		___isFiltered_5 = value;
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

// ZEPETO.Chat.ZepetoChat
struct ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F  : public RuntimeObject
{
public:

public:
};

struct ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_StaticFields
{
public:
	// ZEPETO.Chat.ZepetoChatImplementation ZEPETO.Chat.ZepetoChat::s_instance
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * ___s_instance_0;

public:
	inline static int32_t get_offset_of_s_instance_0() { return static_cast<int32_t>(offsetof(ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_StaticFields, ___s_instance_0)); }
	inline ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * get_s_instance_0() const { return ___s_instance_0; }
	inline ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD ** get_address_of_s_instance_0() { return &___s_instance_0; }
	inline void set_s_instance_0(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * value)
	{
		___s_instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_instance_0), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation
struct ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD  : public RuntimeObject
{
public:
	// ZEPETO.Multiplay.ZepetoMultiplayBase ZEPETO.Chat.ZepetoChatImplementation::_multiplay
	ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * ____multiplay_0;
	// ZEPETO.Multiplay.RoomBase ZEPETO.Chat.ZepetoChatImplementation::_room
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ____room_1;
	// System.Int32 ZEPETO.Chat.ZepetoChatImplementation::<SendMessageCount>k__BackingField
	int32_t ___U3CSendMessageCountU3Ek__BackingField_3;
	// UnityEngine.Events.UnityEvent`1<ZEPETO.Chat.IMessage> ZEPETO.Chat.ZepetoChatImplementation::onReceivedMessage
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * ___onReceivedMessage_4;
	// System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo> ZEPETO.Chat.ZepetoChatImplementation::_userInfos
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * ____userInfos_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.Chat.ZepetoChatImplementation::_sessionIds
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____sessionIds_6;

public:
	inline static int32_t get_offset_of__multiplay_0() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ____multiplay_0)); }
	inline ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * get__multiplay_0() const { return ____multiplay_0; }
	inline ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 ** get_address_of__multiplay_0() { return &____multiplay_0; }
	inline void set__multiplay_0(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * value)
	{
		____multiplay_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____multiplay_0), (void*)value);
	}

	inline static int32_t get_offset_of__room_1() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ____room_1)); }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * get__room_1() const { return ____room_1; }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 ** get_address_of__room_1() { return &____room_1; }
	inline void set__room_1(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * value)
	{
		____room_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____room_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSendMessageCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ___U3CSendMessageCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CSendMessageCountU3Ek__BackingField_3() const { return ___U3CSendMessageCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSendMessageCountU3Ek__BackingField_3() { return &___U3CSendMessageCountU3Ek__BackingField_3; }
	inline void set_U3CSendMessageCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CSendMessageCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_onReceivedMessage_4() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ___onReceivedMessage_4)); }
	inline UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * get_onReceivedMessage_4() const { return ___onReceivedMessage_4; }
	inline UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 ** get_address_of_onReceivedMessage_4() { return &___onReceivedMessage_4; }
	inline void set_onReceivedMessage_4(UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * value)
	{
		___onReceivedMessage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onReceivedMessage_4), (void*)value);
	}

	inline static int32_t get_offset_of__userInfos_5() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ____userInfos_5)); }
	inline Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * get__userInfos_5() const { return ____userInfos_5; }
	inline Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B ** get_address_of__userInfos_5() { return &____userInfos_5; }
	inline void set__userInfos_5(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * value)
	{
		____userInfos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userInfos_5), (void*)value);
	}

	inline static int32_t get_offset_of__sessionIds_6() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD, ____sessionIds_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__sessionIds_6() const { return ____sessionIds_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__sessionIds_6() { return &____sessionIds_6; }
	inline void set__sessionIds_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____sessionIds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sessionIds_6), (void*)value);
	}
};

struct ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields
{
public:
	// ZEPETO.Chat.ZepetoChatImplementation/InternalAction ZEPETO.Chat.ZepetoChatImplementation::InnerEvent
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * ___InnerEvent_2;

public:
	inline static int32_t get_offset_of_InnerEvent_2() { return static_cast<int32_t>(offsetof(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields, ___InnerEvent_2)); }
	inline InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * get_InnerEvent_2() const { return ___InnerEvent_2; }
	inline InternalAction_t991429916C5993620BD9278E25563278C6CE0785 ** get_address_of_InnerEvent_2() { return &___InnerEvent_2; }
	inline void set_InnerEvent_2(InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * value)
	{
		___InnerEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InnerEvent_2), (void*)value);
	}
};


// ZEPETO.Chat.ChatFilter/Data
struct Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.ChatFilter/Data::user_id
	String_t* ___user_id_0;
	// System.String ZEPETO.Chat.ChatFilter/Data::player_display_name
	String_t* ___player_display_name_1;
	// System.String ZEPETO.Chat.ChatFilter/Data::text
	String_t* ___text_2;
	// System.String ZEPETO.Chat.ChatFilter/Data::server
	String_t* ___server_3;
	// System.String ZEPETO.Chat.ChatFilter/Data::room
	String_t* ___room_4;
	// System.Int32 ZEPETO.Chat.ChatFilter/Data::rule
	int32_t ___rule_5;

public:
	inline static int32_t get_offset_of_user_id_0() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___user_id_0)); }
	inline String_t* get_user_id_0() const { return ___user_id_0; }
	inline String_t** get_address_of_user_id_0() { return &___user_id_0; }
	inline void set_user_id_0(String_t* value)
	{
		___user_id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_id_0), (void*)value);
	}

	inline static int32_t get_offset_of_player_display_name_1() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___player_display_name_1)); }
	inline String_t* get_player_display_name_1() const { return ___player_display_name_1; }
	inline String_t** get_address_of_player_display_name_1() { return &___player_display_name_1; }
	inline void set_player_display_name_1(String_t* value)
	{
		___player_display_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_display_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_server_3() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___server_3)); }
	inline String_t* get_server_3() const { return ___server_3; }
	inline String_t** get_address_of_server_3() { return &___server_3; }
	inline void set_server_3(String_t* value)
	{
		___server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_3), (void*)value);
	}

	inline static int32_t get_offset_of_room_4() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___room_4)); }
	inline String_t* get_room_4() const { return ___room_4; }
	inline String_t** get_address_of_room_4() { return &___room_4; }
	inline void set_room_4(String_t* value)
	{
		___room_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___room_4), (void*)value);
	}

	inline static int32_t get_offset_of_rule_5() { return static_cast<int32_t>(offsetof(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017, ___rule_5)); }
	inline int32_t get_rule_5() const { return ___rule_5; }
	inline int32_t* get_address_of_rule_5() { return &___rule_5; }
	inline void set_rule_5(int32_t value)
	{
		___rule_5 = value;
	}
};


// ZEPETO.Chat.ChatFilter/Request
struct Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4  : public RuntimeObject
{
public:
	// System.Byte[] ZEPETO.Chat.ChatFilter/Request::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_0;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4, ____data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}
};


// ZEPETO.Chat.UserInfos/Request
struct Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1  : public RuntimeObject
{
public:
	// System.String[] ZEPETO.Chat.UserInfos/Request::userIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds_0;

public:
	inline static int32_t get_offset_of_userIds_0() { return static_cast<int32_t>(offsetof(Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1, ___userIds_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_userIds_0() const { return ___userIds_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_userIds_0() { return &___userIds_0; }
	inline void set_userIds_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___userIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userIds_0), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation/<>c
struct U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields
{
public:
	// ZEPETO.Chat.ZepetoChatImplementation/<>c ZEPETO.Chat.ZepetoChatImplementation/<>c::<>9
	U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * ___U3CU3E9_0;
	// System.Func`2<ZEPETO.Chat.UserDataMessage,System.String> ZEPETO.Chat.ZepetoChatImplementation/<>c::<>9__22_0
	Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * ___U3CU3E9__22_0_1;
	// System.Action`1<System.String> ZEPETO.Chat.ZepetoChatImplementation/<>c::<>9__28_1
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3CU3E9__28_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields, ___U3CU3E9__28_1_2)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3CU3E9__28_1_2() const { return ___U3CU3E9__28_1_2; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3CU3E9__28_1_2() { return &___U3CU3E9__28_1_2; }
	inline void set_U3CU3E9__28_1_2(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3CU3E9__28_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_1_2), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B  : public RuntimeObject
{
public:
	// ZEPETO.Chat.ZepetoChatImplementation ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0::<>4__this
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * ___U3CU3E4__this_0;
	// ZEPETO.Multiplay.RoomBase ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0::room
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ___room_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B, ___U3CU3E4__this_0)); }
	inline ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_room_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B, ___room_1)); }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * get_room_1() const { return ___room_1; }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 ** get_address_of_room_1() { return &___room_1; }
	inline void set_room_1(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * value)
	{
		___room_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___room_1), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0::onCompleted
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___onCompleted_0;
	// System.String ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_onCompleted_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1, ___onCompleted_0)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_onCompleted_0() const { return ___onCompleted_0; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_onCompleted_0() { return &___onCompleted_0; }
	inline void set_onCompleted_0(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___onCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleted_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F  : public RuntimeObject
{
public:
	// System.String ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0::sessionId
	String_t* ___sessionId_0;

public:
	inline static int32_t get_offset_of_sessionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F, ___sessionId_0)); }
	inline String_t* get_sessionId_0() const { return ___sessionId_0; }
	inline String_t** get_address_of_sessionId_0() { return &___sessionId_0; }
	inline void set_sessionId_0(String_t* value)
	{
		___sessionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_0), (void*)value);
	}
};


// ZEPETO.Chat.ZepetoChatImplementation/InternalAction
struct InternalAction_t991429916C5993620BD9278E25563278C6CE0785  : public RuntimeObject
{
public:
	// System.Action`2<ZEPETO.Chat.IMessage,System.Action`1<ZEPETO.Chat.IMessage>> ZEPETO.Chat.ZepetoChatImplementation/InternalAction::onBeforeReceivedMessage
	Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * ___onBeforeReceivedMessage_0;
	// System.Action`1<ZEPETO.Chat.IMessage> ZEPETO.Chat.ZepetoChatImplementation/InternalAction::onReceivedMessage
	Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * ___onReceivedMessage_1;
	// ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage ZEPETO.Chat.ZepetoChatImplementation/InternalAction::onBeforeSendMessage
	OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * ___onBeforeSendMessage_2;

public:
	inline static int32_t get_offset_of_onBeforeReceivedMessage_0() { return static_cast<int32_t>(offsetof(InternalAction_t991429916C5993620BD9278E25563278C6CE0785, ___onBeforeReceivedMessage_0)); }
	inline Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * get_onBeforeReceivedMessage_0() const { return ___onBeforeReceivedMessage_0; }
	inline Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 ** get_address_of_onBeforeReceivedMessage_0() { return &___onBeforeReceivedMessage_0; }
	inline void set_onBeforeReceivedMessage_0(Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * value)
	{
		___onBeforeReceivedMessage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onBeforeReceivedMessage_0), (void*)value);
	}

	inline static int32_t get_offset_of_onReceivedMessage_1() { return static_cast<int32_t>(offsetof(InternalAction_t991429916C5993620BD9278E25563278C6CE0785, ___onReceivedMessage_1)); }
	inline Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * get_onReceivedMessage_1() const { return ___onReceivedMessage_1; }
	inline Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 ** get_address_of_onReceivedMessage_1() { return &___onReceivedMessage_1; }
	inline void set_onReceivedMessage_1(Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * value)
	{
		___onReceivedMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onReceivedMessage_1), (void*)value);
	}

	inline static int32_t get_offset_of_onBeforeSendMessage_2() { return static_cast<int32_t>(offsetof(InternalAction_t991429916C5993620BD9278E25563278C6CE0785, ___onBeforeSendMessage_2)); }
	inline OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * get_onBeforeSendMessage_2() const { return ___onBeforeSendMessage_2; }
	inline OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB ** get_address_of_onBeforeSendMessage_2() { return &___onBeforeSendMessage_2; }
	inline void set_onBeforeSendMessage_2(OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * value)
	{
		___onBeforeSendMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onBeforeSendMessage_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<ZEPETO.Chat.IMessage>
struct UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// ZEPETO.Chat.ChatFilter/ResponseData
struct ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81  : public ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418
{
public:
	// System.Boolean ZEPETO.Chat.ChatFilter/ResponseData::isSuccess
	bool ___isSuccess_2;
	// System.Boolean ZEPETO.Chat.ChatFilter/ResponseData::response
	bool ___response_3;
	// System.String ZEPETO.Chat.ChatFilter/ResponseData::hashed
	String_t* ___hashed_4;

public:
	inline static int32_t get_offset_of_isSuccess_2() { return static_cast<int32_t>(offsetof(ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81, ___isSuccess_2)); }
	inline bool get_isSuccess_2() const { return ___isSuccess_2; }
	inline bool* get_address_of_isSuccess_2() { return &___isSuccess_2; }
	inline void set_isSuccess_2(bool value)
	{
		___isSuccess_2 = value;
	}

	inline static int32_t get_offset_of_response_3() { return static_cast<int32_t>(offsetof(ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81, ___response_3)); }
	inline bool get_response_3() const { return ___response_3; }
	inline bool* get_address_of_response_3() { return &___response_3; }
	inline void set_response_3(bool value)
	{
		___response_3 = value;
	}

	inline static int32_t get_offset_of_hashed_4() { return static_cast<int32_t>(offsetof(ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81, ___hashed_4)); }
	inline String_t* get_hashed_4() const { return ___hashed_4; }
	inline String_t** get_address_of_hashed_4() { return &___hashed_4; }
	inline void set_hashed_4(String_t* value)
	{
		___hashed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashed_4), (void*)value);
	}
};


// ZEPETO.Chat.UserInfos/Response
struct Response_t6E766D2144F91E5C162CB6433534B9946D8913DC  : public ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418
{
public:
	// ZEPETO.Chat.UserInfo[] ZEPETO.Chat.UserInfos/Response::users
	UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* ___users_2;

public:
	inline static int32_t get_offset_of_users_2() { return static_cast<int32_t>(offsetof(Response_t6E766D2144F91E5C162CB6433534B9946D8913DC, ___users_2)); }
	inline UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* get_users_2() const { return ___users_2; }
	inline UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402** get_address_of_users_2() { return &___users_2; }
	inline void set_users_2(UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* value)
	{
		___users_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___users_2), (void*)value);
	}
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZEPETO.Multiplay.MPackType
struct MPackType_t908D3F459EC578DBF3FA0B6540A9749ED2068384 
{
public:
	// System.Int32 ZEPETO.Multiplay.MPackType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MPackType_t908D3F459EC578DBF3FA0B6540A9749ED2068384, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// ZEPETO.Chat.RequestTypes
struct RequestTypes_t79B936BC185A91FAB730F1120DF5B4A5A0362412 
{
public:
	// System.Int32 ZEPETO.Chat.RequestTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestTypes_t79B936BC185A91FAB730F1120DF5B4A5A0362412, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZEPETO.Multiplay.RoomMethod
struct RoomMethod_tF6A92D507B53C2ACD4C37425A2EC53ADBC6B617D 
{
public:
	// System.Int32 ZEPETO.Multiplay.RoomMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomMethod_tF6A92D507B53C2ACD4C37425A2EC53ADBC6B617D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZEPETO.Multiplay.RoomType
struct RoomType_t2FF4A081704A30F89AF24F9297FBB0FC395B7757 
{
public:
	// System.Int32 ZEPETO.Multiplay.RoomType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomType_t2FF4A081704A30F89AF24F9297FBB0FC395B7757, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZEPETO.Chat.SystemMessageType
struct SystemMessageType_tCEC2AEEC92BEEF655083AA88DB1E4F0F43C37B04 
{
public:
	// System.Int32 ZEPETO.Chat.SystemMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemMessageType_tCEC2AEEC92BEEF655083AA88DB1E4F0F43C37B04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ZEPETO.Multiplay.MPack
struct MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3  : public RuntimeObject
{
public:
	// System.Object ZEPETO.Multiplay.MPack::_value
	RuntimeObject * ____value_0;
	// ZEPETO.Multiplay.MPackType ZEPETO.Multiplay.MPack::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
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

// ZEPETO.Multiplay.RoomBase
struct RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7  : public RuntimeObject
{
public:
	// System.Int32 ZEPETO.Multiplay.RoomBase::_connectTryCount
	int32_t ____connectTryCount_2;
	// System.String ZEPETO.Multiplay.RoomBase::Id
	String_t* ___Id_3;
	// System.String ZEPETO.Multiplay.RoomBase::Name
	String_t* ___Name_4;
	// System.String ZEPETO.Multiplay.RoomBase::SessionId
	String_t* ___SessionId_5;
	// System.String ZEPETO.Multiplay.RoomBase::metadata
	String_t* ___metadata_6;
	// System.String ZEPETO.Multiplay.RoomBase::applicationId
	String_t* ___applicationId_7;
	// System.String ZEPETO.Multiplay.RoomBase::worldId
	String_t* ___worldId_8;
	// System.Int32 ZEPETO.Multiplay.RoomBase::worldVersion
	int32_t ___worldVersion_9;
	// System.String ZEPETO.Multiplay.RoomBase::uniqueId
	String_t* ___uniqueId_10;
	// System.String ZEPETO.Multiplay.RoomBase::creator
	String_t* ___creator_11;
	// ZEPETO.Multiplay.RoomMethod ZEPETO.Multiplay.RoomBase::method
	int32_t ___method_12;
	// ZEPETO.Multiplay.TransportBase ZEPETO.Multiplay.RoomBase::_connection
	TransportBase_t23806CE69AA21022F7953C96E3BC1E67955E68F5 * ____connection_13;
	// System.String ZEPETO.Multiplay.RoomBase::SerializerId
	String_t* ___SerializerId_14;
	// System.Boolean ZEPETO.Multiplay.RoomBase::<IsReconnect>k__BackingField
	bool ___U3CIsReconnectU3Ek__BackingField_15;
	// System.Boolean ZEPETO.Multiplay.RoomBase::UseReconnect
	bool ___UseReconnect_16;
	// ZEPETO.Multiplay.ColyseusOpenEventHandler ZEPETO.Multiplay.RoomBase::OnConnected
	ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * ___OnConnected_17;
	// ZEPETO.Multiplay.ColyseusOpenEventHandler ZEPETO.Multiplay.RoomBase::OnJoin
	ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * ___OnJoin_18;
	// ZEPETO.Multiplay.ColyseusErrorEventHandler ZEPETO.Multiplay.RoomBase::OnError
	ColyseusErrorEventHandler_t7ECCB99DC966881E8DDD0D4BFB97152666D7C1F9 * ___OnError_19;
	// ZEPETO.Multiplay.ColyseusCloseEventHandler ZEPETO.Multiplay.RoomBase::OnLeave
	ColyseusCloseEventHandler_tE1093624734C2242659C6E34C3B661FB0C4EE80E * ___OnLeave_20;
	// ZEPETO.Multiplay.ColyseusWeakConnectionEventHandler ZEPETO.Multiplay.RoomBase::OnWeakConnection
	ColyseusWeakConnectionEventHandler_tCA6F4282E3534308E46A38EBC02E739687259A5C * ___OnWeakConnection_21;
	// ZEPETO.Multiplay.Encoder ZEPETO.Multiplay.RoomBase::Encode
	Encoder_t0C9CE0EAFFD3A306BDC22A9A2D95593785339D48 * ___Encode_22;
	// ZEPETO.Multiplay.Decoder ZEPETO.Multiplay.RoomBase::Decode
	Decoder_tA462413B5F6AA4DD3739A7193203BDCA498BFA78 * ___Decode_23;
	// ZEPETO.Multiplay.ISchemaRegistry ZEPETO.Multiplay.RoomBase::schemaRegistry
	RuntimeObject* ___schemaRegistry_24;
	// System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Multiplay.IMessageHandler> ZEPETO.Multiplay.RoomBase::OnMessageHandlers
	Dictionary_2_tD1AEBC551A793E7555CCBE7FD83D3D2578AD3035 * ___OnMessageHandlers_25;
	// System.Collections.Generic.Dictionary`2<System.Int32,ZEPETO.Multiplay.RPCMessage> ZEPETO.Multiplay.RoomBase::_rpcMessages
	Dictionary_2_t730A66591DE2879A7F0EE02746459EFB04C651D8 * ____rpcMessages_26;

public:
	inline static int32_t get_offset_of__connectTryCount_2() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ____connectTryCount_2)); }
	inline int32_t get__connectTryCount_2() const { return ____connectTryCount_2; }
	inline int32_t* get_address_of__connectTryCount_2() { return &____connectTryCount_2; }
	inline void set__connectTryCount_2(int32_t value)
	{
		____connectTryCount_2 = value;
	}

	inline static int32_t get_offset_of_Id_3() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___Id_3)); }
	inline String_t* get_Id_3() const { return ___Id_3; }
	inline String_t** get_address_of_Id_3() { return &___Id_3; }
	inline void set_Id_3(String_t* value)
	{
		___Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_SessionId_5() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___SessionId_5)); }
	inline String_t* get_SessionId_5() const { return ___SessionId_5; }
	inline String_t** get_address_of_SessionId_5() { return &___SessionId_5; }
	inline void set_SessionId_5(String_t* value)
	{
		___SessionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionId_5), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_6() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___metadata_6)); }
	inline String_t* get_metadata_6() const { return ___metadata_6; }
	inline String_t** get_address_of_metadata_6() { return &___metadata_6; }
	inline void set_metadata_6(String_t* value)
	{
		___metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_applicationId_7() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___applicationId_7)); }
	inline String_t* get_applicationId_7() const { return ___applicationId_7; }
	inline String_t** get_address_of_applicationId_7() { return &___applicationId_7; }
	inline void set_applicationId_7(String_t* value)
	{
		___applicationId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationId_7), (void*)value);
	}

	inline static int32_t get_offset_of_worldId_8() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___worldId_8)); }
	inline String_t* get_worldId_8() const { return ___worldId_8; }
	inline String_t** get_address_of_worldId_8() { return &___worldId_8; }
	inline void set_worldId_8(String_t* value)
	{
		___worldId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldId_8), (void*)value);
	}

	inline static int32_t get_offset_of_worldVersion_9() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___worldVersion_9)); }
	inline int32_t get_worldVersion_9() const { return ___worldVersion_9; }
	inline int32_t* get_address_of_worldVersion_9() { return &___worldVersion_9; }
	inline void set_worldVersion_9(int32_t value)
	{
		___worldVersion_9 = value;
	}

	inline static int32_t get_offset_of_uniqueId_10() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___uniqueId_10)); }
	inline String_t* get_uniqueId_10() const { return ___uniqueId_10; }
	inline String_t** get_address_of_uniqueId_10() { return &___uniqueId_10; }
	inline void set_uniqueId_10(String_t* value)
	{
		___uniqueId_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_10), (void*)value);
	}

	inline static int32_t get_offset_of_creator_11() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___creator_11)); }
	inline String_t* get_creator_11() const { return ___creator_11; }
	inline String_t** get_address_of_creator_11() { return &___creator_11; }
	inline void set_creator_11(String_t* value)
	{
		___creator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creator_11), (void*)value);
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___method_12)); }
	inline int32_t get_method_12() const { return ___method_12; }
	inline int32_t* get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(int32_t value)
	{
		___method_12 = value;
	}

	inline static int32_t get_offset_of__connection_13() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ____connection_13)); }
	inline TransportBase_t23806CE69AA21022F7953C96E3BC1E67955E68F5 * get__connection_13() const { return ____connection_13; }
	inline TransportBase_t23806CE69AA21022F7953C96E3BC1E67955E68F5 ** get_address_of__connection_13() { return &____connection_13; }
	inline void set__connection_13(TransportBase_t23806CE69AA21022F7953C96E3BC1E67955E68F5 * value)
	{
		____connection_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connection_13), (void*)value);
	}

	inline static int32_t get_offset_of_SerializerId_14() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___SerializerId_14)); }
	inline String_t* get_SerializerId_14() const { return ___SerializerId_14; }
	inline String_t** get_address_of_SerializerId_14() { return &___SerializerId_14; }
	inline void set_SerializerId_14(String_t* value)
	{
		___SerializerId_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializerId_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReconnectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___U3CIsReconnectU3Ek__BackingField_15)); }
	inline bool get_U3CIsReconnectU3Ek__BackingField_15() const { return ___U3CIsReconnectU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsReconnectU3Ek__BackingField_15() { return &___U3CIsReconnectU3Ek__BackingField_15; }
	inline void set_U3CIsReconnectU3Ek__BackingField_15(bool value)
	{
		___U3CIsReconnectU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_UseReconnect_16() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___UseReconnect_16)); }
	inline bool get_UseReconnect_16() const { return ___UseReconnect_16; }
	inline bool* get_address_of_UseReconnect_16() { return &___UseReconnect_16; }
	inline void set_UseReconnect_16(bool value)
	{
		___UseReconnect_16 = value;
	}

	inline static int32_t get_offset_of_OnConnected_17() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnConnected_17)); }
	inline ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * get_OnConnected_17() const { return ___OnConnected_17; }
	inline ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A ** get_address_of_OnConnected_17() { return &___OnConnected_17; }
	inline void set_OnConnected_17(ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * value)
	{
		___OnConnected_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnJoin_18() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnJoin_18)); }
	inline ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * get_OnJoin_18() const { return ___OnJoin_18; }
	inline ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A ** get_address_of_OnJoin_18() { return &___OnJoin_18; }
	inline void set_OnJoin_18(ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * value)
	{
		___OnJoin_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnJoin_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_19() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnError_19)); }
	inline ColyseusErrorEventHandler_t7ECCB99DC966881E8DDD0D4BFB97152666D7C1F9 * get_OnError_19() const { return ___OnError_19; }
	inline ColyseusErrorEventHandler_t7ECCB99DC966881E8DDD0D4BFB97152666D7C1F9 ** get_address_of_OnError_19() { return &___OnError_19; }
	inline void set_OnError_19(ColyseusErrorEventHandler_t7ECCB99DC966881E8DDD0D4BFB97152666D7C1F9 * value)
	{
		___OnError_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnLeave_20() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnLeave_20)); }
	inline ColyseusCloseEventHandler_tE1093624734C2242659C6E34C3B661FB0C4EE80E * get_OnLeave_20() const { return ___OnLeave_20; }
	inline ColyseusCloseEventHandler_tE1093624734C2242659C6E34C3B661FB0C4EE80E ** get_address_of_OnLeave_20() { return &___OnLeave_20; }
	inline void set_OnLeave_20(ColyseusCloseEventHandler_tE1093624734C2242659C6E34C3B661FB0C4EE80E * value)
	{
		___OnLeave_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLeave_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnWeakConnection_21() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnWeakConnection_21)); }
	inline ColyseusWeakConnectionEventHandler_tCA6F4282E3534308E46A38EBC02E739687259A5C * get_OnWeakConnection_21() const { return ___OnWeakConnection_21; }
	inline ColyseusWeakConnectionEventHandler_tCA6F4282E3534308E46A38EBC02E739687259A5C ** get_address_of_OnWeakConnection_21() { return &___OnWeakConnection_21; }
	inline void set_OnWeakConnection_21(ColyseusWeakConnectionEventHandler_tCA6F4282E3534308E46A38EBC02E739687259A5C * value)
	{
		___OnWeakConnection_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWeakConnection_21), (void*)value);
	}

	inline static int32_t get_offset_of_Encode_22() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___Encode_22)); }
	inline Encoder_t0C9CE0EAFFD3A306BDC22A9A2D95593785339D48 * get_Encode_22() const { return ___Encode_22; }
	inline Encoder_t0C9CE0EAFFD3A306BDC22A9A2D95593785339D48 ** get_address_of_Encode_22() { return &___Encode_22; }
	inline void set_Encode_22(Encoder_t0C9CE0EAFFD3A306BDC22A9A2D95593785339D48 * value)
	{
		___Encode_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encode_22), (void*)value);
	}

	inline static int32_t get_offset_of_Decode_23() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___Decode_23)); }
	inline Decoder_tA462413B5F6AA4DD3739A7193203BDCA498BFA78 * get_Decode_23() const { return ___Decode_23; }
	inline Decoder_tA462413B5F6AA4DD3739A7193203BDCA498BFA78 ** get_address_of_Decode_23() { return &___Decode_23; }
	inline void set_Decode_23(Decoder_tA462413B5F6AA4DD3739A7193203BDCA498BFA78 * value)
	{
		___Decode_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Decode_23), (void*)value);
	}

	inline static int32_t get_offset_of_schemaRegistry_24() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___schemaRegistry_24)); }
	inline RuntimeObject* get_schemaRegistry_24() const { return ___schemaRegistry_24; }
	inline RuntimeObject** get_address_of_schemaRegistry_24() { return &___schemaRegistry_24; }
	inline void set_schemaRegistry_24(RuntimeObject* value)
	{
		___schemaRegistry_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaRegistry_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageHandlers_25() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ___OnMessageHandlers_25)); }
	inline Dictionary_2_tD1AEBC551A793E7555CCBE7FD83D3D2578AD3035 * get_OnMessageHandlers_25() const { return ___OnMessageHandlers_25; }
	inline Dictionary_2_tD1AEBC551A793E7555CCBE7FD83D3D2578AD3035 ** get_address_of_OnMessageHandlers_25() { return &___OnMessageHandlers_25; }
	inline void set_OnMessageHandlers_25(Dictionary_2_tD1AEBC551A793E7555CCBE7FD83D3D2578AD3035 * value)
	{
		___OnMessageHandlers_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageHandlers_25), (void*)value);
	}

	inline static int32_t get_offset_of__rpcMessages_26() { return static_cast<int32_t>(offsetof(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7, ____rpcMessages_26)); }
	inline Dictionary_2_t730A66591DE2879A7F0EE02746459EFB04C651D8 * get__rpcMessages_26() const { return ____rpcMessages_26; }
	inline Dictionary_2_t730A66591DE2879A7F0EE02746459EFB04C651D8 ** get_address_of__rpcMessages_26() { return &____rpcMessages_26; }
	inline void set__rpcMessages_26(Dictionary_2_t730A66591DE2879A7F0EE02746459EFB04C651D8 * value)
	{
		____rpcMessages_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rpcMessages_26), (void*)value);
	}
};


// ZEPETO.Chat.SystemMessage
struct SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321  : public RuntimeObject
{
public:
	// ZEPETO.Chat.SystemMessageType ZEPETO.Chat.SystemMessage::systemType
	int32_t ___systemType_0;
	// System.String ZEPETO.Chat.SystemMessage::subject
	String_t* ___subject_1;

public:
	inline static int32_t get_offset_of_systemType_0() { return static_cast<int32_t>(offsetof(SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321, ___systemType_0)); }
	inline int32_t get_systemType_0() const { return ___systemType_0; }
	inline int32_t* get_address_of_systemType_0() { return &___systemType_0; }
	inline void set_systemType_0(int32_t value)
	{
		___systemType_0 = value;
	}

	inline static int32_t get_offset_of_subject_1() { return static_cast<int32_t>(offsetof(SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321, ___subject_1)); }
	inline String_t* get_subject_1() const { return ___subject_1; }
	inline String_t** get_address_of_subject_1() { return &___subject_1; }
	inline void set_subject_1(String_t* value)
	{
		___subject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_1), (void*)value);
	}
};


// System.Action`1<ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>>
struct Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Chat.IMessage>
struct Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Multiplay.MPack>
struct Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Multiplay.RoomBase>
struct Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent>
struct Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Chat.ChatFilter/ResponseData>
struct Action_1_t135532E32DE72A3A9210C67F0B7829393B432658  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<ZEPETO.Chat.UserInfos/Response>
struct Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<ZEPETO.Chat.IMessage,System.Action`1<ZEPETO.Chat.IMessage>>
struct Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<ZEPETO.Chat.UserDataMessage,System.String>
struct Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ZEPETO.Multiplay.ColyseusOpenEventHandler
struct ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A  : public MulticastDelegate_t
{
public:

public:
};


// ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage
struct OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ZEPETO.Multiplay.ZepetoMultiplayBase
struct ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ZEPETO.Multiplay.ZepetoMultiplayBase::roomOptions
	int32_t ___roomOptions_7;
	// System.Boolean ZEPETO.Multiplay.ZepetoMultiplayBase::m_runningOnZepeto
	bool ___m_runningOnZepeto_8;
	// ZEPETO.Multiplay.RoomType ZEPETO.Multiplay.ZepetoMultiplayBase::roomType
	int32_t ___roomType_9;
	// System.String ZEPETO.Multiplay.ZepetoMultiplayBase::applicationId
	String_t* ___applicationId_10;
	// System.String ZEPETO.Multiplay.ZepetoMultiplayBase::host
	String_t* ___host_11;
	// System.Int32 ZEPETO.Multiplay.ZepetoMultiplayBase::port
	int32_t ___port_12;
	// System.Boolean ZEPETO.Multiplay.ZepetoMultiplayBase::isSecure
	bool ___isSecure_13;
	// System.String ZEPETO.Multiplay.ZepetoMultiplayBase::matchMakeHost
	String_t* ___matchMakeHost_14;
	// System.String ZEPETO.Multiplay.ZepetoMultiplayBase::authToken
	String_t* ___authToken_15;
	// System.String ZEPETO.Multiplay.ZepetoMultiplayBase::uniqueId
	String_t* ___uniqueId_16;
	// ZEPETO.Multiplay.ColyseusClientBase ZEPETO.Multiplay.ZepetoMultiplayBase::_colyseusClient
	ColyseusClientBase_tDCA534C81196EF9CBC9BFE12AFFD23B90BF8CA87 * ____colyseusClient_17;
	// ZEPETO.Multiplay.RoomBase ZEPETO.Multiplay.ZepetoMultiplayBase::_room
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ____room_18;
	// System.Action`1<ZEPETO.Multiplay.RoomBase> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomCreated
	Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___RoomCreated_19;
	// System.Action`1<ZEPETO.Multiplay.RoomBase> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomJoined
	Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___RoomJoined_20;
	// System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomLeave
	Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * ___RoomLeave_21;
	// System.Action`1<ZEPETO.Multiplay.RoomBase> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomReconnected
	Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___RoomReconnected_22;
	// System.Action`1<ZEPETO.Multiplay.RoomErrorEvent> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomError
	Action_1_t5A1766E597EE13270E033DC01531D383AFFB06E1 * ___RoomError_23;
	// System.Action`1<ZEPETO.Multiplay.RoomWeakConnectionEvent> ZEPETO.Multiplay.ZepetoMultiplayBase::RoomWeakConnection
	Action_1_t4A083563B52F80149D9D798AF63CFB6E11B0D2EC * ___RoomWeakConnection_24;

public:
	inline static int32_t get_offset_of_roomOptions_7() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___roomOptions_7)); }
	inline int32_t get_roomOptions_7() const { return ___roomOptions_7; }
	inline int32_t* get_address_of_roomOptions_7() { return &___roomOptions_7; }
	inline void set_roomOptions_7(int32_t value)
	{
		___roomOptions_7 = value;
	}

	inline static int32_t get_offset_of_m_runningOnZepeto_8() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___m_runningOnZepeto_8)); }
	inline bool get_m_runningOnZepeto_8() const { return ___m_runningOnZepeto_8; }
	inline bool* get_address_of_m_runningOnZepeto_8() { return &___m_runningOnZepeto_8; }
	inline void set_m_runningOnZepeto_8(bool value)
	{
		___m_runningOnZepeto_8 = value;
	}

	inline static int32_t get_offset_of_roomType_9() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___roomType_9)); }
	inline int32_t get_roomType_9() const { return ___roomType_9; }
	inline int32_t* get_address_of_roomType_9() { return &___roomType_9; }
	inline void set_roomType_9(int32_t value)
	{
		___roomType_9 = value;
	}

	inline static int32_t get_offset_of_applicationId_10() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___applicationId_10)); }
	inline String_t* get_applicationId_10() const { return ___applicationId_10; }
	inline String_t** get_address_of_applicationId_10() { return &___applicationId_10; }
	inline void set_applicationId_10(String_t* value)
	{
		___applicationId_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationId_10), (void*)value);
	}

	inline static int32_t get_offset_of_host_11() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___host_11)); }
	inline String_t* get_host_11() const { return ___host_11; }
	inline String_t** get_address_of_host_11() { return &___host_11; }
	inline void set_host_11(String_t* value)
	{
		___host_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_11), (void*)value);
	}

	inline static int32_t get_offset_of_port_12() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___port_12)); }
	inline int32_t get_port_12() const { return ___port_12; }
	inline int32_t* get_address_of_port_12() { return &___port_12; }
	inline void set_port_12(int32_t value)
	{
		___port_12 = value;
	}

	inline static int32_t get_offset_of_isSecure_13() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___isSecure_13)); }
	inline bool get_isSecure_13() const { return ___isSecure_13; }
	inline bool* get_address_of_isSecure_13() { return &___isSecure_13; }
	inline void set_isSecure_13(bool value)
	{
		___isSecure_13 = value;
	}

	inline static int32_t get_offset_of_matchMakeHost_14() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___matchMakeHost_14)); }
	inline String_t* get_matchMakeHost_14() const { return ___matchMakeHost_14; }
	inline String_t** get_address_of_matchMakeHost_14() { return &___matchMakeHost_14; }
	inline void set_matchMakeHost_14(String_t* value)
	{
		___matchMakeHost_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchMakeHost_14), (void*)value);
	}

	inline static int32_t get_offset_of_authToken_15() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___authToken_15)); }
	inline String_t* get_authToken_15() const { return ___authToken_15; }
	inline String_t** get_address_of_authToken_15() { return &___authToken_15; }
	inline void set_authToken_15(String_t* value)
	{
		___authToken_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authToken_15), (void*)value);
	}

	inline static int32_t get_offset_of_uniqueId_16() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___uniqueId_16)); }
	inline String_t* get_uniqueId_16() const { return ___uniqueId_16; }
	inline String_t** get_address_of_uniqueId_16() { return &___uniqueId_16; }
	inline void set_uniqueId_16(String_t* value)
	{
		___uniqueId_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_16), (void*)value);
	}

	inline static int32_t get_offset_of__colyseusClient_17() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ____colyseusClient_17)); }
	inline ColyseusClientBase_tDCA534C81196EF9CBC9BFE12AFFD23B90BF8CA87 * get__colyseusClient_17() const { return ____colyseusClient_17; }
	inline ColyseusClientBase_tDCA534C81196EF9CBC9BFE12AFFD23B90BF8CA87 ** get_address_of__colyseusClient_17() { return &____colyseusClient_17; }
	inline void set__colyseusClient_17(ColyseusClientBase_tDCA534C81196EF9CBC9BFE12AFFD23B90BF8CA87 * value)
	{
		____colyseusClient_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colyseusClient_17), (void*)value);
	}

	inline static int32_t get_offset_of__room_18() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ____room_18)); }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * get__room_18() const { return ____room_18; }
	inline RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 ** get_address_of__room_18() { return &____room_18; }
	inline void set__room_18(RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * value)
	{
		____room_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____room_18), (void*)value);
	}

	inline static int32_t get_offset_of_RoomCreated_19() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomCreated_19)); }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * get_RoomCreated_19() const { return ___RoomCreated_19; }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 ** get_address_of_RoomCreated_19() { return &___RoomCreated_19; }
	inline void set_RoomCreated_19(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * value)
	{
		___RoomCreated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomCreated_19), (void*)value);
	}

	inline static int32_t get_offset_of_RoomJoined_20() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomJoined_20)); }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * get_RoomJoined_20() const { return ___RoomJoined_20; }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 ** get_address_of_RoomJoined_20() { return &___RoomJoined_20; }
	inline void set_RoomJoined_20(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * value)
	{
		___RoomJoined_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomJoined_20), (void*)value);
	}

	inline static int32_t get_offset_of_RoomLeave_21() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomLeave_21)); }
	inline Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * get_RoomLeave_21() const { return ___RoomLeave_21; }
	inline Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 ** get_address_of_RoomLeave_21() { return &___RoomLeave_21; }
	inline void set_RoomLeave_21(Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * value)
	{
		___RoomLeave_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomLeave_21), (void*)value);
	}

	inline static int32_t get_offset_of_RoomReconnected_22() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomReconnected_22)); }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * get_RoomReconnected_22() const { return ___RoomReconnected_22; }
	inline Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 ** get_address_of_RoomReconnected_22() { return &___RoomReconnected_22; }
	inline void set_RoomReconnected_22(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * value)
	{
		___RoomReconnected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomReconnected_22), (void*)value);
	}

	inline static int32_t get_offset_of_RoomError_23() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomError_23)); }
	inline Action_1_t5A1766E597EE13270E033DC01531D383AFFB06E1 * get_RoomError_23() const { return ___RoomError_23; }
	inline Action_1_t5A1766E597EE13270E033DC01531D383AFFB06E1 ** get_address_of_RoomError_23() { return &___RoomError_23; }
	inline void set_RoomError_23(Action_1_t5A1766E597EE13270E033DC01531D383AFFB06E1 * value)
	{
		___RoomError_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomError_23), (void*)value);
	}

	inline static int32_t get_offset_of_RoomWeakConnection_24() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49, ___RoomWeakConnection_24)); }
	inline Action_1_t4A083563B52F80149D9D798AF63CFB6E11B0D2EC * get_RoomWeakConnection_24() const { return ___RoomWeakConnection_24; }
	inline Action_1_t4A083563B52F80149D9D798AF63CFB6E11B0D2EC ** get_address_of_RoomWeakConnection_24() { return &___RoomWeakConnection_24; }
	inline void set_RoomWeakConnection_24(Action_1_t4A083563B52F80149D9D798AF63CFB6E11B0D2EC * value)
	{
		___RoomWeakConnection_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomWeakConnection_24), (void*)value);
	}
};

struct ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49_StaticFields
{
public:
	// System.Action`1<ZEPETO.Multiplay.ZepetoMultiplayBase> ZEPETO.Multiplay.ZepetoMultiplayBase::OnAwake
	Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * ___OnAwake_5;
	// System.Action`1<ZEPETO.Multiplay.ZepetoMultiplayBase> ZEPETO.Multiplay.ZepetoMultiplayBase::OnDestroyed
	Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * ___OnDestroyed_6;

public:
	inline static int32_t get_offset_of_OnAwake_5() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49_StaticFields, ___OnAwake_5)); }
	inline Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * get_OnAwake_5() const { return ___OnAwake_5; }
	inline Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D ** get_address_of_OnAwake_5() { return &___OnAwake_5; }
	inline void set_OnAwake_5(Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * value)
	{
		___OnAwake_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAwake_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDestroyed_6() { return static_cast<int32_t>(offsetof(ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49_StaticFields, ___OnDestroyed_6)); }
	inline Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * get_OnDestroyed_6() const { return ___OnDestroyed_6; }
	inline Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D ** get_address_of_OnDestroyed_6() { return &___OnDestroyed_6; }
	inline void set_OnDestroyed_6(Action_1_t0B2EC96A836FCBC6C5D2993AD9772FB23EFCF47D * value)
	{
		___OnDestroyed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyed_6), (void*)value);
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
// ZEPETO.Chat.UserInfo[]
struct UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * m_Items[1];

public:
	inline UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ZEPETO.Chat.UserDataMessage[]
struct UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * m_Items[1];

public:
	inline UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.RoomBase::AddMessageHandler<System.Object>(System.Int32,System.Action`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomBase_AddMessageHandler_TisRuntimeObject_mEAB8E6461BE77260D8A56326BDD00AA44DF7122D_gshared (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * __this, int32_t ___type0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___handler1, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.RequestHelper::Post<System.Object>(ZEPETO.Chat.IRequest,System.Action`1<TResponse>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_Post_TisRuntimeObject_m405A2689142A8DBFE03781F18AE8023F8EED7B27_gshared (RuntimeObject* ___data0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___success1, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___error2, const RuntimeMethod* method);
// !!0 ZEPETO.Multiplay.MPack::To<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MPack_To_TisRuntimeObject_mE0096FDF38CB15218CBB39D42577B38655DCA6B9_gshared (MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m03715B6DDEC4F9E5EED2E464BB22A6C4C9500DCB_gshared (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerable_FirstOrDefault_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m237E8CE252436CB31B697921F89D22B3320AEC8A_gshared (RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String ZEPETO.Chat.Internal.ChatSettings::get_FilterHost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7_inline (const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String ZEPETO.Chat.Internal.ChatSettings::get_APIHost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_APIHost_m786E7EC828B5603F3C029F5A45A5A46D8CD3B55D_inline (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m80AB1BB4DFE483E10C537A53508D7F84433EF31D (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * __this, int32_t ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 *, int32_t, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String>::.ctor()
inline void Dictionary_2__ctor_m66A140B304BA06C43B8B32BC241FCC84E121CBB9 (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ZEPETO.Chat.RequestTypes,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mFE429C5FDFE94EE45175951ED6201431061D92A7 (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation__ctor_m5EA1D0A86DF2D119DB725D9EEB993EAC36DD501D (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method);
// ZEPETO.Chat.ZepetoChatImplementation ZEPETO.Chat.ZepetoChat::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * ZepetoChat_get_Instance_m79E36EDFBC8E6D81C6494785FFE85540A7721EDC (const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Send_m2A732457B0B4F8896B8D5F2C1FB34EE4608B8BB8 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::.ctor()
inline void Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51 (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<ZEPETO.Chat.IMessage>::.ctor()
inline void UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7 (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Multiplay.RoomBase>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7 (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::add_RoomCreated(System.Action`1<ZEPETO.Multiplay.RoomBase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_add_RoomCreated_m408629163BD904A8A51C4BD7425CA65E038FDE99 (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::add_RoomJoined(System.Action`1<ZEPETO.Multiplay.RoomBase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_add_RoomJoined_m142620013EF9E909E0AA3357812834F3519C1E3D (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A (Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::add_RoomLeave(System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_add_RoomLeave_m09227FF8EDCC2D47F0DC4BC5E3D08A7D42CD788D (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::set_SendMessageCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZepetoChatImplementation_set_SendMessageCount_m6F43909A3910C14BEFF569B02739050911C31F66_inline (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::Clear()
inline void Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::remove_RoomCreated(System.Action`1<ZEPETO.Multiplay.RoomBase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_remove_RoomCreated_m9C503546DD23D14A28DB43B5AD61B5454A1BB5C8 (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::remove_RoomJoined(System.Action`1<ZEPETO.Multiplay.RoomBase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_remove_RoomJoined_mF34B2F8D7AE7BDB2E1ADAC4E8AE83BEE3D7E0691 (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.ZepetoMultiplayBase::remove_RoomLeave(System.Action`1<ZEPETO.Multiplay.RoomLeaveEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoMultiplayBase_remove_RoomLeave_mF187DC1E73B7FD3B90B53D065A0C649088A3A21A (ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * __this, Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * ___value0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2A7E1BEC20CDBA5350698E101B693B7EDA5CEA51 (U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Multiplay.MPack>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1 (Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Multiplay.RoomBase::AddMessageHandler<ZEPETO.Multiplay.MPack>(System.Int32,System.Action`1<!!0>)
inline void RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9 (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * __this, int32_t ___type0, Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F * ___handler1, const RuntimeMethod* method)
{
	((  void (*) (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 *, int32_t, Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F *, const RuntimeMethod*))RoomBase_AddMessageHandler_TisRuntimeObject_mEAB8E6461BE77260D8A56326BDD00AA44DF7122D_gshared)(__this, ___type0, ___handler1, method);
}
// System.Void System.Action`1<ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m54C626C082B91735A2F30A15018386822ACE5C2E (Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Multiplay.RoomBase::AddMessageHandler<ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>>(System.Int32,System.Action`1<!!0>)
inline void RoomBase_AddMessageHandler_TisBroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB_m7FAE233825E5B7309A4C859ED1A510781532C268 (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * __this, int32_t ___type0, Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 * ___handler1, const RuntimeMethod* method)
{
	((  void (*) (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 *, int32_t, Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 *, const RuntimeMethod*))RoomBase_AddMessageHandler_TisRuntimeObject_mEAB8E6461BE77260D8A56326BDD00AA44DF7122D_gshared)(__this, ___type0, ___handler1, method);
}
// System.Void ZEPETO.Multiplay.ColyseusOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColyseusOpenEventHandler__ctor_m3ABEADC33C85FB0E272BCE6474EC52974B408258 (ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ZEPETO.Multiplay.RoomBase::add_OnJoin(ZEPETO.Multiplay.ColyseusOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomBase_add_OnJoin_mFB712C707654B7659473C10A2B75EFCCBC465A6B (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * __this, ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.String ZEPETO.Chat.Internal.ChatSettings::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserId_mA61C725F79B2F6FF938FD5D626C3B0904FE6CEAD_inline (const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::AddSessionIds(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_AddSessionIds_mDED64D425E8BDF6EA1FA54B1173ED1162FEF5EF3 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, String_t* ___sessionId1, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.UserInfos/Request::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_m0A9B2A0390022FD1B50C488BA9AA575F966EB218 (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds0, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Chat.UserInfos/Response>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1 (Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Chat.RequestHelper::Post<ZEPETO.Chat.UserInfos/Response>(ZEPETO.Chat.IRequest,System.Action`1<TResponse>,System.Action`1<System.String>)
inline void RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70 (RuntimeObject* ___data0, Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 * ___success1, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___error2, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 *, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, const RuntimeMethod*))RequestHelper_Post_TisRuntimeObject_m405A2689142A8DBFE03781F18AE8023F8EED7B27_gshared)(___data0, ___success1, ___error2, method);
}
// !!0 ZEPETO.Multiplay.MPack::To<ZEPETO.Chat.UserDataMessage>()
inline UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F (MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * __this, const RuntimeMethod* method)
{
	return ((  UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * (*) (MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 *, const RuntimeMethod*))MPack_To_TisRuntimeObject_mE0096FDF38CB15218CBB39D42577B38655DCA6B9_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::AddUserInfo(ZEPETO.Chat.UserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_AddUserInfo_mEF81E0A2A039494FAE3659875FB2DA6D47CA6EEC (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ___user0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.SystemMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemMessage__ctor_mAC298197FD84B736C2E686BB70E6E52D93952193 (SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::ReceiveMessage(ZEPETO.Chat.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RuntimeObject* ___message0, const RuntimeMethod* method);
// ZEPETO.Chat.UserInfo ZEPETO.Chat.ZepetoChatImplementation::GetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ZepetoChatImplementation_GetUserInfo_mCBE86F1F8DE86829A4962DB7D69EEC19D93ED2C7 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.String ZEPETO.Chat.ZepetoChatImplementation::RemoveSessionIds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZepetoChatImplementation_RemoveSessionIds_m5701CAF65899615DCEBEF8D63827071375EAE2A2 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::RemoveUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_RemoveUserInfo_mB1C932B61A12ECAD99065F4AC6589E3597A56F7D (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method);
// !!0 ZEPETO.Multiplay.MPack::To<ZEPETO.Chat.RoomUserDataMessage>()
inline RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * MPack_To_TisRoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036_mECE06BFBA7A1E5B7EBD0C2D94E84B24D26E7CE89 (MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * __this, const RuntimeMethod* method)
{
	return ((  RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * (*) (MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 *, const RuntimeMethod*))MPack_To_TisRuntimeObject_mE0096FDF38CB15218CBB39D42577B38655DCA6B9_gshared)(__this, method);
}
// System.Void System.Func`2<ZEPETO.Chat.UserDataMessage,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0D21E557635474D6D02FC81CE808D919C1EA71C9 (Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ZEPETO.Chat.UserDataMessage,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_TisString_t_m77DCAB75604B45125C7C49E3FFF438FCA3B321B9 (RuntimeObject* ___source0, Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// ZEPETO.Chat.UserInfo ZEPETO.Chat.ZepetoChatImplementation::GetUserInfoAsSessionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ZepetoChatImplementation_GetUserInfoAsSessionId_mAE257C363471D83D98AA835DC051B80998773E37 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___sessionId0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.UserMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMessage__ctor_m4069B0B2CF62509210F0484E7AF1149B0C5784C4 (UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Chat.IMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F084AF153D2A8E55DC5D3CD83324B6718CAE6DD (Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<ZEPETO.Chat.IMessage,System.Action`1<ZEPETO.Chat.IMessage>>::Invoke(!0,!1)
inline void Action_2_Invoke_m27DAB6BE460A62FF2514719217CDE27F1700B459 (Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * __this, RuntimeObject* ___arg10, Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 *, RuntimeObject*, Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<ZEPETO.Chat.IMessage>::Invoke(!0)
inline void Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5 (Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<ZEPETO.Chat.IMessage>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3 (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * __this, RuntimeObject* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 *, RuntimeObject*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnBeforeSendMessage_Invoke_m99A937097CC19679A7F0AD4C8CB537249ABBE54A (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline)(__this, method);
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Filter(System.String,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Filter_m348CAF2AECFDE075640E68B691897D6087AFDCC1 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___message0, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___onCompleted1, const RuntimeMethod* method);
// System.Int32 ZEPETO.Chat.ZepetoChatImplementation::get_SendMessageCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZepetoChatImplementation_get_SendMessageCount_m61E40F8D0AE12A51A85C21CD55AD39FEEE583B0E_inline (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m0F608EC8022EB7BBC6AD4915DD017E6800D45F0C (U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ChatFilter/Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m7CF03999A45EA350261B7AFD32CADE7358A2726C (Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * __this, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ChatFilter/Request::.ctor(ZEPETO.Chat.ChatFilter/Data)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mAB1C46D0AE52AC13078FF036DEE0F55AF704BE65 (Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * __this, Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * ___req0, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.Chat.ChatFilter/ResponseData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3411EEBC000035F785FE7E340C0529413E67E05E (Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ZEPETO.Chat.RequestHelper::Post<ZEPETO.Chat.ChatFilter/ResponseData>(ZEPETO.Chat.IRequest,System.Action`1<TResponse>,System.Action`1<System.String>)
inline void RequestHelper_Post_TisResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81_mF79EC1F06D4D271FE742A20375563ADC613C7445 (RuntimeObject* ___data0, Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 * ___success1, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___error2, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 *, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, const RuntimeMethod*))RequestHelper_Post_TisRuntimeObject_m405A2689142A8DBFE03781F18AE8023F8EED7B27_gshared)(___data0, ___success1, ___error2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m61D05585460FFFA86FCD5DA9A58254FE28F9CA28 (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, String_t* ___key0, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, String_t*, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m53CCD2E45DB5CAA516F700AEB872BBB9B1330E1B (U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3F315D6238238E223153B2CCCA518517FDC6F917 (Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m03715B6DDEC4F9E5EED2E464BB22A6C4C9500DCB_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerable_FirstOrDefault_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_m8134C49AFCD61B121F51D991E4D073706CD279D0 (RuntimeObject* ___source0, Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * ___predicate1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (RuntimeObject*, Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m237E8CE252436CB31B697921F89D22B3320AEC8A_gshared)(___source0, ___predicate1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0)
inline bool Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::Add(!0,!1)
inline void Dictionary_2_Add_m633F506830FFEB1667B4F8E6747A8EBE6E18F086 (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, String_t* ___key0, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, String_t*, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,ZEPETO.Chat.UserInfo>::Remove(!0)
inline bool Dictionary_2_Remove_m94E70F81C0A424EAA0C5A4A51D12470FF21206DF (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/InternalAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAction__ctor_mE54934F63FD625CB4CF5E2E68745F6A2052F4678 (InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean ZEPETO.Chat.Internal.ChatSettings::get_isZaizai()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatSettings_get_isZaizai_m0542AB8929C61805DD3B2384755EE165698AE47F_inline (const RuntimeMethod* method);
// System.String ZEPETO.Chat.Internal.ChatSettings::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserName_mDB730CA397D3FB33A5250BCFA5B96007BAAADF10_inline (const RuntimeMethod* method);
// System.Void ZEPETO.Chat.MessageData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageData__ctor_m7D432BFDB7C5DF18E99188BE54C48C825DF3B04E (MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task ZEPETO.Multiplay.RoomBase::Send(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * RoomBase_Send_m5AB14399698108F17FC24FC0373B0BFE7734A84C (RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * __this, uint8_t ___type0, RuntimeObject * ___message1, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA (RuntimeObject * ___obj0, bool ___prettyPrint1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ResponseBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseBase__ctor_mC726A7D74F499BC8F843192C0CED5D6A71DFF943 (ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418 * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C131E530A244AAEEB2BF60AC8F0C44E64847A30 (U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnJoinRoom(ZEPETO.Multiplay.RoomBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnJoinRoom_m3BD37882C04A2E279C8A251362C5779A6A3DD004 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ___room0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZEPETO.Chat.Internal.ChatSettings::get_APIHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatSettings_get_APIHost_m786E7EC828B5603F3C029F5A45A5A46D8CD3B55D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CAPIHostU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String ZEPETO.Chat.Internal.ChatSettings::get_FilterHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CFilterHostU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Boolean ZEPETO.Chat.Internal.ChatSettings::get_isZaizai()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatSettings_get_isZaizai_m0542AB8929C61805DD3B2384755EE165698AE47F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		bool L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CisZaizaiU3Ek__BackingField_2();
		return L_0;
	}
}
// System.String ZEPETO.Chat.Internal.ChatSettings::get_AuthToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatSettings_get_AuthToken_mE15DD3FAEC1104D72DDE29661CA5DC8130B64FA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CAuthTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String ZEPETO.Chat.Internal.ChatSettings::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserId_mA61C725F79B2F6FF938FD5D626C3B0904FE6CEAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String ZEPETO.Chat.Internal.ChatSettings::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserName_mDB730CA397D3FB33A5250BCFA5B96007BAAADF10 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CUserNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ZEPETO.Chat.Internal.ChatSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatSettings__cctor_mA15F47FAC66995E926149B4B1B84189FB373DAB0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224F5E1284ABD323C230BEAC2A5B1988B555DD45);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->set_U3CAPIHostU3Ek__BackingField_0(_stringLiteral224F5E1284ABD323C230BEAC2A5B1988B555DD45);
		((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->set__language_6((String_t*)NULL);
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
// System.Void ZEPETO.Chat.MessageData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageData__ctor_m7D432BFDB7C5DF18E99188BE54C48C825DF3B04E (MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * __this, const RuntimeMethod* method)
{
	{
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
// System.String ZEPETO.Chat.RequestAPIHost::GetHost(ZEPETO.Chat.RequestTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestAPIHost_GetHost_mE77199C2061F8B69AEDDFB3DF1FE32CD84159CC7 (int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0038;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_3, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7_inline(/*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_0040;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7_inline(/*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0040;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = ChatSettings_get_APIHost_m786E7EC828B5603F3C029F5A45A5A46D8CD3B55D_inline(/*hidden argument*/NULL);
		V_3 = L_9;
		goto IL_0040;
	}

IL_0040:
	{
		String_t* L_10 = V_3;
		return L_10;
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
// System.String ZEPETO.Chat.RequestAPIs::GetPath(ZEPETO.Chat.RequestTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestAPIs_GetPath_m988727A8757B8641E314B2EC9B52F6351610D5B6 (int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m80AB1BB4DFE483E10C537A53508D7F84433EF31D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestTypes_t79B936BC185A91FAB730F1120DF5B4A5A0362412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var);
		Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * L_0 = ((RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_StaticFields*)il2cpp_codegen_static_fields_for(RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var))->get_apis_0();
		int32_t L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m80AB1BB4DFE483E10C537A53508D7F84433EF31D(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m80AB1BB4DFE483E10C537A53508D7F84433EF31D_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_0026;
	}

IL_0016:
	{
		RuntimeObject * L_5 = Box(RequestTypes_t79B936BC185A91FAB730F1120DF5B4A5A0362412_il2cpp_TypeInfo_var, (&___type0));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		___type0 = *(int32_t*)UnBox(L_5);
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.Void ZEPETO.Chat.RequestAPIs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestAPIs__cctor_mB748310C37FB38B2A0CD1E3AE021158F26CF457C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE429C5FDFE94EE45175951ED6201431061D92A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m66A140B304BA06C43B8B32BC241FCC84E121CBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral274C2A569EFF1ACFFB3F20803E12E0065929F2FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * L_0 = (Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 *)il2cpp_codegen_object_new(Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m66A140B304BA06C43B8B32BC241FCC84E121CBB9(L_0, /*hidden argument*/Dictionary_2__ctor_m66A140B304BA06C43B8B32BC241FCC84E121CBB9_RuntimeMethod_var);
		Dictionary_2_tA22571CB079C01021E58B106E3A87BFD8B21EC55 * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mFE429C5FDFE94EE45175951ED6201431061D92A7(L_1, 1, _stringLiteral274C2A569EFF1ACFFB3F20803E12E0065929F2FD, /*hidden argument*/Dictionary_2_Add_mFE429C5FDFE94EE45175951ED6201431061D92A7_RuntimeMethod_var);
		((RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_StaticFields*)il2cpp_codegen_static_fields_for(RequestAPIs_t844B3576FE6935D9BF3D27BBCC9D0B8DC7071D21_il2cpp_TypeInfo_var))->set_apis_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.Chat.ResponseBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseBase__ctor_mC726A7D74F499BC8F843192C0CED5D6A71DFF943 (ResponseBase_t7438D79154D18FD92032A211A566A6E336BAC418 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.RoomUserDataMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomUserDataMessage__ctor_m75D54EB99E0B5F7505BCD7AC967A23C10F18D7ED (RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.SystemMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemMessage__ctor_mAC298197FD84B736C2E686BB70E6E52D93952193 (SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.UserData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserData__ctor_mDD30544F3D4D7E34E4EC6AD3F048A4114B9430B3 (UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.UserDataMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataMessage__ctor_m6987D8E3D6B40AD4E231D4ADF9DC066EEB76FB77 (UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.UserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfo__ctor_m058FFEF297B683FA214E6774B35657147E990910 (UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ZEPETO.Chat.UserMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMessage__ctor_m4069B0B2CF62509210F0484E7AF1149B0C5784C4 (UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * __this, const RuntimeMethod* method)
{
	{
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
// ZEPETO.Chat.ZepetoChatImplementation ZEPETO.Chat.ZepetoChat::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * ZepetoChat_get_Instance_m79E36EDFBC8E6D81C6494785FFE85540A7721EDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * V_1 = NULL;
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_0 = ((ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_il2cpp_TypeInfo_var))->get_s_instance_0();
		V_0 = (bool)((((RuntimeObject*)(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_2 = (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD *)il2cpp_codegen_object_new(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		ZepetoChatImplementation__ctor_m5EA1D0A86DF2D119DB725D9EEB993EAC36DD501D(L_2, /*hidden argument*/NULL);
		((ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_il2cpp_TypeInfo_var))->set_s_instance_0(L_2);
	}

IL_0019:
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_3 = ((ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChat_t38E654A3EE9D311A297B8D0C53305EF4F2214F1F_il2cpp_TypeInfo_var))->get_s_instance_0();
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_4 = V_1;
		return L_4;
	}
}
// System.Void ZEPETO.Chat.ZepetoChat::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChat_Send_m4386391C2285E5BF6EA4CBB7BE3FF05F3A106670 (String_t* ___message0, const RuntimeMethod* method)
{
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_0;
		L_0 = ZepetoChat_get_Instance_m79E36EDFBC8E6D81C6494785FFE85540A7721EDC(/*hidden argument*/NULL);
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		ZepetoChatImplementation_Send_m2A732457B0B4F8896B8D5F2C1FB34EE4608B8BB8(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation::set_SendMessageCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_set_SendMessageCount_m6F43909A3910C14BEFF569B02739050911C31F66 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendMessageCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ZEPETO.Chat.ZepetoChatImplementation::get_SendMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZepetoChatImplementation_get_SendMessageCount_m61E40F8D0AE12A51A85C21CD55AD39FEEE583B0E (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendMessageCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation__ctor_m5EA1D0A86DF2D119DB725D9EEB993EAC36DD501D (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *)il2cpp_codegen_object_new(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51(L_0, /*hidden argument*/Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51_RuntimeMethod_var);
		__this->set__userInfos_5(L_0);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set__sessionIds_6(L_1);
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_2 = (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 *)il2cpp_codegen_object_new(UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486_il2cpp_TypeInfo_var);
		UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7(L_2, /*hidden argument*/UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7_RuntimeMethod_var);
		__this->set_onReceivedMessage_4(L_2);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Initialize(ZEPETO.Multiplay.ZepetoMultiplayBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Initialize_m0FD74C384455798E3B8EFBD3EF020346D7E2F815 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * ___multiplay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93A38D10ED0F4ABA3072B5319887455F6BEE1B56);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral93A38D10ED0F4ABA3072B5319887455F6BEE1B56, /*hidden argument*/NULL);
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = (Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B *)il2cpp_codegen_object_new(Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51(L_0, /*hidden argument*/Dictionary_2__ctor_mBBA951896B081530D28F92932551C4CAB09CCF51_RuntimeMethod_var);
		__this->set__userInfos_5(L_0);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set__sessionIds_6(L_1);
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_2 = (UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 *)il2cpp_codegen_object_new(UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486_il2cpp_TypeInfo_var);
		UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7(L_2, /*hidden argument*/UnityEvent_1__ctor_mDE31FB5F12B6F3E15CD03AA01DADD19C3F2229D7_RuntimeMethod_var);
		__this->set_onReceivedMessage_4(L_2);
		__this->set__room_1((RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 *)NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_3 = ___multiplay0;
		__this->set__multiplay_0(L_3);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_4 = __this->get__multiplay_0();
		Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * L_5 = (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 *)il2cpp_codegen_object_new(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7(L_5, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		NullCheck(L_4);
		ZepetoMultiplayBase_add_RoomCreated_m408629163BD904A8A51C4BD7425CA65E038FDE99(L_4, L_5, /*hidden argument*/NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_6 = __this->get__multiplay_0();
		Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * L_7 = (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 *)il2cpp_codegen_object_new(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7(L_7, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		NullCheck(L_6);
		ZepetoMultiplayBase_add_RoomJoined_m142620013EF9E909E0AA3357812834F3519C1E3D(L_6, L_7, /*hidden argument*/NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_8 = __this->get__multiplay_0();
		Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * L_9 = (Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 *)il2cpp_codegen_object_new(Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50_il2cpp_TypeInfo_var);
		Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A(L_9, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A_RuntimeMethod_var);
		NullCheck(L_8);
		ZepetoMultiplayBase_add_RoomLeave_m09227FF8EDCC2D47F0DC4BC5E3D08A7D42CD788D(L_8, L_9, /*hidden argument*/NULL);
		ZepetoChatImplementation_set_SendMessageCount_m6F43909A3910C14BEFF569B02739050911C31F66_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Release_m8BE1CC2BF5195BF86DFDCB9A7170A5C0BF9B0270 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C4CF2575250ED3C93D2EEBEF760715357FF9AA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B2_0 = NULL;
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B5_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral20C4CF2575250ED3C93D2EEBEF760715357FF9AA, /*hidden argument*/NULL);
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = __this->get__userInfos_5();
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E(G_B2_0, /*hidden argument*/Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = __this->get__sessionIds_6();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002a;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		NullCheck(G_B5_0);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(G_B5_0, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
	}

IL_0030:
	{
		__this->set_onReceivedMessage_4((UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 *)NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_4 = __this->get__multiplay_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_7 = __this->get__multiplay_0();
		Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * L_8 = (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 *)il2cpp_codegen_object_new(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7(L_8, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		NullCheck(L_7);
		ZepetoMultiplayBase_remove_RoomCreated_m9C503546DD23D14A28DB43B5AD61B5454A1BB5C8(L_7, L_8, /*hidden argument*/NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_9 = __this->get__multiplay_0();
		Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 * L_10 = (Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989 *)il2cpp_codegen_object_new(Action_1_tB4DBB0D9E90AB1C3E14799D723E2F13DA5DDA989_il2cpp_TypeInfo_var);
		Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7(L_10, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA179BD8A1AD37771E21459B2BDB43C9D3C2D7AC7_RuntimeMethod_var);
		NullCheck(L_9);
		ZepetoMultiplayBase_remove_RoomJoined_mF34B2F8D7AE7BDB2E1ADAC4E8AE83BEE3D7E0691(L_9, L_10, /*hidden argument*/NULL);
		ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 * L_11 = __this->get__multiplay_0();
		Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 * L_12 = (Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50 *)il2cpp_codegen_object_new(Action_1_tF0239D77A7E0D275A691C8EAFA4D7F31F2C3FF50_il2cpp_TypeInfo_var);
		Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A(L_12, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m3B4225E97455F3AC050D70AB9653A9916D921F8A_RuntimeMethod_var);
		NullCheck(L_11);
		ZepetoMultiplayBase_remove_RoomLeave_mF187DC1E73B7FD3B90B53D065A0C649088A3A21A(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0091:
	{
		__this->set__multiplay_0((ZepetoMultiplayBase_tC01C78351DCA2E84D76B21378F90D397F3FE7B49 *)NULL);
		__this->set__room_1((RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 *)NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnMultiplayRoomCreated(ZEPETO.Multiplay.RoomBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnMultiplayRoomCreated_m3567DE10741503B347015D6137E2BD4DA088E62D (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m54C626C082B91735A2F30A15018386822ACE5C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomBase_AddMessageHandler_TisBroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB_m7FAE233825E5B7309A4C859ED1A510781532C268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3COnMultiplayRoomCreatedU3Eb__0_m03A7445BE76806F5690B097D965D9A209F3C5C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnJoinRoomBroadcastHandler_m2B1D1A37845282B805AAABCBD2D22F1DAD804CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnLeaveRoomBroadcastHandler_m3E15C404C86F7D7A069F0F52AA8716C03C8F8CD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnReceiveMessageData_m5D6F3975563F55C7328DEB404835C8B4263B00C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnRoomDataSessionListHandler_m3132F829E96C43C27373686047EE84A520BD1EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106C5CBA11906F5B9E89907DB266C425FCEA1224);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * V_0 = NULL;
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B2_0 = NULL;
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B5_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B4_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_0 = (U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m2A7E1BEC20CDBA5350698E101B693B7EDA5CEA51(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_2 = V_0;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_3 = ___room0;
		NullCheck(L_2);
		L_2->set_room_1(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral106C5CBA11906F5B9E89907DB266C425FCEA1224, /*hidden argument*/NULL);
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_4 = __this->get__userInfos_5();
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_002c;
		}
	}
	{
		goto IL_0032;
	}

IL_002c:
	{
		NullCheck(G_B2_0);
		Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E(G_B2_0, /*hidden argument*/Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
	}

IL_0032:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = __this->get__sessionIds_6();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_003e;
		}
	}
	{
		goto IL_0044;
	}

IL_003e:
	{
		NullCheck(G_B5_0);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(G_B5_0, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
	}

IL_0044:
	{
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_8 = V_0;
		NullCheck(L_8);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_9 = L_8->get_room_1();
		Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F * L_10 = (Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F *)il2cpp_codegen_object_new(Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F_il2cpp_TypeInfo_var);
		Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1(L_10, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnJoinRoomBroadcastHandler_m2B1D1A37845282B805AAABCBD2D22F1DAD804CB6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1_RuntimeMethod_var);
		NullCheck(L_9);
		RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9(L_9, ((int32_t)17), L_10, /*hidden argument*/RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9_RuntimeMethod_var);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_11 = V_0;
		NullCheck(L_11);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_12 = L_11->get_room_1();
		Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F * L_13 = (Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F *)il2cpp_codegen_object_new(Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F_il2cpp_TypeInfo_var);
		Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1(L_13, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnLeaveRoomBroadcastHandler_m3E15C404C86F7D7A069F0F52AA8716C03C8F8CD5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1_RuntimeMethod_var);
		NullCheck(L_12);
		RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9(L_12, ((int32_t)18), L_13, /*hidden argument*/RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9_RuntimeMethod_var);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_14 = V_0;
		NullCheck(L_14);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_15 = L_14->get_room_1();
		Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F * L_16 = (Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F *)il2cpp_codegen_object_new(Action_1_t2830FD21287E1F0F44E7608DF248B8D1E80AE64F_il2cpp_TypeInfo_var);
		Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1(L_16, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnRoomDataSessionListHandler_m3132F829E96C43C27373686047EE84A520BD1EB4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m618AC12762394862B3ED6C4833C5456879BE6FE1_RuntimeMethod_var);
		NullCheck(L_15);
		RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9(L_15, ((int32_t)19), L_16, /*hidden argument*/RoomBase_AddMessageHandler_TisMPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3_m6A30053B584BA4E4D694FAE337DDD245F4E019F9_RuntimeMethod_var);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_17 = V_0;
		NullCheck(L_17);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_18 = L_17->get_room_1();
		Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 * L_19 = (Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909 *)il2cpp_codegen_object_new(Action_1_t196B8880F8F9F3F9686CEA292DD9868B7716F909_il2cpp_TypeInfo_var);
		Action_1__ctor_m54C626C082B91735A2F30A15018386822ACE5C2E(L_19, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnReceiveMessageData_m5D6F3975563F55C7328DEB404835C8B4263B00C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m54C626C082B91735A2F30A15018386822ACE5C2E_RuntimeMethod_var);
		NullCheck(L_18);
		RoomBase_AddMessageHandler_TisBroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB_m7FAE233825E5B7309A4C859ED1A510781532C268(L_18, ((int32_t)15), L_19, /*hidden argument*/RoomBase_AddMessageHandler_TisBroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB_m7FAE233825E5B7309A4C859ED1A510781532C268_RuntimeMethod_var);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_20 = V_0;
		NullCheck(L_20);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_21 = L_20->get_room_1();
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_22 = V_0;
		ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A * L_23 = (ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A *)il2cpp_codegen_object_new(ColyseusOpenEventHandler_t8542EBCA0B2B4D5CB14AA29AB35998EFB7F27A3A_il2cpp_TypeInfo_var);
		ColyseusOpenEventHandler__ctor_m3ABEADC33C85FB0E272BCE6474EC52974B408258(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3COnMultiplayRoomCreatedU3Eb__0_m03A7445BE76806F5690B097D965D9A209F3C5C8F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		RoomBase_add_OnJoin_mFB712C707654B7659473C10A2B75EFCCBC465A6B(L_21, L_23, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * L_24 = V_0;
		NullCheck(L_24);
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_25 = L_24->get_room_1();
		__this->set__room_1(L_25);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnMultiplayRoomJoined(ZEPETO.Multiplay.RoomBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnMultiplayRoomJoined_m8B50F911907C5A890684FF85F704306574F403E9 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ___room0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnMultiplayRoomLeave(ZEPETO.Multiplay.RoomLeaveEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnMultiplayRoomLeave_m893313D8CE9B4E45A2A22394994CE86238EDBC0A (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RoomLeaveEvent_t357416DFCC1CF0C2EEA78959C1682719CAAA7BF2 * ___leaveEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A7E034996BD73C5452870A8D33D2BF2196085F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B2_0 = NULL;
	Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B5_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B4_0 = NULL;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B8_0 = NULL;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B7_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral80A7E034996BD73C5452870A8D33D2BF2196085F, /*hidden argument*/NULL);
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = __this->get__userInfos_5();
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E(G_B2_0, /*hidden argument*/Dictionary_2_Clear_mEE169A8C48D5B64CF685EDD87D00CD2F1045423E_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = __this->get__sessionIds_6();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002a;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		NullCheck(G_B5_0);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(G_B5_0, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
	}

IL_0030:
	{
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_4 = __this->get_onReceivedMessage_4();
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_5 = L_4;
		G_B7_0 = L_5;
		if (L_5)
		{
			G_B8_0 = L_5;
			goto IL_003c;
		}
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B8_0);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(G_B8_0, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnJoinRoom(ZEPETO.Multiplay.RoomBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnJoinRoom_m3BD37882C04A2E279C8A251362C5779A6A3DD004 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * V_2 = NULL;
	{
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_0 = ___room0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_SessionId_5();
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = ChatSettings_get_UserId_mA61C725F79B2F6FF938FD5D626C3B0904FE6CEAD_inline(/*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = V_1;
		String_t* L_4 = V_0;
		ZepetoChatImplementation_AddSessionIds_mDED64D425E8BDF6EA1FA54B1173ED1162FEF5EF3(__this, L_3, L_4, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_8 = (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 *)il2cpp_codegen_object_new(Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		Request__ctor_m0A9B2A0390022FD1B50C488BA9AA575F966EB218(L_8, L_6, /*hidden argument*/NULL);
		V_2 = L_8;
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_9 = V_2;
		Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 * L_10 = (Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 *)il2cpp_codegen_object_new(Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1(L_10, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_11 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_11, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70(L_9, L_10, L_11, /*hidden argument*/RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnJoinRoomBroadcastHandler(ZEPETO.Multiplay.MPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnJoinRoomBroadcastHandler_m2B1D1A37845282B805AAABCBD2D22F1DAD804CB6 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA54A449BC1959F5D26EB973A0A66BF05E8F0CB26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83);
		s_Il2CppMethodInitialized = true;
	}
	UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * V_0 = NULL;
	Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * V_1 = NULL;
	bool V_2 = false;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B3_0 = NULL;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * L_0 = ___obj0;
		NullCheck(L_0);
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_1;
		L_1 = MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F(L_0, /*hidden argument*/MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F_RuntimeMethod_var);
		V_0 = L_1;
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_3 = V_0;
		NullCheck(L_3);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_4 = L_3->get_userData_1();
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0018;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B3_0);
		String_t* L_6 = G_B3_0->get_userId_0();
		G_B4_0 = L_6;
	}

IL_001d:
	{
		if (!G_B4_0)
		{
			goto IL_002a;
		}
	}
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_sessionId_0();
		G_B7_0 = ((((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B7_0 = 1;
	}

IL_002b:
	{
		V_2 = (bool)G_B7_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_sessionId_0();
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA54A449BC1959F5D26EB973A0A66BF05E8F0CB26, L_11, _stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_12, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_004d:
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_13 = V_0;
		NullCheck(L_13);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_14 = L_13->get_userData_1();
		NullCheck(L_14);
		String_t* L_15 = L_14->get_userId_0();
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_sessionId_0();
		ZepetoChatImplementation_AddSessionIds_mDED64D425E8BDF6EA1FA54B1173ED1162FEF5EF3(__this, L_15, L_17, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_20 = V_0;
		NullCheck(L_20);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_21 = L_20->get_userData_1();
		NullCheck(L_21);
		String_t* L_22 = L_21->get_userId_0();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_22);
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_23 = (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 *)il2cpp_codegen_object_new(Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		Request__ctor_m0A9B2A0390022FD1B50C488BA9AA575F966EB218(L_23, L_19, /*hidden argument*/NULL);
		V_1 = L_23;
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_24 = V_1;
		Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 * L_25 = (Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 *)il2cpp_codegen_object_new(Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1(L_25, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_26 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_26, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70(L_24, L_25, L_26, /*hidden argument*/RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
	}

IL_009e:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnJoinRoomBroadcastResponse(ZEPETO.Chat.UserInfos/Response)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnJoinRoomBroadcastResponse_m22FED91303D42667D645135F2BCBF93E8E5E012B (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * ___res0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515F4566707B15CF93CF9F9A85C39E0134D62593);
		s_Il2CppMethodInitialized = true;
	}
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_0 = NULL;
	bool V_1 = false;
	UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* G_B3_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_0 = ___res0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402*)(NULL));
		goto IL_000d;
	}

IL_0007:
	{
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_1 = ___res0;
		NullCheck(L_1);
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_2 = L_1->get_users_2();
		G_B3_0 = L_2;
	}

IL_000d:
	{
		if (!G_B3_0)
		{
			goto IL_0025;
		}
	}
	{
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_3 = ___res0;
		NullCheck(L_3);
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_4 = L_3->get_users_2();
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0025;
		}
	}
	{
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_5 = ___res0;
		NullCheck(L_5);
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_6 = L_5->get_users_2();
		NullCheck(L_6);
		int32_t L_7 = 0;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B7_0 = ((((RuntimeObject*)(UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B7_0 = 1;
	}

IL_0026:
	{
		V_1 = (bool)G_B7_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral515F4566707B15CF93CF9F9A85C39E0134D62593, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0038:
	{
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_10 = ___res0;
		NullCheck(L_10);
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_11 = L_10->get_users_2();
		NullCheck(L_11);
		int32_t L_12 = 0;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = L_13;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_14 = V_0;
		ZepetoChatImplementation_AddUserInfo_mEF81E0A2A039494FAE3659875FB2DA6D47CA6EEC(__this, L_14, /*hidden argument*/NULL);
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_15 = (SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 *)il2cpp_codegen_object_new(SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321_il2cpp_TypeInfo_var);
		SystemMessage__ctor_mAC298197FD84B736C2E686BB70E6E52D93952193(L_15, /*hidden argument*/NULL);
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_16 = L_15;
		NullCheck(L_16);
		L_16->set_systemType_0(0);
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_17 = L_16;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_name_1();
		NullCheck(L_17);
		L_17->set_subject_1(L_19);
		ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD(__this, L_17, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnJoinRoomBroadcastError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnJoinRoomBroadcastError_m800FB0355C677C2D7ECBE9D249D023ADDC6F1099 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___errorMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___errorMessage0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnLeaveRoomBroadcastHandler(ZEPETO.Multiplay.MPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnLeaveRoomBroadcastHandler_m3E15C404C86F7D7A069F0F52AA8716C03C8F8CD5 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D11B11706482652D3A481A1FF0222AF625DB61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE58D7D671D30D5A8E7EAA4F4E5D8323FC41F3918);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83);
		s_Il2CppMethodInitialized = true;
	}
	UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * V_0 = NULL;
	String_t* V_1 = NULL;
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B2_0 = NULL;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * L_0 = ___obj0;
		NullCheck(L_0);
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_1;
		L_1 = MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F(L_0, /*hidden argument*/MPack_To_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_m3BEFDF22E68088BBCE6ECF265B6141605352FB6F_RuntimeMethod_var);
		V_0 = L_1;
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_2 = V_0;
		NullCheck(L_2);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_3 = L_2->get_userData_1();
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001a;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		String_t* L_5 = G_B2_0->get_userId_0();
		G_B3_0 = L_5;
	}

IL_001a:
	{
		V_3 = (bool)((((RuntimeObject*)(String_t*)G_B3_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_sessionId_0();
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral44D11B11706482652D3A481A1FF0222AF625DB61, L_8, _stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_9, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_003f:
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_10 = V_0;
		NullCheck(L_10);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_11 = L_10->get_userData_1();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_userId_0();
		V_1 = L_12;
		String_t* L_13 = V_1;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_14;
		L_14 = ZepetoChatImplementation_GetUserInfo_mCBE86F1F8DE86829A4962DB7D69EEC19D93ED2C7(__this, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_15 = V_2;
		V_4 = (bool)((((RuntimeObject*)(UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18;
		L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE58D7D671D30D5A8E7EAA4F4E5D8323FC41F3918, L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_18, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0076:
	{
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_19 = (SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 *)il2cpp_codegen_object_new(SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321_il2cpp_TypeInfo_var);
		SystemMessage__ctor_mAC298197FD84B736C2E686BB70E6E52D93952193(L_19, /*hidden argument*/NULL);
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_20 = L_19;
		NullCheck(L_20);
		L_20->set_systemType_0(1);
		SystemMessage_tFE9646CCE554F4D46FC0AC9209F99D22E7D8D321 * L_21 = L_20;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23 = L_22->get_name_1();
		NullCheck(L_21);
		L_21->set_subject_1(L_23);
		ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD(__this, L_21, /*hidden argument*/NULL);
		String_t* L_24 = V_1;
		String_t* L_25;
		L_25 = ZepetoChatImplementation_RemoveSessionIds_m5701CAF65899615DCEBEF8D63827071375EAE2A2(__this, L_24, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		ZepetoChatImplementation_RemoveUserInfo_mB1C932B61A12ECAD99065F4AC6589E3597A56F7D(__this, L_26, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnRoomDataSessionListHandler(ZEPETO.Multiplay.MPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnRoomDataSessionListHandler_m3132F829E96C43C27373686047EE84A520BD1EB4 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_TisString_t_m77DCAB75604B45125C7C49E3FFF438FCA3B321B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m0D21E557635474D6D02FC81CE808D919C1EA71C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MPack_To_TisRoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036_mECE06BFBA7A1E5B7EBD0C2D94E84B24D26E7CE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnRoomDataSessionListHandlerU3Eb__22_0_m2C05AF013E09B9AEEE1B3A4B1B8EE256FE602197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnRoomDataSessionListError_mEC9BA559DCFA2C6BF325A32D21EA8F9298539D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_OnRoomDataSessionListResponse_m06DA1E40C372AE70D15A84FA1F90DFBDD566DA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFE227CDEDF9A99DD56F2CC40261FFA1F244F63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83);
		s_Il2CppMethodInitialized = true;
	}
	RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * V_0 = NULL;
	UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * V_3 = NULL;
	UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* V_4 = NULL;
	int32_t V_5 = 0;
	UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * V_6 = NULL;
	bool V_7 = false;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B3_0 = NULL;
	UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * G_B11_0 = NULL;
	UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* G_B11_1 = NULL;
	Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * G_B10_0 = NULL;
	UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* G_B10_1 = NULL;
	{
		MPack_t5DD165B2F6FCD65814274719CED8B239CC3A39D3 * L_0 = ___obj0;
		NullCheck(L_0);
		RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * L_1;
		L_1 = MPack_To_TisRoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036_mECE06BFBA7A1E5B7EBD0C2D94E84B24D26E7CE89(L_0, /*hidden argument*/MPack_To_TisRoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036_mECE06BFBA7A1E5B7EBD0C2D94E84B24D26E7CE89_RuntimeMethod_var);
		V_0 = L_1;
		RoomUserDataMessage_tE6274ABA684CB3253BEF7CA9AEE413153C3F3036 * L_2 = V_0;
		NullCheck(L_2);
		UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* L_3 = L_2->get_sessions_0();
		V_1 = L_3;
		UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* L_4 = V_1;
		V_4 = L_4;
		V_5 = 0;
		goto IL_007f;
	}

IL_0018:
	{
		UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* L_5 = V_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_6 = L_8;
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_9 = V_6;
		NullCheck(L_9);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_10 = L_9->get_userData_1();
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_002e;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck(G_B3_0);
		String_t* L_12 = G_B3_0->get_userId_0();
		G_B4_0 = L_12;
	}

IL_0033:
	{
		V_7 = (bool)((((RuntimeObject*)(String_t*)G_B4_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_14 = V_6;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_sessionId_0();
		String_t* L_16;
		L_16 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7DFE227CDEDF9A99DD56F2CC40261FFA1F244F63, L_15, _stringLiteralFF31313E5B0E58D8B978EAD9EEE8C667A22A3C83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_005c:
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_17 = V_6;
		NullCheck(L_17);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_18 = L_17->get_userData_1();
		NullCheck(L_18);
		String_t* L_19 = L_18->get_userId_0();
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_20 = V_6;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_sessionId_0();
		ZepetoChatImplementation_AddSessionIds_mDED64D425E8BDF6EA1FA54B1173ED1162FEF5EF3(__this, L_19, L_21, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_23 = V_5;
		UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* L_24 = V_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		UserDataMessageU5BU5D_t0C1FFEBAEF445B39BCCB5747DDFAEAFC214FB689* L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * L_26 = ((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->get_U3CU3E9__22_0_1();
		Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * L_27 = L_26;
		G_B10_0 = L_27;
		G_B10_1 = L_25;
		if (L_27)
		{
			G_B11_0 = L_27;
			G_B11_1 = L_25;
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * L_28 = ((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * L_29 = (Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 *)il2cpp_codegen_object_new(Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067_il2cpp_TypeInfo_var);
		Func_2__ctor_m0D21E557635474D6D02FC81CE808D919C1EA71C9(L_29, L_28, (intptr_t)((intptr_t)U3CU3Ec_U3COnRoomDataSessionListHandlerU3Eb__22_0_m2C05AF013E09B9AEEE1B3A4B1B8EE256FE602197_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0D21E557635474D6D02FC81CE808D919C1EA71C9_RuntimeMethod_var);
		Func_2_tF1AE7E63A80099147CB83ADC555A33DF3FCD3067 * L_30 = L_29;
		((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->set_U3CU3E9__22_0_1(L_30);
		G_B11_0 = L_30;
		G_B11_1 = G_B10_1;
	}

IL_00a7:
	{
		RuntimeObject* L_31;
		L_31 = Enumerable_Select_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_TisString_t_m77DCAB75604B45125C7C49E3FFF438FCA3B321B9((RuntimeObject*)(RuntimeObject*)G_B11_1, G_B11_0, /*hidden argument*/Enumerable_Select_TisUserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE_TisString_t_m77DCAB75604B45125C7C49E3FFF438FCA3B321B9_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32;
		L_32 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_31, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		V_2 = L_32;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = V_2;
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_34 = (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 *)il2cpp_codegen_object_new(Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1_il2cpp_TypeInfo_var);
		Request__ctor_m0A9B2A0390022FD1B50C488BA9AA575F966EB218(L_34, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * L_35 = V_3;
		Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 * L_36 = (Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3 *)il2cpp_codegen_object_new(Action_1_t4F690DCCEAAFCD4E275DC6E3C169536240F24CE3_il2cpp_TypeInfo_var);
		Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1(L_36, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnRoomDataSessionListResponse_m06DA1E40C372AE70D15A84FA1F90DFBDD566DA48_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m736CFE2C1D48F2DB41E56D0AFA7AD2029D0144D1_RuntimeMethod_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_37 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_37, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_OnRoomDataSessionListError_mEC9BA559DCFA2C6BF325A32D21EA8F9298539D8F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70(L_35, L_36, L_37, /*hidden argument*/RequestHelper_Post_TisResponse_t6E766D2144F91E5C162CB6433534B9946D8913DC_mAB90A4B6D15D2A1DF2311153AA3811F934B93B70_RuntimeMethod_var);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnRoomDataSessionListResponse(ZEPETO.Chat.UserInfos/Response)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnRoomDataSessionListResponse_m06DA1E40C372AE70D15A84FA1F90DFBDD566DA48 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * ___res0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FB0C18E24534DDC172EE89839C78275642B54A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* V_1 = NULL;
	UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* V_2 = NULL;
	int32_t V_3 = 0;
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * L_1 = ___res0;
		NullCheck(L_1);
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_2 = L_1->get_users_2();
		V_1 = L_2;
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_3 = V_1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_007b;
	}

IL_0015:
	{
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_8 = V_4;
		ZepetoChatImplementation_AddUserInfo_mEF81E0A2A039494FAE3659875FB2DA6D47CA6EEC(__this, L_8, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get__sessionIds_6();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_userId_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_9, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = __this->get__sessionIds_6();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_15 = V_4;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_userId_0();
		NullCheck(L_14);
		String_t* L_17;
		L_17 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_14, L_16, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		V_6 = L_17;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = V_0;
		String_t* L_19 = V_6;
		NullCheck(L_18);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_18, L_19, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		goto IL_0076;
	}

IL_005d:
	{
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_20 = V_4;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_userId_0();
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB5FB0C18E24534DDC172EE89839C78275642B54A, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_22, /*hidden argument*/NULL);
	}

IL_0076:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_24 = V_3;
		UserInfoU5BU5D_t2D0C5C5BC9867D5B024B9D167F4E069B034DA402* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnRoomDataSessionListError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnRoomDataSessionListError_mEC9BA559DCFA2C6BF325A32D21EA8F9298539D8F (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___errorMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___errorMessage0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::OnReceiveMessageData(ZEPETO.Multiplay.BroadcastMessage`1<ZEPETO.Chat.MessageData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_OnReceiveMessageData_m5D6F3975563F55C7328DEB404835C8B4263B00C7 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4982B305CE3243A4FFCE81E97648F45B0435C1BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A64F3EB4DECC1C55DA5EE442B1C59D952EEA48);
		s_Il2CppMethodInitialized = true;
	}
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B3_0 = NULL;
	{
		BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B *)(NULL));
		goto IL_000d;
	}

IL_0007:
	{
		BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB * L_1 = ___obj0;
		NullCheck(L_1);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_2 = L_1->get_data_0();
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_8 = (bool)((((RuntimeObject*)(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B *)G_B3_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_8;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB * L_4 = ___obj0;
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC7A64F3EB4DECC1C55DA5EE442B1C59D952EEA48, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		goto IL_00ce;
	}

IL_002d:
	{
		BroadcastMessage_1_t56EA1241A21A72C192F72BCBAAFA1DC702FD01BB * L_6 = ___obj0;
		NullCheck(L_6);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_7 = L_6->get_data_0();
		V_0 = L_7;
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_senderSessionId_0();
		V_1 = L_9;
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_message_2();
		V_2 = L_11;
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_messageType_1();
		V_3 = L_13;
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->get_isFiltered_3();
		V_4 = L_15;
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_senderSessionId_0();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_18;
		L_18 = ZepetoChatImplementation_GetUserInfoAsSessionId_mAE257C363471D83D98AA835DC051B80998773E37(__this, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_19 = V_5;
		V_9 = (bool)((((RuntimeObject*)(UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_senderSessionId_0();
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4982B305CE3243A4FFCE81E97648F45B0435C1BB, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_23, /*hidden argument*/NULL);
		goto IL_00ce;
	}

IL_0083:
	{
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_24 = V_5;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_userId_0();
		V_6 = L_25;
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_26 = V_5;
		NullCheck(L_26);
		String_t* L_27 = L_26->get_name_1();
		V_7 = L_27;
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_28 = (UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 *)il2cpp_codegen_object_new(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		UserMessage__ctor_m4069B0B2CF62509210F0484E7AF1149B0C5784C4(L_28, /*hidden argument*/NULL);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_29 = L_28;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		L_29->set_sessionId_0(L_30);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_31 = L_29;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		L_31->set_message_2(L_32);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_33 = L_31;
		String_t* L_34 = V_3;
		NullCheck(L_33);
		L_33->set_messageType_1(L_34);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_35 = L_33;
		String_t* L_36 = V_6;
		NullCheck(L_35);
		L_35->set_userId_3(L_36);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_37 = L_35;
		String_t* L_38 = V_7;
		NullCheck(L_37);
		L_37->set_userName_4(L_38);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_39 = L_37;
		bool L_40 = V_4;
		NullCheck(L_39);
		L_39->set_isFiltered_5(L_40);
		ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD(__this, L_39, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::ReceiveMessage(ZEPETO.Chat.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RuntimeObject* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F084AF153D2A8E55DC5D3CD83324B6718CAE6DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m27DAB6BE460A62FF2514719217CDE27F1700B459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_U3CReceiveMessageU3Eb__26_0_mE6F73624EFE3D0B109ACB93113E0DB6D551038FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7090A22D72DFF6FDACF079043CC1699F66ACD1A9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * V_1 = NULL;
	bool V_2 = false;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B2_0 = NULL;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B1_0 = NULL;
	Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * G_B3_0 = NULL;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B7_0 = NULL;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B6_0 = NULL;
	Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * G_B9_0 = NULL;
	Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * G_B8_0 = NULL;
	int32_t G_B13_0 = 0;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B16_0 = NULL;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B15_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_0 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 *)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * L_2 = G_B2_0->get_onBeforeReceivedMessage_0();
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 *)G_B3_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_4 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		NullCheck(L_4);
		Action_2_tFF83600955F3E30AAC5F5B356E2A782993D54EA4 * L_5 = L_4->get_onBeforeReceivedMessage_0();
		RuntimeObject* L_6 = ___message0;
		Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * L_7 = (Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 *)il2cpp_codegen_object_new(Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F084AF153D2A8E55DC5D3CD83324B6718CAE6DD(L_7, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_U3CReceiveMessageU3Eb__26_0_mE6F73624EFE3D0B109ACB93113E0DB6D551038FA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F084AF153D2A8E55DC5D3CD83324B6718CAE6DD_RuntimeMethod_var);
		NullCheck(L_5);
		Action_2_Invoke_m27DAB6BE460A62FF2514719217CDE27F1700B459(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m27DAB6BE460A62FF2514719217CDE27F1700B459_RuntimeMethod_var);
		goto IL_0093;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_8 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_9 = L_8;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_0046;
		}
	}
	{
		goto IL_0058;
	}

IL_0046:
	{
		NullCheck(G_B7_0);
		Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * L_10 = G_B7_0->get_onReceivedMessage_1();
		Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * L_11 = L_10;
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_0051;
		}
	}
	{
		goto IL_0058;
	}

IL_0051:
	{
		RuntimeObject* L_12 = ___message0;
		NullCheck(G_B9_0);
		Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5(G_B9_0, L_12, /*hidden argument*/Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5_RuntimeMethod_var);
	}

IL_0058:
	{
		RuntimeObject* L_13 = ___message0;
		V_1 = ((UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 *)IsInstClass((RuntimeObject*)L_13, UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var));
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_messageType_1();
		NullCheck(L_16);
		bool L_17;
		L_17 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_16, _stringLiteral7090A22D72DFF6FDACF079043CC1699F66ACD1A9, 5, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0079;
	}

IL_0078:
	{
		G_B13_0 = 0;
	}

IL_0079:
	{
		V_2 = (bool)G_B13_0;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_19 = __this->get_onReceivedMessage_4();
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_20 = L_19;
		G_B15_0 = L_20;
		if (L_20)
		{
			G_B16_0 = L_20;
			goto IL_008a;
		}
	}
	{
		goto IL_0091;
	}

IL_008a:
	{
		RuntimeObject* L_21 = ___message0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3(G_B16_0, L_21, /*hidden argument*/UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3_RuntimeMethod_var);
	}

IL_0091:
	{
	}

IL_0092:
	{
	}

IL_0093:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Send_m2A732457B0B4F8896B8D5F2C1FB34EE4608B8BB8 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_U3CSendU3Eb__27_0_m7981D77A6BCB3A9FDFE53B82D1246B845A847E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B10_0 = 0;
	{
		String_t* L_0 = ___message0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0098;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_3 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_4 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_5 = L_4;
		G_B4_0 = L_5;
		G_B4_1 = 0;
		if (L_5)
		{
			G_B5_0 = L_5;
			G_B5_1 = 0;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_6 = V_4;
		G_B8_0 = L_6;
		G_B8_1 = G_B4_1;
		goto IL_004d;
	}

IL_002d:
	{
		NullCheck(G_B5_0);
		OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * L_7 = G_B5_0->get_onBeforeSendMessage_2();
		OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * L_8 = L_7;
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = G_B5_1;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_9 = V_4;
		G_B8_0 = L_9;
		G_B8_1 = G_B6_1;
		goto IL_004d;
	}

IL_0042:
	{
		String_t* L_10 = ___message0;
		NullCheck(G_B7_0);
		bool L_11;
		L_11 = OnBeforeSendMessage_Invoke_m99A937097CC19679A7F0AD4C8CB537249ABBE54A(G_B7_0, L_10, /*hidden argument*/NULL);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
	}

IL_004d:
	{
		V_3 = G_B8_0;
		bool L_13;
		L_13 = Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		G_B10_0 = ((int32_t)((int32_t)((((int32_t)G_B8_1) == ((int32_t)L_13))? 1 : 0)&(int32_t)L_14));
		goto IL_0062;
	}

IL_0061:
	{
		G_B10_0 = 0;
	}

IL_0062:
	{
		V_2 = (bool)G_B10_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0098;
	}

IL_0068:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_16 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_16, /*hidden argument*/NULL);
		V_0 = L_16;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_17 = V_0;
		NullCheck(L_17);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_17, /*hidden argument*/NULL);
		String_t* L_18 = ___message0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_19 = (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)il2cpp_codegen_object_new(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8(L_19, __this, (intptr_t)((intptr_t)ZepetoChatImplementation_U3CSendU3Eb__27_0_m7981D77A6BCB3A9FDFE53B82D1246B845A847E92_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		ZepetoChatImplementation_Filter_m348CAF2AECFDE075640E68B691897D6087AFDCC1(__this, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = ZepetoChatImplementation_get_SendMessageCount_m61E40F8D0AE12A51A85C21CD55AD39FEEE583B0E_inline(__this, /*hidden argument*/NULL);
		ZepetoChatImplementation_set_SendMessageCount_m6F43909A3910C14BEFF569B02739050911C31F66_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::Filter(System.String,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_Filter_m348CAF2AECFDE075640E68B691897D6087AFDCC1 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___message0, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___onCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m3411EEBC000035F785FE7E340C0529413E67E05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t135532E32DE72A3A9210C67F0B7829393B432658_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_Post_TisResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81_mF79EC1F06D4D271FE742A20375563ADC613C7445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFilterU3Eb__28_1_m5874D83C4F5D11D8B7AFC91D152390B3A1AC2816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CFilterU3Eb__0_mE18FDDCFB94EC79B108D110F6C2C664C0CE42281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * V_0 = NULL;
	Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * V_1 = NULL;
	Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * V_2 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 * G_B2_1 = NULL;
	Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * G_B2_2 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 * G_B1_1 = NULL;
	Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * G_B1_2 = NULL;
	{
		U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * L_0 = (U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass28_0__ctor_m0F608EC8022EB7BBC6AD4915DD017E6800D45F0C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * L_1 = V_0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_2 = ___onCompleted1;
		NullCheck(L_1);
		L_1->set_onCompleted_0(L_2);
		U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * L_3 = V_0;
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		L_3->set_message_1(L_4);
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_5 = (Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 *)il2cpp_codegen_object_new(Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017_il2cpp_TypeInfo_var);
		Data__ctor_m7CF03999A45EA350261B7AFD32CADE7358A2726C(L_5, /*hidden argument*/NULL);
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_6 = L_5;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_7 = __this->get__room_1();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_Id_3();
		NullCheck(L_6);
		L_6->set_user_id_0(L_8);
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_9 = L_6;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_10 = __this->get__room_1();
		NullCheck(L_10);
		String_t* L_11 = L_10->get_Id_3();
		NullCheck(L_9);
		L_9->set_player_display_name_1(L_11);
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_12 = L_9;
		U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_message_1();
		NullCheck(L_12);
		L_12->set_text_2(L_14);
		V_1 = L_12;
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_15 = V_1;
		Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * L_16 = (Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 *)il2cpp_codegen_object_new(Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4_il2cpp_TypeInfo_var);
		Request__ctor_mAB1C46D0AE52AC13078FF036DEE0F55AF704BE65(L_16, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * L_17 = V_2;
		U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * L_18 = V_0;
		Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 * L_19 = (Action_1_t135532E32DE72A3A9210C67F0B7829393B432658 *)il2cpp_codegen_object_new(Action_1_t135532E32DE72A3A9210C67F0B7829393B432658_il2cpp_TypeInfo_var);
		Action_1__ctor_m3411EEBC000035F785FE7E340C0529413E67E05E(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass28_0_U3CFilterU3Eb__0_mE18FDDCFB94EC79B108D110F6C2C664C0CE42281_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m3411EEBC000035F785FE7E340C0529413E67E05E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_20 = ((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->get_U3CU3E9__28_1_2();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_21 = L_20;
		G_B1_0 = L_21;
		G_B1_1 = L_19;
		G_B1_2 = L_17;
		if (L_21)
		{
			G_B2_0 = L_21;
			G_B2_1 = L_19;
			G_B2_2 = L_17;
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * L_22 = ((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_23 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec_U3CFilterU3Eb__28_1_m5874D83C4F5D11D8B7AFC91D152390B3A1AC2816_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_24 = L_23;
		((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->set_U3CU3E9__28_1_2(L_24);
		G_B2_0 = L_24;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_007c:
	{
		RequestHelper_Post_TisResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81_mF79EC1F06D4D271FE742A20375563ADC613C7445(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/RequestHelper_Post_TisResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81_mF79EC1F06D4D271FE742A20375563ADC613C7445_RuntimeMethod_var);
		return;
	}
}
// ZEPETO.Chat.UserInfo ZEPETO.Chat.ZepetoChatImplementation::GetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ZepetoChatImplementation_GetUserInfo_mCBE86F1F8DE86829A4962DB7D69EEC19D93ED2C7 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m61D05585460FFFA86FCD5DA9A58254FE28F9CA28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_0 = NULL;
	bool V_1 = false;
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_2 = NULL;
	{
		String_t* L_0 = ___userId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		V_2 = (UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *)NULL;
		goto IL_0022;
	}

IL_000f:
	{
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_3 = __this->get__userInfos_5();
		String_t* L_4 = ___userId0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m61D05585460FFFA86FCD5DA9A58254FE28F9CA28(L_3, L_4, (UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m61D05585460FFFA86FCD5DA9A58254FE28F9CA28_RuntimeMethod_var);
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_6 = V_0;
		V_2 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_7 = V_2;
		return L_7;
	}
}
// ZEPETO.Chat.UserInfo ZEPETO.Chat.ZepetoChatImplementation::GetUserInfoAsSessionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ZepetoChatImplementation_GetUserInfoAsSessionId_mAE257C363471D83D98AA835DC051B80998773E37 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___sessionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_m8134C49AFCD61B121F51D991E4D073706CD279D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m3F315D6238238E223153B2CCCA518517FDC6F917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_U3CGetUserInfoAsSessionIdU3Eb__0_m6552C90786B5DAA48AA9735802A96EF8D2AC6C39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * V_0 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * V_3 = NULL;
	UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * L_0 = (U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass30_0__ctor_m53CCD2E45DB5CAA516F700AEB872BBB9B1330E1B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * L_1 = V_0;
		String_t* L_2 = ___sessionId0;
		NullCheck(L_1);
		L_1->set_sessionId_0(L_2);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = __this->get__sessionIds_6();
		U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * L_4 = V_0;
		Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * L_5 = (Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 *)il2cpp_codegen_object_new(Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619_il2cpp_TypeInfo_var);
		Func_2__ctor_m3F315D6238238E223153B2CCCA518517FDC6F917(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass30_0_U3CGetUserInfoAsSessionIdU3Eb__0_m6552C90786B5DAA48AA9735802A96EF8D2AC6C39_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m3F315D6238238E223153B2CCCA518517FDC6F917_RuntimeMethod_var);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_6;
		L_6 = Enumerable_FirstOrDefault_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_m8134C49AFCD61B121F51D991E4D073706CD279D0(L_3, L_5, /*hidden argument*/Enumerable_FirstOrDefault_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_m8134C49AFCD61B121F51D991E4D073706CD279D0_RuntimeMethod_var);
		V_1 = L_6;
		il2cpp_codegen_initobj((&V_2), sizeof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC ));
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_7 = V_2;
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_8 = L_7;
		RuntimeObject * L_9 = Box(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var, &L_8);
		RuntimeObject * L_10 = Box(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_9);
		V_1 = *(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)UnBox(L_10);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_12;
		L_12 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_13;
		L_13 = ZepetoChatImplementation_GetUserInfo_mCBE86F1F8DE86829A4962DB7D69EEC19D93ED2C7(__this, L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
		goto IL_0053;
	}

IL_0052:
	{
		G_B3_0 = ((UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA *)(NULL));
	}

IL_0053:
	{
		V_3 = G_B3_0;
		goto IL_0056;
	}

IL_0056:
	{
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_14 = V_3;
		return L_14;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::AddSessionIds(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_AddSessionIds_mDED64D425E8BDF6EA1FA54B1173ED1162FEF5EF3 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, String_t* ___sessionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260B722647037B88E324949F3B4C8525312D97A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CAC3DEC85C3550F09F6232BEB3EF8F3E48D505);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__sessionIds_6();
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_4 = ___userId0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = __this->get__sessionIds_6();
		String_t* L_6 = ___userId0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral260B722647037B88E324949F3B4C8525312D97A8, L_4, _stringLiteral90CAC3DEC85C3550F09F6232BEB3EF8F3E48D505, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_8, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0037:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get__sessionIds_6();
		String_t* L_10 = ___userId0;
		String_t* L_11 = ___sessionId1;
		NullCheck(L_9);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
// System.String ZEPETO.Chat.ZepetoChatImplementation::RemoveSessionIds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZepetoChatImplementation_RemoveSessionIds_m5701CAF65899615DCEBEF8D63827071375EAE2A2 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__sessionIds_6();
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = __this->get__sessionIds_6();
		String_t* L_5 = ___userId0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		V_1 = L_6;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = __this->get__sessionIds_6();
		String_t* L_8 = ___userId0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1_RuntimeMethod_var);
		String_t* L_10 = V_1;
		V_2 = L_10;
		goto IL_0038;
	}

IL_0030:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_11 = V_2;
		return L_11;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::AddUserInfo(ZEPETO.Chat.UserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_AddUserInfo_mEF81E0A2A039494FAE3659875FB2DA6D47CA6EEC (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m633F506830FFEB1667B4F8E6747A8EBE6E18F086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE831301ED107CFE7742BCC40D2B21308658933);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BBA864DE9FB1CE56CFBD12A04474B845BB895D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = __this->get__userInfos_5();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_1 = ___user0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_userId_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_5 = ___user0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_userId_0();
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7CE831301ED107CFE7742BCC40D2B21308658933, L_6, _stringLiteralA7BBA864DE9FB1CE56CFBD12A04474B845BB895D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_7, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0035:
	{
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_8 = __this->get__userInfos_5();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_9 = ___user0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_userId_0();
		UserInfo_tA4E29C8F01E38C243C689350B0F0DB45098EB1BA * L_11 = ___user0;
		NullCheck(L_8);
		Dictionary_2_Add_m633F506830FFEB1667B4F8E6747A8EBE6E18F086(L_8, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m633F506830FFEB1667B4F8E6747A8EBE6E18F086_RuntimeMethod_var);
	}

IL_004a:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::RemoveUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_RemoveUserInfo_mB1C932B61A12ECAD99065F4AC6589E3597A56F7D (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m94E70F81C0A424EAA0C5A4A51D12470FF21206DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_0 = __this->get__userInfos_5();
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m9E417D280ABFF45E4DBA228B1B3D1A7250EA237B_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_tB05E0D0D4F135B4608DB87CE070E9DF82BF4E67B * L_4 = __this->get__userInfos_5();
		String_t* L_5 = ___userId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m94E70F81C0A424EAA0C5A4A51D12470FF21206DF(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m94E70F81C0A424EAA0C5A4A51D12470FF21206DF_RuntimeMethod_var);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation__cctor_m8088C70E19A8E666E9532F3F10D7624745F03CF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalAction_t991429916C5993620BD9278E25563278C6CE0785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_0 = (InternalAction_t991429916C5993620BD9278E25563278C6CE0785 *)il2cpp_codegen_object_new(InternalAction_t991429916C5993620BD9278E25563278C6CE0785_il2cpp_TypeInfo_var);
		InternalAction__ctor_mE54934F63FD625CB4CF5E2E68745F6A2052F4678(L_0, /*hidden argument*/NULL);
		((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->set_InnerEvent_2(L_0);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::<ReceiveMessage>b__26_0(ZEPETO.Chat.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_U3CReceiveMessageU3Eb__26_0_mE6F73624EFE3D0B109ACB93113E0DB6D551038FA (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, RuntimeObject* ___optMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7090A22D72DFF6FDACF079043CC1699F66ACD1A9);
		s_Il2CppMethodInitialized = true;
	}
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * V_0 = NULL;
	bool V_1 = false;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B2_0 = NULL;
	InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * G_B1_0 = NULL;
	Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * G_B4_0 = NULL;
	Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * G_B3_0 = NULL;
	int32_t G_B8_0 = 0;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B11_0 = NULL;
	UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * G_B10_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var);
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_0 = ((ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_StaticFields*)il2cpp_codegen_static_fields_for(ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD_il2cpp_TypeInfo_var))->get_InnerEvent_2();
		InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_001e;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * L_2 = G_B2_0->get_onReceivedMessage_1();
		Action_1_tA7A93DF50D4ADB7D631792974C5ACDBACD199CC2 * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001e;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___optMessage0;
		NullCheck(G_B4_0);
		Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5(G_B4_0, L_4, /*hidden argument*/Action_1_Invoke_mB7CF9BF87A01FD3AC53DDAE640764C7CD1759CE5_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___optMessage0;
		V_0 = ((UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 *)IsInstClass((RuntimeObject*)L_5, UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var));
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_messageType_1();
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_8, _stringLiteral7090A22D72DFF6FDACF079043CC1699F66ACD1A9, 5, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B8_0 = 0;
	}

IL_003f:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_11 = __this->get_onReceivedMessage_4();
		UnityEvent_1_t0E9FE65821397B646829D9CAC6BE6F34F2566486 * L_12 = L_11;
		G_B10_0 = L_12;
		if (L_12)
		{
			G_B11_0 = L_12;
			goto IL_0050;
		}
	}
	{
		goto IL_0057;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___optMessage0;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3(G_B11_0, L_13, /*hidden argument*/UnityEvent_1_Invoke_m1DC1997E4AF4E03E161D7978BED67F12F0E91FB3_RuntimeMethod_var);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation::<Send>b__27_0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZepetoChatImplementation_U3CSendU3Eb__27_0_m7981D77A6BCB3A9FDFE53B82D1246B845A847E92 (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, bool ___isFiltered0, String_t* ___filteredText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723AB20ADDD3A2839FC99702E2F1FE0286AF914D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * V_1 = NULL;
	int32_t G_B3_0 = 0;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B6_0 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B6_1 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B6_2 = NULL;
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * G_B6_3 = NULL;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B5_0 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B5_1 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B5_2 = NULL;
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * G_B5_3 = NULL;
	String_t* G_B7_0 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B7_1 = NULL;
	UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * G_B7_2 = NULL;
	ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * G_B7_3 = NULL;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B10_0 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B10_1 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B10_2 = NULL;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B9_0 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B9_1 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B11_1 = NULL;
	MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * G_B11_2 = NULL;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B13_0 = NULL;
	RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * G_B12_0 = NULL;
	{
		bool L_0 = ___isFiltered0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___filteredText1;
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral723AB20ADDD3A2839FC99702E2F1FE0286AF914D, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		bool L_5 = ___isFiltered0;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ChatSettings_get_isZaizai_m0542AB8929C61805DD3B2384755EE165698AE47F_inline(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_8 = (UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 *)il2cpp_codegen_object_new(UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316_il2cpp_TypeInfo_var);
		UserMessage__ctor_m4069B0B2CF62509210F0484E7AF1149B0C5784C4(L_8, /*hidden argument*/NULL);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_9 = L_8;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_10 = __this->get__room_1();
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = L_9;
		G_B5_2 = L_9;
		G_B5_3 = __this;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = L_9;
			G_B6_2 = L_9;
			G_B6_3 = __this;
			goto IL_003c;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck(G_B6_0);
		String_t* L_12 = G_B6_0->get_SessionId_5();
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_0041:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_sessionId_0(G_B7_0);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_13 = G_B7_2;
		String_t* L_14 = ___filteredText1;
		NullCheck(L_13);
		L_13->set_message_2(L_14);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_15 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = ChatSettings_get_UserId_mA61C725F79B2F6FF938FD5D626C3B0904FE6CEAD_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_userId_3(L_16);
		UserMessage_t48BC3A84904D09319535C5690DC29E289D8B3316 * L_17 = L_15;
		String_t* L_18;
		L_18 = ChatSettings_get_UserName_mDB730CA397D3FB33A5250BCFA5B96007BAAADF10_inline(/*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_userName_4(L_18);
		NullCheck(G_B7_3);
		ZepetoChatImplementation_ReceiveMessage_mAC1E154732E3FFB80A932A18738C3873010EF3BD(G_B7_3, L_17, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_006c:
	{
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_19 = (MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B *)il2cpp_codegen_object_new(MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B_il2cpp_TypeInfo_var);
		MessageData__ctor_m7D432BFDB7C5DF18E99188BE54C48C825DF3B04E(L_19, /*hidden argument*/NULL);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_20 = L_19;
		String_t* L_21 = ___filteredText1;
		NullCheck(L_20);
		L_20->set_message_2(L_21);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_22 = L_20;
		NullCheck(L_22);
		L_22->set_messageType_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_23 = L_22;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_24 = __this->get__room_1();
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_25 = L_24;
		G_B9_0 = L_25;
		G_B9_1 = L_23;
		G_B9_2 = L_23;
		if (L_25)
		{
			G_B10_0 = L_25;
			G_B10_1 = L_23;
			G_B10_2 = L_23;
			goto IL_0092;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		goto IL_0097;
	}

IL_0092:
	{
		NullCheck(G_B10_0);
		String_t* L_26 = G_B10_0->get_SessionId_5();
		G_B11_0 = L_26;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_0097:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_senderSessionId_0(G_B11_0);
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_27 = G_B11_2;
		bool L_28 = ___isFiltered0;
		NullCheck(L_27);
		L_27->set_isFiltered_3(L_28);
		V_1 = L_27;
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_29 = __this->get__room_1();
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_30 = L_29;
		G_B12_0 = L_30;
		if (L_30)
		{
			G_B13_0 = L_30;
			goto IL_00b0;
		}
	}
	{
		goto IL_00b9;
	}

IL_00b0:
	{
		MessageData_tA583E5E58D04794EB9FDB181C7AB836E221E6A1B * L_31 = V_1;
		NullCheck(G_B13_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_32;
		L_32 = RoomBase_Send_m5AB14399698108F17FC24FC0373B0BFE7734A84C(G_B13_0, (uint8_t)((int32_t)15), L_31, /*hidden argument*/NULL);
	}

IL_00b9:
	{
	}

IL_00ba:
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
// System.Void ZEPETO.Chat.ChatFilter/Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m7CF03999A45EA350261B7AFD32CADE7358A2726C (Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C6831D06777E90A212DE2409537E460B8A98F27);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_server_3(_stringLiteral6C6831D06777E90A212DE2409537E460B8A98F27);
		__this->set_room_4(_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		__this->set_rule_5(8);
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
// ZEPETO.Chat.RequestTypes ZEPETO.Chat.ChatFilter/Request::get_RequestType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Request_get_RequestType_mD824DBD9AF5DB535A6F5E750841CDEF060498D29 (Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void ZEPETO.Chat.ChatFilter/Request::.ctor(ZEPETO.Chat.ChatFilter/Data)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mAB1C46D0AE52AC13078FF036DEE0F55AF704BE65 (Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * __this, Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * ___req0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Data_tD25B67FFF658EEE3F63C2344DF94C67AB2E80017 * L_0 = ___req0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_3 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		__this->set__data_0(L_4);
		return;
	}
}
// System.Byte[] ZEPETO.Chat.ChatFilter/Request::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Request_GetBytes_mC8CBC338B8F10A5E32C275BB6324278BDC0D5E8D (Request_tEA10DB3AA566B709C36FFBA4531E278E23A528D4 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
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
// System.Void ZEPETO.Chat.ChatFilter/ResponseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseData__ctor_m5AC7D6DFB4A88AC8EDB647E63F9C326F61DE3B83 (ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81 * __this, const RuntimeMethod* method)
{
	{
		ResponseBase__ctor_mC726A7D74F499BC8F843192C0CED5D6A71DFF943(__this, /*hidden argument*/NULL);
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
// ZEPETO.Chat.RequestTypes ZEPETO.Chat.UserInfos/Request::get_RequestType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Request_get_RequestType_m099185FE2E21E598BCC2C117BE305CB87123C884 (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void ZEPETO.Chat.UserInfos/Request::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_m0A9B2A0390022FD1B50C488BA9AA575F966EB218 (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___userIds0;
		__this->set_userIds_0(L_0);
		return;
	}
}
// System.Byte[] ZEPETO.Chat.UserInfos/Request::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Request_GetBytes_mDEF746B968C65E82E7BB501DA3EB8C8D30CE9E50 (Request_t8A4310921F17CA32EB7158AA3756D8D815EF46A1 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		String_t* L_0;
		L_0 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		return L_4;
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
// System.Void ZEPETO.Chat.UserInfos/Response::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_mA177EFC748857831C7C721680F9DC5FBF1CDE4B4 (Response_t6E766D2144F91E5C162CB6433534B9946D8913DC * __this, const RuntimeMethod* method)
{
	{
		ResponseBase__ctor_mC726A7D74F499BC8F843192C0CED5D6A71DFF943(__this, /*hidden argument*/NULL);
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD4B9F7120CCC988C1CE4EAF7713A92B9982E9A0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * L_0 = (U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 *)il2cpp_codegen_object_new(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2C131E530A244AAEEB2BF60AC8F0C44E64847A30(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C131E530A244AAEEB2BF60AC8F0C44E64847A30 (U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ZEPETO.Chat.ZepetoChatImplementation/<>c::<OnRoomDataSessionListHandler>b__22_0(ZEPETO.Chat.UserDataMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnRoomDataSessionListHandlerU3Eb__22_0_m2C05AF013E09B9AEEE1B3A4B1B8EE256FE602197 (U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * __this, UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * ___u0, const RuntimeMethod* method)
{
	{
		UserDataMessage_t9A954D344871F82CD2FCA86E6284322F91C164EE * L_0 = ___u0;
		NullCheck(L_0);
		UserData_t07C9C4A540A79FAC77EE6C9F53F3BEA85BCB9DC2 * L_1 = L_0->get_userData_1();
		NullCheck(L_1);
		String_t* L_2 = L_1->get_userId_0();
		return L_2;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c::<Filter>b__28_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFilterU3Eb__28_1_m5874D83C4F5D11D8B7AFC91D152390B3A1AC2816 (U3CU3Ec_t1EF36AAB1B97EEAF7F72090DCB7718C982F04416 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDBD9F14884DA90BF94638412653B547B4AC562BB)), L_0, /*hidden argument*/NULL);
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CFilterU3Eb__28_1_m5874D83C4F5D11D8B7AFC91D152390B3A1AC2816_RuntimeMethod_var)));
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2A7E1BEC20CDBA5350698E101B693B7EDA5CEA51 (U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass14_0::<OnMultiplayRoomCreated>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3COnMultiplayRoomCreatedU3Eb__0_m03A7445BE76806F5690B097D965D9A209F3C5C8F (U3CU3Ec__DisplayClass14_0_tF539117FE22FB9B364C08094751A3C6F13D39C0B * __this, const RuntimeMethod* method)
{
	{
		ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * L_0 = __this->get_U3CU3E4__this_0();
		RoomBase_t456A7496113D6FF9E0616628E5A4574AA72665C7 * L_1 = __this->get_room_1();
		NullCheck(L_0);
		ZepetoChatImplementation_OnJoinRoom_m3BD37882C04A2E279C8A251362C5779A6A3DD004(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m0F608EC8022EB7BBC6AD4915DD017E6800D45F0C (U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass28_0::<Filter>b__0(ZEPETO.Chat.ChatFilter/ResponseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CFilterU3Eb__0_mE18FDDCFB94EC79B108D110F6C2C664C0CE42281 (U3CU3Ec__DisplayClass28_0_t073BADF548D1094401F727222A4456D82EE6EEF1 * __this, ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81 * ___res0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B5_0 = NULL;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B4_0 = NULL;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B9_0 = NULL;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B8_0 = NULL;
	{
		ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81 * L_0 = ___res0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isSuccess_2();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral463D565270F8F53D7BE2BC657B9A27F9A690FC14)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CFilterU3Eb__0_mE18FDDCFB94EC79B108D110F6C2C664C0CE42281_RuntimeMethod_var)));
	}

IL_0019:
	{
		ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81 * L_4 = ___res0;
		NullCheck(L_4);
		bool L_5 = L_4->get_response_3();
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_7 = __this->get_onCompleted_0();
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0030;
		}
	}
	{
		goto IL_003d;
	}

IL_0030:
	{
		String_t* L_9 = __this->get_message_1();
		NullCheck(G_B5_0);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(G_B5_0, (bool)0, L_9, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
	}

IL_003d:
	{
		goto IL_005b;
	}

IL_0040:
	{
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_10 = __this->get_onCompleted_0();
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_11 = L_10;
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_004d;
		}
	}
	{
		goto IL_005a;
	}

IL_004d:
	{
		ResponseData_tC75D00D888B8F35A74F72F02222711BFDB0D7B81 * L_12 = ___res0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_hashed_4();
		NullCheck(G_B9_0);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(G_B9_0, (bool)1, L_13, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
	}

IL_005a:
	{
	}

IL_005b:
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m53CCD2E45DB5CAA516F700AEB872BBB9B1330E1B (U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZEPETO.Chat.ZepetoChatImplementation/<>c__DisplayClass30_0::<GetUserInfoAsSessionId>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass30_0_U3CGetUserInfoAsSessionIdU3Eb__0_m6552C90786B5DAA48AA9735802A96EF8D2AC6C39 (U3CU3Ec__DisplayClass30_0_tAA07DD7CF4D1BE3C9142C78BC992B931BE5A157F * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___p0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		String_t* L_1 = __this->get_sessionId_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void ZEPETO.Chat.ZepetoChatImplementation/InternalAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAction__ctor_mE54934F63FD625CB4CF5E2E68745F6A2052F4678 (InternalAction_t991429916C5993620BD9278E25563278C6CE0785 * __this, const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBeforeSendMessage__ctor_mEF8CE80DEDCA6F15E5A21CCE62557F79E613F3B2 (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnBeforeSendMessage_Invoke_m99A937097CC19679A7F0AD4C8CB537249ABBE54A (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___msg0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___msg0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___msg0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< bool, String_t* >::Invoke(targetMethod, targetThis, ___msg0);
					else
						result = GenericVirtFuncInvoker1< bool, String_t* >::Invoke(targetMethod, targetThis, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___msg0);
					else
						result = VirtFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___msg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnBeforeSendMessage_BeginInvoke_mDEF2F26FB857457B23F3684266EFD272B46FF4E4 (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, String_t* ___msg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___msg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean ZEPETO.Chat.ZepetoChatImplementation/InternalAction/OnBeforeSendMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnBeforeSendMessage_EndInvoke_mE0A72B56F9453D339D4A6C7A7FC483EB26C3AE02 (OnBeforeSendMessage_t0736727C16E29245B5B4D90910D8831E87481EEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_FilterHost_m0C170D9FE5ADC30A7496DE49AF795F3CA94D89F7_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CFilterHostU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_APIHost_m786E7EC828B5603F3C029F5A45A5A46D8CD3B55D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CAPIHostU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZepetoChatImplementation_set_SendMessageCount_m6F43909A3910C14BEFF569B02739050911C31F66_inline (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendMessageCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserId_mA61C725F79B2F6FF938FD5D626C3B0904FE6CEAD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZepetoChatImplementation_get_SendMessageCount_m61E40F8D0AE12A51A85C21CD55AD39FEEE583B0E_inline (ZepetoChatImplementation_tAA79D3D0E0FE7EF1923ADA40BE4E2BE2D436F9CD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendMessageCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatSettings_get_isZaizai_m0542AB8929C61805DD3B2384755EE165698AE47F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		bool L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CisZaizaiU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatSettings_get_UserName_mDB730CA397D3FB33A5250BCFA5B96007BAAADF10_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_StaticFields*)il2cpp_codegen_static_fields_for(ChatSettings_t6AAC507F77F150D7444606022F77598E719166F9_il2cpp_TypeInfo_var))->get_U3CUserNameU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
