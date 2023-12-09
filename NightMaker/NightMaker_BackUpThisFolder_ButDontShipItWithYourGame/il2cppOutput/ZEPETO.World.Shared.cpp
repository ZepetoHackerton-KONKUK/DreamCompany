#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<ZEPETO.World.MatchmakingKeyValue[]>
struct Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>
struct List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
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
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// ZEPETO.World.MatchmakingKeyValue[]
struct MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66;
// ZEPETO.World.CustomRematchComponent
struct CustomRematchComponent_t0175AF0A387BD31675E95324937BCAA6EAE4446C;
// ZEPETO.World.CustomWorldSetting
struct CustomWorldSetting_t7952F67E30DC2DF258CFB8E2A40ABBEE23FF0292;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ZEPETO.World.WorldSetting
struct WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// ZEPETO.World.WorldServiceInternal/<>c
struct U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral887B34C8FC9A9400EB782C42C1CBEFDFF840A95A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA8FD42D12B327624CCEBFA6EDE55E72621609A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__16_0_mE5C49E31E9402FD409DE225B0FA505D38306E522_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E92B1A83D240182971D773208A9AB1D4B60A52F 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>
struct List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72, ____items_1)); }
	inline MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* get__items_1() const { return ____items_1; }
	inline MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72_StaticFields, ____emptyArray_5)); }
	inline MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// ZEPETO.World.WorldService
struct WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239  : public RuntimeObject
{
public:

public:
};

struct WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields
{
public:
	// System.String ZEPETO.World.WorldService::userId
	String_t* ___userId_0;
	// System.String ZEPETO.World.WorldService::applicationId
	String_t* ___applicationId_1;
	// System.String ZEPETO.World.WorldService::worldId
	String_t* ___worldId_2;
	// System.String ZEPETO.World.WorldService::worldVersion
	String_t* ___worldVersion_3;
	// System.String ZEPETO.World.WorldService::worldName
	String_t* ___worldName_4;

public:
	inline static int32_t get_offset_of_userId_0() { return static_cast<int32_t>(offsetof(WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields, ___userId_0)); }
	inline String_t* get_userId_0() const { return ___userId_0; }
	inline String_t** get_address_of_userId_0() { return &___userId_0; }
	inline void set_userId_0(String_t* value)
	{
		___userId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_0), (void*)value);
	}

	inline static int32_t get_offset_of_applicationId_1() { return static_cast<int32_t>(offsetof(WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields, ___applicationId_1)); }
	inline String_t* get_applicationId_1() const { return ___applicationId_1; }
	inline String_t** get_address_of_applicationId_1() { return &___applicationId_1; }
	inline void set_applicationId_1(String_t* value)
	{
		___applicationId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationId_1), (void*)value);
	}

	inline static int32_t get_offset_of_worldId_2() { return static_cast<int32_t>(offsetof(WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields, ___worldId_2)); }
	inline String_t* get_worldId_2() const { return ___worldId_2; }
	inline String_t** get_address_of_worldId_2() { return &___worldId_2; }
	inline void set_worldId_2(String_t* value)
	{
		___worldId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldId_2), (void*)value);
	}

	inline static int32_t get_offset_of_worldVersion_3() { return static_cast<int32_t>(offsetof(WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields, ___worldVersion_3)); }
	inline String_t* get_worldVersion_3() const { return ___worldVersion_3; }
	inline String_t** get_address_of_worldVersion_3() { return &___worldVersion_3; }
	inline void set_worldVersion_3(String_t* value)
	{
		___worldVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of_worldName_4() { return static_cast<int32_t>(offsetof(WorldService_tDE96E7A990561667F378B2D6B0AF3FAE5DB33239_StaticFields, ___worldName_4)); }
	inline String_t* get_worldName_4() const { return ___worldName_4; }
	inline String_t** get_address_of_worldName_4() { return &___worldName_4; }
	inline void set_worldName_4(String_t* value)
	{
		___worldName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldName_4), (void*)value);
	}
};


// ZEPETO.World.WorldServiceInternal
struct WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8  : public RuntimeObject
{
public:

public:
};

struct WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields
{
public:
	// ZEPETO.World.WorldSetting ZEPETO.World.WorldServiceInternal::_active
	WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * ____active_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZEPETO.World.WorldServiceInternal::CustomQueryParams
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CustomQueryParams_1;
	// System.Func`2<System.String,System.Boolean> ZEPETO.World.WorldServiceInternal::CheckIsInternalQueryParamKeyFunc
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___CheckIsInternalQueryParamKeyFunc_2;
	// System.Action`1<ZEPETO.World.MatchmakingKeyValue[]> ZEPETO.World.WorldServiceInternal::RestartWorldFunction
	Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * ___RestartWorldFunction_3;
	// System.String ZEPETO.World.WorldServiceInternal::authToken
	String_t* ___authToken_4;
	// System.String ZEPETO.World.WorldServiceInternal::jwt
	String_t* ___jwt_5;
	// System.String ZEPETO.World.WorldServiceInternal::zepetoVersion
	String_t* ___zepetoVersion_6;
	// System.String ZEPETO.World.WorldServiceInternal::userAgent
	String_t* ___userAgent_7;
	// System.String ZEPETO.World.WorldServiceInternal::duid
	String_t* ___duid_8;
	// System.String ZEPETO.World.WorldServiceInternal::countryCode
	String_t* ___countryCode_9;
	// System.Boolean ZEPETO.World.WorldServiceInternal::isZaizai
	bool ___isZaizai_10;

public:
	inline static int32_t get_offset_of__active_0() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ____active_0)); }
	inline WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * get__active_0() const { return ____active_0; }
	inline WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 ** get_address_of__active_0() { return &____active_0; }
	inline void set__active_0(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * value)
	{
		____active_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____active_0), (void*)value);
	}

	inline static int32_t get_offset_of_CustomQueryParams_1() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___CustomQueryParams_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_CustomQueryParams_1() const { return ___CustomQueryParams_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_CustomQueryParams_1() { return &___CustomQueryParams_1; }
	inline void set_CustomQueryParams_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___CustomQueryParams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomQueryParams_1), (void*)value);
	}

	inline static int32_t get_offset_of_CheckIsInternalQueryParamKeyFunc_2() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___CheckIsInternalQueryParamKeyFunc_2)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_CheckIsInternalQueryParamKeyFunc_2() const { return ___CheckIsInternalQueryParamKeyFunc_2; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_CheckIsInternalQueryParamKeyFunc_2() { return &___CheckIsInternalQueryParamKeyFunc_2; }
	inline void set_CheckIsInternalQueryParamKeyFunc_2(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___CheckIsInternalQueryParamKeyFunc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckIsInternalQueryParamKeyFunc_2), (void*)value);
	}

	inline static int32_t get_offset_of_RestartWorldFunction_3() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___RestartWorldFunction_3)); }
	inline Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * get_RestartWorldFunction_3() const { return ___RestartWorldFunction_3; }
	inline Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C ** get_address_of_RestartWorldFunction_3() { return &___RestartWorldFunction_3; }
	inline void set_RestartWorldFunction_3(Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * value)
	{
		___RestartWorldFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RestartWorldFunction_3), (void*)value);
	}

	inline static int32_t get_offset_of_authToken_4() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___authToken_4)); }
	inline String_t* get_authToken_4() const { return ___authToken_4; }
	inline String_t** get_address_of_authToken_4() { return &___authToken_4; }
	inline void set_authToken_4(String_t* value)
	{
		___authToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authToken_4), (void*)value);
	}

	inline static int32_t get_offset_of_jwt_5() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___jwt_5)); }
	inline String_t* get_jwt_5() const { return ___jwt_5; }
	inline String_t** get_address_of_jwt_5() { return &___jwt_5; }
	inline void set_jwt_5(String_t* value)
	{
		___jwt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jwt_5), (void*)value);
	}

	inline static int32_t get_offset_of_zepetoVersion_6() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___zepetoVersion_6)); }
	inline String_t* get_zepetoVersion_6() const { return ___zepetoVersion_6; }
	inline String_t** get_address_of_zepetoVersion_6() { return &___zepetoVersion_6; }
	inline void set_zepetoVersion_6(String_t* value)
	{
		___zepetoVersion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoVersion_6), (void*)value);
	}

	inline static int32_t get_offset_of_userAgent_7() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___userAgent_7)); }
	inline String_t* get_userAgent_7() const { return ___userAgent_7; }
	inline String_t** get_address_of_userAgent_7() { return &___userAgent_7; }
	inline void set_userAgent_7(String_t* value)
	{
		___userAgent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAgent_7), (void*)value);
	}

	inline static int32_t get_offset_of_duid_8() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___duid_8)); }
	inline String_t* get_duid_8() const { return ___duid_8; }
	inline String_t** get_address_of_duid_8() { return &___duid_8; }
	inline void set_duid_8(String_t* value)
	{
		___duid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___duid_8), (void*)value);
	}

	inline static int32_t get_offset_of_countryCode_9() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___countryCode_9)); }
	inline String_t* get_countryCode_9() const { return ___countryCode_9; }
	inline String_t** get_address_of_countryCode_9() { return &___countryCode_9; }
	inline void set_countryCode_9(String_t* value)
	{
		___countryCode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countryCode_9), (void*)value);
	}

	inline static int32_t get_offset_of_isZaizai_10() { return static_cast<int32_t>(offsetof(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields, ___isZaizai_10)); }
	inline bool get_isZaizai_10() const { return ___isZaizai_10; }
	inline bool* get_address_of_isZaizai_10() { return &___isZaizai_10; }
	inline void set_isZaizai_10(bool value)
	{
		___isZaizai_10 = value;
	}
};


// ZEPETO.World.WorldUtils
struct WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D  : public RuntimeObject
{
public:

public:
};

struct WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_StaticFields
{
public:
	// System.String ZEPETO.World.WorldUtils::KEY
	String_t* ___KEY_0;

public:
	inline static int32_t get_offset_of_KEY_0() { return static_cast<int32_t>(offsetof(WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_StaticFields, ___KEY_0)); }
	inline String_t* get_KEY_0() const { return ___KEY_0; }
	inline String_t** get_address_of_KEY_0() { return &___KEY_0; }
	inline void set_KEY_0(String_t* value)
	{
		___KEY_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_0), (void*)value);
	}
};


// ZEPETO.World.WorldServiceInternal/<>c
struct U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_StaticFields
{
public:
	// ZEPETO.World.WorldServiceInternal/<>c ZEPETO.World.WorldServiceInternal/<>c::<>9
	U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
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


// ZEPETO.World.MatchmakingKeyValue
struct MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 
{
public:
	// System.String ZEPETO.World.MatchmakingKeyValue::Key
	String_t* ___Key_0;
	// System.String ZEPETO.World.MatchmakingKeyValue::Value
	String_t* ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82, ___Value_1)); }
	inline String_t* get_Value_1() const { return ___Value_1; }
	inline String_t** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(String_t* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ZEPETO.World.MatchmakingKeyValue
struct MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_pinvoke
{
	char* ___Key_0;
	char* ___Value_1;
};
// Native definition for COM marshalling of ZEPETO.World.MatchmakingKeyValue
struct MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_com
{
	Il2CppChar* ___Key_0;
	Il2CppChar* ___Value_1;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Security.Cryptography.CipherMode
struct CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CryptoStreamMode
struct CryptoStreamMode_t07EDEDDA82CABCD8B72DA0ABB2A8E384CBCF68D5 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t07EDEDDA82CABCD8B72DA0ABB2A8E384CBCF68D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
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

// System.Security.Cryptography.PaddingMode
struct PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Security.Cryptography.CryptoStream
struct CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_Transform
	RuntimeObject* ____Transform_5;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_InputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____InputBuffer_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBufferIndex
	int32_t ____InputBufferIndex_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBlockSize
	int32_t ____InputBlockSize_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_OutputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____OutputBuffer_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBufferIndex
	int32_t ____OutputBufferIndex_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBlockSize
	int32_t ____OutputBlockSize_11;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__Transform_5() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____Transform_5)); }
	inline RuntimeObject* get__Transform_5() const { return ____Transform_5; }
	inline RuntimeObject** get_address_of__Transform_5() { return &____Transform_5; }
	inline void set__Transform_5(RuntimeObject* value)
	{
		____Transform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Transform_5), (void*)value);
	}

	inline static int32_t get_offset_of__InputBuffer_6() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____InputBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__InputBuffer_6() const { return ____InputBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__InputBuffer_6() { return &____InputBuffer_6; }
	inline void set__InputBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____InputBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____InputBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__InputBufferIndex_7() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____InputBufferIndex_7)); }
	inline int32_t get__InputBufferIndex_7() const { return ____InputBufferIndex_7; }
	inline int32_t* get_address_of__InputBufferIndex_7() { return &____InputBufferIndex_7; }
	inline void set__InputBufferIndex_7(int32_t value)
	{
		____InputBufferIndex_7 = value;
	}

	inline static int32_t get_offset_of__InputBlockSize_8() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____InputBlockSize_8)); }
	inline int32_t get__InputBlockSize_8() const { return ____InputBlockSize_8; }
	inline int32_t* get_address_of__InputBlockSize_8() { return &____InputBlockSize_8; }
	inline void set__InputBlockSize_8(int32_t value)
	{
		____InputBlockSize_8 = value;
	}

	inline static int32_t get_offset_of__OutputBuffer_9() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____OutputBuffer_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__OutputBuffer_9() const { return ____OutputBuffer_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__OutputBuffer_9() { return &____OutputBuffer_9; }
	inline void set__OutputBuffer_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____OutputBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OutputBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__OutputBufferIndex_10() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____OutputBufferIndex_10)); }
	inline int32_t get__OutputBufferIndex_10() const { return ____OutputBufferIndex_10; }
	inline int32_t* get_address_of__OutputBufferIndex_10() { return &____OutputBufferIndex_10; }
	inline void set__OutputBufferIndex_10(int32_t value)
	{
		____OutputBufferIndex_10 = value;
	}

	inline static int32_t get_offset_of__OutputBlockSize_11() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____OutputBlockSize_11)); }
	inline int32_t get__OutputBlockSize_11() const { return ____OutputBlockSize_11; }
	inline int32_t* get_address_of__OutputBlockSize_11() { return &____OutputBlockSize_11; }
	inline void set__OutputBlockSize_11(int32_t value)
	{
		____OutputBlockSize_11 = value;
	}

	inline static int32_t get_offset_of__transformMode_12() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____transformMode_12)); }
	inline int32_t get__transformMode_12() const { return ____transformMode_12; }
	inline int32_t* get_address_of__transformMode_12() { return &____transformMode_12; }
	inline void set__transformMode_12(int32_t value)
	{
		____transformMode_12 = value;
	}

	inline static int32_t get_offset_of__canRead_13() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____canRead_13)); }
	inline bool get__canRead_13() const { return ____canRead_13; }
	inline bool* get_address_of__canRead_13() { return &____canRead_13; }
	inline void set__canRead_13(bool value)
	{
		____canRead_13 = value;
	}

	inline static int32_t get_offset_of__canWrite_14() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____canWrite_14)); }
	inline bool get__canWrite_14() const { return ____canWrite_14; }
	inline bool* get_address_of__canWrite_14() { return &____canWrite_14; }
	inline void set__canWrite_14(bool value)
	{
		____canWrite_14 = value;
	}

	inline static int32_t get_offset_of__finalBlockTransformed_15() { return static_cast<int32_t>(offsetof(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66, ____finalBlockTransformed_15)); }
	inline bool get__finalBlockTransformed_15() const { return ____finalBlockTransformed_15; }
	inline bool* get_address_of__finalBlockTransformed_15() { return &____finalBlockTransformed_15; }
	inline void set__finalBlockTransformed_15(bool value)
	{
		____finalBlockTransformed_15 = value;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// System.Action`1<ZEPETO.World.MatchmakingKeyValue[]>
struct Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D  : public MulticastDelegate_t
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


// System.Security.Cryptography.Rijndael
struct Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// ZEPETO.World.WorldSetting
struct WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String ZEPETO.World.WorldSetting::zepetoApiHost
	String_t* ___zepetoApiHost_4;
	// System.String ZEPETO.World.WorldSetting::multiplayHost
	String_t* ___multiplayHost_5;
	// System.Int32 ZEPETO.World.WorldSetting::multiplayPort
	int32_t ___multiplayPort_6;
	// System.Boolean ZEPETO.World.WorldSetting::isSecure
	bool ___isSecure_7;
	// System.String ZEPETO.World.WorldSetting::gameSystemHost
	String_t* ___gameSystemHost_8;
	// System.String ZEPETO.World.WorldSetting::zepetoStudioHost
	String_t* ___zepetoStudioHost_9;
	// System.String ZEPETO.World.WorldSetting::worldCreatorHost
	String_t* ___worldCreatorHost_10;
	// System.String ZEPETO.World.WorldSetting::frontGatewayProxyApiHost
	String_t* ___frontGatewayProxyApiHost_11;
	// System.String ZEPETO.World.WorldSetting::neloHost
	String_t* ___neloHost_12;
	// System.String ZEPETO.World.WorldSetting::iwpHost
	String_t* ___iwpHost_13;
	// System.String ZEPETO.World.WorldSetting::matchmakeHost
	String_t* ___matchmakeHost_14;
	// System.String ZEPETO.World.WorldSetting::worldServiceHost
	String_t* ___worldServiceHost_15;
	// System.String ZEPETO.World.WorldSetting::worldWebHost
	String_t* ___worldWebHost_16;
	// System.String ZEPETO.World.WorldSetting::zepetoCDNHost
	String_t* ___zepetoCDNHost_17;
	// System.String ZEPETO.World.WorldSetting::zepetoAssetHost
	String_t* ___zepetoAssetHost_18;
	// System.String ZEPETO.World.WorldSetting::zepetoWebHost
	String_t* ___zepetoWebHost_19;
	// System.Boolean ZEPETO.World.WorldSetting::isLocal
	bool ___isLocal_20;
	// System.String ZEPETO.World.WorldSetting::playbaasApiHost
	String_t* ___playbaasApiHost_21;

public:
	inline static int32_t get_offset_of_zepetoApiHost_4() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___zepetoApiHost_4)); }
	inline String_t* get_zepetoApiHost_4() const { return ___zepetoApiHost_4; }
	inline String_t** get_address_of_zepetoApiHost_4() { return &___zepetoApiHost_4; }
	inline void set_zepetoApiHost_4(String_t* value)
	{
		___zepetoApiHost_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoApiHost_4), (void*)value);
	}

	inline static int32_t get_offset_of_multiplayHost_5() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___multiplayHost_5)); }
	inline String_t* get_multiplayHost_5() const { return ___multiplayHost_5; }
	inline String_t** get_address_of_multiplayHost_5() { return &___multiplayHost_5; }
	inline void set_multiplayHost_5(String_t* value)
	{
		___multiplayHost_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiplayHost_5), (void*)value);
	}

	inline static int32_t get_offset_of_multiplayPort_6() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___multiplayPort_6)); }
	inline int32_t get_multiplayPort_6() const { return ___multiplayPort_6; }
	inline int32_t* get_address_of_multiplayPort_6() { return &___multiplayPort_6; }
	inline void set_multiplayPort_6(int32_t value)
	{
		___multiplayPort_6 = value;
	}

	inline static int32_t get_offset_of_isSecure_7() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___isSecure_7)); }
	inline bool get_isSecure_7() const { return ___isSecure_7; }
	inline bool* get_address_of_isSecure_7() { return &___isSecure_7; }
	inline void set_isSecure_7(bool value)
	{
		___isSecure_7 = value;
	}

	inline static int32_t get_offset_of_gameSystemHost_8() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___gameSystemHost_8)); }
	inline String_t* get_gameSystemHost_8() const { return ___gameSystemHost_8; }
	inline String_t** get_address_of_gameSystemHost_8() { return &___gameSystemHost_8; }
	inline void set_gameSystemHost_8(String_t* value)
	{
		___gameSystemHost_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSystemHost_8), (void*)value);
	}

	inline static int32_t get_offset_of_zepetoStudioHost_9() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___zepetoStudioHost_9)); }
	inline String_t* get_zepetoStudioHost_9() const { return ___zepetoStudioHost_9; }
	inline String_t** get_address_of_zepetoStudioHost_9() { return &___zepetoStudioHost_9; }
	inline void set_zepetoStudioHost_9(String_t* value)
	{
		___zepetoStudioHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoStudioHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_worldCreatorHost_10() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___worldCreatorHost_10)); }
	inline String_t* get_worldCreatorHost_10() const { return ___worldCreatorHost_10; }
	inline String_t** get_address_of_worldCreatorHost_10() { return &___worldCreatorHost_10; }
	inline void set_worldCreatorHost_10(String_t* value)
	{
		___worldCreatorHost_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldCreatorHost_10), (void*)value);
	}

	inline static int32_t get_offset_of_frontGatewayProxyApiHost_11() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___frontGatewayProxyApiHost_11)); }
	inline String_t* get_frontGatewayProxyApiHost_11() const { return ___frontGatewayProxyApiHost_11; }
	inline String_t** get_address_of_frontGatewayProxyApiHost_11() { return &___frontGatewayProxyApiHost_11; }
	inline void set_frontGatewayProxyApiHost_11(String_t* value)
	{
		___frontGatewayProxyApiHost_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frontGatewayProxyApiHost_11), (void*)value);
	}

	inline static int32_t get_offset_of_neloHost_12() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___neloHost_12)); }
	inline String_t* get_neloHost_12() const { return ___neloHost_12; }
	inline String_t** get_address_of_neloHost_12() { return &___neloHost_12; }
	inline void set_neloHost_12(String_t* value)
	{
		___neloHost_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neloHost_12), (void*)value);
	}

	inline static int32_t get_offset_of_iwpHost_13() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___iwpHost_13)); }
	inline String_t* get_iwpHost_13() const { return ___iwpHost_13; }
	inline String_t** get_address_of_iwpHost_13() { return &___iwpHost_13; }
	inline void set_iwpHost_13(String_t* value)
	{
		___iwpHost_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iwpHost_13), (void*)value);
	}

	inline static int32_t get_offset_of_matchmakeHost_14() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___matchmakeHost_14)); }
	inline String_t* get_matchmakeHost_14() const { return ___matchmakeHost_14; }
	inline String_t** get_address_of_matchmakeHost_14() { return &___matchmakeHost_14; }
	inline void set_matchmakeHost_14(String_t* value)
	{
		___matchmakeHost_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchmakeHost_14), (void*)value);
	}

	inline static int32_t get_offset_of_worldServiceHost_15() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___worldServiceHost_15)); }
	inline String_t* get_worldServiceHost_15() const { return ___worldServiceHost_15; }
	inline String_t** get_address_of_worldServiceHost_15() { return &___worldServiceHost_15; }
	inline void set_worldServiceHost_15(String_t* value)
	{
		___worldServiceHost_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldServiceHost_15), (void*)value);
	}

	inline static int32_t get_offset_of_worldWebHost_16() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___worldWebHost_16)); }
	inline String_t* get_worldWebHost_16() const { return ___worldWebHost_16; }
	inline String_t** get_address_of_worldWebHost_16() { return &___worldWebHost_16; }
	inline void set_worldWebHost_16(String_t* value)
	{
		___worldWebHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldWebHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_zepetoCDNHost_17() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___zepetoCDNHost_17)); }
	inline String_t* get_zepetoCDNHost_17() const { return ___zepetoCDNHost_17; }
	inline String_t** get_address_of_zepetoCDNHost_17() { return &___zepetoCDNHost_17; }
	inline void set_zepetoCDNHost_17(String_t* value)
	{
		___zepetoCDNHost_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoCDNHost_17), (void*)value);
	}

	inline static int32_t get_offset_of_zepetoAssetHost_18() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___zepetoAssetHost_18)); }
	inline String_t* get_zepetoAssetHost_18() const { return ___zepetoAssetHost_18; }
	inline String_t** get_address_of_zepetoAssetHost_18() { return &___zepetoAssetHost_18; }
	inline void set_zepetoAssetHost_18(String_t* value)
	{
		___zepetoAssetHost_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoAssetHost_18), (void*)value);
	}

	inline static int32_t get_offset_of_zepetoWebHost_19() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___zepetoWebHost_19)); }
	inline String_t* get_zepetoWebHost_19() const { return ___zepetoWebHost_19; }
	inline String_t** get_address_of_zepetoWebHost_19() { return &___zepetoWebHost_19; }
	inline void set_zepetoWebHost_19(String_t* value)
	{
		___zepetoWebHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zepetoWebHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_isLocal_20() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___isLocal_20)); }
	inline bool get_isLocal_20() const { return ___isLocal_20; }
	inline bool* get_address_of_isLocal_20() { return &___isLocal_20; }
	inline void set_isLocal_20(bool value)
	{
		___isLocal_20 = value;
	}

	inline static int32_t get_offset_of_playbaasApiHost_21() { return static_cast<int32_t>(offsetof(WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3, ___playbaasApiHost_21)); }
	inline String_t* get_playbaasApiHost_21() const { return ___playbaasApiHost_21; }
	inline String_t** get_address_of_playbaasApiHost_21() { return &___playbaasApiHost_21; }
	inline void set_playbaasApiHost_21(String_t* value)
	{
		___playbaasApiHost_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbaasApiHost_21), (void*)value);
	}
};


// ZEPETO.World.CustomWorldSetting
struct CustomWorldSetting_t7952F67E30DC2DF258CFB8E2A40ABBEE23FF0292  : public WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3
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


// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E  : public Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2
{
public:

public:
};


// ZEPETO.World.CustomRematchComponent
struct CustomRematchComponent_t0175AF0A387BD31675E95324937BCAA6EAE4446C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue> ZEPETO.World.CustomRematchComponent::matchKeyValues
	List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * ___matchKeyValues_4;

public:
	inline static int32_t get_offset_of_matchKeyValues_4() { return static_cast<int32_t>(offsetof(CustomRematchComponent_t0175AF0A387BD31675E95324937BCAA6EAE4446C, ___matchKeyValues_4)); }
	inline List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * get_matchKeyValues_4() const { return ___matchKeyValues_4; }
	inline List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 ** get_address_of_matchKeyValues_4() { return &___matchKeyValues_4; }
	inline void set_matchKeyValues_4(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * value)
	{
		___matchKeyValues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchKeyValues_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ZEPETO.World.MatchmakingKeyValue[]
struct MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82  m_Items[1];

public:
	inline MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
	}
	inline MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
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


// !0[] System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A_gshared (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088_gshared (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// !0[] System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>::ToArray()
inline MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * __this, const RuntimeMethod* method)
{
	return ((  MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* (*) (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 *, const RuntimeMethod*))List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A_gshared)(__this, method);
}
// System.Void ZEPETO.World.WorldService::RematchWorld(ZEPETO.World.MatchmakingKeyValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldService_RematchWorld_mD57D7B0FB87E5E45F3870FC3698A084577779260 (MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* ___keyValues0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ZEPETO.World.MatchmakingKeyValue>::.ctor()
inline void List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088 (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 *, const RuntimeMethod*))List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void ZEPETO.World.WorldSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldSetting__ctor_m366F63252A1BEF49B1F8CEA33A79646BAA7C07DB (WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String ZEPETO.World.MatchmakingKeyValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MatchmakingKeyValue_ToString_m73D920A0A4E00FA234F3ED0F2E654FC2FB956DE4 (MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ZEPETO.World.MatchmakingKeyValue[]>::Invoke(!0)
inline void Action_1_Invoke_mA8FD42D12B327624CCEBFA6EDE55E72621609A73 (Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * __this, MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C *, MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8 (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650 (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_m690A130C7B6793E8D752DD3017419FFB12A0DBAE (CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void ZEPETO.World.WorldServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m65955610D04A90EAE1E95DE0635279DA259265DB (U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void ZEPETO.World.CustomRematchComponent::Rematch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomRematchComponent_Rematch_m739AA2D6854D64F52BB58EEC2D9782C0E2A83D84 (CustomRematchComponent_t0175AF0A387BD31675E95324937BCAA6EAE4446C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * L_0 = __this->get_matchKeyValues_4();
		NullCheck(L_0);
		MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* L_1;
		L_1 = List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A(L_0, /*hidden argument*/List_1_ToArray_m4368E2F5A28BEE3A4B566CF966AE4437DF49CA0A_RuntimeMethod_var);
		WorldService_RematchWorld_mD57D7B0FB87E5E45F3870FC3698A084577779260(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZEPETO.World.CustomRematchComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomRematchComponent__ctor_m5A648CE093252ED6E800626FCF06F8F6DC80B5B0 (CustomRematchComponent_t0175AF0A387BD31675E95324937BCAA6EAE4446C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 * L_0 = (List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72 *)il2cpp_codegen_object_new(List_1_t07B31D3441119FB6B1CA6272AA2542619B494D72_il2cpp_TypeInfo_var);
		List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088(L_0, /*hidden argument*/List_1__ctor_m2BF83F91B7038AF2CD7A2742AC68348A243FA088_RuntimeMethod_var);
		__this->set_matchKeyValues_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ZEPETO.World.CustomWorldSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomWorldSetting__ctor_mBAC90AA264EEC3DE3F1C5E56EC351A5A29A918C3 (CustomWorldSetting_t7952F67E30DC2DF258CFB8E2A40ABBEE23FF0292 * __this, const RuntimeMethod* method)
{
	{
		WorldSetting__ctor_m366F63252A1BEF49B1F8CEA33A79646BAA7C07DB(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: ZEPETO.World.MatchmakingKeyValue
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_pinvoke(const MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82& unmarshaled, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_0());
	marshaled.___Value_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Value_1());
}
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_pinvoke_back(const MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_pinvoke& marshaled, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	unmarshaled.set_Value_1(il2cpp_codegen_marshal_string_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: ZEPETO.World.MatchmakingKeyValue
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_pinvoke_cleanup(MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
// Conversion methods for marshalling of: ZEPETO.World.MatchmakingKeyValue
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_com(const MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82& unmarshaled, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_0());
	marshaled.___Value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Value_1());
}
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_com_back(const MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_com& marshaled, MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	unmarshaled.set_Value_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: ZEPETO.World.MatchmakingKeyValue
IL2CPP_EXTERN_C void MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshal_com_cleanup(MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
// System.String ZEPETO.World.MatchmakingKeyValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MatchmakingKeyValue_ToString_m73D920A0A4E00FA234F3ED0F2E654FC2FB956DE4 (MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_Key_0();
		String_t* L_1 = __this->get_Value_1();
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* MatchmakingKeyValue_ToString_m73D920A0A4E00FA234F3ED0F2E654FC2FB956DE4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 * _thisAdjusted = reinterpret_cast<MatchmakingKeyValue_tB83312F624C6F078AE1C41BAD0561B1FA584BC82 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MatchmakingKeyValue_ToString_m73D920A0A4E00FA234F3ED0F2E654FC2FB956DE4(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZEPETO.World.WorldService::RematchWorld(ZEPETO.World.MatchmakingKeyValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldService_RematchWorld_mD57D7B0FB87E5E45F3870FC3698A084577779260 (MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* ___keyValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA8FD42D12B327624CCEBFA6EDE55E72621609A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * G_B2_0 = NULL;
	Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var);
		Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * L_0 = ((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->get_RestartWorldFunction_3();
		Action_1_tF7196EC27DE790827D1BE8AD27AF2DC2F8F29F7C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		MatchmakingKeyValueU5BU5D_tC2C5B84124F748EBC59DDFACE62C4B965C0B07E3* L_2 = ___keyValues0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8FD42D12B327624CCEBFA6EDE55E72621609A73(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mA8FD42D12B327624CCEBFA6EDE55E72621609A73_RuntimeMethod_var);
	}

IL_0013:
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
// ZEPETO.World.WorldSetting ZEPETO.World.WorldServiceInternal::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * WorldServiceInternal_get_Active_mE2A3ECBE211771A8C55D2C5432E63C6567BCF48D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var);
		WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * L_0 = ((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->get__active_0();
		return L_0;
	}
}
// System.Void ZEPETO.World.WorldServiceInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldServiceInternal__cctor_mCD2DCBCF11600A47DB0C98B27AFCCD83E44B3662 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__16_0_mE5C49E31E9402FD409DE225B0FA505D38306E522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->set_CustomQueryParams_1((Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * L_0 = ((U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_1 = (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *)il2cpp_codegen_object_new(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__16_0_mE5C49E31E9402FD409DE225B0FA505D38306E522_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->set_CheckIsInternalQueryParamKeyFunc_2(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->set_jwt_5(L_2);
		((WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_StaticFields*)il2cpp_codegen_static_fields_for(WorldServiceInternal_t53EC8F0A658100A6BA328FD7CB4B74803A1D60C8_il2cpp_TypeInfo_var))->set_isZaizai_10((bool)0);
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
// System.Void ZEPETO.World.WorldSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldSetting__ctor_m366F63252A1BEF49B1F8CEA33A79646BAA7C07DB (WorldSetting_t035EB2AE4710160D90DADC9FAD1D3095BA25F6E3 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.String ZEPETO.World.WorldUtils::Decrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WorldUtils_Decrypt_m1C9D6B57EDCE173A2578A9208D3F08BB7B7FF4C6 (String_t* ___encrypt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * V_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		String_t* L_0 = ___encrypt0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_2 = (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E *)il2cpp_codegen_object_new(RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_3, 1);
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_4, 2);
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_5, ((int32_t)128));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_7, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_8 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9;
		L_9 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var);
		String_t* L_10 = ((WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_StaticFields*)il2cpp_codegen_static_fields_for(WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var))->get_KEY_0();
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_13 = ((WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_StaticFields*)il2cpp_codegen_static_fields_for(WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var))->get_KEY_0();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_13);
		NullCheck(L_8);
		RuntimeObject* L_15;
		L_15 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_8, L_11, L_14);
		V_3 = L_15;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_16 = V_2;
		RuntimeObject* L_17 = V_3;
		CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * L_18 = (CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 *)il2cpp_codegen_object_new(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m690A130C7B6793E8D752DD3017419FFB12A0DBAE(L_18, L_16, L_17, 0, /*hidden argument*/NULL);
		V_4 = L_18;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		V_5 = L_20;
		CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * L_21 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_5;
		NullCheck(L_23);
		NullCheck(L_21);
		int32_t L_24;
		L_24 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
		V_6 = L_24;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_25;
		L_25 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_5;
		int32_t L_27 = V_6;
		NullCheck(L_25);
		String_t* L_28;
		L_28 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, 0, L_27);
		V_7 = L_28;
		CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * L_29 = V_4;
		NullCheck(L_29);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Close() */, L_29);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_30 = V_2;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Close() */, L_30);
		String_t* L_31 = V_7;
		V_8 = L_31;
		goto IL_00a0;
	}

IL_00a0:
	{
		String_t* L_32 = V_8;
		return L_32;
	}
}
// System.Void ZEPETO.World.WorldUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldUtils__cctor_mEE01839ADAA5E2469B7AC54CA56F518616271F5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral887B34C8FC9A9400EB782C42C1CBEFDFF840A95A);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_StaticFields*)il2cpp_codegen_static_fields_for(WorldUtils_t9B038BB71025DFACB9ADDFB204AEC2F8802AA36D_il2cpp_TypeInfo_var))->set_KEY_0(_stringLiteral887B34C8FC9A9400EB782C42C1CBEFDFF840A95A);
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
// System.Void ZEPETO.World.WorldServiceInternal/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m39636168E1156C6009AADB433B7116F70DA7CE73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * L_0 = (U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 *)il2cpp_codegen_object_new(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m65955610D04A90EAE1E95DE0635279DA259265DB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ZEPETO.World.WorldServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m65955610D04A90EAE1E95DE0635279DA259265DB (U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZEPETO.World.WorldServiceInternal/<>c::<.cctor>b__16_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__16_0_mE5C49E31E9402FD409DE225B0FA505D38306E522 (U3CU3Ec_t67ABB3661F6D25D456A05A1089B397F65D6902C0 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
