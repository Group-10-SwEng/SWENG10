#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281;
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD;
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B;
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12;
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C;
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t526C6CBBA5290F560D4704AB11CDA3D0D499F433;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371;
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484;
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7;
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A;
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730;
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3;
struct WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
struct Instance_t19B5337286453F132930C383475C4C2BEEDFDE76;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ____nextQueue;
	int32_t ____ownerThreadId;
};
struct WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* ____nextQueue;
	int32_t ____ownerThreadId;
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
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list;
	int32_t ____index;
	int32_t ____version;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current;
};
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___current;
};
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
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
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	RuntimeObject* ___source;
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	RuntimeObject* ___source;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate;
	Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___selector;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator;
};
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate;
	Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator;
};
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate;
	Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator;
};
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate;
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3_marshaled_pinvoke
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3_marshaled_com
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list;
	int32_t ____index;
	int32_t ____version;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current;
};
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281  : public MulticastDelegate_t
{
};
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD  : public MulticastDelegate_t
{
};
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B  : public MulticastDelegate_t
{
};
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12  : public MulticastDelegate_t
{
};
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C  : public MulticastDelegate_t
{
};
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
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
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 m_Items[1];

	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Instance), (void*)NULL);
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Instance), (void*)NULL);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4_gshared (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2DA035BB7569A923997A351DC6F601E631A1676B_gshared_inline (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298_gshared (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* __this, RuntimeObject* ___0_source, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2200EFDD1C70509F7DA902310FC407A8FAAAEC68_gshared_inline (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4 (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656 (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264 (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared)(__this, method);
}
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline)(__this, ___0_arg, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2DA035BB7569A923997A351DC6F601E631A1676B_inline (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m2DA035BB7569A923997A351DC6F601E631A1676B_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298 (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* __this, RuntimeObject* ___0_source, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829 (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83 (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392 (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared)(__this, method);
}
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline)(__this, ___0_arg, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2200EFDD1C70509F7DA902310FC407A8FAAAEC68_inline (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m2200EFDD1C70509F7DA902310FC407A8FAAAEC68_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15 (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0 (int64_t* ___0_location, const RuntimeMethod* method) ;
inline int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1*, const RuntimeMethod*))WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mC6CE4E7DD39DE5C83BBEA60B8D1D83588F4DBA22_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = __this->___source;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = __this->___predicate;
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_2 = __this->___selector;
		WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* L_3 = (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7BF3FD2935EBF351E1B71D16A7DCC4257C0379A8_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_String), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = __this->___predicate;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_11 = __this->___selector;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_m2DA035BB7569A923997A351DC6F601E631A1676B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current))->___Item2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF20DEECFCCECF8BD0001A17A5DC90C9B3C0BED08_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mAA6E54E622F7BE663D868824A8964114883CF9B8_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = __this->___source;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = __this->___predicate;
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = __this->___selector;
		WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* L_3 = (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3C3E603A5CAAA0B3816226A84D4D8695B2A8033B_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_String), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = __this->___predicate;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_11 = __this->___selector;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA5DFDE58967126D391822B5CCAEAD14051DD8CF3_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m7514B4D4CA43073C8D6D3B10D6B33C562464A0C8_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = __this->___source;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = __this->___predicate;
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = __this->___selector;
		WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* L_3 = (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9801C3269DA1FCC381EED100CE2C710B10873FDE_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_String), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = __this->___predicate;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_11 = __this->___selector;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m54A65CB2977BDF55DA3004F81CF889F22E233DE9_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = __this->___source;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = __this->___predicate;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = __this->___selector;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_String), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = __this->___predicate;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = __this->___selector;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m8E6DC673A0DA959A2BB1E3545220CB23F7670E38_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_2 = __this->___selector;
		WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* L_3 = (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFA49CFF6DD27503F6324D78CE0DB31ED77389959_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_m2200EFDD1C70509F7DA902310FC407A8FAAAEC68_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current))->___Item2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD1F9C1A76FC453CE53547740FFC8DF1632466027_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m017DDC5605971EF6DC6E63CC46E9C1FF67ECF3C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* L_3 = (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2745F3BB6FB127C4C57AA2EC540DEAA7A89D622_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF06218BFCB481A4B87E64900FBFE9FDABB11A7C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = __this->___selector;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_mE0C0D6BEE2FB579DFAB968AEDB4BF1373A811EF1_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m3DD3B524B0B5334F07A5826E44963BBA0FD6ABAD_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, Il2CppFullySharedGenericAny ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	const Il2CppFullySharedGenericAny L_57 = L_25;
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_22);
				il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), L_25, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), (void*)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_52;
				int32_t L_53 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_54 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_54);
				il2cpp_codegen_memcpy((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56)))), L_57, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56)))), (void*)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = __this->____addTakeCount;
				int32_t L_63 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = __this->____addTakeCount;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m45F80B1FF0D38F1BE0A0315B1F48501D81284F06_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		il2cpp_codegen_memcpy(L_11, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_11, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m1BC6D29975BB205B49F508FF41A9C4AE59E0F6FA_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m59EAE8C0FE22C80EFF4DB52C31640ABC932E9710_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_0 = (RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)(RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m18AC418E10A17B97D8A79C8EC1230E54CAB92410_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_25 = ___0_item;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24))), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_33 = (RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)(RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_37 = __this->____array;
				il2cpp_codegen_memory_barrier();
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_38 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_39 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_42 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_43 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_46 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_47 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_52;
				int32_t L_53 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_54 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_57 = ___0_item;
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56))), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = __this->____addTakeCount;
				int32_t L_63 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = __this->____addTakeCount;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m91886FB71EEA8A0DAF688C94076C6ECD30CABAB6_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_4 = ___0_array;
		int32_t L_5 = V_2;
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))), L_4);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___0_data;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		RuntimeObject** L_17 = ___1_instance;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = __this->____value;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		__this->____hasValue = (bool)1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2DA035BB7569A923997A351DC6F601E631A1676B_gshared_inline (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2200EFDD1C70509F7DA902310FC407A8FAAAEC68_gshared_inline (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
