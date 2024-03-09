#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C;
struct KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192;
struct KeyCollection_t25F92C47A16BA3B5A3B315AA4F74386F72D10A6E;
struct KeyCollection_t4FF50879C29369164FBC1E8B2C26913E8EE4BBE9;
struct KeyCollection_t0AB8B699C0D7FC0B6AAE8B58D657CA57F85660D4;
struct KeyCollection_t83561E1D5903C4B2EB5D1197ADE688D242BA59E9;
struct KeyCollection_t83EA59C38F7E7FA9A6E7B437E0998010B86C3B74;
struct ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9;
struct ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857;
struct ValueCollection_t51263C2FD14C2A8D541EA28288617519DD3410A3;
struct ValueCollection_tECB6C19B1583DC4BDD51C2F3A77C02F5DD05F919;
struct ValueCollection_t41532516887AF9F6D827B925933C4C90DD5FD24D;
struct ValueCollection_t5A48AD1BA04733F854F5B3C36BDC375B9DE672AA;
struct ValueCollection_t36D8FB62A80F8A07B6AA846F403917C675F72B57;
struct EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8;
struct EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F;
struct EntryU5BU5D_t25D566946E7080D14985A27E055FC8C56D07CBB9;
struct EntryU5BU5D_t45E6E3BC19BE6573531A5252AF4814032E6E5B6F;
struct EntryU5BU5D_t8FB81B6601B8B01BA21679B2DC2EE320E770AEC7;
struct EntryU5BU5D_t79A9353B9D38553B300A9E3B116A6AEE4E3C199A;
struct EntryU5BU5D_tB132446F915D95A6FD261BA70022317E624B3B08;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E;
struct IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D;
struct IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8;
struct IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2(IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C* ____keys;
	ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192* ____keys;
	ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25D566946E7080D14985A27E055FC8C56D07CBB9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t25F92C47A16BA3B5A3B315AA4F74386F72D10A6E* ____keys;
	ValueCollection_t51263C2FD14C2A8D541EA28288617519DD3410A3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t45E6E3BC19BE6573531A5252AF4814032E6E5B6F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4FF50879C29369164FBC1E8B2C26913E8EE4BBE9* ____keys;
	ValueCollection_tECB6C19B1583DC4BDD51C2F3A77C02F5DD05F919* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8FB81B6601B8B01BA21679B2DC2EE320E770AEC7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0AB8B699C0D7FC0B6AAE8B58D657CA57F85660D4* ____keys;
	ValueCollection_t41532516887AF9F6D827B925933C4C90DD5FD24D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t79A9353B9D38553B300A9E3B116A6AEE4E3C199A* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t83561E1D5903C4B2EB5D1197ADE688D242BA59E9* ____keys;
	ValueCollection_t5A48AD1BA04733F854F5B3C36BDC375B9DE672AA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB132446F915D95A6FD261BA70022317E624B3B08* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t83EA59C38F7E7FA9A6E7B437E0998010B86C3B74* ____keys;
	ValueCollection_t36D8FB62A80F8A07B6AA846F403917C675F72B57* ____values;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct IntPtr_t 
{
	void* ___m_value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NOVTABLE IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D() = 0;
};
struct NOVTABLE IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second);



struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper>, IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5, IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8
{
	inline Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5::IID;
		interfaceIds[1] = IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2(IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_ComCallableWrapper(obj));
}

struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper>, IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A, IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2
{
	inline Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID;
		interfaceIds[1] = IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_ComCallableWrapper(obj));
}

struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8_ComCallableWrapper(obj));
}

struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9_ComCallableWrapper(obj));
}

struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51_ComCallableWrapper(obj));
}

struct Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_ComCallableWrapper(obj));
}

struct Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper(obj));
}
