#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct IntPtr_t;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileFunctionPointer_TisTryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_m24AC0F77E9E5A8C61B911FBAF3DC753E0B1FB4DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C  : public RuntimeObject
{
};
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C  : public RuntimeObject
{
};
struct SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C 
{
	void* ____buffer;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 
{
	int64_t ___f0;
	int64_t ___f1;
	int64_t ___f2;
	int64_t ___f3;
	int64_t ___f4;
	int64_t ___f5;
	int64_t ___f6;
	int64_t ___f7;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	intptr_t ____ptr;
};
struct FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C 
{
	intptr_t ____ptr;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___length;
	int32_t ___capacity;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___length;
	int32_t ___capacity;
};
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	intptr_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___length;
	int32_t ___capacity;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	bool ___m_disposed;
	intptr_t ___m_jobject;
};
struct Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D 
{
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f0;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f1;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f2;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f3;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f4;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f5;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f6;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f7;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	void* ___Ptr;
	int32_t ___Length;
	int32_t ___unused;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C 
{
	void** ___Ptr;
	int32_t ___length;
	int32_t ___unused;
	int32_t ___capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___obsolete_length;
	int32_t ___obsolete_capacity;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE 
{
	intptr_t ___function;
	intptr_t ___state;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 
{
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f0;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f1;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f2;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f3;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f4;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f5;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f6;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f7;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Long1024_tEE887C506947419DC829213E6C7483D80AF5659F 
{
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f0;
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f1;
};
struct TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA  : public MulticastDelegate_t
{
};
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Invalid;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___None;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Temp;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___TempJob;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Persistent;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___AudioKernel;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields
{
	SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C ___Ref;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CD9715357F39EAC82170472C6E0A5A35A7B32EC_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, uint8_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33208B512916F822D42035418EED42C1E0A87A7_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, int32_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIntPtr_t_m4746B8D8BE01D6BCCC3661145BF6B65637281058_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, intptr_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mAC31AE07C9B1F7F46CC164C774C0CF11EEEE3516_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m77E5AA753BC6EB6D8C8F68DC9653217EEB06ABB8_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD349445BFB361D33B3DBA4080A0DD1C4DCFC1A95_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m19F7A1665A096A9F7E8897858E2C1A7F40A02D8A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, void* ___1_pointer, int32_t ___2_sizeOf, int32_t ___3_alignOf, int32_t ___4_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m2436A8F36CBABD7FF2C312473C14CFB743FEB5FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m7AA07C52425017B2CD0DD79B5F2457A8F9276513_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mACBBF0A12B6E8C1D2CC34F1AA39A8ADEFE4050D5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m37655EFA0EA97DBB151F2B98F0191F6F3F4C8FE4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mFBEE56272190167DA72B1D46690CB6BE915D1AD4_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mD835C8E7E0DCA3F2AB89081CC5816750084D1A82_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mA648DA84A1179B0739FC9226FF96222BF3D8E1CE_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_FreeBlock_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB883369C2E1D3F28BFE59C63AF0075570A928971_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_gshared (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_gshared (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* ___0_t, int32_t ___1_offset, int32_t ___2_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE35E2A7AB2A1739DB9AEE2664DB6FA8E85B8897A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m68F3AF483142B771BE6BCD51B30F7CED871DB766_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m649437781617A1C06CA2EFA7EECB4739FE7D2240_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F960B6375B61125FD05A03EBE8CEC790A986044_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBEAFA1EB54999ED8C620F9B4F0E2D3CA2530CECE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86131C9F9AC1A6082963096E96DDDDDD7366189E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;

inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CD9715357F39EAC82170472C6E0A5A35A7B32EC (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, uint8_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, uint8_t*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CD9715357F39EAC82170472C6E0A5A35A7B32EC_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33208B512916F822D42035418EED42C1E0A87A7 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, int32_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33208B512916F822D42035418EED42C1E0A87A7_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIntPtr_t_m4746B8D8BE01D6BCCC3661145BF6B65637281058 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, intptr_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, intptr_t*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIntPtr_t_m4746B8D8BE01D6BCCC3661145BF6B65637281058_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mAC31AE07C9B1F7F46CC164C774C0CF11EEEE3516 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mAC31AE07C9B1F7F46CC164C774C0CF11EEEE3516_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m77E5AA753BC6EB6D8C8F68DC9653217EEB06ABB8 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m77E5AA753BC6EB6D8C8F68DC9653217EEB06ABB8_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD349445BFB361D33B3DBA4080A0DD1C4DCFC1A95 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD349445BFB361D33B3DBA4080A0DD1C4DCFC1A95_gshared)(___0_t, ___1_pointer, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m19F7A1665A096A9F7E8897858E2C1A7F40A02D8A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m19F7A1665A096A9F7E8897858E2C1A7F40A02D8A_gshared)(method);
}
inline void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, void* ___1_pointer, int32_t ___2_sizeOf, int32_t ___3_alignOf, int32_t ___4_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, void*, int32_t, int32_t, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69_gshared)(___0_t, ___1_pointer, ___2_sizeOf, ___3_alignOf, ___4_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m2436A8F36CBABD7FF2C312473C14CFB743FEB5FB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m2436A8F36CBABD7FF2C312473C14CFB743FEB5FB_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m7AA07C52425017B2CD0DD79B5F2457A8F9276513_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m7AA07C52425017B2CD0DD79B5F2457A8F9276513_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mACBBF0A12B6E8C1D2CC34F1AA39A8ADEFE4050D5 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mACBBF0A12B6E8C1D2CC34F1AA39A8ADEFE4050D5_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m37655EFA0EA97DBB151F2B98F0191F6F3F4C8FE4_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m37655EFA0EA97DBB151F2B98F0191F6F3F4C8FE4_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mFBEE56272190167DA72B1D46690CB6BE915D1AD4 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mFBEE56272190167DA72B1D46690CB6BE915D1AD4_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mD835C8E7E0DCA3F2AB89081CC5816750084D1A82_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mD835C8E7E0DCA3F2AB89081CC5816750084D1A82_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mA648DA84A1179B0739FC9226FF96222BF3D8E1CE (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mA648DA84A1179B0739FC9226FF96222BF3D8E1CE_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void AllocatorManager_FreeBlock_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB883369C2E1D3F28BFE59C63AF0075570A928971 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*))AllocatorManager_FreeBlock_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB883369C2E1D3F28BFE59C63AF0075570A928971_gshared)(___0_t, ___1_block, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, const RuntimeMethod* method) ;
inline FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C BurstCompiler_CompileFunctionPointer_TisTryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_m24AC0F77E9E5A8C61B911FBAF3DC753E0B1FB4DC (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* ___0_delegateMethod, const RuntimeMethod* method)
{
	return ((  FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C (*) (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA*, const RuntimeMethod*))BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared)(___0_delegateMethod, method);
}
inline void FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_inline (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline)(__this, ___0_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorManager_Register_mEA1DA775A01BA193E46C21C82BA7DD7215086E23 (intptr_t ___0_allocatorState, FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C ___1_functionPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Managed_RegisterDelegate_m494ED81F0C1945174DD1E82D6711EB329255E36F (int32_t ___0_index, TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* ___1_function, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Install_m0526A06766A02754698DE0115B926C15566CDD3B (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___0_tableEntry, const RuntimeMethod* method) ;
inline Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545 (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C* __this, const RuntimeMethod* method)
{
	return ((  Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* (*) (SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C*, const RuntimeMethod*))SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
inline int32_t ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323 (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* ___0_t, int32_t ___1_offset, int32_t ___2_bits, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F*, int32_t, int32_t, const RuntimeMethod*))ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_gshared)(___0_t, ___1_offset, ___2_bits, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107 (uint8_t* ___0_buffer, int64_t ___1_capacity, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared)(___0_nativeArray, method);
}
inline bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared)(___0_array, method);
}
inline Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared)(___0_array, method);
}
inline double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared)(___0_array, method);
}
inline int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared)(___0_array, method);
}
inline int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared)(___0_array, method);
}
inline int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared)(___0_array, method);
}
inline RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared)(___0_array, method);
}
inline int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared)(___0_array, method);
}
inline float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared)(___0_array, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE35E2A7AB2A1739DB9AEE2664DB6FA8E85B8897A (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE35E2A7AB2A1739DB9AEE2664DB6FA8E85B8897A_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
inline bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared)(___0_array, method);
}
inline Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared)(___0_array, method);
}
inline double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared)(___0_array, method);
}
inline int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared)(___0_array, method);
}
inline int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared)(___0_array, method);
}
inline int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared)(___0_array, method);
}
inline RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared)(___0_array, method);
}
inline int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared)(___0_array, method);
}
inline float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared)(___0_array, method);
}
inline bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m68F3AF483142B771BE6BCD51B30F7CED871DB766 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m68F3AF483142B771BE6BCD51B30F7CED871DB766_gshared)(__this, ___0_fieldName, method);
}
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared)(__this, ___0_fieldID, method);
}
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared)(__this, ___0_fieldName, method);
}
inline int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared)(__this, ___0_fieldID, method);
}
inline RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE_gshared)(__this, ___0_fieldID, method);
}
inline RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m649437781617A1C06CA2EFA7EECB4739FE7D2240 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisRuntimeObject_m649437781617A1C06CA2EFA7EECB4739FE7D2240_gshared)(__this, ___0_fieldName, method);
}
inline int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28_gshared)(__this, ___0_fieldName, method);
}
inline RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared)(__this, ___0_fieldName, method);
}
inline void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared)(___0_jobject, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline intptr_t AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F960B6375B61125FD05A03EBE8CEC790A986044 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F960B6375B61125FD05A03EBE8CEC790A986044_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBEAFA1EB54999ED8C620F9B4F0E2D3CA2530CECE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBEAFA1EB54999ED8C620F9B4F0E2D3CA2530CECE_gshared)(__this, ___0_fieldID, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86131C9F9AC1A6082963096E96DDDDDD7366189E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86131C9F9AC1A6082963096E96DDDDDD7366189E_gshared)(__this, ___0_fieldID, method);
}
inline RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5770BB4B36AE5AE7CD8CA15DADCE0F5684DE80B8_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, uint8_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		uint8_t* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CD9715357F39EAC82170472C6E0A5A35A7B32EC((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFF85BEF43F24998040F7D04D07250BEEDAAC0FC1_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, int32_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33208B512916F822D42035418EED42C1E0A87A7((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisIntPtr_t_m2B20944960908E457CDBB64376132F66D2C52AF7_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, intptr_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIntPtr_t_m4746B8D8BE01D6BCCC3661145BF6B65637281058((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m8810DA0A622487B2F4F73B6E4D263A1B92D58075_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mAC31AE07C9B1F7F46CC164C774C0CF11EEEE3516((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m46420D0870F97DABAAE31F153443556FBA7A3BB2_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m77E5AA753BC6EB6D8C8F68DC9653217EEB06ABB8((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m66CF878124D002E9F946E9419CA382F02E222368_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD349445BFB361D33B3DBA4080A0DD1C4DCFC1A95((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisIl2CppFullySharedGenericStruct_m5B9AE1307BC7B800602892922A382DB01CFEE090_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, Il2CppFullySharedGenericStruct* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_pointer;
		int32_t L_1 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_handle), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD4F26E4C816E71D730D23642B46E9C40DB139DE5_gshared (Il2CppFullySharedGenericStruct* ___0_t, Il2CppFullySharedGenericStruct* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_t;
		Il2CppFullySharedGenericStruct* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		((  void (*) (Il2CppFullySharedGenericStruct*, void*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m736266ABA284DD1AC334A647B482BF92C8ACE6A2_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m19F7A1665A096A9F7E8897858E2C1A7F40A02D8A(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m41E9096F2103782244A1CFA248F4D0938AE7481B_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m2436A8F36CBABD7FF2C312473C14CFB743FEB5FB(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mB1C1904D6849FEE2903E3EEDB33EBA1DA6CDD000_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m7AA07C52425017B2CD0DD79B5F2457A8F9276513_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mACBBF0A12B6E8C1D2CC34F1AA39A8ADEFE4050D5(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CD9715357F39EAC82170472C6E0A5A35A7B32EC_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, uint8_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		uint8_t* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33208B512916F822D42035418EED42C1E0A87A7_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, int32_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		int32_t* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIntPtr_t_m4746B8D8BE01D6BCCC3661145BF6B65637281058_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, intptr_t* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		intptr_t* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mAC31AE07C9B1F7F46CC164C774C0CF11EEEE3516_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m37655EFA0EA97DBB151F2B98F0191F6F3F4C8FE4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_mFBEE56272190167DA72B1D46690CB6BE915D1AD4(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_m77E5AA753BC6EB6D8C8F68DC9653217EEB06ABB8_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mD835C8E7E0DCA3F2AB89081CC5816750084D1A82_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mA648DA84A1179B0739FC9226FF96222BF3D8E1CE(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD349445BFB361D33B3DBA4080A0DD1C4DCFC1A95_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_1 = ___1_pointer;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591(il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___2_items;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69(L_0, (void*)L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisIl2CppFullySharedGenericStruct_mDBB8A012EA9B6286BBF754ABC553D87E29E2084C_gshared (Il2CppFullySharedGenericStruct* ___0_t, void* ___1_pointer, int32_t ___2_sizeOf, int32_t ___3_alignOf, int32_t ___4_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___1_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		int32_t L_1 = ___4_items;
		(&V_0)->___AllocatedItems = L_1;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_2 = (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)(&(&V_0)->___Range);
		void* L_3 = ___1_pointer;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		L_2->___Pointer = L_4;
		int32_t L_5 = ___2_sizeOf;
		(&V_0)->___BytesPerItem = L_5;
		int32_t L_6 = ___3_alignOf;
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_0), L_6, NULL);
		Il2CppFullySharedGenericStruct* L_7 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		((  void (*) (Il2CppFullySharedGenericStruct*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_m8BD2569C18517A7A1C4A187340B8D819044F4E69_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, void* ___1_pointer, int32_t ___2_sizeOf, int32_t ___3_alignOf, int32_t ___4_items, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___1_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		int32_t L_1 = ___4_items;
		(&V_0)->___AllocatedItems = L_1;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_2 = (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)(&(&V_0)->___Range);
		void* L_3 = ___1_pointer;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		L_2->___Pointer = L_4;
		int32_t L_5 = ___2_sizeOf;
		(&V_0)->___BytesPerItem = L_5;
		int32_t L_6 = ___3_alignOf;
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_0), L_6, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_7 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_FreeBlock_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB883369C2E1D3F28BFE59C63AF0075570A928971(L_7, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_FreeBlock_TisIl2CppFullySharedGenericStruct_m44D182E4FE9D7ACB24809B27EAF206F1538A71E3_gshared (Il2CppFullySharedGenericStruct* ___0_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___1_block;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)(&L_0->___Range);
		L_1->___Items = 0;
		Il2CppFullySharedGenericStruct* L_2 = ___0_t;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_3 = ___1_block;
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker1< int32_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (void*)L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_FreeBlock_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB883369C2E1D3F28BFE59C63AF0075570A928971_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___1_block;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)(&L_0->___Range);
		L_1->___Items = 0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_2 = ___0_t;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_3 = ___1_block;
		int32_t L_4;
		L_4 = AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Register_TisIl2CppFullySharedGenericStruct_m8B3695A797B092D9B3D0D561B25C0065E5ADDD35_gshared (Il2CppFullySharedGenericStruct* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_CompileFunctionPointer_TisTryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_m24AC0F77E9E5A8C61B911FBAF3DC753E0B1FB4DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C V_0;
	memset((&V_0), 0, sizeof(V_0));
	FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_t;
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* L_2;
		L_2 = ConstrainedFuncInvoker0< TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_3 = ___0_t;
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* L_5;
		L_5 = ConstrainedFuncInvoker0< TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C L_6;
		L_6 = BurstCompiler_CompileFunctionPointer_TisTryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_m24AC0F77E9E5A8C61B911FBAF3DC753E0B1FB4DC(L_5, BurstCompiler_CompileFunctionPointer_TisTryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_m24AC0F77E9E5A8C61B911FBAF3DC753E0B1FB4DC_RuntimeMethod_var);
		G_B3_0 = L_6;
		goto IL_002b;
	}

IL_0021:
	{
		FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C L_7;
		memset((&L_7), 0, sizeof(L_7));
		FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_inline((&L_7), 0, FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		G_B3_0 = L_7;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		Il2CppFullySharedGenericStruct* L_8 = ___0_t;
		Il2CppFullySharedGenericStruct* L_9 = ___0_t;
		void* L_10;
		L_10 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_11;
		L_11 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_10, NULL);
		FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_13;
		L_13 = AllocatorManager_Register_mEA1DA775A01BA193E46C21C82BA7DD7215086E23(L_11, L_12, NULL);
		ConstrainedActionInvoker1< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_14, (void*)L_8, L_13);
		Il2CppFullySharedGenericStruct* L_15 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_17;
		L_17 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 5), L_16, (void*)L_15);
		uint16_t L_18 = L_17.___Index;
		Il2CppFullySharedGenericStruct* L_19 = ___0_t;
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* L_21;
		L_21 = ConstrainedFuncInvoker0< TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_20, (void*)L_19);
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_RegisterDelegate_m494ED81F0C1945174DD1E82D6711EB329255E36F((int32_t)L_18, L_21, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_UnmanagedUnregister_TisIl2CppFullySharedGenericStruct_mA531B69E183CA56C8BC7D2DD419333CA5E2DC004_gshared (Il2CppFullySharedGenericStruct* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		bool L_3;
		L_3 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_0), NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_4);
		V_0 = L_6;
		il2cpp_codegen_initobj((&V_1), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_7 = V_1;
		AllocatorHandle_Install_m0526A06766A02754698DE0115B926C15566CDD3B((&V_0), L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_8;
		L_8 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_9 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11;
		L_11 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)L_9);
		V_0 = L_11;
		int32_t L_12;
		L_12 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_0), NULL);
		int32_t L_13;
		L_13 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_8, L_12, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Unregister_TisIl2CppFullySharedGenericStruct_m1782C417767DBDCC0F33DE0B0ACCEE7BE0C9570D_gshared (Il2CppFullySharedGenericStruct* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		bool L_3;
		L_3 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_0), NULL);
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_4);
		V_0 = L_6;
		il2cpp_codegen_initobj((&V_1), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_7 = V_1;
		AllocatorHandle_Install_m0526A06766A02754698DE0115B926C15566CDD3B((&V_0), L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_8;
		L_8 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_9 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11;
		L_11 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)L_9);
		V_0 = L_11;
		int32_t L_12;
		L_12 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_0), NULL);
		int32_t L_13;
		L_13 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_8, L_12, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		Il2CppFullySharedGenericStruct* L_14 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_16;
		L_16 = ConstrainedFuncInvoker0< AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_15, (void*)L_14);
		uint16_t L_17 = L_16.___Index;
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46((int32_t)L_17, NULL);
	}

IL_006e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Unregister_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB8321A6BD18AF456ABC30E251B65EDA0381ECE93_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		bool L_2;
		L_2 = AllocatorHandle_get_IsInstalled_mB38CD887177A87128DC9A2DE6F866F9EC18FA907((&V_0), NULL);
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_3 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4;
		L_4 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		il2cpp_codegen_initobj((&V_1), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_5 = V_1;
		AllocatorHandle_Install_m0526A06766A02754698DE0115B926C15566CDD3B((&V_0), L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var);
		Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* L_6;
		L_6 = SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545((&((IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_StaticFields*)il2cpp_codegen_static_fields_for(IsInstalled_t42C3CF2626E162EF686994F983A03FAACB65537C_il2cpp_TypeInfo_var))->___Ref), SharedStatic_1_get_Data_m3D45E4A5D48C36523EAEE679ED21687C5F4DC545_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_7 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_8;
		int32_t L_9;
		L_9 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&V_0), NULL);
		int32_t L_10;
		L_10 = ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323(L_6, L_9, 1, ConcurrentMask_TryFree_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_mA73898672B3B82A8A0B3D5FB2654735189181323_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_11 = ___0_t;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12;
		L_12 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_13 = L_12.___Index;
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		Managed_UnregisterDelegate_mE60C615D7705C878A66FB0AA06C7EE86A2359D46((int32_t)L_13, NULL);
	}

IL_006e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AndroidJNI_GetDirectBuffer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m971CFD6732DCF55F07C2820EA7F2D685FED934CD_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)), &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 AndroidJNI_GetDirectBuffer_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD58C4C3DF41E0AFB0378C0FF602335B30319D382_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)), &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AndroidJNI_GetDirectBuffer_TisIl2CppFullySharedGenericStruct_mA240D97969B6DC457DEC6F6EB97FDE5D94F28C29_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_3;
		V_4 = L_3;
		goto IL_0080;
	}

IL_001e:
	{
		intptr_t L_4 = ___0_buffer;
		int8_t* L_5;
		L_5 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_4, NULL);
		V_0 = L_5;
		int8_t* L_6 = V_0;
		V_5 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_3;
		V_4 = L_8;
		goto IL_0080;
	}

IL_003d:
	{
		intptr_t L_9 = ___0_buffer;
		int64_t L_10;
		L_10 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_9, NULL);
		V_1 = L_10;
		int64_t L_11 = V_1;
		V_6 = (bool)((((int64_t)L_11) > ((int64_t)((int64_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_13 = V_1;
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)), &L_14);
		int32_t L_16 = ((int32_t)2147483647LL);
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0073:
	{
		int8_t* L_20 = V_0;
		int64_t L_21 = V_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22;
		L_22 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_20, ((int32_t)L_21), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_22;
		goto IL_0080;
	}

IL_0080:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CA9D512889E4FD11E06BC83A1E6FE316CD1BC0F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = ___0_buffer;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB9A49EBBCCE6CE5AF7544594285D5F56E7EF279C_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_3 = ___0_buffer;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisIl2CppFullySharedGenericStruct_mBA315BD28FAF24143A02065102FEC37584F134D1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = ___0_buffer;
		void* L_4;
		L_4 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_4, ((int64_t)L_5), NULL);
		V_1 = L_6;
		goto IL_003d;
	}

IL_003d:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_array;
		bool L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		intptr_t L_0 = ___0_array;
		Il2CppChar L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppChar L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		intptr_t L_0 = ___0_array;
		double L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		int16_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		int32_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_array;
		int64_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_array;
		RuntimeObject* L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		intptr_t L_0 = ___0_array;
		int8_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = ___0_array;
		float L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mE2FE04F1AE05E31AFCB6C62A0D8015274310BBE7_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	memset(V_0, 0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	{
		intptr_t L_0 = ___0_array;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F960B6375B61125FD05A03EBE8CEC790A986044_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE35E2A7AB2A1739DB9AEE2664DB6FA8E85B8897A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_mD4DFA0128576804E9AE4FF17BD3D1398F2196069_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mEB124826B537513D20B0E11A265E04D0612E1CE8_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m4D04F21DE5CB13BC4E2A08505DA57AC729F3BA70_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		String_t* L_1;
		L_1 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7E3E959FEC59CC8D8B7E3A57CDBF66020A916A53_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppChar L_2;
		L_2 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		double L_2;
		L_2 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int16_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E248BAD34E248322F7BD0B8D08A87A491693DD5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB4FE46DB036E5E8A5B58D402555B9721AD405276_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mCDCFD0C23DF7810119C5228517A6C733AB3A44A5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int8_t L_2;
		L_2 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		float L_2;
		L_2 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mC798093D4EE507666B4D04C1237E82DFBBACE706_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	memset(V_0, 0, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	memset(V_0, 0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mDA393DFB3EA03B230F3982EC0F62EED04C1B755E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE94FE031A180D9514AA8E28338270133654A7412_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	memset(V_0, 0, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	memset(V_0, 0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF42587EF43199AC12C7677E70CFAA02E0180387_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mF164C5F5D9F0CF005AC57BC66B4A4B9CD67CB988_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m98714A38A15645388BE9EE530213C7EDB49C34AF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	memset(V_0, 0, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	memset(V_0, 0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m9E915D63BD1F4FB05B49296EEFE25B86C30EA692_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4C097E550C3D8A103BE65545A8CB9E688DCE341E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	memset(V_0, 0, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	memset(V_0, 0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			bool L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			bool L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			Il2CppChar L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			Il2CppChar L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		Il2CppChar L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(double));
		double L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			double L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			double L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(double*)((double*)(double*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		double L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			int16_t L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			int16_t L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int16_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			int32_t L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int64_t));
		int64_t L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			int64_t L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			int64_t L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int64_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			RuntimeObject* L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int8_t V_1 = 0x0;
	int8_t V_2 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			int8_t L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			int8_t L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int8_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		float L_3 = V_1;
		V_2 = L_3;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			float L_6;
			L_6 = AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			float L_7 = L_6;
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
			V_2 = ((*(float*)((float*)(float*)UnBox(L_8, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_m5BC2B7B267EBFB3D33E1D15F5F5DFEF99AB48E84_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_10 = L_3;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_1, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_2, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(V_2, L_3, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				intptr_t L_4 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_5 = ___0_jobject;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, (Il2CppFullySharedGenericAny*)L_6);
			RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
			void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 0), L_8);
			il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___0_fieldName;
		bool L_1;
		L_1 = AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m68F3AF483142B771BE6BCD51B30F7CED871DB766(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8E22E061B55688F6D741686461F93B3FD3E9E42A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_fieldID;
		int32_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_fieldName;
		int32_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC24316BD1D046B8E7F3FE5DDBB75F9578B07500F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_fieldID;
		int64_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_m443490D05D07B3F43D3BB49102F6696DEC6C1FC1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_fieldID;
		RuntimeObject* L_1;
		L_1 = AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_fieldName;
		RuntimeObject* L_1;
		L_1 = AndroidJavaObject__Get_TisRuntimeObject_m649437781617A1C06CA2EFA7EECB4739FE7D2240(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m0921C141B8FD194E4F423401D827FCB547354135_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	memset(V_0, 0, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	memset(V_0, 0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_fieldName;
		int32_t L_1;
		L_1 = AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___0_fieldName;
		RuntimeObject* L_1;
		L_1 = AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_m7E7CB28FD389C5D15A289C22C10EEBB9E64567B9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	memset(V_0, 0, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	memset(V_0, 0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_mEB42AA9151144DAA56A324FBF5A564C71A65D35E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mFB380E32D4FBFB41D3870427D3227A38E72F3D7C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool G_B31_0 = false;
	bool G_B36_0 = false;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				bool L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		bool L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppChar V_18 = 0x0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppChar G_B31_0 = 0x0;
	Il2CppChar G_B36_0 = 0x0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				Il2CppChar L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(Il2CppChar));
				Il2CppChar L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		Il2CppChar L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar V_1 = 0x0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppChar L_7;
		L_7 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		Il2CppChar L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	double V_6 = 0.0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	double V_18 = 0.0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	double G_B31_0 = 0.0;
	double G_B36_0 = 0.0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(double*)((double*)(double*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				double L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(double));
				double L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		double L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		double L_7;
		L_7 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		double L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int16_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int16_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int16_t G_B31_0 = 0;
	int16_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				int16_t L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int16_t));
				int16_t L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		int16_t L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int16_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int16_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				int32_t L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		int32_t L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int64_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int64_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int64_t G_B31_0 = 0;
	int64_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				int64_t L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int64_t));
				int64_t L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		int64_t L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int64_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int64_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	RuntimeObject* V_18 = NULL;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B36_0 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_31, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_44, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_96, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_109, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				RuntimeObject* L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		RuntimeObject* L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		RuntimeObject* L_7;
		L_7 = AndroidJavaObject__Call_TisRuntimeObject_mD9CEA6F51D1BF4C56C367AB517DEAA10BC9441A3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int8_t V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int8_t V_18 = 0x0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int8_t G_B31_0 = 0x0;
	int8_t G_B36_0 = 0x0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				int8_t L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int8_t));
				int8_t L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		int8_t L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t V_1 = 0x0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int8_t L_7;
		L_7 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int8_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	float G_B31_0 = 0.0f;
	float G_B36_0 = 0.0f;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jobject;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jobject;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jobject;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jobject;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jobject;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(float*)((float*)(float*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jobject;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_143, L_144, L_145, NULL);
				V_6 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jobject;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jobject;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jobject;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				float L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(float));
				float L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		float L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		float L_7;
		L_7 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_m4720E88EC57849809AFC4A771495414E75120D8F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	const Il2CppFullySharedGenericAny L_47 = L_32;
	const Il2CppFullySharedGenericAny L_62 = L_32;
	const Il2CppFullySharedGenericAny L_77 = L_32;
	const Il2CppFullySharedGenericAny L_92 = L_32;
	const Il2CppFullySharedGenericAny L_107 = L_32;
	const Il2CppFullySharedGenericAny L_122 = L_32;
	const Il2CppFullySharedGenericAny L_137 = L_32;
	const Il2CppFullySharedGenericAny L_152 = L_32;
	const Il2CppFullySharedGenericAny L_165 = L_32;
	const Il2CppFullySharedGenericAny L_182 = L_32;
	const Il2CppFullySharedGenericAny L_184 = L_32;
	const Il2CppFullySharedGenericAny L_200 = L_32;
	const Il2CppFullySharedGenericAny L_202 = L_32;
	const Il2CppFullySharedGenericAny L_215 = L_32;
	const Il2CppFullySharedGenericAny L_222 = L_32;
	const Il2CppFullySharedGenericAny L_223 = L_32;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_6, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppFullySharedGenericAny V_18 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_18, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B31_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B36_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 1), L_32);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_37;
				L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
				bool L_38;
				L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
				V_7 = L_38;
				bool L_39 = V_7;
				if (!L_39)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				bool L_44;
				L_44 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_41, L_42, L_43, NULL);
				bool L_45 = L_44;
				RuntimeObject* L_46 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_45);
				void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_50;
				L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_52;
				L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
				bool L_53;
				L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
				V_8 = L_53;
				bool L_54 = V_8;
				if (!L_54)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_55 = __this->___m_jobject;
				intptr_t L_56;
				L_56 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_55, NULL);
				intptr_t L_57 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_58 = V_0;
				int8_t L_59;
				L_59 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_56, L_57, L_58, NULL);
				uint8_t L_60 = ((uint8_t)((int32_t)(uint8_t)L_59));
				RuntimeObject* L_61 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_60);
				void* L_63 = UnBox_Any(L_61, il2cpp_rgctx_data(method->rgctx_data, 1), L_62);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_63))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_65;
				L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_67;
				L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
				bool L_68;
				L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
				V_9 = L_68;
				bool L_69 = V_9;
				if (!L_69)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				int8_t L_74;
				L_74 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_71, L_72, L_73, NULL);
				int8_t L_75 = L_74;
				RuntimeObject* L_76 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_75);
				void* L_78 = UnBox_Any(L_76, il2cpp_rgctx_data(method->rgctx_data, 1), L_77);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_78))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_80;
				L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				bool L_83;
				L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
				V_10 = L_83;
				bool L_84 = V_10;
				if (!L_84)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jobject;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				int16_t L_89;
				L_89 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_86, L_87, L_88, NULL);
				int16_t L_90 = L_89;
				RuntimeObject* L_91 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_90);
				void* L_93 = UnBox_Any(L_91, il2cpp_rgctx_data(method->rgctx_data, 1), L_92);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_93))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = __this->___m_jobject;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_103 = V_0;
				int64_t L_104;
				L_104 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_101, L_102, L_103, NULL);
				int64_t L_105 = L_104;
				RuntimeObject* L_106 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_105);
				void* L_108 = UnBox_Any(L_106, il2cpp_rgctx_data(method->rgctx_data, 1), L_107);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_108))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				bool L_113;
				L_113 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_110, L_112, NULL);
				V_12 = L_113;
				bool L_114 = V_12;
				if (!L_114)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jobject;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				float L_119;
				L_119 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_116, L_117, L_118, NULL);
				float L_120 = L_119;
				RuntimeObject* L_121 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_120);
				void* L_123 = UnBox_Any(L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_123))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_13 = L_128;
				bool L_129 = V_13;
				if (!L_129)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jobject;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				double L_134;
				L_134 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_131, L_132, L_133, NULL);
				double L_135 = L_134;
				RuntimeObject* L_136 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_135);
				void* L_138 = UnBox_Any(L_136, il2cpp_rgctx_data(method->rgctx_data, 1), L_137);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_138))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_141 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_142;
				L_142 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_141, NULL);
				bool L_143;
				L_143 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_140, L_142, NULL);
				V_14 = L_143;
				bool L_144 = V_14;
				if (!L_144)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_145 = __this->___m_jobject;
				intptr_t L_146;
				L_146 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_145, NULL);
				intptr_t L_147 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_148 = V_0;
				Il2CppChar L_149;
				L_149 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_146, L_147, L_148, NULL);
				Il2CppChar L_150 = L_149;
				RuntimeObject* L_151 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_150);
				void* L_153 = UnBox_Any(L_151, il2cpp_rgctx_data(method->rgctx_data, 1), L_152);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_153))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_155;
				L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_157;
				L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
				bool L_158;
				L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
				V_15 = L_158;
				bool L_159 = V_15;
				if (!L_159)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_160 = __this->___m_jobject;
				intptr_t L_161;
				L_161 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_160, NULL);
				intptr_t L_162 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_163 = V_0;
				String_t* L_164;
				L_164 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_161, L_162, L_163, NULL);
				void* L_166 = UnBox_Any((RuntimeObject*)L_164, il2cpp_rgctx_data(method->rgctx_data, 1), L_165);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_166))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_168;
				L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_170;
				L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
				bool L_171;
				L_171 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_168, L_170, NULL);
				V_16 = L_171;
				bool L_172 = V_16;
				if (!L_172)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_173 = __this->___m_jobject;
				intptr_t L_174;
				L_174 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_173, NULL);
				intptr_t L_175 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_176 = V_0;
				intptr_t L_177;
				L_177 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_174, L_175, L_176, NULL);
				V_17 = L_177;
				intptr_t L_178 = V_17;
				bool L_179;
				L_179 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_178, 0, NULL);
				if (L_179)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_180 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_181;
				L_181 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_180, NULL);
				void* L_183 = UnBox_Any((RuntimeObject*)L_181, il2cpp_rgctx_data(method->rgctx_data, 1), L_182);
				il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_183))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_184, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B31_0, L_184, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_034a_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B31_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_186;
				L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_188;
				L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
				bool L_189;
				L_189 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_186, L_188, NULL);
				V_19 = L_189;
				bool L_190 = V_19;
				if (!L_190)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_191 = __this->___m_jobject;
				intptr_t L_192;
				L_192 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_191, NULL);
				intptr_t L_193 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_194 = V_0;
				intptr_t L_195;
				L_195 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_192, L_193, L_194, NULL);
				V_20 = L_195;
				intptr_t L_196 = V_20;
				bool L_197;
				L_197 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_196, 0, NULL);
				if (L_197)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_198 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_199;
				L_199 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_198, NULL);
				void* L_201 = UnBox_Any((RuntimeObject*)L_199, il2cpp_rgctx_data(method->rgctx_data, 1), L_200);
				il2cpp_codegen_memcpy(G_B36_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_201))), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_202, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B36_0, L_202, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_03ab_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B36_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_203 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_204;
				L_204 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_203, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_206;
				L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_207;
				L_207 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_204, L_206, NULL);
				V_21 = L_207;
				bool L_208 = V_21;
				if (!L_208)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_209 = __this->___m_jobject;
				intptr_t L_210;
				L_210 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_209, NULL);
				intptr_t L_211 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_212 = V_0;
				intptr_t L_213;
				L_213 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_210, L_211, L_212, NULL);
				V_22 = L_213;
				intptr_t L_214 = V_22;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_214, (Il2CppFullySharedGenericAny*)L_215);
				il2cpp_codegen_memcpy(V_6, L_215, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_216 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_217;
				L_217 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_216, NULL);
				Type_t* L_218 = L_217;
				if (L_218)
				{
					G_B41_0 = L_218;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_218;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_219;
				L_219 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_219;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_220;
				L_220 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_221 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_221, L_220, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_221, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_222, V_18, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(V_6, L_222, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		il2cpp_codegen_memcpy(L_223, V_6, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		il2cpp_codegen_memcpy(il2cppRetVal, L_223, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_1, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		goto IL_0020;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool G_B31_0 = false;
	bool G_B36_0 = false;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jclass;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jclass;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jclass;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jclass;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jclass;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jclass;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jclass;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jclass;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jclass;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_143, L_144, L_145, NULL);
				V_6 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jclass;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jclass;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jclass;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				bool L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(bool));
				bool L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		bool L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jclass;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_44, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jclass;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_57, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jclass;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jclass;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jclass;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_96, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jclass;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_109, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jclass;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_122, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jclass;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jclass;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_143, L_144, L_145, NULL);
				V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jclass;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jclass;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)))));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jclass;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				int32_t L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(int32_t));
				int32_t L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		int32_t L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	RuntimeObject* V_18 = NULL;
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B36_0 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_31, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				bool L_36;
				L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
				V_7 = L_36;
				bool L_37 = V_7;
				if (!L_37)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jclass;
				intptr_t L_39;
				L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
				intptr_t L_40 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_41 = V_0;
				bool L_42;
				L_42 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_39, L_40, L_41, NULL);
				bool L_43 = L_42;
				RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_44, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				V_8 = L_49;
				bool L_50 = V_8;
				if (!L_50)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_51 = __this->___m_jclass;
				intptr_t L_52;
				L_52 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_51, NULL);
				intptr_t L_53 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_54 = V_0;
				int8_t L_55;
				L_55 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_52, L_53, L_54, NULL);
				uint8_t L_56 = ((uint8_t)((int32_t)(uint8_t)L_55));
				RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_61;
				L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
				bool L_62;
				L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
				V_9 = L_62;
				bool L_63 = V_9;
				if (!L_63)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_64 = __this->___m_jclass;
				intptr_t L_65;
				L_65 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_64, NULL);
				intptr_t L_66 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_67 = V_0;
				int8_t L_68;
				L_68 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_65, L_66, L_67, NULL);
				int8_t L_69 = L_68;
				RuntimeObject* L_70 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_69);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_72;
				L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_74;
				L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
				bool L_75;
				L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
				V_10 = L_75;
				bool L_76 = V_10;
				if (!L_76)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jclass;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				int16_t L_81;
				L_81 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_78, L_79, L_80, NULL);
				int16_t L_82 = L_81;
				RuntimeObject* L_83 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_82);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				bool L_88;
				L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
				V_11 = L_88;
				bool L_89 = V_11;
				if (!L_89)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_90 = __this->___m_jclass;
				intptr_t L_91;
				L_91 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_90, NULL);
				intptr_t L_92 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_93 = V_0;
				int64_t L_94;
				L_94 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_91, L_92, L_93, NULL);
				int64_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_96, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_98;
				L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_100;
				L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
				bool L_101;
				L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
				V_12 = L_101;
				bool L_102 = V_12;
				if (!L_102)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jclass;
				intptr_t L_104;
				L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_103, NULL);
				intptr_t L_105 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_106 = V_0;
				float L_107;
				L_107 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_104, L_105, L_106, NULL);
				float L_108 = L_107;
				RuntimeObject* L_109 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_108);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_109, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				bool L_114;
				L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
				V_13 = L_114;
				bool L_115 = V_13;
				if (!L_115)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_116 = __this->___m_jclass;
				intptr_t L_117;
				L_117 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_116, NULL);
				intptr_t L_118 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_119 = V_0;
				double L_120;
				L_120 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_117, L_118, L_119, NULL);
				double L_121 = L_120;
				RuntimeObject* L_122 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_121);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_124, L_126, NULL);
				V_14 = L_127;
				bool L_128 = V_14;
				if (!L_128)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_129 = __this->___m_jclass;
				intptr_t L_130;
				L_130 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_129, NULL);
				intptr_t L_131 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_132 = V_0;
				Il2CppChar L_133;
				L_133 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_130, L_131, L_132, NULL);
				Il2CppChar L_134 = L_133;
				RuntimeObject* L_135 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_134);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_15 = L_140;
				bool L_141 = V_15;
				if (!L_141)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = __this->___m_jclass;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_145 = V_0;
				String_t* L_146;
				L_146 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_143, L_144, L_145, NULL);
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_148;
				L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
				V_16 = L_151;
				bool L_152 = V_16;
				if (!L_152)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_153 = __this->___m_jclass;
				intptr_t L_154;
				L_154 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_153, NULL);
				intptr_t L_155 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_156 = V_0;
				intptr_t L_157;
				L_157 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_154, L_155, L_156, NULL);
				V_17 = L_157;
				intptr_t L_158 = V_17;
				bool L_159;
				L_159 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_158, 0, NULL);
				if (L_159)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_160 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_161;
				L_161 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_160, NULL);
				G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_162 = V_18;
				G_B31_0 = L_162;
			}

IL_034a_1:
			{
				V_6 = G_B31_0;
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_166;
				L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
				bool L_167;
				L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
				V_19 = L_167;
				bool L_168 = V_19;
				if (!L_168)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_169 = __this->___m_jclass;
				intptr_t L_170;
				L_170 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_169, NULL);
				intptr_t L_171 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_172 = V_0;
				intptr_t L_173;
				L_173 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_170, L_171, L_172, NULL);
				V_20 = L_173;
				intptr_t L_174 = V_20;
				bool L_175;
				L_175 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_174, 0, NULL);
				if (L_175)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_176 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_177;
				L_177 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_176, NULL);
				G_B36_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_178 = V_18;
				G_B36_0 = L_178;
			}

IL_03ab_1:
			{
				V_6 = G_B36_0;
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_180;
				L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_182;
				L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_183;
				L_183 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_180, L_182, NULL);
				V_21 = L_183;
				bool L_184 = V_21;
				if (!L_184)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_185 = __this->___m_jclass;
				intptr_t L_186;
				L_186 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_185, NULL);
				intptr_t L_187 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_188 = V_0;
				intptr_t L_189;
				L_189 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_186, L_187, L_188, NULL);
				V_22 = L_189;
				intptr_t L_190 = V_22;
				RuntimeObject* L_191;
				L_191 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_190, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_6 = L_191;
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
				Type_t* L_194 = L_193;
				if (L_194)
				{
					G_B41_0 = L_194;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_194;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_195;
				L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_195;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_196;
				L_196 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_197 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_197, L_196, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((&V_18), sizeof(RuntimeObject*));
				RuntimeObject* L_198 = V_18;
				V_6 = L_198;
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		RuntimeObject* L_199 = V_6;
		return L_199;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		RuntimeObject* L_7;
		L_7 = AndroidJavaObject__CallStatic_TisRuntimeObject_mC3CCF464E34ECD192A18E8748FAFADC7C520EFC0(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_m8D1EB1F6B7C8D0B7D54EF55F42BCE6B7576E0953_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	const Il2CppFullySharedGenericAny L_47 = L_32;
	const Il2CppFullySharedGenericAny L_62 = L_32;
	const Il2CppFullySharedGenericAny L_77 = L_32;
	const Il2CppFullySharedGenericAny L_92 = L_32;
	const Il2CppFullySharedGenericAny L_107 = L_32;
	const Il2CppFullySharedGenericAny L_122 = L_32;
	const Il2CppFullySharedGenericAny L_137 = L_32;
	const Il2CppFullySharedGenericAny L_152 = L_32;
	const Il2CppFullySharedGenericAny L_165 = L_32;
	const Il2CppFullySharedGenericAny L_182 = L_32;
	const Il2CppFullySharedGenericAny L_184 = L_32;
	const Il2CppFullySharedGenericAny L_200 = L_32;
	const Il2CppFullySharedGenericAny L_202 = L_32;
	const Il2CppFullySharedGenericAny L_215 = L_32;
	const Il2CppFullySharedGenericAny L_222 = L_32;
	const Il2CppFullySharedGenericAny L_223 = L_32;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_6, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	intptr_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	Il2CppFullySharedGenericAny V_18 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_18, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	bool V_19 = false;
	intptr_t V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B31_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B36_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_042b:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_16, NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_02b3_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_20;
				L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				bool L_23;
				L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
				V_5 = L_23;
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				int32_t L_29;
				L_29 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_26, L_27, L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 1), L_32);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_0090_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_35;
				L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_37;
				L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
				bool L_38;
				L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
				V_7 = L_38;
				bool L_39 = V_7;
				if (!L_39)
				{
					goto IL_00d2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				bool L_44;
				L_44 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_41, L_42, L_43, NULL);
				bool L_45 = L_44;
				RuntimeObject* L_46 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_45);
				void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_00d2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_50;
				L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_52;
				L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
				bool L_53;
				L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
				V_8 = L_53;
				bool L_54 = V_8;
				if (!L_54)
				{
					goto IL_0121_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_55 = __this->___m_jclass;
				intptr_t L_56;
				L_56 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_55, NULL);
				intptr_t L_57 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_58 = V_0;
				int8_t L_59;
				L_59 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_56, L_57, L_58, NULL);
				uint8_t L_60 = ((uint8_t)((int32_t)(uint8_t)L_59));
				RuntimeObject* L_61 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_60);
				void* L_63 = UnBox_Any(L_61, il2cpp_rgctx_data(method->rgctx_data, 1), L_62);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_63))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_0121_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_65;
				L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_67;
				L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
				bool L_68;
				L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
				V_9 = L_68;
				bool L_69 = V_9;
				if (!L_69)
				{
					goto IL_0163_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				int8_t L_74;
				L_74 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_71, L_72, L_73, NULL);
				int8_t L_75 = L_74;
				RuntimeObject* L_76 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_75);
				void* L_78 = UnBox_Any(L_76, il2cpp_rgctx_data(method->rgctx_data, 1), L_77);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_78))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_0163_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_80;
				L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				bool L_83;
				L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
				V_10 = L_83;
				bool L_84 = V_10;
				if (!L_84)
				{
					goto IL_01a5_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jclass;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				int16_t L_89;
				L_89 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_86, L_87, L_88, NULL);
				int16_t L_90 = L_89;
				RuntimeObject* L_91 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_90);
				void* L_93 = UnBox_Any(L_91, il2cpp_rgctx_data(method->rgctx_data, 1), L_92);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_93))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_01a5_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_01e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = __this->___m_jclass;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_103 = V_0;
				int64_t L_104;
				L_104 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_101, L_102, L_103, NULL);
				int64_t L_105 = L_104;
				RuntimeObject* L_106 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_105);
				void* L_108 = UnBox_Any(L_106, il2cpp_rgctx_data(method->rgctx_data, 1), L_107);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_108))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_01e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_112;
				L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
				bool L_113;
				L_113 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_110, L_112, NULL);
				V_12 = L_113;
				bool L_114 = V_12;
				if (!L_114)
				{
					goto IL_0229_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jclass;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				float L_119;
				L_119 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_116, L_117, L_118, NULL);
				float L_120 = L_119;
				RuntimeObject* L_121 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_120);
				void* L_123 = UnBox_Any(L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_123))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_0229_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_127;
				L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
				bool L_128;
				L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
				V_13 = L_128;
				bool L_129 = V_13;
				if (!L_129)
				{
					goto IL_026b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_130 = __this->___m_jclass;
				intptr_t L_131;
				L_131 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_130, NULL);
				intptr_t L_132 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_133 = V_0;
				double L_134;
				L_134 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_131, L_132, L_133, NULL);
				double L_135 = L_134;
				RuntimeObject* L_136 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_135);
				void* L_138 = UnBox_Any(L_136, il2cpp_rgctx_data(method->rgctx_data, 1), L_137);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_138))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_026b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_140;
				L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_141 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_142;
				L_142 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_141, NULL);
				bool L_143;
				L_143 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_140, L_142, NULL);
				V_14 = L_143;
				bool L_144 = V_14;
				if (!L_144)
				{
					goto IL_02ad_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_145 = __this->___m_jclass;
				intptr_t L_146;
				L_146 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_145, NULL);
				intptr_t L_147 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_148 = V_0;
				Il2CppChar L_149;
				L_149 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_146, L_147, L_148, NULL);
				Il2CppChar L_150 = L_149;
				RuntimeObject* L_151 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_150);
				void* L_153 = UnBox_Any(L_151, il2cpp_rgctx_data(method->rgctx_data, 1), L_152);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_153))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_02ad_1:
			{
				goto IL_041d_1;
			}

IL_02b3_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_155;
				L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_157;
				L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
				bool L_158;
				L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
				V_15 = L_158;
				bool L_159 = V_15;
				if (!L_159)
				{
					goto IL_02f0_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_160 = __this->___m_jclass;
				intptr_t L_161;
				L_161 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_160, NULL);
				intptr_t L_162 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_163 = V_0;
				String_t* L_164;
				L_164 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_161, L_162, L_163, NULL);
				void* L_166 = UnBox_Any((RuntimeObject*)L_164, il2cpp_rgctx_data(method->rgctx_data, 1), L_165);
				il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_166))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_02f0_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_168;
				L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_170;
				L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
				bool L_171;
				L_171 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_168, L_170, NULL);
				V_16 = L_171;
				bool L_172 = V_16;
				if (!L_172)
				{
					goto IL_0351_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_173 = __this->___m_jclass;
				intptr_t L_174;
				L_174 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_173, NULL);
				intptr_t L_175 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_176 = V_0;
				intptr_t L_177;
				L_177 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_174, L_175, L_176, NULL);
				V_17 = L_177;
				intptr_t L_178 = V_17;
				bool L_179;
				L_179 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_178, 0, NULL);
				if (L_179)
				{
					goto IL_0340_1;
				}
			}
			{
				intptr_t L_180 = V_17;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_181;
				L_181 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_180, NULL);
				void* L_183 = UnBox_Any((RuntimeObject*)L_181, il2cpp_rgctx_data(method->rgctx_data, 1), L_182);
				il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_183))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_034a_1;
			}

IL_0340_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_184, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B31_0, L_184, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_034a_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B31_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_0351_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_186;
				L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_188;
				L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
				bool L_189;
				L_189 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_186, L_188, NULL);
				V_19 = L_189;
				bool L_190 = V_19;
				if (!L_190)
				{
					goto IL_03b2_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_191 = __this->___m_jclass;
				intptr_t L_192;
				L_192 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_191, NULL);
				intptr_t L_193 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_194 = V_0;
				intptr_t L_195;
				L_195 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_192, L_193, L_194, NULL);
				V_20 = L_195;
				intptr_t L_196 = V_20;
				bool L_197;
				L_197 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_196, 0, NULL);
				if (L_197)
				{
					goto IL_03a1_1;
				}
			}
			{
				intptr_t L_198 = V_20;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_199;
				L_199 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_198, NULL);
				void* L_201 = UnBox_Any((RuntimeObject*)L_199, il2cpp_rgctx_data(method->rgctx_data, 1), L_200);
				il2cpp_codegen_memcpy(G_B36_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_201))), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ab_1;
			}

IL_03a1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_202, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B36_0, L_202, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_03ab_1:
			{
				il2cpp_codegen_memcpy(V_6, G_B36_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_03b2_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_203 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_204;
				L_204 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_203, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_206;
				L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_207;
				L_207 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_204, L_206, NULL);
				V_21 = L_207;
				bool L_208 = V_21;
				if (!L_208)
				{
					goto IL_03f1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_209 = __this->___m_jclass;
				intptr_t L_210;
				L_210 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_209, NULL);
				intptr_t L_211 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_212 = V_0;
				intptr_t L_213;
				L_213 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_210, L_211, L_212, NULL);
				V_22 = L_213;
				intptr_t L_214 = V_22;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_214, (Il2CppFullySharedGenericAny*)L_215);
				il2cpp_codegen_memcpy(V_6, L_215, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}

IL_03f1_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_216 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_217;
				L_217 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_216, NULL);
				Type_t* L_218 = L_217;
				if (L_218)
				{
					G_B41_0 = L_218;
					G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_0408_1;
				}
				G_B40_0 = L_218;
				G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B42_0 = ((String_t*)(NULL));
				G_B42_1 = G_B40_1;
				goto IL_040d_1;
			}

IL_0408_1:
			{
				NullCheck((RuntimeObject*)G_B41_0);
				String_t* L_219;
				L_219 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B41_0);
				G_B42_0 = L_219;
				G_B42_1 = G_B41_1;
			}

IL_040d_1:
			{
				String_t* L_220;
				L_220 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B42_1, G_B42_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_221 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_221, L_220, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_221, method);
			}

IL_041d_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_222, V_18, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(V_6, L_222, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		il2cpp_codegen_memcpy(L_223, V_6, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_223, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	memset(V_1, 0, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		goto IL_0020;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBEAFA1EB54999ED8C620F9B4F0E2D3CA2530CECE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool G_B26_0 = false;
	bool G_B31_0 = false;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jobject;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_27, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jobject;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_87, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jobject;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_111, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jobject;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_119, L_120, NULL);
		V_2 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jobject;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(bool));
		bool L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(bool));
		bool L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jobject;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		bool L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(bool));
		bool L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		bool L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m68F3AF483142B771BE6BCD51B30F7CED871DB766_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F960B6375B61125FD05A03EBE8CEC790A986044(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = AndroidJavaObject__Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBEAFA1EB54999ED8C620F9B4F0E2D3CA2530CECE(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jobject;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_27, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jobject;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_87, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jobject;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_111, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jobject;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_119, L_120, NULL);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jobject;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jobject;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		int32_t L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		int32_t L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	int64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	int64_t V_14 = 0;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	int64_t G_B26_0 = 0;
	int64_t G_B31_0 = 0;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jobject;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_27, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jobject;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jobject;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_111, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jobject;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_119, L_120, NULL);
		V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jobject;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int64_t));
		int64_t L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int64_t));
		int64_t L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jobject;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		int64_t L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int64_t));
		int64_t L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		int64_t L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jobject;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jobject;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_63, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_87, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jobject;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_111, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jobject;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_119, L_120, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jobject;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jobject;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jobject;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		RuntimeObject* L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		RuntimeObject* L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Get_TisRuntimeObject_m649437781617A1C06CA2EFA7EECB4739FE7D2240_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = AndroidJavaObject__Get_TisRuntimeObject_m41EDA887487C02F1087C08122D42E918C2114DEE(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m16AE597DA478C33ABF978BB8131126B5C7360D09_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	const Il2CppFullySharedGenericAny L_30 = L_16;
	const Il2CppFullySharedGenericAny L_44 = L_16;
	const Il2CppFullySharedGenericAny L_58 = L_16;
	const Il2CppFullySharedGenericAny L_72 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_100 = L_16;
	const Il2CppFullySharedGenericAny L_114 = L_16;
	const Il2CppFullySharedGenericAny L_128 = L_16;
	const Il2CppFullySharedGenericAny L_140 = L_16;
	const Il2CppFullySharedGenericAny L_156 = L_16;
	const Il2CppFullySharedGenericAny L_158 = L_16;
	const Il2CppFullySharedGenericAny L_173 = L_16;
	const Il2CppFullySharedGenericAny L_175 = L_16;
	const Il2CppFullySharedGenericAny L_187 = L_16;
	const Il2CppFullySharedGenericAny L_194 = L_16;
	const Il2CppFullySharedGenericAny L_195 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_2, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppFullySharedGenericAny V_14 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_14, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(G_B26_0, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(G_B31_0, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_24 = __this->___m_jobject;
		intptr_t L_25;
		L_25 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_24, NULL);
		intptr_t L_26 = ___0_fieldID;
		bool L_27;
		L_27 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_25, L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		void* L_31 = UnBox_Any(L_29, il2cpp_rgctx_data(method->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_31))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jobject;
		intptr_t L_39;
		L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
		intptr_t L_40 = ___0_fieldID;
		int8_t L_41;
		L_41 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_39, L_40, NULL);
		uint8_t L_42 = ((uint8_t)((int32_t)(uint8_t)L_41));
		RuntimeObject* L_43 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_42);
		void* L_45 = UnBox_Any(L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		V_5 = L_50;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jobject;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
		intptr_t L_54 = ___0_fieldID;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 1), L_58);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_59))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_6 = L_64;
		bool L_65 = V_6;
		if (!L_65)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_66 = __this->___m_jobject;
		intptr_t L_67;
		L_67 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_66, NULL);
		intptr_t L_68 = ___0_fieldID;
		int16_t L_69;
		L_69 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_67, L_68, NULL);
		int16_t L_70 = L_69;
		RuntimeObject* L_71 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_70);
		void* L_73 = UnBox_Any(L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		V_7 = L_78;
		bool L_79 = V_7;
		if (!L_79)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_80 = __this->___m_jobject;
		intptr_t L_81;
		L_81 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_80, NULL);
		intptr_t L_82 = ___0_fieldID;
		int64_t L_83;
		L_83 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_81, L_82, NULL);
		int64_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 1), L_86);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_8 = L_92;
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		float L_97;
		L_97 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_95, L_96, NULL);
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_98);
		void* L_101 = UnBox_Any(L_99, il2cpp_rgctx_data(method->rgctx_data, 1), L_100);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_101))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		bool L_106;
		L_106 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_103, L_105, NULL);
		V_9 = L_106;
		bool L_107 = V_9;
		if (!L_107)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_108 = __this->___m_jobject;
		intptr_t L_109;
		L_109 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_108, NULL);
		intptr_t L_110 = ___0_fieldID;
		double L_111;
		L_111 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_109, L_110, NULL);
		double L_112 = L_111;
		RuntimeObject* L_113 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_112);
		void* L_115 = UnBox_Any(L_113, il2cpp_rgctx_data(method->rgctx_data, 1), L_114);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_115))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		V_10 = L_120;
		bool L_121 = V_10;
		if (!L_121)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_122 = __this->___m_jobject;
		intptr_t L_123;
		L_123 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_122, NULL);
		intptr_t L_124 = ___0_fieldID;
		Il2CppChar L_125;
		L_125 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_123, L_124, NULL);
		Il2CppChar L_126 = L_125;
		RuntimeObject* L_127 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_126);
		void* L_129 = UnBox_Any(L_127, il2cpp_rgctx_data(method->rgctx_data, 1), L_128);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_132 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_133;
		L_133 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_132, NULL);
		bool L_134;
		L_134 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_133, NULL);
		V_11 = L_134;
		bool L_135 = V_11;
		if (!L_135)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_136 = __this->___m_jobject;
		intptr_t L_137;
		L_137 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_136, NULL);
		intptr_t L_138 = ___0_fieldID;
		String_t* L_139;
		L_139 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_137, L_138, NULL);
		void* L_141 = UnBox_Any((RuntimeObject*)L_139, il2cpp_rgctx_data(method->rgctx_data, 1), L_140);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_141))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		bool L_146;
		L_146 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_145, NULL);
		V_12 = L_146;
		bool L_147 = V_12;
		if (!L_147)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_148 = __this->___m_jobject;
		intptr_t L_149;
		L_149 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_148, NULL);
		intptr_t L_150 = ___0_fieldID;
		intptr_t L_151;
		L_151 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_149, L_150, NULL);
		V_13 = L_151;
		intptr_t L_152 = V_13;
		bool L_153;
		L_153 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_152, 0, NULL);
		if (L_153)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_154 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_155;
		L_155 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_154, NULL);
		void* L_157 = UnBox_Any((RuntimeObject*)L_155, il2cpp_rgctx_data(method->rgctx_data, 1), L_156);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_157))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_158, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(G_B26_0, L_158, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	}

IL_02fb:
	{
		il2cpp_codegen_memcpy(V_2, G_B26_0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		V_15 = L_163;
		bool L_164 = V_15;
		if (!L_164)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_165 = __this->___m_jobject;
		intptr_t L_166;
		L_166 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_165, NULL);
		intptr_t L_167 = ___0_fieldID;
		intptr_t L_168;
		L_168 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_166, L_167, NULL);
		V_16 = L_168;
		intptr_t L_169 = V_16;
		bool L_170;
		L_170 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_169, 0, NULL);
		if (L_170)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_171 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_172;
		L_172 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_171, NULL);
		void* L_174 = UnBox_Any((RuntimeObject*)L_172, il2cpp_rgctx_data(method->rgctx_data, 1), L_173);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_174))), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_175, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(G_B31_0, L_175, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	}

IL_035a:
	{
		il2cpp_codegen_memcpy(V_2, G_B31_0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_176 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_177;
		L_177 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_176, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_179;
		L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_180;
		L_180 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_177, L_179, NULL);
		V_17 = L_180;
		bool L_181 = V_17;
		if (!L_181)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_182 = __this->___m_jobject;
		intptr_t L_183;
		L_183 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_182, NULL);
		intptr_t L_184 = ___0_fieldID;
		intptr_t L_185;
		L_185 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_183, L_184, NULL);
		V_18 = L_185;
		intptr_t L_186 = V_18;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_186, (Il2CppFullySharedGenericAny*)L_187);
		il2cpp_codegen_memcpy(V_2, L_187, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		Type_t* L_190 = L_189;
		if (L_190)
		{
			G_B36_0 = L_190;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_190;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_191;
		L_191 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_191;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_192;
		L_192 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_193 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_193, L_192, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_193, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_194, V_14, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(V_2, L_194, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		goto IL_03d3;
	}

IL_03d3:
	{
		il2cpp_codegen_memcpy(L_195, V_2, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_195, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	memset(V_1, 0, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		goto IL_001e;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86131C9F9AC1A6082963096E96DDDDDD7366189E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jclass;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_27, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jclass;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jclass;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_87, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jclass;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_111, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jclass;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_119, L_120, NULL);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jclass;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jclass;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		int32_t L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(int32_t));
		int32_t L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		int32_t L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86131C9F9AC1A6082963096E96DDDDDD7366189E(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = __this->___m_jclass;
		intptr_t L_23;
		L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
		intptr_t L_24 = ___0_fieldID;
		bool L_25;
		L_25 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_23, L_24, NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
		intptr_t L_35;
		L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_34, NULL);
		intptr_t L_36 = ___0_fieldID;
		int8_t L_37;
		L_37 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_35, L_36, NULL);
		uint8_t L_38 = ((uint8_t)((int32_t)(uint8_t)L_37));
		RuntimeObject* L_39 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_38);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jclass;
		intptr_t L_47;
		L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_46, NULL);
		intptr_t L_48 = ___0_fieldID;
		int8_t L_49;
		L_49 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_47, L_48, NULL);
		int8_t L_50 = L_49;
		RuntimeObject* L_51 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_50);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_6 = L_56;
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_58 = __this->___m_jclass;
		intptr_t L_59;
		L_59 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_58, NULL);
		intptr_t L_60 = ___0_fieldID;
		int16_t L_61;
		L_61 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_59, L_60, NULL);
		int16_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_62);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_63, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_7 = L_68;
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
		intptr_t L_71;
		L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_70, NULL);
		intptr_t L_72 = ___0_fieldID;
		int64_t L_73;
		L_73 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_71, L_72, NULL);
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
		intptr_t L_84 = ___0_fieldID;
		float L_85;
		L_85 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_83, L_84, NULL);
		float L_86 = L_85;
		RuntimeObject* L_87 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_86);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_87, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_9 = L_92;
		bool L_93 = V_9;
		if (!L_93)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		double L_97;
		L_97 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_95, L_96, NULL);
		double L_98 = L_97;
		RuntimeObject* L_99 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_98);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_10 = L_104;
		bool L_105 = V_10;
		if (!L_105)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_106 = __this->___m_jclass;
		intptr_t L_107;
		L_107 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_106, NULL);
		intptr_t L_108 = ___0_fieldID;
		Il2CppChar L_109;
		L_109 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_107, L_108, NULL);
		Il2CppChar L_110 = L_109;
		RuntimeObject* L_111 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_110);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_111, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		V_11 = L_116;
		bool L_117 = V_11;
		if (!L_117)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_118 = __this->___m_jclass;
		intptr_t L_119;
		L_119 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_118, NULL);
		intptr_t L_120 = ___0_fieldID;
		String_t* L_121;
		L_121 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_119, L_120, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		V_12 = L_126;
		bool L_127 = V_12;
		if (!L_127)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_128 = __this->___m_jclass;
		intptr_t L_129;
		L_129 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_128, NULL);
		intptr_t L_130 = ___0_fieldID;
		intptr_t L_131;
		L_131 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_129, L_130, NULL);
		V_13 = L_131;
		intptr_t L_132 = V_13;
		bool L_133;
		L_133 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_132, 0, NULL);
		if (L_133)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_134 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_135;
		L_135 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_134, NULL);
		G_B26_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_135, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_136 = V_14;
		G_B26_0 = L_136;
	}

IL_02fb:
	{
		V_2 = G_B26_0;
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		bool L_141;
		L_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_138, L_140, NULL);
		V_15 = L_141;
		bool L_142 = V_15;
		if (!L_142)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_143 = __this->___m_jclass;
		intptr_t L_144;
		L_144 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_143, NULL);
		intptr_t L_145 = ___0_fieldID;
		intptr_t L_146;
		L_146 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_144, L_145, NULL);
		V_16 = L_146;
		intptr_t L_147 = V_16;
		bool L_148;
		L_148 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_147, 0, NULL);
		if (L_148)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_149 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_150;
		L_150 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_149, NULL);
		G_B31_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_150, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_151 = V_14;
		G_B31_0 = L_151;
	}

IL_035a:
	{
		V_2 = G_B31_0;
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_153, L_155, NULL);
		V_17 = L_156;
		bool L_157 = V_17;
		if (!L_157)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_158 = __this->___m_jclass;
		intptr_t L_159;
		L_159 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_158, NULL);
		intptr_t L_160 = ___0_fieldID;
		intptr_t L_161;
		L_161 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_159, L_160, NULL);
		V_18 = L_161;
		intptr_t L_162 = V_18;
		RuntimeObject* L_163;
		L_163 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_162, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_163;
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Type_t* L_166 = L_165;
		if (L_166)
		{
			G_B36_0 = L_166;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_166;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_167;
		L_167 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_167;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_168;
		L_168 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_169 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_169, L_168, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_169, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(RuntimeObject*));
		RuntimeObject* L_170 = V_14;
		V_2 = L_170;
		goto IL_03d3;
	}

IL_03d3:
	{
		RuntimeObject* L_171 = V_2;
		return L_171;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = AndroidJavaObject__GetStatic_TisRuntimeObject_mBEC7518E1052FDAA2A7244FEA0BCB2B67B05B90F(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m265EB43F18C8FB22DCD571C5E50A76642369551D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	const Il2CppFullySharedGenericAny L_30 = L_16;
	const Il2CppFullySharedGenericAny L_44 = L_16;
	const Il2CppFullySharedGenericAny L_58 = L_16;
	const Il2CppFullySharedGenericAny L_72 = L_16;
	const Il2CppFullySharedGenericAny L_86 = L_16;
	const Il2CppFullySharedGenericAny L_100 = L_16;
	const Il2CppFullySharedGenericAny L_114 = L_16;
	const Il2CppFullySharedGenericAny L_128 = L_16;
	const Il2CppFullySharedGenericAny L_140 = L_16;
	const Il2CppFullySharedGenericAny L_156 = L_16;
	const Il2CppFullySharedGenericAny L_158 = L_16;
	const Il2CppFullySharedGenericAny L_173 = L_16;
	const Il2CppFullySharedGenericAny L_175 = L_16;
	const Il2CppFullySharedGenericAny L_187 = L_16;
	const Il2CppFullySharedGenericAny L_194 = L_16;
	const Il2CppFullySharedGenericAny L_195 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_2, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppFullySharedGenericAny V_14 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_14, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	Il2CppFullySharedGenericAny G_B26_0 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(G_B26_0, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	Il2CppFullySharedGenericAny G_B31_0 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(G_B31_0, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	Type_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		int32_t L_13;
		L_13 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_11, L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_24 = __this->___m_jclass;
		intptr_t L_25;
		L_25 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_24, NULL);
		intptr_t L_26 = ___0_fieldID;
		bool L_27;
		L_27 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_25, L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		void* L_31 = UnBox_Any(L_29, il2cpp_rgctx_data(method->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_31))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_00e1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_38 = __this->___m_jclass;
		intptr_t L_39;
		L_39 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_38, NULL);
		intptr_t L_40 = ___0_fieldID;
		int8_t L_41;
		L_41 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_39, L_40, NULL);
		uint8_t L_42 = ((uint8_t)((int32_t)(uint8_t)L_41));
		RuntimeObject* L_43 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_42);
		void* L_45 = UnBox_Any(L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_00e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		V_5 = L_50;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0121;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = __this->___m_jclass;
		intptr_t L_53;
		L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
		intptr_t L_54 = ___0_fieldID;
		int8_t L_55;
		L_55 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_53, L_54, NULL);
		int8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_56);
		void* L_59 = UnBox_Any(L_57, il2cpp_rgctx_data(method->rgctx_data, 1), L_58);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_59))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0121:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_6 = L_64;
		bool L_65 = V_6;
		if (!L_65)
		{
			goto IL_0161;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_66 = __this->___m_jclass;
		intptr_t L_67;
		L_67 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_66, NULL);
		intptr_t L_68 = ___0_fieldID;
		int16_t L_69;
		L_69 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_67, L_68, NULL);
		int16_t L_70 = L_69;
		RuntimeObject* L_71 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_70);
		void* L_73 = UnBox_Any(L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0161:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		V_7 = L_78;
		bool L_79 = V_7;
		if (!L_79)
		{
			goto IL_01a1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_80 = __this->___m_jclass;
		intptr_t L_81;
		L_81 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_80, NULL);
		intptr_t L_82 = ___0_fieldID;
		int64_t L_83;
		L_83 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_81, L_82, NULL);
		int64_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 1), L_86);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_01a1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		V_8 = L_92;
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_01e1;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
		intptr_t L_95;
		L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_94, NULL);
		intptr_t L_96 = ___0_fieldID;
		float L_97;
		L_97 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_95, L_96, NULL);
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_98);
		void* L_101 = UnBox_Any(L_99, il2cpp_rgctx_data(method->rgctx_data, 1), L_100);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_101))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_01e1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		bool L_106;
		L_106 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_103, L_105, NULL);
		V_9 = L_106;
		bool L_107 = V_9;
		if (!L_107)
		{
			goto IL_0221;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_108 = __this->___m_jclass;
		intptr_t L_109;
		L_109 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_108, NULL);
		intptr_t L_110 = ___0_fieldID;
		double L_111;
		L_111 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_109, L_110, NULL);
		double L_112 = L_111;
		RuntimeObject* L_113 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_112);
		void* L_115 = UnBox_Any(L_113, il2cpp_rgctx_data(method->rgctx_data, 1), L_114);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_115))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0221:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		V_10 = L_120;
		bool L_121 = V_10;
		if (!L_121)
		{
			goto IL_0261;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_122 = __this->___m_jclass;
		intptr_t L_123;
		L_123 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_122, NULL);
		intptr_t L_124 = ___0_fieldID;
		Il2CppChar L_125;
		L_125 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_123, L_124, NULL);
		Il2CppChar L_126 = L_125;
		RuntimeObject* L_127 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_126);
		void* L_129 = UnBox_Any(L_127, il2cpp_rgctx_data(method->rgctx_data, 1), L_128);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0261:
	{
		goto IL_03c6;
	}

IL_0267:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_132 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_133;
		L_133 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_132, NULL);
		bool L_134;
		L_134 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_133, NULL);
		V_11 = L_134;
		bool L_135 = V_11;
		if (!L_135)
		{
			goto IL_02a2;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_136 = __this->___m_jclass;
		intptr_t L_137;
		L_137 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_136, NULL);
		intptr_t L_138 = ___0_fieldID;
		String_t* L_139;
		L_139 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_137, L_138, NULL);
		void* L_141 = UnBox_Any((RuntimeObject*)L_139, il2cpp_rgctx_data(method->rgctx_data, 1), L_140);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_141))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		bool L_146;
		L_146 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_145, NULL);
		V_12 = L_146;
		bool L_147 = V_12;
		if (!L_147)
		{
			goto IL_0301;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_148 = __this->___m_jclass;
		intptr_t L_149;
		L_149 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_148, NULL);
		intptr_t L_150 = ___0_fieldID;
		intptr_t L_151;
		L_151 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_149, L_150, NULL);
		V_13 = L_151;
		intptr_t L_152 = V_13;
		bool L_153;
		L_153 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_152, 0, NULL);
		if (L_153)
		{
			goto IL_02f1;
		}
	}
	{
		intptr_t L_154 = V_13;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_155;
		L_155 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_154, NULL);
		void* L_157 = UnBox_Any((RuntimeObject*)L_155, il2cpp_rgctx_data(method->rgctx_data, 1), L_156);
		il2cpp_codegen_memcpy(G_B26_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_157))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_02fb;
	}

IL_02f1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_158, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(G_B26_0, L_158, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	}

IL_02fb:
	{
		il2cpp_codegen_memcpy(V_2, G_B26_0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_0301:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		V_15 = L_163;
		bool L_164 = V_15;
		if (!L_164)
		{
			goto IL_035d;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_165 = __this->___m_jclass;
		intptr_t L_166;
		L_166 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_165, NULL);
		intptr_t L_167 = ___0_fieldID;
		intptr_t L_168;
		L_168 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_166, L_167, NULL);
		V_16 = L_168;
		intptr_t L_169 = V_16;
		bool L_170;
		L_170 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_169, 0, NULL);
		if (L_170)
		{
			goto IL_0350;
		}
	}
	{
		intptr_t L_171 = V_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_172;
		L_172 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_171, NULL);
		void* L_174 = UnBox_Any((RuntimeObject*)L_172, il2cpp_rgctx_data(method->rgctx_data, 1), L_173);
		il2cpp_codegen_memcpy(G_B31_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_174))), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_035a;
	}

IL_0350:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_175, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(G_B31_0, L_175, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	}

IL_035a:
	{
		il2cpp_codegen_memcpy(V_2, G_B31_0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_035d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_176 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_177;
		L_177 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_176, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_179;
		L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_180;
		L_180 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_177, L_179, NULL);
		V_17 = L_180;
		bool L_181 = V_17;
		if (!L_181)
		{
			goto IL_039a;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_182 = __this->___m_jclass;
		intptr_t L_183;
		L_183 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_182, NULL);
		intptr_t L_184 = ___0_fieldID;
		intptr_t L_185;
		L_185 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_183, L_184, NULL);
		V_18 = L_185;
		intptr_t L_186 = V_18;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_186, (Il2CppFullySharedGenericAny*)L_187);
		il2cpp_codegen_memcpy(V_2, L_187, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_039a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		Type_t* L_190 = L_189;
		if (L_190)
		{
			G_B36_0 = L_190;
			G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_03b1;
		}
		G_B35_0 = L_190;
		G_B35_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B37_0 = ((String_t*)(NULL));
		G_B37_1 = G_B35_1;
		goto IL_03b6;
	}

IL_03b1:
	{
		NullCheck((RuntimeObject*)G_B36_0);
		String_t* L_191;
		L_191 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B36_0);
		G_B37_0 = L_191;
		G_B37_1 = G_B36_1;
	}

IL_03b6:
	{
		String_t* L_192;
		L_192 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_193 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_193, L_192, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_193, method);
	}

IL_03c6:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_194, V_14, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(V_2, L_194, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		goto IL_03d3;
	}

IL_03d3:
	{
		il2cpp_codegen_memcpy(L_195, V_2, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_195, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___Index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m7AA07C52425017B2CD0DD79B5F2457A8F9276513_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_t821320446016467933FF194D701C7EDDC23E538B_m37655EFA0EA97DBB151F2B98F0191F6F3F4C8FE4_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_t821320446016467933FF194D701C7EDDC23E538B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C_mD835C8E7E0DCA3F2AB89081CC5816750084D1A82_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafePtrList_tEF526055038E136B34A2E66046CE206B9E38E71C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->____ptr = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
