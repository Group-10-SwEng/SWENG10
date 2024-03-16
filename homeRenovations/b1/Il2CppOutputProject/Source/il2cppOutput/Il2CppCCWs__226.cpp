#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

struct BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828;
struct Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123;
struct LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E;
struct List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB;
struct TempAllocator_1_tD7EBD4B5F72ACA4230D146F39013345C46D597D7;
struct TempAllocator_1_t3D5BCA4AD052923F7BE25B783A180559F1670526;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct RuntimeTypeU5BU5D_tC404B7F55FB8F6C64CB37ECD01379D36A9238146;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC;
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED;
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct IResourceReader_tE9C9534BA3C840A720AD53C004CF02E41A9684D8;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct JobManager_tC139532E48436E2DCB0FB9EB8C75E1EA244C6530;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct OpacityIdAccelerator_t28773C62F594A1F6A4319298D6CAA31E16458EA7;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct SafeRegistryHandle_tE1299DE3CB586878E1B1FF4469F01903A526B0FF;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B;
struct UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8;
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D;
struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0;
struct Guid_t;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18;
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48;
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05;
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	int32_t ___KeySizeValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930  : public RuntimeObject
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____store;
	Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123* ____resCache;
	int64_t ____nameSectionOffset;
	int64_t ____dataSectionOffset;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____nameHashes;
	int32_t* ____nameHashesPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____namePositions;
	int32_t* ____namePositionsPtr;
	RuntimeTypeU5BU5D_tC404B7F55FB8F6C64CB37ECD01379D36A9238146* ____typeTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____typeNamePositions;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ____objFormatter;
	int32_t ____numResources;
	UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D* ____ums;
	int32_t ____version;
};
struct ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D  : public RuntimeObject
{
	RuntimeObject* ___Reader;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___Table;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caseInsensitiveTable;
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
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 
{
	int32_t ___m_PageHeight;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap;
	int32_t ___m_EntryWidth;
	int32_t ___m_EntryHeight;
};
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke
{
	int32_t ___m_PageHeight;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap;
	int32_t ___m_EntryWidth;
	int32_t ___m_EntryHeight;
};
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com
{
	int32_t ___m_PageHeight;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap;
	int32_t ___m_EntryWidth;
	int32_t ___m_EntryHeight;
};
struct ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C 
{
	uint32_t ___elementsAdded;
	uint32_t ___elementsRemoved;
	uint32_t ___recursiveClipUpdates;
	uint32_t ___recursiveClipUpdatesExpanded;
	uint32_t ___nonRecursiveClipUpdates;
	uint32_t ___recursiveTransformUpdates;
	uint32_t ___recursiveTransformUpdatesExpanded;
	uint32_t ___recursiveOpacityUpdates;
	uint32_t ___recursiveOpacityUpdatesExpanded;
	uint32_t ___opacityIdUpdates;
	uint32_t ___colorUpdates;
	uint32_t ___colorUpdatesExpanded;
	uint32_t ___recursiveVisualUpdates;
	uint32_t ___recursiveVisualUpdatesExpanded;
	uint32_t ___nonRecursiveVisualUpdates;
	uint32_t ___dirtyProcessed;
	uint32_t ___nudgeTransformed;
	uint32_t ___boneTransformed;
	uint32_t ___skipTransformed;
	uint32_t ___visualUpdateTransformed;
	uint32_t ___updatedMeshAllocations;
	uint32_t ___newMeshAllocations;
	uint32_t ___groupTransformElementsChanged;
	uint32_t ___immedateRenderersActive;
};
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0 
{
	int64_t ___UniversalTime;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	float ____x;
	float ____y;
};
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	float ____x;
	float ____y;
	float ____width;
	float ____height;
};
struct Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4 
{
	float ___X;
	float ___Y;
	float ___Width;
	float ___Height;
};
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	float ____width;
	float ____height;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minDepths;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___maxDepths;
	uint32_t ___dirtyID;
};
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails;
	Il2CppSafeArray* ___minDepths;
	Il2CppSafeArray* ___maxDepths;
	uint32_t ___dirtyID;
};
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails;
	Il2CppSafeArray* ___minDepths;
	Il2CppSafeArray* ___maxDepths;
	uint32_t ___dirtyID;
};
struct NOVTABLE IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5B8F42C1F8D45A2811F550E4E9680D663965B4B0(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
};
struct NOVTABLE IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE64C87276C694C4AFA983D2A6D150B817A856614(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4* comReturnValue) = 0;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct CipherMode_t932070F221590D5F955DE31430C6EAA91B97F027 
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
struct PaddingMode_t938E0AB76C80739DB1BB44D7D6B9B94C03B72E1D 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyType_tFD30ED5521B6FEFE4DEED358C5FEE563E5AF9C47 
{
	int32_t ___value__;
};
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	bool ___isCRTpossible;
	bool ___keyBlinding;
	bool ___keypairGenerated;
	bool ___m_disposed;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___d;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___p;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___q;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dp;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dq;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___qInv;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___n;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___e;
	KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* ___KeyGenerated;
};
struct RegistryKeyPermissionCheck_tF7E12ED0BF08E99BDC6248087151ECBC24F60751 
{
	int32_t ___value__;
};
struct RegistryView_t20D2352693B4F4F789D294AB334386A018117866 
{
	int32_t ___value__;
};
struct RijndaelManagedTransformMode_t33650C741B47AA120D56BCD94B473406BBFB436D 
{
	int32_t ___value__;
};
struct StateFlags_t43B10B1BFCB28F4E238AF9DED5F71715EEFD6CEE 
{
	int32_t ___value__;
};
struct NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct NOVTABLE IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___0_valueArraySize, uint8_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___0_valueArraySize, int16_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___0_valueArraySize, uint16_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___0_valueArraySize, int32_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___0_valueArraySize, uint32_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___0_valueArraySize, int64_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___0_valueArraySize, uint64_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___0_valueArraySize, float** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___0_valueArraySize, double** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___0_valueArraySize, Il2CppChar** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___0_valueArraySize, bool** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___0_valueArraySize, Il2CppHString** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___0_valueArraySize, Il2CppIInspectable*** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___0_valueArraySize, Guid_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___0_valueArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___0_valueArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___0_valueArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___0_valueArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___0_valueArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___0_value) = 0;
};
struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	SafeRegistryHandle_tE1299DE3CB586878E1B1FF4469F01903A526B0FF* ____hkey;
	String_t* ____keyName;
	bool ____remoteKey;
	int32_t ____state;
	int32_t ____checkMode;
	int32_t ____regView;
};
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19  : public RuntimeObject
{
	int32_t ___m_cipherMode;
	int32_t ___m_paddingValue;
	int32_t ___m_transformMode;
	int32_t ___m_blockSizeBits;
	int32_t ___m_blockSizeBytes;
	int32_t ___m_inputBlockSize;
	int32_t ___m_outputBlockSize;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptKeyExpansion;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptKeyExpansion;
	int32_t ___m_Nr;
	int32_t ___m_Nb;
	int32_t ___m_Nk;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptindex;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptindex;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_IV;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_lastBlockBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_depadBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_shiftRegister;
};
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	int32_t ___BlockSizeValue;
	int32_t ___FeedbackSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
	int32_t ___KeySizeValue;
	int32_t ___ModeValue;
	int32_t ___PaddingValue;
};
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF 
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TransformAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ClipRectAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_OpacityAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ColorAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TextSettingsAllocator;
	bool ___m_StorageReallyCreated;
	bool ___m_VertexTexturingEnabled;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects;
};
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_pinvoke
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TransformAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ClipRectAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_OpacityAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ColorAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TextSettingsAllocator;
	int32_t ___m_StorageReallyCreated;
	int32_t ___m_VertexTexturingEnabled;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects;
};
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_com
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TransformAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ClipRectAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_OpacityAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ColorAllocator;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TextSettingsAllocator;
	int32_t ___m_StorageReallyCreated;
	int32_t ___m_VertexTexturingEnabled;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363  : public RuntimeObject
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___m_FirstCommand;
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 ___m_DirtyTracker;
	LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F* ___m_CommandPool;
	BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828* ___m_TexturePool;
	List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB* ___m_RenderNodesData;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultWorldSpaceShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultMat;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultWorldSpaceMat;
	bool ___m_BlockDirtyRegistration;
	int32_t ___m_StaticIndex;
	int32_t ___m_ActiveRenderNodes;
	int32_t ___m_CustomMaterialCommands;
	ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C ___m_Stats;
	uint32_t ___m_StatsElementsAdded;
	uint32_t ___m_StatsElementsRemoved;
	TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* ___m_TextureRegistry;
	OpacityIdAccelerator_t28773C62F594A1F6A4319298D6CAA31E16458EA7* ___U3CopacityIdAcceleratorU3Ek__BackingField;
	bool ___U3CdisposedU3Ek__BackingField;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CpanelU3Ek__BackingField;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___U3CdeviceU3Ek__BackingField;
	AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC* ___U3CatlasU3Ek__BackingField;
	VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED* ___U3CvectorImageManagerU3Ek__BackingField;
	TempAllocator_1_t3D5BCA4AD052923F7BE25B783A180559F1670526* ___U3CvertsPoolU3Ek__BackingField;
	TempAllocator_1_tD7EBD4B5F72ACA4230D146F39013345C46D597D7* ___U3CindicesPoolU3Ek__BackingField;
	JobManager_tC139532E48436E2DCB0FB9EB8C75E1EA244C6530* ___U3CjobManagerU3Ek__BackingField;
	UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF ___shaderInfoAllocator;
	UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8* ___U3CpainterU3Ek__BackingField;
	bool ___U3CdrawStatsU3Ek__BackingField;
	bool ___U3CdrawInCamerasU3Ek__BackingField;
};
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_StaticFields
{
	intptr_t ___HKEY_CLASSES_ROOT;
	intptr_t ___HKEY_CURRENT_USER;
	intptr_t ___HKEY_LOCAL_MACHINE;
	intptr_t ___HKEY_USERS;
	intptr_t ___HKEY_PERFORMANCE_DATA;
	intptr_t ___HKEY_CURRENT_CONFIG;
	intptr_t ___HKEY_DYN_DATA;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_hkeyNames;
};
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_Sbox;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_Rcon;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_T;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_TF;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iT;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iTF;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerProcess;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerClipProcessing;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerOpacityProcessing;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerColorsProcessing;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTransformProcessing;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerVisualsProcessing;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTextRegen;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnPreRender;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);



struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSAManaged_t897B29EF76C459408E11A42680C942716D809001(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper(obj));
}

struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper>, IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5B8F42C1F8D45A2811F550E4E9680D663965B4B0(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(UnBox(GetManagedObjectInline(), Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(UnBox(GetManagedObjectInline(), Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___0_valueArraySize, uint8_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___0_valueArraySize, int16_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___0_valueArraySize, uint16_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___0_valueArraySize, int32_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___0_valueArraySize, uint32_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___0_valueArraySize, int64_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___0_valueArraySize, uint64_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___0_valueArraySize, float** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___0_valueArraySize, double** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___0_valueArraySize, Il2CppChar** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___0_valueArraySize, bool** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___0_valueArraySize, Il2CppHString** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___0_valueArraySize, Il2CppIInspectable*** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___0_valueArraySize, Guid_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___0_valueArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___0_valueArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___0_valueArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___0_valueArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___0_valueArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper(obj));
}

struct Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper>, IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE64C87276C694C4AFA983D2A6D150B817A856614(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4*>(UnBox(GetManagedObjectInline(), Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___0_valueArraySize, uint8_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___0_valueArraySize, int16_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___0_valueArraySize, uint16_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___0_valueArraySize, int32_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___0_valueArraySize, uint32_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___0_valueArraySize, int64_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___0_valueArraySize, uint64_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___0_valueArraySize, float** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___0_valueArraySize, double** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___0_valueArraySize, Il2CppChar** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___0_valueArraySize, bool** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___0_valueArraySize, Il2CppHString** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___0_valueArraySize, Il2CppIInspectable*** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___0_valueArraySize, Guid_t** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___0_valueArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___0_valueArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___0_valueArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___0_valueArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___0_valueArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper(obj));
}

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper(obj));
}

struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper(obj));
}

struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper(obj));
}

struct ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper(obj));
}

struct ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper(obj));
}

struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper(obj));
}

struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper(obj));
}
