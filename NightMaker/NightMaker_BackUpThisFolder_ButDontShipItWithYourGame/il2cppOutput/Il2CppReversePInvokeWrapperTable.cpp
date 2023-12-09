#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B ;
struct Guid_t ;
struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 ;
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 ;
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA ;
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D ;
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void CDECL ReversePInvokeWrapper_ApplicationExtension_F_OpenURL_mB8A692CD1D199C8B503E5C0667AED5309CC44818(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6);
extern "C" void CDECL ReversePInvokeWrapper_ForbiddenTypeExtension__ForbiddenCallback_m67F03B86F0AB0BA1364E7D2ED7DDB32784B7C771(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ForbiddenTypeExtension__ForbiddenConstructor_mFBBC101032A5B80852B08A4BD624320B70AE008C(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_GameObjectContextExtension_IsDestroyed_m230B4590CBF08F89DACCD6CC9B39F30BFD13B91A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_GetComponentsExtension_ContextFunctionWrapper_mEDE58627298D262E4834A7AA21B8FB509AC81C90(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_GetComponentsExtension_TryGetScriptComponentWrapper_mA2EF72B1E0B6E900BB694FB2B99ABE8A43955DE3(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_InputExtension_G_mousePosition_mECAB039BFE7C0A7B47A40B33B72B362588943BEA(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_LayerMappingExtension_LayerToName_m681FD0D1CBE5C76B611B37704FD8CD6F67B55D88(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_LayerMappingExtension_NameToLayer_m75E04D9EAD6AF7E6F4612D7DE757F59F8AFFBE86(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void CDECL ReversePInvokeWrapper_ObjectExtension_Destroy_m5220AD799A3D572513ED7B975AC7327B6495DCAE(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ObjectExtension_DestroyImmediate_m09EB4EF6C95CAEE892AA71148B940DD713ADA836(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ObjectExtension_DontDestroyOnLoad_mBBD584F13AB2D7160E41D556F9B47B16C75501B1(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ObjectExtension_FindScriptObjectOfType_m5E37E03391800CA3D3E8401216E67250A9E86E0D(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ObjectExtension_FindScriptObjectsOfType_mB8DB8973E834D06C50A824C5B09EEC113863695F(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_DeleteAll_m082947912215FB53790EAE75AAA05CA2DE158515(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_DeleteKey_m2D9F58DFC09ACD46EF8386391453D3B92D4F915F(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_GetFloat_mA9447AC218098B90FE4CFF28BE2DA50827149453(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_GetInt_m1EB74EA26DF8EC7250812811B4530F8FFC5C6AD0(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_GetString_m3BE1645B30650DFF6DB492AF3F05ED2F56144A75(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_HasKey_m76EF0219AD57B4E3A32115ECD71DDF2EACE70C7F(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_Save_m0F59D99EB8626E817C3C12D2C471FA4D91F48D05(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_SetFloat_mD17E70EC7F2B956F234E66450C328A45E2D64D04(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_SetInt_mC8F17E08DEA3A8D9D2A17AE65E26428AB3825FB0(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_PlayerPrefsExtension_SetString_m170F0829210BF9F78BAA6F9C1ABA387E69DF0BFB(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramlen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_FindObjectsOfTypeAll_m3E6C0577FD337E0F1BC70F315FC85B4E3C799405(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_GetBuiltinResource_m36755F4D27C1D72E54E054F55B8B42C1C2265E22(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_Load_mB29AD07F0950779E6D83C95F2FBCB401E7A4C467(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_LoadAll_m4292ABBBC80BBC5CF05ADDC912CE77887871BEE2(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_LoadAsync_mAACF3E6E3D17C9D6A35F2F1B809D0688E7C388BC(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ResourcesExtension_F_UnloadUnusedAssets_mD239F5B2F3522A1C156CE0C493FCF916B31B7219(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ScreenOrientationExtension_G_orientation_m0E14E3B33A5EA4F8189D660BE56209E1547BE914(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ScreenOrientationExtension_S_orientation_mC80E7E07CBD95390CBB3BFACCEDC0708C540C66A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_SocialServiceExtension_F_OpenPopupDirectMessage_m2A2F8DE760B186E9E9C1E4DEF6B8025D1A57D94B(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_StaticCallbacks_ConstructorWrap_m9226C506073D3645EDAC7BAAF4E3AA9F87A27C48(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_StaticCallbacks_GeneralDestructor_mABF1F15D206E02F7319DC54E8645A5DD1BB506BB(intptr_t ___self0, int64_t ___data1);
extern "C" void CDECL ReversePInvokeWrapper_StaticCallbacks_JsEnvCallbackWrap_mD4454D3D2402B72185B61CC2718C6459F7708C1A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_StaticCallbacks_ReturnTrue_m77CBDDC7D0886BA79F473A23B0A4111A78F7CA9D(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_Constructor_mB1F65336AF1EC6D25642E90B981C4D3E0DF9CCCA(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Comparer_mC349A52DE6ACDE9DE14750503B92C6703A36580C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Count_mAE5A04B36E773CD4DA0D8D2C9862DFF59A9D4CE7(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Keys_mF2A7ED09A2E1EDE75B16E67F0BD164218E9DD984(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Values_m27F6570CB5B738E3D42641BBD249D5B5B7018A22(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_GetItem_mDF0C4977388A22ED292621F17634D4EA63B67D9E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Add_mE28E692E33E3BBA1CC2E1C7DE2A0A6E04D2615E7(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Clear_mFC7D6FD5E2A96B33B9C39DEC00D2A737157CF385(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_ContainsKey_m36518FD302E9BA9B639207B3C81995ECF7F1656B(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_ContainsValue_m5E9713B101975C329BAD396CDB1EA70498B3AA92(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_GetEnumerator_m94193AC2524FF98E30225D10A89D69BA41F6FC27(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_GetObjectData_m36778EE6ED1E981E0B648231CAE0A9C32BB5E1D8(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_OnDeserialization_mC074E98F8232F23B9D441818AF392118E778314B(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Remove_mB8E79173BE252E17E78EB1E991D92590AD993C5E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_TryGetValue_mE5C7389FA18CD697404A4CD8BDBF21AF856F6E46(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_SetItem_mBA6BD72E6CD72789CD90A869352B3200EC93C95A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_CompareTag_m1947B34317612934CC6B3228C4C96BFD81E98C4A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_CompareTagInComponent_mD61765C47D8E028C79F51679E257D5A5A7747E01(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_CompareTagInZepetoScriptBehaviour_m54D138FAAA713B108AF994AAC38F1F945B26B369(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_FindGameObjectWithTag_m9614D4A75DE6DAD397A8DE5A5636C0A58BB932AC(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_FindGameObjectsWithTag_mDF0D3E04B96B97E8BE2F9B812B7F6F37E7566695(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_FindWithTag_mD9A84F57FFC2FBE9E0BF9C961A84805BB09B0811(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___len3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_G_tag_mAE71BDDD1E05161E70CAAE827AAF4F4555051858(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_TagMappingExtension_S_tag_m060A84D8E4C20C3F64164E426DCA1998676C730C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_Constructor_mD3B60E01B373C3500C616516F4F31A415F4CA88F(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_AddListener_m231726E9B1CE5D6485517A3BF569596E3E8492DF(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_Invoke_mE7FDE5F5CBF1F22A0789F0C74A4DFD9F6A92D561(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_RemoveListener_mCBE2EF6AE44161377085C05C37DE3A85763AA9B9(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C(void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245(void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E(void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C(void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_Constructor_mC3E8373261A381D94E2BB5141AC15296B6F17552(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_G_currencies_m5258C3A11A0C7563508691EEE1B789570BB3BA5C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_S_currencies_mE1345AD17B5960CB523A148A4A932F403C4CE636(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_Constructor_m3416E2519DF4EC360469A96D867970E5C3A37F09(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_G_currencyId_m669182E6C2E6BC672051EA362FB3BD0EF8D15129(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_G_quantity_m3F246817A6BAB03933F3D31B926E91EDDE3BC5A6(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_S_currencyId_mCC56BC825772733CAC56340C4F46A1C1EF2FB06E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_S_quantity_mFB6FEE76926BDAF38C1EC29B720676DCA841A17E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_Constructor_mEFF2A4EAB857FC8A76F1467BBC18584E527A8D06(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_G_currency_m6B25DD10FBFB506BF32304100198A5689B312920(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_S_currency_mEEDDDCB6FBD2715604679310E0B2D76C5C16BB69(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyBaseResponse_Wrap_Constructor_mE2B0A0266670DE73D0044025B522C87F74E98EB9(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyBaseResponse_Wrap_G_ErrorCode_mDC530DD20E5ACEF1F1DC7216DE0310ABCD7700EC(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_Constructor_m918EAFE810EDE79CECA7A288E7BB3B3FB1187FA9(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetOfficialCurrencyBalanceAsync_mFEBEE0E2DA65D48A210C38552EF1B7136E2AAB1C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetUserCurrencyBalanceAsync_m5F76E8977B7B7EB3C260FA804A6E4956960CDA10(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetUserCurrencyBalancesAsync_m08C30B69672D0405DEAC2437CF18A270D49B7783(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryRequest_Wrap_G_responseData_m675A7FC347A305ED0D65A135B2689B4CAE13A389(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryRequest_Wrap_S_responseData_m724B7DCDD78EEA914FFA51318921502CF771AA75(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_Constructor_m8135DDA692D97BBEA36624212F8EDBCBBBB8BCE8(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_G_isExist_m368B7D4EE39C91FBCC8F381966613D91F65F7CEB(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_S_isExist_mF5E0C9530A563F65C98AAFB7C979465BDBC5EBD9(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryBaseResponse_Wrap_Constructor_m32DBB0526E43EDA23E167CB4915063BA8998700D(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryBaseResponse_Wrap_G_ErrorCode_m7C118E1A6564A2060A570F0867F2CAE39440AD8C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_Constructor_mF45EBE08A7FEFE4026BE4BF040F0F25AB4B1FAFE(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_G_products_m4A64DA81F053AF8A0CF3531D96B6A2479F1046E5(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_S_products_m7CBB2B5E08417EB9007C158E40E9A07968D7B114(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_Constructor_m934B6E59C56E431D2C9B735C4FF36E14A1CEA066(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_createdAt_m4F9CDE37E61573FA85C896175B890D05A6EDB607(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_productId_m766EA56A7ED10FEDA699D4036204EE314AE103D7(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_quantity_m019FBDD618ED15DD64A48CC5AAFE16FAE922212A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_updatedAt_m0E34BD53C66F0D1027CA5E4BC291BF003D16B1FF(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_createdAt_m2140496B303D9FAF9102F515F134CDBD1F74A85A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_productId_mC1511D3094CF4F95533040EF7F896F4C732A8044(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_quantity_mF0B1BDB02F45438FAA05F79A78D2CC47911EBA94(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_updatedAt_m791D946EA626D8D40C7C149CFC8020B69675343F(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_Constructor_m0FDF23138BB17688D03612E2F0CD7536CC2292A4(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_G_product_m2D332C388FA9383F608EC739D71A81751FA3F292(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_S_product_mA7933347DC6B2359D4FDB8009106ED81D0778F3A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_Constructor_mC40AC932610EBADDC68AC7B80BFBF7B6C9E5B0A5(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_GetAsync_mBBACEFA81D384886D59329E2F7B9142C5BDCE39E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_GetListAsync_mEBE43BCAF5EAD69D162801CA74BE3D43E65FDF3C(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_HasAsync_mA425848EF147AAEE00CBF7DB5F73FDE94A2C2C54(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceListResponse__Wrap_G_responseData_m5042BECC8BE0ED495196888434E6CC17B3FBE551(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceListResponse__Wrap_S_responseData_m6DC3315B8447992CA22DF526364C0EB686FE98D6(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceResponse__Wrap_G_responseData_mC537FF47145036C895B5C6BB4C75E5292C531D62(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceResponse__Wrap_S_responseData_m1D56E82A033E0488129B3F59F07C3E620325B8ED(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryListResponse__Wrap_G_responseData_m05A6FD132D2C22EF811E1AB5CF6644243F2DEFCB(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryListResponse__Wrap_S_responseData_mBD7621EFF95D192E4CD772E8CC33A54367961463(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryResponse__Wrap_G_responseData_m88E7EEADAAA39015D321CB34A3C22B21DE9EED8E(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryResponse__Wrap_S_responseData_m6E617AF1FEA5B16747E3721F4C0C583A66C7334A(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_OfficialCurrencyBalanceRequest_Wrap_G_responseData_m085B9A0D4314A5A56967CDC69A9A098FF056E504(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZEPETO_Product_OfficialCurrencyBalanceRequest_Wrap_S_responseData_m7D9C6DC8AEB4694650CA2D327C361CC5BDA0E899(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___selfPtr2, int32_t ___paramLen3, int64_t ___data4);
extern "C" intptr_t CDECL ReversePInvokeWrapper_ZepetoScriptObjectProxy_Constructor_mCA69B5A110CB3B4A89E21609CD7BA1453105EB1A(intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3);
extern "C" void CDECL ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_GetInput_mBE26A7C52A4EB6794E5119640C037843C46B1810(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_SetOutput_m8DCD78239ED10FC79EB49BD0AF24B23DB869ACAA(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_StartCoroutine_mC0064AD9E4E8132C7CB4E16E5FDE935ECDF751D8(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);
extern "C" void CDECL ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_StopCoroutine_m376218355874ECB52EBCA26E8A7B713C8C16EFE0(intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[131] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ApplicationExtension_F_OpenURL_mB8A692CD1D199C8B503E5C0667AED5309CC44818),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ForbiddenTypeExtension__ForbiddenCallback_m67F03B86F0AB0BA1364E7D2ED7DDB32784B7C771),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ForbiddenTypeExtension__ForbiddenConstructor_mFBBC101032A5B80852B08A4BD624320B70AE008C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_GameObjectContextExtension_IsDestroyed_m230B4590CBF08F89DACCD6CC9B39F30BFD13B91A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_GetComponentsExtension_ContextFunctionWrapper_mEDE58627298D262E4834A7AA21B8FB509AC81C90),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_GetComponentsExtension_TryGetScriptComponentWrapper_mA2EF72B1E0B6E900BB694FB2B99ABE8A43955DE3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_InputExtension_G_mousePosition_mECAB039BFE7C0A7B47A40B33B72B362588943BEA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LayerMappingExtension_LayerToName_m681FD0D1CBE5C76B611B37704FD8CD6F67B55D88),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LayerMappingExtension_NameToLayer_m75E04D9EAD6AF7E6F4612D7DE757F59F8AFFBE86),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectExtension_Destroy_m5220AD799A3D572513ED7B975AC7327B6495DCAE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectExtension_DestroyImmediate_m09EB4EF6C95CAEE892AA71148B940DD713ADA836),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectExtension_DontDestroyOnLoad_mBBD584F13AB2D7160E41D556F9B47B16C75501B1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectExtension_FindScriptObjectOfType_m5E37E03391800CA3D3E8401216E67250A9E86E0D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectExtension_FindScriptObjectsOfType_mB8DB8973E834D06C50A824C5B09EEC113863695F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_DeleteAll_m082947912215FB53790EAE75AAA05CA2DE158515),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_DeleteKey_m2D9F58DFC09ACD46EF8386391453D3B92D4F915F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_GetFloat_mA9447AC218098B90FE4CFF28BE2DA50827149453),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_GetInt_m1EB74EA26DF8EC7250812811B4530F8FFC5C6AD0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_GetString_m3BE1645B30650DFF6DB492AF3F05ED2F56144A75),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_HasKey_m76EF0219AD57B4E3A32115ECD71DDF2EACE70C7F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_Save_m0F59D99EB8626E817C3C12D2C471FA4D91F48D05),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_SetFloat_mD17E70EC7F2B956F234E66450C328A45E2D64D04),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_SetInt_mC8F17E08DEA3A8D9D2A17AE65E26428AB3825FB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlayerPrefsExtension_SetString_m170F0829210BF9F78BAA6F9C1ABA387E69DF0BFB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_FindObjectsOfTypeAll_m3E6C0577FD337E0F1BC70F315FC85B4E3C799405),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_GetBuiltinResource_m36755F4D27C1D72E54E054F55B8B42C1C2265E22),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_Load_mB29AD07F0950779E6D83C95F2FBCB401E7A4C467),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_LoadAll_m4292ABBBC80BBC5CF05ADDC912CE77887871BEE2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_LoadAsync_mAACF3E6E3D17C9D6A35F2F1B809D0688E7C388BC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ResourcesExtension_F_UnloadUnusedAssets_mD239F5B2F3522A1C156CE0C493FCF916B31B7219),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ScreenOrientationExtension_G_orientation_m0E14E3B33A5EA4F8189D660BE56209E1547BE914),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ScreenOrientationExtension_S_orientation_mC80E7E07CBD95390CBB3BFACCEDC0708C540C66A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SocialServiceExtension_F_OpenPopupDirectMessage_m2A2F8DE760B186E9E9C1E4DEF6B8025D1A57D94B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StaticCallbacks_ConstructorWrap_m9226C506073D3645EDAC7BAAF4E3AA9F87A27C48),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StaticCallbacks_GeneralDestructor_mABF1F15D206E02F7319DC54E8645A5DD1BB506BB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StaticCallbacks_JsEnvCallbackWrap_mD4454D3D2402B72185B61CC2718C6459F7708C1A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StaticCallbacks_ReturnTrue_m77CBDDC7D0886BA79F473A23B0A4111A78F7CA9D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_Constructor_mB1F65336AF1EC6D25642E90B981C4D3E0DF9CCCA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Comparer_mC349A52DE6ACDE9DE14750503B92C6703A36580C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Count_mAE5A04B36E773CD4DA0D8D2C9862DFF59A9D4CE7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Keys_mF2A7ED09A2E1EDE75B16E67F0BD164218E9DD984),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_G_Values_m27F6570CB5B738E3D42641BBD249D5B5B7018A22),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_GetItem_mDF0C4977388A22ED292621F17634D4EA63B67D9E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Add_mE28E692E33E3BBA1CC2E1C7DE2A0A6E04D2615E7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Clear_mFC7D6FD5E2A96B33B9C39DEC00D2A737157CF385),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_ContainsKey_m36518FD302E9BA9B639207B3C81995ECF7F1656B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_ContainsValue_m5E9713B101975C329BAD396CDB1EA70498B3AA92),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_GetEnumerator_m94193AC2524FF98E30225D10A89D69BA41F6FC27),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_GetObjectData_m36778EE6ED1E981E0B648231CAE0A9C32BB5E1D8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_OnDeserialization_mC074E98F8232F23B9D441818AF392118E778314B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_Remove_mB8E79173BE252E17E78EB1E991D92590AD993C5E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_M_TryGetValue_mE5C7389FA18CD697404A4CD8BDBF21AF856F6E46),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_System_Collections_Generic_Dictionary_2_System_String_System_Int64__Wrap_SetItem_mBA6BD72E6CD72789CD90A869352B3200EC93C95A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_CompareTag_m1947B34317612934CC6B3228C4C96BFD81E98C4A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_CompareTagInComponent_mD61765C47D8E028C79F51679E257D5A5A7747E01),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_CompareTagInZepetoScriptBehaviour_m54D138FAAA713B108AF994AAC38F1F945B26B369),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_FindGameObjectWithTag_m9614D4A75DE6DAD397A8DE5A5636C0A58BB932AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_FindGameObjectsWithTag_mDF0D3E04B96B97E8BE2F9B812B7F6F37E7566695),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_FindWithTag_mD9A84F57FFC2FBE9E0BF9C961A84805BB09B0811),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_G_tag_mAE71BDDD1E05161E70CAAE827AAF4F4555051858),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TagMappingExtension_S_tag_m060A84D8E4C20C3F64164E426DCA1998676C730C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_Constructor_mD3B60E01B373C3500C616516F4F31A415F4CA88F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_AddListener_m231726E9B1CE5D6485517A3BF569596E3E8492DF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_Invoke_mE7FDE5F5CBF1F22A0789F0C74A4DFD9F6A92D561),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityEngine_Events_UnityEvent_Wrap_M_RemoveListener_mCBE2EF6AE44161377085C05C37DE3A85763AA9B9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_Constructor_mC3E8373261A381D94E2BB5141AC15296B6F17552),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_G_currencies_m5258C3A11A0C7563508691EEE1B789570BB3BA5C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceListResponse_Wrap_S_currencies_mE1345AD17B5960CB523A148A4A932F403C4CE636),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_Constructor_m3416E2519DF4EC360469A96D867970E5C3A37F09),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_G_currencyId_m669182E6C2E6BC672051EA362FB3BD0EF8D15129),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_G_quantity_m3F246817A6BAB03933F3D31B926E91EDDE3BC5A6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_S_currencyId_mCC56BC825772733CAC56340C4F46A1C1EF2FB06E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceRecord_Wrap_S_quantity_mFB6FEE76926BDAF38C1EC29B720676DCA841A17E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_Constructor_mEFF2A4EAB857FC8A76F1467BBC18584E527A8D06),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_G_currency_m6B25DD10FBFB506BF32304100198A5689B312920),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_BalanceResponse_Wrap_S_currency_mEEDDDCB6FBD2715604679310E0B2D76C5C16BB69),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyBaseResponse_Wrap_Constructor_mE2B0A0266670DE73D0044025B522C87F74E98EB9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyBaseResponse_Wrap_G_ErrorCode_mDC530DD20E5ACEF1F1DC7216DE0310ABCD7700EC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_Constructor_m918EAFE810EDE79CECA7A288E7BB3B3FB1187FA9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetOfficialCurrencyBalanceAsync_mFEBEE0E2DA65D48A210C38552EF1B7136E2AAB1C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetUserCurrencyBalanceAsync_m5F76E8977B7B7EB3C260FA804A6E4956960CDA10),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Currency_CurrencyService_Wrap_F_GetUserCurrencyBalancesAsync_m08C30B69672D0405DEAC2437CF18A270D49B7783),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryRequest_Wrap_G_responseData_m675A7FC347A305ED0D65A135B2689B4CAE13A389),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryRequest_Wrap_S_responseData_m724B7DCDD78EEA914FFA51318921502CF771AA75),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_Constructor_m8135DDA692D97BBEA36624212F8EDBCBBBB8BCE8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_G_isExist_m368B7D4EE39C91FBCC8F381966613D91F65F7CEB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_CheckInventoryResponse_Wrap_S_isExist_mF5E0C9530A563F65C98AAFB7C979465BDBC5EBD9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryBaseResponse_Wrap_Constructor_m32DBB0526E43EDA23E167CB4915063BA8998700D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryBaseResponse_Wrap_G_ErrorCode_m7C118E1A6564A2060A570F0867F2CAE39440AD8C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_Constructor_mF45EBE08A7FEFE4026BE4BF040F0F25AB4B1FAFE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_G_products_m4A64DA81F053AF8A0CF3531D96B6A2479F1046E5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryListResponse_Wrap_S_products_m7CBB2B5E08417EB9007C158E40E9A07968D7B114),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_Constructor_m934B6E59C56E431D2C9B735C4FF36E14A1CEA066),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_createdAt_m4F9CDE37E61573FA85C896175B890D05A6EDB607),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_productId_m766EA56A7ED10FEDA699D4036204EE314AE103D7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_quantity_m019FBDD618ED15DD64A48CC5AAFE16FAE922212A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_G_updatedAt_m0E34BD53C66F0D1027CA5E4BC291BF003D16B1FF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_createdAt_m2140496B303D9FAF9102F515F134CDBD1F74A85A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_productId_mC1511D3094CF4F95533040EF7F896F4C732A8044),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_quantity_mF0B1BDB02F45438FAA05F79A78D2CC47911EBA94),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryRecord_Wrap_S_updatedAt_m791D946EA626D8D40C7C149CFC8020B69675343F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_Constructor_m0FDF23138BB17688D03612E2F0CD7536CC2292A4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_G_product_m2D332C388FA9383F608EC739D71A81751FA3F292),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryResponse_Wrap_S_product_mA7933347DC6B2359D4FDB8009106ED81D0778F3A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_Constructor_mC40AC932610EBADDC68AC7B80BFBF7B6C9E5B0A5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_GetAsync_mBBACEFA81D384886D59329E2F7B9142C5BDCE39E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_GetListAsync_mEBE43BCAF5EAD69D162801CA74BE3D43E65FDF3C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Inventory_InventoryService_Wrap_F_HasAsync_mA425848EF147AAEE00CBF7DB5F73FDE94A2C2C54),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceListResponse__Wrap_G_responseData_m5042BECC8BE0ED495196888434E6CC17B3FBE551),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceListResponse__Wrap_S_responseData_m6DC3315B8447992CA22DF526364C0EB686FE98D6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceResponse__Wrap_G_responseData_mC537FF47145036C895B5C6BB4C75E5292C531D62),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Currency_BalanceResponse__Wrap_S_responseData_m1D56E82A033E0488129B3F59F07C3E620325B8ED),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryListResponse__Wrap_G_responseData_m05A6FD132D2C22EF811E1AB5CF6644243F2DEFCB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryListResponse__Wrap_S_responseData_mBD7621EFF95D192E4CD772E8CC33A54367961463),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryResponse__Wrap_G_responseData_m88E7EEADAAA39015D321CB34A3C22B21DE9EED8E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_BaseRequest_1_ZEPETO_Inventory_InventoryResponse__Wrap_S_responseData_m6E617AF1FEA5B16747E3721F4C0C583A66C7334A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_OfficialCurrencyBalanceRequest_Wrap_G_responseData_m085B9A0D4314A5A56967CDC69A9A098FF056E504),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZEPETO_Product_OfficialCurrencyBalanceRequest_Wrap_S_responseData_m7D9C6DC8AEB4694650CA2D327C361CC5BDA0E899),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZepetoScriptObjectProxy_Constructor_mCA69B5A110CB3B4A89E21609CD7BA1453105EB1A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_GetInput_mBE26A7C52A4EB6794E5119640C037843C46B1810),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_SetOutput_m8DCD78239ED10FC79EB49BD0AF24B23DB869ACAA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_StartCoroutine_mC0064AD9E4E8132C7CB4E16E5FDE935ECDF751D8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ZepetoScriptObjectProxy_M_StopCoroutine_m376218355874ECB52EBCA26E8A7B713C8C16EFE0),
};
