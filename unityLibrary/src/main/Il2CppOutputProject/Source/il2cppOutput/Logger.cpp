#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct Dictionary_2_tD9FFCF42D39E39959D290940DB8A69AA18C3200F;
struct Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377;
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
struct KeyCollection_t0B13D8AA1ADDD9882EE04338D71BBBFCDB68B6E1;
struct ValueCollection_tF883182CF528605AB899F791696F97FEB250CD15;
struct EntryU5BU5D_t5851ADBEB5D00021457AD57C7E1644EF8B6759EC;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E;
IL2CPP_EXTERN_C String_t* _stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDEF94652F8A8FFA4FA1F1B612638BD6E826FF75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA92BE3C7B476FED30D3F153C2B65F568D45205FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0707CA10D68DE1126884F6FAD1E4F4EEE79B85E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8143967269B6044A00308AA109A4B709B1F2FA12_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t695D4BBC6CA0B4D2C734998FBC2419D4F2CF4137 
{
};
struct Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5851ADBEB5D00021457AD57C7E1644EF8B6759EC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0B13D8AA1ADDD9882EE04338D71BBBFCDB68B6E1* ____keys;
	ValueCollection_tF883182CF528605AB899F791696F97FEB250CD15* ____values;
	RuntimeObject* ____syncRoot;
};
struct DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1  : public RuntimeObject
{
};
struct LogHelper_t97524D33C9DE61706658A67A15DE29302E509242  : public RuntimeObject
{
};
struct LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349  : public RuntimeObject
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DEFAULT_COLOR;
	bool ___enableLogError;
	bool ___enableLogInfo;
	bool ___enableLogWarning;
	bool ___isDebugBuild;
	String_t* ___STR_NULL;
};
struct LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields
{
	Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* ___m_hexColorDict;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA09F58AAB8FEE4CF55B08E6989D78EF4AFC79D77_gshared (Dictionary_2_tD9FFCF42D39E39959D290940DB8A69AA18C3200F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m132FABD8497273053E439DAA6DB7DDD0A0C8F66F_gshared (Dictionary_2_tD9FFCF42D39E39959D290940DB8A69AA18C3200F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m86EEB5A69264A7B7708BCCA9F3ADE3C4291F13DC_gshared (Dictionary_2_tD9FFCF42D39E39959D290940DB8A69AA18C3200F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBB2BB07BC1A1EE0597E59044E69527E4064F7A87_gshared (Dictionary_2_tD9FFCF42D39E39959D290940DB8A69AA18C3200F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B (int32_t ___0_logType, RuntimeObject* ___1_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___3_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLog_CanLog_m334E020023217FDCB3F2E2A47095CE129D98D10C (int32_t ___0_logType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_LogImpl_m0E25F21B08C062003C99F4EEE6896F2113DDAD12 (int32_t ___0_logType, String_t* ___1_message, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___3_context, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m8143967269B6044A00308AA109A4B709B1F2FA12 (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377*, const RuntimeMethod*))Dictionary_2__ctor_mA09F58AAB8FEE4CF55B08E6989D78EF4AFC79D77_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_ColorToHex_mAEF6DE1963F8D3F87C8186BBA03FE3244348770E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mA92BE3C7B476FED30D3F153C2B65F568D45205FE (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_ContainsKey_m132FABD8497273053E439DAA6DB7DDD0A0C8F66F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_Add_mDEF94652F8A8FFA4FA1F1B612638BD6E826FF75E (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, String_t*, const RuntimeMethod*))Dictionary_2_Add_m86EEB5A69264A7B7708BCCA9F3ADE3C4291F13DC_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* LogToConsole_get_HexColorDict_m0DFE117EDE0D1F2287EBD602D5A80AFFD74CB5E1 (const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m0707CA10D68DE1126884F6FAD1E4F4EEE79B85E8 (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mBB2BB07BC1A1EE0597E59044E69527E4064F7A87_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_AddColorTag_mD35A1CB6BA4635EB66AB3D3189CABF00BA93CBB1 (String_t* ___0_s, String_t* ___1_hexColor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_InitHexColorDict_m8CC5E0BEC090103F52E9ED8BCBB298F6D3710744 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLog_CanLog_m334E020023217FDCB3F2E2A47095CE129D98D10C (int32_t ___0_logType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		bool L_0 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogInfo;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_logType;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		bool L_2 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogWarning;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___0_logType;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		bool L_4 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogError;
		bool L_5 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogError;
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = ___0_logType;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_m95DC15D823E0B3962D368AFDA35683F546BD10A5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(3, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_m389B46F729AC5AFBD9BE3F12BE8DC7F9078EC223 (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(3, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_m438169B68FC769550584A44DB255F07E78BCE772 (RuntimeObject* ___0_obj, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(3, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_m6C03B6E7D0AB3A3C43E802FE8F9CFECA56F7CA0E (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(3, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogError_mADC2A9B0BB724222BF0ABF9109655ABB24E646E2 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogError_m65C7FF8D7F891AD934E457DDDABBD3F587C758E9 (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogError_mFB1706D905865D0F27D8622E60DF3E3735443EDF (RuntimeObject* ___0_obj, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogError_m07C50BD048E0789727FD5A2FF5113BA604FBD6B9 (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogException_mD79A1467154CF2103E937C14C28A7B75E289ABBD (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_e;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_1, L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogException_m600A7E60F31859D78D010E7217BDBB9AF25D8ED9 (Exception_t* ___0_e, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_e;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_color;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_1, L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogException_m05C32582B971E8CE3C9098B6232B2333F5E800C0 (Exception_t* ___0_e, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_e;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___1_context;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogException_mBF7B35383384539ED505A31F64003ACA2901492D (Exception_t* ___0_e, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_e;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_color;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B (int32_t ___0_logType, RuntimeObject* ___1_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___3_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___0_logType;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DLog_CanLog_m334E020023217FDCB3F2E2A47095CE129D98D10C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_obj;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_3 = ___1_obj;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		G_B4_0 = L_4;
		goto IL_0018;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		String_t* L_5 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___STR_NULL;
		G_B4_0 = L_5;
	}

IL_0018:
	{
		V_0 = G_B4_0;
		int32_t L_6 = ___0_logType;
		String_t* L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___2_color;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = ___3_context;
		LogToConsole_LogImpl_m0E25F21B08C062003C99F4EEE6896F2113DDAD12(L_6, L_7, L_8, L_9, NULL);
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogWarning_m1AF1820A9414598BD792C95A1B16A019BC681391 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(2, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogWarning_m2D1398D96F882D7A9DA72215445A1E9816BD76DD (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(2, L_0, L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogWarning_mAEC7675F9FD6136154CD49DDA4EE79A0E99C92F3 (RuntimeObject* ___0_obj, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(2, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogWarning_m554324C55FE0411720B4B144CE305FF502ECC97A (RuntimeObject* ___0_obj, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		DLog_LogImpl_m192F7CB993AB3FBC7DB51B7C8ED80C3AF5E01A3B(2, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog__cctor_mEE2D64FE23887BF57885CC966DF9941E371BE105 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR = L_0;
		((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogError = (bool)1;
		((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogInfo = (bool)1;
		((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___enableLogWarning = (bool)1;
		((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___STR_NULL = _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
		Il2CppCodeGenWriteBarrier((void**)(&((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___STR_NULL), (void*)_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_AddColorTag_mD35A1CB6BA4635EB66AB3D3189CABF00BA93CBB1 (String_t* ___0_s, String_t* ___1_hexColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		String_t* L_1 = ___1_hexColor;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_ColorToHex_mAEF6DE1963F8D3F87C8186BBA03FE3244348770E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = (uint8_t*)(&(&___0_c)->___r);
		String_t* L_1;
		L_1 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(L_0, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		uint8_t* L_2 = (uint8_t*)(&(&___0_c)->___g);
		String_t* L_3;
		L_3 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(L_2, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		uint8_t* L_4 = (uint8_t*)(&(&___0_c)->___b);
		String_t* L_5;
		L_5 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(L_4, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_6;
		L_6 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8, L_1, L_3, L_5, NULL);
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_InitHexColorDict_m8CC5E0BEC090103F52E9ED8BCBB298F6D3710744 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDEF94652F8A8FFA4FA1F1B612638BD6E826FF75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA92BE3C7B476FED30D3F153C2B65F568D45205FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8143967269B6044A00308AA109A4B709B1F2FA12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_3 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_4 = NULL;
	int32_t V_5 = 0;
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_3 = L_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = V_3;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_2;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_3;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = V_3;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = V_3;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = V_3;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))) = L_10;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = V_3;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))) = L_12;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_3;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))) = L_14;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = V_3;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))) = L_16;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = V_3;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))) = L_18;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_19 = V_3;
		NullCheck(L_19);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))) = L_20;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = V_3;
		V_0 = L_21;
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_22 = (Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377*)il2cpp_codegen_object_new(Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8143967269B6044A00308AA109A4B709B1F2FA12(L_22, Dictionary_2__ctor_m8143967269B6044A00308AA109A4B709B1F2FA12_RuntimeMethod_var);
		((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict), (void*)L_22);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_23 = V_0;
		V_4 = L_23;
		V_5 = 0;
		goto IL_0101;
	}

IL_00c7:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))));
		V_1 = L_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_27, NULL);
		String_t* L_29;
		L_29 = LogHelper_ColorToHex_mAEF6DE1963F8D3F87C8186BBA03FE3244348770E(L_28, NULL);
		V_2 = L_29;
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_30 = ((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = Dictionary_2_ContainsKey_mA92BE3C7B476FED30D3F153C2B65F568D45205FE(L_30, L_31, Dictionary_2_ContainsKey_mA92BE3C7B476FED30D3F153C2B65F568D45205FE_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_00fb;
		}
	}
	{
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_33 = ((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_1;
		String_t* L_35 = V_2;
		NullCheck(L_33);
		Dictionary_2_Add_mDEF94652F8A8FFA4FA1F1B612638BD6E826FF75E(L_33, L_34, L_35, Dictionary_2_Add_mDEF94652F8A8FFA4FA1F1B612638BD6E826FF75E_RuntimeMethod_var);
	}

IL_00fb:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0101:
	{
		int32_t L_37 = V_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_38 = V_4;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_00c7;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_LogImpl_m0E25F21B08C062003C99F4EEE6896F2113DDAD12 (int32_t ___0_logType, String_t* ___1_message, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___3_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0707CA10D68DE1126884F6FAD1E4F4EEE79B85E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_runtime_class_init_inline(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3DB8E703EA9000A713331D97B5FE213748B1D9D1_il2cpp_TypeInfo_var))->___DEFAULT_COLOR;
		bool L_2;
		L_2 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_3;
		L_3 = LogToConsole_get_HexColorDict_m0DFE117EDE0D1F2287EBD602D5A80AFFD74CB5E1(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___2_color;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m0707CA10D68DE1126884F6FAD1E4F4EEE79B85E8(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m0707CA10D68DE1126884F6FAD1E4F4EEE79B85E8_RuntimeMethod_var);
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___2_color;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_8, NULL);
		String_t* L_10;
		L_10 = LogHelper_ColorToHex_mAEF6DE1963F8D3F87C8186BBA03FE3244348770E(L_9, NULL);
		V_0 = L_10;
	}

IL_0031:
	{
		String_t* L_11 = ___1_message;
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = LogHelper_AddColorTag_mD35A1CB6BA4635EB66AB3D3189CABF00BA93CBB1(L_11, L_12, NULL);
		___1_message = L_13;
	}

IL_003a:
	{
		int32_t L_14 = ___0_logType;
		V_1 = L_14;
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 2)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_004e:
	{
		String_t* L_16 = ___1_message;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_17 = ___3_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_16, L_17, NULL);
		return;
	}

IL_0056:
	{
		String_t* L_18 = ___1_message;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_19 = ___3_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_18, L_19, NULL);
		return;
	}

IL_005e:
	{
		String_t* L_20 = ___1_message;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_21 = ___3_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_20, L_21, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* LogToConsole_get_HexColorDict_m0DFE117EDE0D1F2287EBD602D5A80AFFD74CB5E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_0 = ((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		LogToConsole_InitHexColorDict_m8CC5E0BEC090103F52E9ED8BCBB298F6D3710744(NULL);
	}

IL_000c:
	{
		Dictionary_2_tD1ABB0E63F077DE007695B628F1A4CC43E593377* L_1 = ((LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_t9616EAA098FE9E184CAEC8B977D3F31F3DB92349_il2cpp_TypeInfo_var))->___m_hexColorDict;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_rhs;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
