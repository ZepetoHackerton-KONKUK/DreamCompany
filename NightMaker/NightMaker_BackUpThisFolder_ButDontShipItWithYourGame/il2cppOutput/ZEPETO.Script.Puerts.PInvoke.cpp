#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
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
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.InvalidProgramException
struct InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Puerts.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t7B7C26B72C1BA781A99132E3735C2D63977B55FE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Puerts.V8ConstructorCallback
struct V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13;
// Puerts.V8DestructorCallback
struct V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB;
// Puerts.V8FunctionCallback
struct V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral543EE67D4CCB5C4BDC360873C70C5734CA9DE678;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDCC86AE1916666E421E893AD9ACD0B2F4EFC99;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PuertsDLL_EvalChecked_m788C38B7686332A76CA91D8133F3799F865BA1BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PuertsDLL_GetBigIntFromResultCheck_mD0B9CC6A60B05DC8AE983ABF821F5BB9F8D29133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PuertsDLL_GetBigIntFromValueChecked_m49EE97F6509DFCDE8591FCAF122BD84F3B6B4CA7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3AD2D10C24FE541307F0CA0CB099689B17038C92 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Puerts.PuertsDLL
struct PuertsDLL_t10EFE44B8440C0351DDBFFDCD92FA627A8C4EC95  : public RuntimeObject
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Puerts.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t7B7C26B72C1BA781A99132E3735C2D63977B55FE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Puerts.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t7B7C26B72C1BA781A99132E3735C2D63977B55FE, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
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

// Puerts.JsValueType
struct JsValueType_t6DB434FD2A47B50F4C3C31F7FC3EA9F078C5C331 
{
public:
	// System.Int32 Puerts.JsValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsValueType_t6DB434FD2A47B50F4C3C31F7FC3EA9F078C5C331, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidProgramException
struct InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Puerts.V8ConstructorCallback
struct V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13  : public MulticastDelegate_t
{
public:

public:
};


// Puerts.V8DestructorCallback
struct V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB  : public MulticastDelegate_t
{
public:

public:
};


// Puerts.V8FunctionCallback
struct V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared (RuntimeObject * ___d0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Puerts.V8FunctionCallback>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.Void Puerts.PuertsDLL::SetGlobalFunction(System.IntPtr,System.String,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGlobalFunction_m10D6762C107C5FD40DF29E2C9209FA99773ABC01 (intptr_t ___isolate0, String_t* ___name1, intptr_t ___v8FunctionCallback2, int64_t ___data3, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m7B5DFB02078A845C47EDD6B6B27137D5AD1CE8CC (intptr_t ___ptr0, int32_t ___len1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.IntPtr Puerts.PuertsDLL::GetLastExceptionInfo(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetLastExceptionInfo_m20C7572420F092AA6B95CB591ED0BBCE0AB1B0BD (intptr_t ___isolate0, int32_t* ___strlen1, const RuntimeMethod* method);
// System.String Puerts.PuertsDLL::GetStringFromNative(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D (intptr_t ___str0, int32_t ___strlen1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Puerts.V8DestructorCallback>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.Void Puerts.PuertsDLL::SetGeneralDestructor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGeneralDestructor_m1A2D06E799542CB797E130FE226274FDB434FCC9 (intptr_t ___isolate0, intptr_t ___generalDestructor1, const RuntimeMethod* method);
// System.Void System.InvalidProgramException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProgramException__ctor_m0CC7BA9B2A7580DCAF804441EFA83F48FB94D321 (InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr Puerts.PuertsDLL::Eval(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_Eval_m208FC26879D37BAE3D0153D6AD770D6F39561652 (intptr_t ___isolate0, String_t* ___code1, String_t* ___path2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Puerts.V8ConstructorCallback>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.Int32 Puerts.PuertsDLL::RegisterClass(System.IntPtr,System.Int32,System.String,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterClass_m80A7D78C6C31049F867F099206A3AF0F42E40FC4 (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, intptr_t ___constructor3, intptr_t ___destructor4, int64_t ___data5, const RuntimeMethod* method);
// System.Int32 Puerts.PuertsDLL::RegisterStruct(System.IntPtr,System.Int32,System.String,System.IntPtr,System.IntPtr,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterStruct_mBA1D13365A0681B13F5678AAC43882C82BB84B7B (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, intptr_t ___constructor3, intptr_t ___destructor4, int64_t ___data5, int32_t ___size6, const RuntimeMethod* method);
// System.Boolean Puerts.PuertsDLL::RegisterFunction(System.IntPtr,System.Int32,System.String,System.Boolean,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterFunction_mE7E2C5E862B00F115A1242E82DD44D647D2A26D3 (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, intptr_t ___callback4, int64_t ___data5, const RuntimeMethod* method);
// System.Boolean Puerts.PuertsDLL::RegisterProperty(System.IntPtr,System.Int32,System.String,System.Boolean,System.IntPtr,System.Int64,System.IntPtr,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterProperty_m09DB88BEE582B318580CDD1D78AE1E8F60B13A9F (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, intptr_t ___getter4, int64_t ___getterData5, intptr_t ___setter6, int64_t ___setterData7, bool ___dontDelete8, const RuntimeMethod* method);
// System.Void Puerts.PuertsDLL::ReturnNull(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnNull_mAAEDB12652EF5D714CDFBF85F36CA17FFB0B954B (intptr_t ___isolate0, intptr_t ___info1, const RuntimeMethod* method);
// System.Void Puerts.PuertsDLL::__ReturnString(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL___ReturnString_m21B47F9945A283127AFD25CB672D3ADCE32F0B8B (intptr_t ___isolate0, intptr_t ___info1, String_t* ___str2, const RuntimeMethod* method);
// System.IntPtr Puerts.PuertsDLL::GetStringFromValue(System.IntPtr,System.IntPtr,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetStringFromValue_m7F393B9C326F7C08069E733B7CE5BBFFA5423FBC (intptr_t ___isolate0, intptr_t ___value1, int32_t* ___len2, bool ___isByRef3, const RuntimeMethod* method);
// System.Boolean Puerts.PuertsDLL::ValueIsBigInt(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_ValueIsBigInt_mEF0FAD1CE45AB66DC5B6BFDBC70ECC813B336B12 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int64 Puerts.PuertsDLL::GetBigIntFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromValue_mF046C458BB3B317AEF4000E59AC8102CA9BD589F (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method);
// System.Void Puerts.PuertsDLL::ThrowException(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ThrowException_mCD56C6E0E4792C71A069476D9FF2DA302C26A959 (intptr_t ___isolate0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___message1, const RuntimeMethod* method);
// System.Void Puerts.PuertsDLL::PushNullForJSFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushNullForJSFunction_m816CF39262E0A492401A0C38A6DEA1FBF478031F (intptr_t ___function0, const RuntimeMethod* method);
// System.Void Puerts.PuertsDLL::__PushStringForJSFunction(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL___PushStringForJSFunction_m777AB47689D27293CAC8E146D8968C4439C06B12 (intptr_t ___function0, String_t* ___str1, const RuntimeMethod* method);
// System.IntPtr Puerts.PuertsDLL::GetFunctionLastExceptionInfo(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetFunctionLastExceptionInfo_mF0385F95A849FBDD68B6C4857338D59EBA33E697 (intptr_t ___function0, int32_t* ___len1, const RuntimeMethod* method);
// System.IntPtr Puerts.PuertsDLL::GetStringFromResult(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetStringFromResult_m4AA8697C3B36C0CE2620A21C7AE4C4F07A2FB4D2 (intptr_t ___resultInfo0, int32_t* ___len1, const RuntimeMethod* method);
// System.Boolean Puerts.PuertsDLL::ResultIsBigInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_ResultIsBigInt_m7E879C46B6C8DC974FBAE9E501C31266EF56610C (intptr_t ___resultInfo0, const RuntimeMethod* method);
// System.Int64 Puerts.PuertsDLL::GetBigIntFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromResult_mE959D6C9DF536F5B61C1F1200D18B499F3E2F8AD (intptr_t ___resultInfo0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetLibVersion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL CreateJSEngine();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL CreateJSEngineWithExternalEnv(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL DestroyJSEngine(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetGlobalFunction(intptr_t, char*, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetLastExceptionInfo(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL LowMemoryNotification(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetGeneralDestructor(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL Eval(intptr_t, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RegisterClass(intptr_t, int32_t, char*, intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RegisterStruct(intptr_t, int32_t, char*, intptr_t, intptr_t, int64_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RegisterFunction(intptr_t, int32_t, char*, int32_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RegisterProperty(intptr_t, int32_t, char*, int32_t, intptr_t, int64_t, intptr_t, int64_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnClass(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnObject(intptr_t, intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnNumber(intptr_t, intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnString(intptr_t, intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnBigInt(intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnBoolean(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnDate(intptr_t, intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnNull(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnFunction(intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnJSObject(intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetArgumentValue(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetJsValueType(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C double CDECL GetNumberFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C double CDECL GetDateFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetStringFromValue(intptr_t, intptr_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetBooleanFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ValueIsBigInt(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL GetBigIntFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetObjectFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetTypeIdFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetFunctionFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetJSObjectFromValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetNumberToOutValue(intptr_t, intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetDateToOutValue(intptr_t, intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetStringToOutValue(intptr_t, intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetBooleanToOutValue(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetBigIntToOutValue(intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetObjectToOutValue(intptr_t, intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetNullToOutValue(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ThrowException(intptr_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushNullForJSFunction(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushDateForJSFunction(intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushBooleanForJSFunction(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushBigIntForJSFunction(intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushStringForJSFunction(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushNumberForJSFunction(intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushObjectForJSFunction(intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushJSFunctionForJSFunction(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushJSObjectForJSFunction(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL InvokeJSFunction(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetFunctionLastExceptionInfo(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReleaseJSFunction(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReleaseJSObject(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetResultType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C double CDECL GetNumberFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C double CDECL GetDateFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetStringFromResult(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetBooleanFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ResultIsBigInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL GetBigIntFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetObjectFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL GetTypeIdFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetFunctionFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetJSObjectFromResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ResetResult(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL CreateInspector(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL InspectorTick(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL ReturnArrayBuffer(intptr_t, intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL SetArrayBufferToOutValue(intptr_t, intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C void CDECL PushArrayBufferForJSFunction(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetArrayBufferFromValue(intptr_t, intptr_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL GetArrayBufferFromResult(intptr_t, int32_t*);
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
// System.Void Puerts.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mEAB2683228B3261D998E7105AB0761D41722C935 (MonoPInvokeCallbackAttribute_t7B7C26B72C1BA781A99132E3735C2D63977B55FE * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
// System.Int32 Puerts.PuertsDLL::GetLibVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_GetLibVersion_m5495FA269E5B1A104240251BD80998D838751C2C (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetLibVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetLibVersion)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::CreateJSEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_CreateJSEngine_m6F91B11BBE2BD45AB24EEFFA80490103BBDB49CE (const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "CreateJSEngine", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateJSEngine)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::CreateJSEngineWithExternalEnv(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_CreateJSEngineWithExternalEnv_mD79EE717DAFBD9754008CC1D0FB31B92896D975F (intptr_t ___externalRuntime0, intptr_t ___externalContext1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "CreateJSEngineWithExternalEnv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateJSEngineWithExternalEnv)(___externalRuntime0, ___externalContext1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___externalRuntime0, ___externalContext1);
	#endif

	return returnValue;
}
// System.Void Puerts.PuertsDLL::DestroyJSEngine(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_DestroyJSEngine_mF702A5E0D4726C92EE44C63CED9F2C1B8A9C73AA (intptr_t ___isolate0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "DestroyJSEngine", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(DestroyJSEngine)(___isolate0);
	#else
	il2cppPInvokeFunc(___isolate0);
	#endif

}
// System.Void Puerts.PuertsDLL::SetGlobalFunction(System.IntPtr,System.String,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGlobalFunction_m10D6762C107C5FD40DF29E2C9209FA99773ABC01 (intptr_t ___isolate0, String_t* ___name1, intptr_t ___v8FunctionCallback2, int64_t ___data3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetGlobalFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetGlobalFunction)(___isolate0, ____name1_marshaled, ___v8FunctionCallback2, ___data3);
	#else
	il2cppPInvokeFunc(___isolate0, ____name1_marshaled, ___v8FunctionCallback2, ___data3);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void Puerts.PuertsDLL::SetGlobalFunction(System.IntPtr,System.String,Puerts.V8FunctionCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGlobalFunction_m35C523760EED8F5A3A91A6AE3102B53F84218394 (intptr_t ___isolate0, String_t* ___name1, V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * ___v8FunctionCallback2, int64_t ___data3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_0 = ___v8FunctionCallback2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0016;
	}

IL_0010:
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_1 = ___v8FunctionCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = (intptr_t)G_B3_0;
		intptr_t L_3 = ___isolate0;
		String_t* L_4 = ___name1;
		intptr_t L_5 = V_0;
		int64_t L_6 = ___data3;
		PuertsDLL_SetGlobalFunction_m10D6762C107C5FD40DF29E2C9209FA99773ABC01((intptr_t)L_3, L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.String Puerts.PuertsDLL::GetStringFromNative(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D (intptr_t ___str0, int32_t ___strlen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		intptr_t L_0 = ___str0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		intptr_t L_2 = ___str0;
		int32_t L_3 = ___strlen1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAnsi_m7B5DFB02078A845C47EDD6B6B27137D5AD1CE8CC((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = ___strlen1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		intptr_t L_9 = ___str0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_12, L_13);
		return L_14;
	}

IL_003c:
	{
		String_t* L_15 = V_0;
		return L_15;
	}

IL_003e:
	{
		return (String_t*)NULL;
	}
}
// System.IntPtr Puerts.PuertsDLL::GetLastExceptionInfo(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetLastExceptionInfo_m20C7572420F092AA6B95CB591ED0BBCE0AB1B0BD (intptr_t ___isolate0, int32_t* ___strlen1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetLastExceptionInfo", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetLastExceptionInfo)(___isolate0, ___strlen1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___strlen1);
	#endif

	return returnValue;
}
// System.String Puerts.PuertsDLL::GetLastExceptionInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetLastExceptionInfo_m95499924F6CE26774F8F7101E0847D8775367896 (intptr_t ___isolate0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___isolate0;
		intptr_t L_1;
		L_1 = PuertsDLL_GetLastExceptionInfo_m20C7572420F092AA6B95CB591ED0BBCE0AB1B0BD((intptr_t)L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_1;
		intptr_t L_2 = V_1;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Puerts.PuertsDLL::LowMemoryNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_LowMemoryNotification_m4895895DA7C5BF78FC23DAA4F9AA8285E68F25B5 (intptr_t ___isolate0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "LowMemoryNotification", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(LowMemoryNotification)(___isolate0);
	#else
	il2cppPInvokeFunc(___isolate0);
	#endif

}
// System.Void Puerts.PuertsDLL::SetGeneralDestructor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGeneralDestructor_m1A2D06E799542CB797E130FE226274FDB434FCC9 (intptr_t ___isolate0, intptr_t ___generalDestructor1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetGeneralDestructor", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetGeneralDestructor)(___isolate0, ___generalDestructor1);
	#else
	il2cppPInvokeFunc(___isolate0, ___generalDestructor1);
	#endif

}
// System.Void Puerts.PuertsDLL::SetGeneralDestructor(System.IntPtr,Puerts.V8DestructorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetGeneralDestructor_mD65031B82C9EF2B8A68E08156CF2FD5597F70621 (intptr_t ___isolate0, V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * ___generalDestructor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_0 = ___generalDestructor1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0016;
	}

IL_0010:
	{
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_1 = ___generalDestructor1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = (intptr_t)G_B3_0;
		intptr_t L_3 = ___isolate0;
		intptr_t L_4 = V_0;
		PuertsDLL_SetGeneralDestructor_m1A2D06E799542CB797E130FE226274FDB434FCC9((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Puerts.PuertsDLL::Eval(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_Eval_m208FC26879D37BAE3D0153D6AD770D6F39561652 (intptr_t ___isolate0, String_t* ___code1, String_t* ___path2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "Eval", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___code1' to native representation
	char* ____code1_marshaled = NULL;
	____code1_marshaled = il2cpp_codegen_marshal_string(___code1);

	// Marshaling of parameter '___path2' to native representation
	char* ____path2_marshaled = NULL;
	____path2_marshaled = il2cpp_codegen_marshal_string(___path2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Eval)(___isolate0, ____code1_marshaled, ____path2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ____code1_marshaled, ____path2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___code1' native representation
	il2cpp_codegen_marshal_free(____code1_marshaled);
	____code1_marshaled = NULL;

	// Marshaling cleanup of parameter '___path2' native representation
	il2cpp_codegen_marshal_free(____path2_marshaled);
	____path2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::EvalChecked(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_EvalChecked_m788C38B7686332A76CA91D8133F3799F865BA1BC (intptr_t ___isolate0, String_t* ___code1, String_t* ___path2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___code1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814 * L_1 = (InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidProgramException_tB6929930C57D6BA8D5E5D9E96E87FE8D55563814_il2cpp_TypeInfo_var)));
		InvalidProgramException__ctor_m0CC7BA9B2A7580DCAF804441EFA83F48FB94D321(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFDCC86AE1916666E421E893AD9ACD0B2F4EFC99)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PuertsDLL_EvalChecked_m788C38B7686332A76CA91D8133F3799F865BA1BC_RuntimeMethod_var)));
	}

IL_0011:
	{
		intptr_t L_2 = ___isolate0;
		String_t* L_3 = ___code1;
		String_t* L_4 = ___path2;
		intptr_t L_5;
		L_5 = PuertsDLL_Eval_m208FC26879D37BAE3D0153D6AD770D6F39561652((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		return (intptr_t)L_5;
	}
}
// System.Int32 Puerts.PuertsDLL::RegisterClass(System.IntPtr,System.Int32,System.String,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterClass_m80A7D78C6C31049F867F099206A3AF0F42E40FC4 (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, intptr_t ___constructor3, intptr_t ___destructor4, int64_t ___data5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char*, intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(char*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "RegisterClass", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fullName2' to native representation
	char* ____fullName2_marshaled = NULL;
	____fullName2_marshaled = il2cpp_codegen_marshal_string(___fullName2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RegisterClass)(___isolate0, ___BaseTypeId1, ____fullName2_marshaled, ___constructor3, ___destructor4, ___data5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___BaseTypeId1, ____fullName2_marshaled, ___constructor3, ___destructor4, ___data5);
	#endif

	// Marshaling cleanup of parameter '___fullName2' native representation
	il2cpp_codegen_marshal_free(____fullName2_marshaled);
	____fullName2_marshaled = NULL;

	return returnValue;
}
// System.Int32 Puerts.PuertsDLL::RegisterClass(System.IntPtr,System.Int32,System.String,Puerts.V8ConstructorCallback,Puerts.V8DestructorCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterClass_mA8CDA9D09BB91DA0BAA33C1082B577D5FB3E77FF (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * ___constructor3, V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * ___destructor4, int64_t ___data5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * L_0 = ___constructor3;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0016;
	}

IL_0010:
	{
		V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * L_1 = ___constructor3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = (intptr_t)G_B3_0;
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_3 = ___destructor4;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		G_B6_0 = (0);
		goto IL_002f;
	}

IL_0028:
	{
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_4 = ___destructor4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B(L_4, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		G_B6_0 = L_5;
	}

IL_002f:
	{
		V_1 = (intptr_t)G_B6_0;
		intptr_t L_6 = ___isolate0;
		int32_t L_7 = ___BaseTypeId1;
		String_t* L_8 = ___fullName2;
		intptr_t L_9 = V_0;
		intptr_t L_10 = V_1;
		int64_t L_11 = ___data5;
		int32_t L_12;
		L_12 = PuertsDLL_RegisterClass_m80A7D78C6C31049F867F099206A3AF0F42E40FC4((intptr_t)L_6, L_7, L_8, (intptr_t)L_9, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 Puerts.PuertsDLL::RegisterStruct(System.IntPtr,System.Int32,System.String,System.IntPtr,System.IntPtr,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterStruct_mBA1D13365A0681B13F5678AAC43882C82BB84B7B (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, intptr_t ___constructor3, intptr_t ___destructor4, int64_t ___data5, int32_t ___size6, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char*, intptr_t, intptr_t, int64_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(char*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "RegisterStruct", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fullName2' to native representation
	char* ____fullName2_marshaled = NULL;
	____fullName2_marshaled = il2cpp_codegen_marshal_string(___fullName2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RegisterStruct)(___isolate0, ___BaseTypeId1, ____fullName2_marshaled, ___constructor3, ___destructor4, ___data5, ___size6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___BaseTypeId1, ____fullName2_marshaled, ___constructor3, ___destructor4, ___data5, ___size6);
	#endif

	// Marshaling cleanup of parameter '___fullName2' native representation
	il2cpp_codegen_marshal_free(____fullName2_marshaled);
	____fullName2_marshaled = NULL;

	return returnValue;
}
// System.Int32 Puerts.PuertsDLL::RegisterStruct(System.IntPtr,System.Int32,System.String,Puerts.V8ConstructorCallback,Puerts.V8DestructorCallback,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_RegisterStruct_mD6E7C43565535B24E979E73A4A891DF0E183FC26 (intptr_t ___isolate0, int32_t ___BaseTypeId1, String_t* ___fullName2, V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * ___constructor3, V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * ___destructor4, int64_t ___data5, int32_t ___size6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * L_0 = ___constructor3;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0016;
	}

IL_0010:
	{
		V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * L_1 = ___constructor3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13_m86DBCE6872DBA59DC9A2E45681A956D68863D6ED_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = (intptr_t)G_B3_0;
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_3 = ___destructor4;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		G_B6_0 = (0);
		goto IL_002f;
	}

IL_0028:
	{
		V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * L_4 = ___destructor4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B(L_4, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB_mA461369438EB09F3CB35B7E3A1F5A9E2ECE4846B_RuntimeMethod_var);
		G_B6_0 = L_5;
	}

IL_002f:
	{
		V_1 = (intptr_t)G_B6_0;
		intptr_t L_6 = ___isolate0;
		int32_t L_7 = ___BaseTypeId1;
		String_t* L_8 = ___fullName2;
		intptr_t L_9 = V_0;
		intptr_t L_10 = V_1;
		int64_t L_11 = ___data5;
		int32_t L_12 = ___size6;
		int32_t L_13;
		L_13 = PuertsDLL_RegisterStruct_mBA1D13365A0681B13F5678AAC43882C82BB84B7B((intptr_t)L_6, L_7, L_8, (intptr_t)L_9, (intptr_t)L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean Puerts.PuertsDLL::RegisterFunction(System.IntPtr,System.Int32,System.String,System.Boolean,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterFunction_mE7E2C5E862B00F115A1242E82DD44D647D2A26D3 (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, intptr_t ___callback4, int64_t ___data5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char*, int32_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(char*) + 4 + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "RegisterFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name2' to native representation
	char* ____name2_marshaled = NULL;
	____name2_marshaled = il2cpp_codegen_marshal_string(___name2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RegisterFunction)(___isolate0, ___classID1, ____name2_marshaled, static_cast<int32_t>(___isStatic3), ___callback4, ___data5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___classID1, ____name2_marshaled, static_cast<int32_t>(___isStatic3), ___callback4, ___data5);
	#endif

	// Marshaling cleanup of parameter '___name2' native representation
	il2cpp_codegen_marshal_free(____name2_marshaled);
	____name2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Puerts.PuertsDLL::RegisterFunction(System.IntPtr,System.Int32,System.String,System.Boolean,Puerts.V8FunctionCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterFunction_m805DB92DD096420D31FFC12E97B0469A84E8AF5F (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * ___callback4, int64_t ___data5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_0 = ___callback4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0018;
	}

IL_0011:
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_1 = ___callback4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0018:
	{
		V_0 = (intptr_t)G_B3_0;
		intptr_t L_3 = ___isolate0;
		int32_t L_4 = ___classID1;
		String_t* L_5 = ___name2;
		bool L_6 = ___isStatic3;
		intptr_t L_7 = V_0;
		int64_t L_8 = ___data5;
		bool L_9;
		L_9 = PuertsDLL_RegisterFunction_mE7E2C5E862B00F115A1242E82DD44D647D2A26D3((intptr_t)L_3, L_4, L_5, L_6, (intptr_t)L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Puerts.PuertsDLL::RegisterProperty(System.IntPtr,System.Int32,System.String,System.Boolean,System.IntPtr,System.Int64,System.IntPtr,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterProperty_m09DB88BEE582B318580CDD1D78AE1E8F60B13A9F (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, intptr_t ___getter4, int64_t ___getterData5, intptr_t ___setter6, int64_t ___setterData7, bool ___dontDelete8, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char*, int32_t, intptr_t, int64_t, intptr_t, int64_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(char*) + 4 + sizeof(intptr_t) + sizeof(int64_t) + sizeof(intptr_t) + sizeof(int64_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "RegisterProperty", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name2' to native representation
	char* ____name2_marshaled = NULL;
	____name2_marshaled = il2cpp_codegen_marshal_string(___name2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RegisterProperty)(___isolate0, ___classID1, ____name2_marshaled, static_cast<int32_t>(___isStatic3), ___getter4, ___getterData5, ___setter6, ___setterData7, static_cast<int32_t>(___dontDelete8));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___classID1, ____name2_marshaled, static_cast<int32_t>(___isStatic3), ___getter4, ___getterData5, ___setter6, ___setterData7, static_cast<int32_t>(___dontDelete8));
	#endif

	// Marshaling cleanup of parameter '___name2' native representation
	il2cpp_codegen_marshal_free(____name2_marshaled);
	____name2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Puerts.PuertsDLL::RegisterProperty(System.IntPtr,System.Int32,System.String,System.Boolean,Puerts.V8FunctionCallback,System.Int64,Puerts.V8FunctionCallback,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_RegisterProperty_m05F8CACE3458C895EA41094F3E73DF520B14BA47 (intptr_t ___isolate0, int32_t ___classID1, String_t* ___name2, bool ___isStatic3, V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * ___getter4, int64_t ___getterData5, V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * ___setter6, int64_t ___setterData7, bool ___dontDelete8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_0 = ___getter4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (0);
		goto IL_0018;
	}

IL_0011:
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_1 = ___getter4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0018:
	{
		V_0 = (intptr_t)G_B3_0;
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_3 = ___setter6;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		G_B6_0 = (0);
		goto IL_0031;
	}

IL_002a:
	{
		V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * L_4 = ___setter6;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D(L_4, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisV8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29_m7ED1D094DBC138BAF4FCFEDFF62ECEAC576E7C7D_RuntimeMethod_var);
		G_B6_0 = L_5;
	}

IL_0031:
	{
		V_1 = (intptr_t)G_B6_0;
		intptr_t L_6 = ___isolate0;
		int32_t L_7 = ___classID1;
		String_t* L_8 = ___name2;
		bool L_9 = ___isStatic3;
		intptr_t L_10 = V_0;
		int64_t L_11 = ___getterData5;
		intptr_t L_12 = V_1;
		int64_t L_13 = ___setterData7;
		bool L_14 = ___dontDelete8;
		bool L_15;
		L_15 = PuertsDLL_RegisterProperty_m09DB88BEE582B318580CDD1D78AE1E8F60B13A9F((intptr_t)L_6, L_7, L_8, L_9, (intptr_t)L_10, L_11, (intptr_t)L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Puerts.PuertsDLL::ReturnClass(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnClass_m0CDE6343440EB7311007A783FF473407A6CC17DE (intptr_t ___isolate0, intptr_t ___info1, int32_t ___classID2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnClass", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnClass)(___isolate0, ___info1, ___classID2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___classID2);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnObject(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnObject_mF439ED5FACF5B48BEB7AC67ACC7C775E0BE282E4 (intptr_t ___isolate0, intptr_t ___info1, int32_t ___classID2, intptr_t ___self3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnObject)(___isolate0, ___info1, ___classID2, ___self3);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___classID2, ___self3);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnNumber(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnNumber_m81AFB5FCAB0DBC4B29916082FEC930C337419CAD (intptr_t ___isolate0, intptr_t ___info1, double ___number2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnNumber", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnNumber)(___isolate0, ___info1, ___number2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___number2);
	#endif

}
// System.Void Puerts.PuertsDLL::__ReturnString(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL___ReturnString_m21B47F9945A283127AFD25CB672D3ADCE32F0B8B (intptr_t ___isolate0, intptr_t ___info1, String_t* ___str2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnString", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str2' to native representation
	char* ____str2_marshaled = NULL;
	____str2_marshaled = il2cpp_codegen_marshal_string(___str2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnString)(___isolate0, ___info1, ____str2_marshaled);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ____str2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str2' native representation
	il2cpp_codegen_marshal_free(____str2_marshaled);
	____str2_marshaled = NULL;

}
// System.Void Puerts.PuertsDLL::ReturnString(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnString_m103788E491F15DC2D0A3745656C96D0916D03CD4 (intptr_t ___isolate0, intptr_t ___info1, String_t* ___str2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		intptr_t L_1 = ___isolate0;
		intptr_t L_2 = ___info1;
		PuertsDLL_ReturnNull_mAAEDB12652EF5D714CDFBF85F36CA17FFB0B954B((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		goto IL_001a;
	}

IL_0012:
	{
		intptr_t L_3 = ___isolate0;
		intptr_t L_4 = ___info1;
		String_t* L_5 = ___str2;
		PuertsDLL___ReturnString_m21B47F9945A283127AFD25CB672D3ADCE32F0B8B((intptr_t)L_3, (intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Puerts.PuertsDLL::ReturnBigInt(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnBigInt_m234E2F7D84D318741A4742B9556887B9E980FF15 (intptr_t ___isolate0, intptr_t ___info1, int64_t ___number2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnBigInt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnBigInt)(___isolate0, ___info1, ___number2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___number2);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnBoolean(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnBoolean_m5B7F767321FDC3A5EBC2DEC18A610B7F5B8305EB (intptr_t ___isolate0, intptr_t ___info1, bool ___b2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnBoolean", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnBoolean)(___isolate0, ___info1, static_cast<int32_t>(___b2));
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, static_cast<int32_t>(___b2));
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnDate(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnDate_mD322F75E18612612F815355C04A4C6E4A37FD6D2 (intptr_t ___isolate0, intptr_t ___info1, double ___date2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnDate", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnDate)(___isolate0, ___info1, ___date2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___date2);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnNull(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnNull_mAAEDB12652EF5D714CDFBF85F36CA17FFB0B954B (intptr_t ___isolate0, intptr_t ___info1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnNull", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnNull)(___isolate0, ___info1);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnFunction(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnFunction_mE8B631005F61359D9ADB796DE8AFA8B9D240077D (intptr_t ___isolate0, intptr_t ___info1, intptr_t ___JSFunction2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnFunction)(___isolate0, ___info1, ___JSFunction2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___JSFunction2);
	#endif

}
// System.Void Puerts.PuertsDLL::ReturnJSObject(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnJSObject_m07A5EC9889F5116656C266D5C3F5FAA6043A8C3A (intptr_t ___isolate0, intptr_t ___info1, intptr_t ___JSObject2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnJSObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnJSObject)(___isolate0, ___info1, ___JSObject2);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ___JSObject2);
	#endif

}
// System.IntPtr Puerts.PuertsDLL::GetArgumentValue(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetArgumentValue_m7A64A7B74246C7BF9CE72055C21145D00E38E2A8 (intptr_t ___info0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetArgumentValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetArgumentValue)(___info0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___info0, ___index1);
	#endif

	return returnValue;
}
// Puerts.JsValueType Puerts.PuertsDLL::GetJsValueType(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_GetJsValueType_mE7BC03F0B79E7ADF9EE4AEC5DBC7DF62E7F908B3 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetJsValueType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetJsValueType)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.Double Puerts.PuertsDLL::GetNumberFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PuertsDLL_GetNumberFromValue_m390661A6ECD86275536A61619661DEF7CE078CBA (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetNumberFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(GetNumberFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	double returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.Double Puerts.PuertsDLL::GetDateFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PuertsDLL_GetDateFromValue_m6C40B20286038005563E56B2242E4867B0F5A822 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetDateFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(GetDateFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	double returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetStringFromValue(System.IntPtr,System.IntPtr,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetStringFromValue_m7F393B9C326F7C08069E733B7CE5BBFFA5423FBC (intptr_t ___isolate0, intptr_t ___value1, int32_t* ___len2, bool ___isByRef3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetStringFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetStringFromValue)(___isolate0, ___value1, ___len2, static_cast<int32_t>(___isByRef3));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, ___len2, static_cast<int32_t>(___isByRef3));
	#endif

	return returnValue;
}
// System.String Puerts.PuertsDLL::GetStringFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetStringFromValue_m2C11D22FBF39381BD4F007E82CD81FD322AB2545 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___isolate0;
		intptr_t L_1 = ___value1;
		bool L_2 = ___isByRef2;
		intptr_t L_3;
		L_3 = PuertsDLL_GetStringFromValue_m7F393B9C326F7C08069E733B7CE5BBFFA5423FBC((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), L_2, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_3;
		intptr_t L_4 = V_1;
		int32_t L_5 = V_0;
		String_t* L_6;
		L_6 = PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D((intptr_t)L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Puerts.PuertsDLL::GetBooleanFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_GetBooleanFromValue_m32895373A63B108174FA5EC4C176F3558E964FF6 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetBooleanFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBooleanFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Puerts.PuertsDLL::ValueIsBigInt(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_ValueIsBigInt_mEF0FAD1CE45AB66DC5B6BFDBC70ECC813B336B12 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ValueIsBigInt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ValueIsBigInt)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int64 Puerts.PuertsDLL::GetBigIntFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromValue_mF046C458BB3B317AEF4000E59AC8102CA9BD589F (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetBigIntFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(GetBigIntFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	int64_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.Int64 Puerts.PuertsDLL::GetBigIntFromValueChecked(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromValueChecked_m49EE97F6509DFCDE8591FCAF122BD84F3B6B4CA7 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___isolate0;
		intptr_t L_1 = ___value1;
		bool L_2 = ___isByRef2;
		bool L_3;
		L_3 = PuertsDLL_ValueIsBigInt_mEF0FAD1CE45AB66DC5B6BFDBC70ECC813B336B12((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral543EE67D4CCB5C4BDC360873C70C5734CA9DE678)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PuertsDLL_GetBigIntFromValueChecked_m49EE97F6509DFCDE8591FCAF122BD84F3B6B4CA7_RuntimeMethod_var)));
	}

IL_0018:
	{
		intptr_t L_5 = ___isolate0;
		intptr_t L_6 = ___value1;
		bool L_7 = ___isByRef2;
		int64_t L_8;
		L_8 = PuertsDLL_GetBigIntFromValue_mF046C458BB3B317AEF4000E59AC8102CA9BD589F((intptr_t)L_5, (intptr_t)L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.IntPtr Puerts.PuertsDLL::GetObjectFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetObjectFromValue_m5BDC8EF537CB242D0A72512E35DAEF77F03843B2 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetObjectFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetObjectFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.Int32 Puerts.PuertsDLL::GetTypeIdFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_GetTypeIdFromValue_m7E4C7E7D6FEFFB0FEA64D70932793F70799C5291 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetTypeIdFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTypeIdFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetFunctionFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetFunctionFromValue_m78B1B84FD611A98216C388C5E48828FABA3DDC25 (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetFunctionFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetFunctionFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetJSObjectFromValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetJSObjectFromValue_m4B944E4D99AEFFD36B598DB5DBD89E1D4A133BCD (intptr_t ___isolate0, intptr_t ___value1, bool ___isByRef2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetJSObjectFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetJSObjectFromValue)(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___isByRef2));
	#endif

	return returnValue;
}
// System.Void Puerts.PuertsDLL::SetNumberToOutValue(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetNumberToOutValue_m343455B22EA184A60AF18E5E4F49E49E0BA12589 (intptr_t ___isolate0, intptr_t ___value1, double ___number2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetNumberToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetNumberToOutValue)(___isolate0, ___value1, ___number2);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ___number2);
	#endif

}
// System.Void Puerts.PuertsDLL::SetDateToOutValue(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetDateToOutValue_m27A0458A7540D71BD419A351B128B74B21AA7E2C (intptr_t ___isolate0, intptr_t ___value1, double ___date2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetDateToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetDateToOutValue)(___isolate0, ___value1, ___date2);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ___date2);
	#endif

}
// System.Void Puerts.PuertsDLL::SetStringToOutValue(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetStringToOutValue_mB74A30E39948C95EA461F780A13C5C81D7ED58EB (intptr_t ___isolate0, intptr_t ___value1, String_t* ___str2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetStringToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str2' to native representation
	char* ____str2_marshaled = NULL;
	____str2_marshaled = il2cpp_codegen_marshal_string(___str2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetStringToOutValue)(___isolate0, ___value1, ____str2_marshaled);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ____str2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str2' native representation
	il2cpp_codegen_marshal_free(____str2_marshaled);
	____str2_marshaled = NULL;

}
// System.Void Puerts.PuertsDLL::SetBooleanToOutValue(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetBooleanToOutValue_mC13B80145D672524EEE8F44773A5FDD6132EE0D5 (intptr_t ___isolate0, intptr_t ___value1, bool ___b2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetBooleanToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBooleanToOutValue)(___isolate0, ___value1, static_cast<int32_t>(___b2));
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, static_cast<int32_t>(___b2));
	#endif

}
// System.Void Puerts.PuertsDLL::SetBigIntToOutValue(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetBigIntToOutValue_mAD039DE85B9013D4FE550687E45915A1B72B8C45 (intptr_t ___isolate0, intptr_t ___value1, int64_t ___bigInt2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetBigIntToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBigIntToOutValue)(___isolate0, ___value1, ___bigInt2);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ___bigInt2);
	#endif

}
// System.Void Puerts.PuertsDLL::SetObjectToOutValue(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetObjectToOutValue_m8C01EF151F2283475B1D2F36E36FBBC65F5735EB (intptr_t ___isolate0, intptr_t ___value1, int32_t ___classId2, intptr_t ___ptr3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetObjectToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetObjectToOutValue)(___isolate0, ___value1, ___classId2, ___ptr3);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ___classId2, ___ptr3);
	#endif

}
// System.Void Puerts.PuertsDLL::SetNullToOutValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetNullToOutValue_m258C91BA516BCFAA17D627906F4943EB2567DD6B (intptr_t ___isolate0, intptr_t ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetNullToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetNullToOutValue)(___isolate0, ___value1);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1);
	#endif

}
// System.Void Puerts.PuertsDLL::ThrowException(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ThrowException_mCD56C6E0E4792C71A069476D9FF2DA302C26A959 (intptr_t ___isolate0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___message1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ThrowException", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___message1' to native representation
	uint8_t* ____message1_marshaled = NULL;
	if (___message1 != NULL)
	{
		____message1_marshaled = reinterpret_cast<uint8_t*>((___message1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ThrowException)(___isolate0, ____message1_marshaled);
	#else
	il2cppPInvokeFunc(___isolate0, ____message1_marshaled);
	#endif

}
// System.Void Puerts.PuertsDLL::ThrowException(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ThrowException_mFCB30CD10AD7A6ACD4A6140C298ECF50290C9DFC (intptr_t ___isolate0, String_t* ___message1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		intptr_t L_3 = ___isolate0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		PuertsDLL_ThrowException_mCD56C6E0E4792C71A069476D9FF2DA302C26A959((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Puerts.PuertsDLL::PushNullForJSFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushNullForJSFunction_m816CF39262E0A492401A0C38A6DEA1FBF478031F (intptr_t ___function0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushNullForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushNullForJSFunction)(___function0);
	#else
	il2cppPInvokeFunc(___function0);
	#endif

}
// System.Void Puerts.PuertsDLL::PushDateForJSFunction(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushDateForJSFunction_m931FF65618EC318D3663E6462AA4A7963F18CF91 (intptr_t ___function0, double ___dateValue1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushDateForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushDateForJSFunction)(___function0, ___dateValue1);
	#else
	il2cppPInvokeFunc(___function0, ___dateValue1);
	#endif

}
// System.Void Puerts.PuertsDLL::PushBooleanForJSFunction(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushBooleanForJSFunction_mA60002C3E725F839B44E8D2213FDF1826034FEE0 (intptr_t ___function0, bool ___b1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushBooleanForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushBooleanForJSFunction)(___function0, static_cast<int32_t>(___b1));
	#else
	il2cppPInvokeFunc(___function0, static_cast<int32_t>(___b1));
	#endif

}
// System.Void Puerts.PuertsDLL::PushBigIntForJSFunction(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushBigIntForJSFunction_m5325233BFC665121B1AAD58DD6762C5B48A728CA (intptr_t ___function0, int64_t ___l1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushBigIntForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushBigIntForJSFunction)(___function0, ___l1);
	#else
	il2cppPInvokeFunc(___function0, ___l1);
	#endif

}
// System.Void Puerts.PuertsDLL::__PushStringForJSFunction(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL___PushStringForJSFunction_m777AB47689D27293CAC8E146D8968C4439C06B12 (intptr_t ___function0, String_t* ___str1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushStringForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushStringForJSFunction)(___function0, ____str1_marshaled);
	#else
	il2cppPInvokeFunc(___function0, ____str1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

}
// System.Void Puerts.PuertsDLL::PushStringForJSFunction(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushStringForJSFunction_mE95A045532E5E1C29386EF3DD05A4A505EC4396F (intptr_t ___function0, String_t* ___str1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = ___function0;
		PuertsDLL_PushNullForJSFunction_m816CF39262E0A492401A0C38A6DEA1FBF478031F((intptr_t)L_1, /*hidden argument*/NULL);
		goto IL_0018;
	}

IL_0011:
	{
		intptr_t L_2 = ___function0;
		String_t* L_3 = ___str1;
		PuertsDLL___PushStringForJSFunction_m777AB47689D27293CAC8E146D8968C4439C06B12((intptr_t)L_2, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Puerts.PuertsDLL::PushNumberForJSFunction(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushNumberForJSFunction_m8BE6D35A837CEFFD14FF18B28CE58323E6DD913E (intptr_t ___function0, double ___d1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushNumberForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushNumberForJSFunction)(___function0, ___d1);
	#else
	il2cppPInvokeFunc(___function0, ___d1);
	#endif

}
// System.Void Puerts.PuertsDLL::PushObjectForJSFunction(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushObjectForJSFunction_mFF492F81FF55AE32EE8E48A41831B770FC7C8728 (intptr_t ___function0, int32_t ___classId1, intptr_t ___objectId2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushObjectForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushObjectForJSFunction)(___function0, ___classId1, ___objectId2);
	#else
	il2cppPInvokeFunc(___function0, ___classId1, ___objectId2);
	#endif

}
// System.Void Puerts.PuertsDLL::PushJSFunctionForJSFunction(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushJSFunctionForJSFunction_mCD03C6B490CB4B94FC4D58EDDAE045A76CD45185 (intptr_t ___function0, intptr_t ___JSFunction1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushJSFunctionForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushJSFunctionForJSFunction)(___function0, ___JSFunction1);
	#else
	il2cppPInvokeFunc(___function0, ___JSFunction1);
	#endif

}
// System.Void Puerts.PuertsDLL::PushJSObjectForJSFunction(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushJSObjectForJSFunction_mA5AC5655CE6BADF9742172B9203795EC7F0A5320 (intptr_t ___function0, intptr_t ___JSObject1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushJSObjectForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushJSObjectForJSFunction)(___function0, ___JSObject1);
	#else
	il2cppPInvokeFunc(___function0, ___JSObject1);
	#endif

}
// System.IntPtr Puerts.PuertsDLL::InvokeJSFunction(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_InvokeJSFunction_m9067606BB53EB7F063905A69DAF777A92A9D8841 (intptr_t ___function0, bool ___hasResult1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "InvokeJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(InvokeJSFunction)(___function0, static_cast<int32_t>(___hasResult1));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___function0, static_cast<int32_t>(___hasResult1));
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetFunctionLastExceptionInfo(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetFunctionLastExceptionInfo_mF0385F95A849FBDD68B6C4857338D59EBA33E697 (intptr_t ___function0, int32_t* ___len1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetFunctionLastExceptionInfo", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetFunctionLastExceptionInfo)(___function0, ___len1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___function0, ___len1);
	#endif

	return returnValue;
}
// System.Void Puerts.PuertsDLL::ReleaseJSFunction(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReleaseJSFunction_m29C26646B8D91F271CE0F671334DE3E9AA460B90 (intptr_t ___isolate0, intptr_t ___function1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReleaseJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReleaseJSFunction)(___isolate0, ___function1);
	#else
	il2cppPInvokeFunc(___isolate0, ___function1);
	#endif

}
// System.Void Puerts.PuertsDLL::ReleaseJSObject(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReleaseJSObject_m1A5D0932A425646AEFF0472E3C09EAF28FD97F84 (intptr_t ___isolate0, intptr_t ___obj1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReleaseJSObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReleaseJSObject)(___isolate0, ___obj1);
	#else
	il2cppPInvokeFunc(___isolate0, ___obj1);
	#endif

}
// System.String Puerts.PuertsDLL::GetFunctionLastExceptionInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetFunctionLastExceptionInfo_mAFD4728A23748D0115CC903C71E4AFBE178BC32B (intptr_t ___function0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___function0;
		intptr_t L_1;
		L_1 = PuertsDLL_GetFunctionLastExceptionInfo_mF0385F95A849FBDD68B6C4857338D59EBA33E697((intptr_t)L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_1;
		intptr_t L_2 = V_1;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Puerts.JsValueType Puerts.PuertsDLL::GetResultType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_GetResultType_m61BD6D4EB6B435FA9EDC2F2F0A178E6ACA9105A5 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetResultType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetResultType)(___resultInfo0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.Double Puerts.PuertsDLL::GetNumberFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PuertsDLL_GetNumberFromResult_m2BF27E402F835CB9B87D33FE4FD994D5CE7B53FF (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetNumberFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(GetNumberFromResult)(___resultInfo0);
	#else
	double returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.Double Puerts.PuertsDLL::GetDateFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PuertsDLL_GetDateFromResult_m4F28BD8952B24F98E7AB85FDD26F13ECFA7578F5 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetDateFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(GetDateFromResult)(___resultInfo0);
	#else
	double returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetStringFromResult(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetStringFromResult_m4AA8697C3B36C0CE2620A21C7AE4C4F07A2FB4D2 (intptr_t ___resultInfo0, int32_t* ___len1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetStringFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetStringFromResult)(___resultInfo0, ___len1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___resultInfo0, ___len1);
	#endif

	return returnValue;
}
// System.String Puerts.PuertsDLL::GetStringFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuertsDLL_GetStringFromResult_m248AA9EBDAAEBCD7BBFFC88C26588AAE706F3C83 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___resultInfo0;
		intptr_t L_1;
		L_1 = PuertsDLL_GetStringFromResult_m4AA8697C3B36C0CE2620A21C7AE4C4F07A2FB4D2((intptr_t)L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_1;
		intptr_t L_2 = V_1;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = PuertsDLL_GetStringFromNative_mB7ABD02D921A8420A0652D18CEE3C468D2E5D44D((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Puerts.PuertsDLL::GetBooleanFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_GetBooleanFromResult_mCA02F4AE38A995E24A945FA75AE2323150AE1085 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetBooleanFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBooleanFromResult)(___resultInfo0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Puerts.PuertsDLL::ResultIsBigInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_ResultIsBigInt_m7E879C46B6C8DC974FBAE9E501C31266EF56610C (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ResultIsBigInt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ResultIsBigInt)(___resultInfo0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int64 Puerts.PuertsDLL::GetBigIntFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromResult_mE959D6C9DF536F5B61C1F1200D18B499F3E2F8AD (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetBigIntFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(GetBigIntFromResult)(___resultInfo0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.Int64 Puerts.PuertsDLL::GetBigIntFromResultCheck(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PuertsDLL_GetBigIntFromResultCheck_mD0B9CC6A60B05DC8AE983ABF821F5BB9F8D29133 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultInfo0;
		bool L_1;
		L_1 = PuertsDLL_ResultIsBigInt_m7E879C46B6C8DC974FBAE9E501C31266EF56610C((intptr_t)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral543EE67D4CCB5C4BDC360873C70C5734CA9DE678)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PuertsDLL_GetBigIntFromResultCheck_mD0B9CC6A60B05DC8AE983ABF821F5BB9F8D29133_RuntimeMethod_var)));
	}

IL_0016:
	{
		intptr_t L_3 = ___resultInfo0;
		int64_t L_4;
		L_4 = PuertsDLL_GetBigIntFromResult_mE959D6C9DF536F5B61C1F1200D18B499F3E2F8AD((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IntPtr Puerts.PuertsDLL::GetObjectFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetObjectFromResult_mDC9E59468A86BFD85E3AFD6316D8A6B747FFBC3C (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetObjectFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetObjectFromResult)(___resultInfo0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.Int32 Puerts.PuertsDLL::GetTypeIdFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuertsDLL_GetTypeIdFromResult_m27CDB8C503A2C3729D6D513068B0E25A5AF3E103 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetTypeIdFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTypeIdFromResult)(___resultInfo0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetFunctionFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetFunctionFromResult_m1BDA375BF2951E262556EB11346E83E3F6938C76 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetFunctionFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetFunctionFromResult)(___resultInfo0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetJSObjectFromResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetJSObjectFromResult_m9BBE57FC020326C9802B3AEA775531903A090A57 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetJSObjectFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetJSObjectFromResult)(___resultInfo0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___resultInfo0);
	#endif

	return returnValue;
}
// System.Void Puerts.PuertsDLL::ResetResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ResetResult_m50776B3ADF025B784A7ABACA9BC6DE39655676D4 (intptr_t ___resultInfo0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ResetResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ResetResult)(___resultInfo0);
	#else
	il2cppPInvokeFunc(___resultInfo0);
	#endif

}
// System.Void Puerts.PuertsDLL::CreateInspector(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_CreateInspector_mF8CB9107E94D1CA85EAE268509E6FBD00EBC9D9F (intptr_t ___isolate0, int32_t ___port1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "CreateInspector", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(CreateInspector)(___isolate0, ___port1);
	#else
	il2cppPInvokeFunc(___isolate0, ___port1);
	#endif

}
// System.Boolean Puerts.PuertsDLL::InspectorTick(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuertsDLL_InspectorTick_m1BDF64D36703988637F2BE571B1CACD59C3E78E3 (intptr_t ___isolate0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "InspectorTick", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(InspectorTick)(___isolate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___isolate0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Puerts.PuertsDLL::ReturnArrayBuffer(System.IntPtr,System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_ReturnArrayBuffer_mBE8BDA28E1F60B9699FB6BD81919446A70F3D4AA (intptr_t ___isolate0, intptr_t ___info1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes2, int32_t ___Length3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "ReturnArrayBuffer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes2' to native representation
	uint8_t* ____bytes2_marshaled = NULL;
	if (___bytes2 != NULL)
	{
		____bytes2_marshaled = reinterpret_cast<uint8_t*>((___bytes2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReturnArrayBuffer)(___isolate0, ___info1, ____bytes2_marshaled, ___Length3);
	#else
	il2cppPInvokeFunc(___isolate0, ___info1, ____bytes2_marshaled, ___Length3);
	#endif

}
// System.Void Puerts.PuertsDLL::SetArrayBufferToOutValue(System.IntPtr,System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_SetArrayBufferToOutValue_mC0C8194CE8527CAD975B7FC2DCB225FFB5C0E11D (intptr_t ___isolate0, intptr_t ___value1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes2, int32_t ___length3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "SetArrayBufferToOutValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes2' to native representation
	uint8_t* ____bytes2_marshaled = NULL;
	if (___bytes2 != NULL)
	{
		____bytes2_marshaled = reinterpret_cast<uint8_t*>((___bytes2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetArrayBufferToOutValue)(___isolate0, ___value1, ____bytes2_marshaled, ___length3);
	#else
	il2cppPInvokeFunc(___isolate0, ___value1, ____bytes2_marshaled, ___length3);
	#endif

}
// System.Void Puerts.PuertsDLL::PushArrayBufferForJSFunction(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuertsDLL_PushArrayBufferForJSFunction_m431D1AE5180144F995096AE8EE786B1BBBD0F9D5 (intptr_t ___function0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "PushArrayBufferForJSFunction", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	reinterpret_cast<PInvokeFunc>(PushArrayBufferForJSFunction)(___function0, ____bytes1_marshaled, ___length2);
	#else
	il2cppPInvokeFunc(___function0, ____bytes1_marshaled, ___length2);
	#endif

}
// System.IntPtr Puerts.PuertsDLL::GetArrayBufferFromValue(System.IntPtr,System.IntPtr,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetArrayBufferFromValue_m4E02F7E3BD45799D0F7D9D1E071976CDDD76E169 (intptr_t ___isolate0, intptr_t ___value1, int32_t* ___length2, bool ___isOut3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetArrayBufferFromValue", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetArrayBufferFromValue)(___isolate0, ___value1, ___length2, static_cast<int32_t>(___isOut3));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___value1, ___length2, static_cast<int32_t>(___isOut3));
	#endif

	return returnValue;
}
// System.IntPtr Puerts.PuertsDLL::GetArrayBufferFromResult(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PuertsDLL_GetArrayBufferFromResult_m264393BD62736D5618C186DB4ADD5A857B3CB2C2 (intptr_t ___function0, int32_t* ___length1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_puerts_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("puerts"), "GetArrayBufferFromResult", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_puerts_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetArrayBufferFromResult)(___function0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___function0, ___length1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * __this, intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(intptr_t, intptr_t, int32_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___isolate0, ___info1, ___paramLen2, ___data3);

	return returnValue;
}
// System.Void Puerts.V8ConstructorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8ConstructorCallback__ctor_m7FB09E74FBD10BCBAAFB6362830C8A5A52757ABD (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Puerts.V8ConstructorCallback::Invoke(System.IntPtr,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t V8ConstructorCallback_Invoke_m48C4135B25F2F735C00093DABF8338389D05437D (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * __this, intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___isolate0, ___info1, ___paramLen2, ___data3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___isolate0, ___info1, ___paramLen2, ___data3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___isolate0, ___info1, ___paramLen2, ___data3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___isolate0, ___info1, ___paramLen2, ___data3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isolate0, ___info1, ___paramLen2, ___data3);
					else
						result = VirtFuncInvoker4< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isolate0, ___info1, ___paramLen2, ___data3);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___isolate0, ___info1, ___paramLen2, ___data3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Puerts.V8ConstructorCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* V8ConstructorCallback_BeginInvoke_m10CAED4505E1517DFEC0658C18C35A289619544B (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * __this, intptr_t ___isolate0, intptr_t ___info1, int32_t ___paramLen2, int64_t ___data3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___isolate0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___info1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___paramLen2);
	__d_args[3] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___data3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Puerts.V8ConstructorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t V8ConstructorCallback_EndInvoke_m5DB301B87E5741069C37D07182C3315A4F1C0E9B (V8ConstructorCallback_tB3712C45426B1753613A9C98FB8135FEBA4F2D13 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * __this, intptr_t ___self0, int64_t ___data1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___self0, ___data1);

}
// System.Void Puerts.V8DestructorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8DestructorCallback__ctor_mD8EB1988C3FA6476144782A20B480EF34287CB59 (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Puerts.V8DestructorCallback::Invoke(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8DestructorCallback_Invoke_m954D95FC8F02386951A20D2B841FA4F677623543 (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * __this, intptr_t ___self0, int64_t ___data1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___self0, ___data1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, ___data1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, int64_t >::Invoke(targetMethod, targetThis, ___self0, ___data1);
					else
						GenericVirtActionInvoker2< intptr_t, int64_t >::Invoke(targetMethod, targetThis, ___self0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___self0, ___data1);
					else
						VirtActionInvoker2< intptr_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___self0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, ___data1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Puerts.V8DestructorCallback::BeginInvoke(System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* V8DestructorCallback_BeginInvoke_m47EF83A593FC33BCB32D0B579CE3D8F3581BB195 (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * __this, intptr_t ___self0, int64_t ___data1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___self0);
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___data1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Puerts.V8DestructorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8DestructorCallback_EndInvoke_mD2D43486D62222244AA316FD12076A7F03255C62 (V8DestructorCallback_tC2068E10227C291CD53ABE310F085BE02FAF72BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * __this, intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t, int32_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___isolate0, ___info1, ___self2, ___paramLen3, ___data4);

}
// System.Void Puerts.V8FunctionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8FunctionCallback__ctor_mE058740995B563E1F14588EDAEC0DE19B2FA34FD (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Puerts.V8FunctionCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8FunctionCallback_Invoke_m1220EA9D6EE8F3462933DEEB60E5688E6A42644F (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * __this, intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isolate0, ___info1, ___self2, ___paramLen3, ___data4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4, targetMethod);
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
						GenericInterfaceActionInvoker5< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4);
					else
						GenericVirtActionInvoker5< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4);
					else
						VirtActionInvoker5< intptr_t, intptr_t, intptr_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, int32_t, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isolate0, ___info1, ___self2, ___paramLen3, ___data4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Puerts.V8FunctionCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* V8FunctionCallback_BeginInvoke_m734F8DDEF215B5A36815B0EA6918E42417CDFF24 (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * __this, intptr_t ___isolate0, intptr_t ___info1, intptr_t ___self2, int32_t ___paramLen3, int64_t ___data4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___isolate0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___info1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___self2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___paramLen3);
	__d_args[4] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___data4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Puerts.V8FunctionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V8FunctionCallback_EndInvoke_m70DFD7367C3F3626D46C7C1D6C05B8868CD616A9 (V8FunctionCallback_t0E0D0490C15A30C1401F8C6193E5FA7FFDC8FD29 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
