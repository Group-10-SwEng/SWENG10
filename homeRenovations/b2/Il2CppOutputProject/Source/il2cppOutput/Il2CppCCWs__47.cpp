﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tA6D2F2F67698E2E42BD225D1AD6A9E5AB300CE03;
struct KeyCollection_t138136109408FD98DBF627F9E05EA32CBF0D9893;
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
struct KeyCollection_t9D0AA6C6242A0E182B1BE5CF8346949901EB2330;
struct KeyCollection_t85D7EE0BF2C0CFEF0B29BD162EBF6D7932A18524;
struct KeyCollection_t7C4D5109AFA642572467D1455E09003E4E2C3510;
struct KeyCollection_tD24FC49337B1D42DC531580391490648B5452727;
struct ValueCollection_tDDEA8672F4B0BC8A658DEE39BA98760A4E540556;
struct ValueCollection_t64BF35FAA59E1267E091C891F36E42D7AE38CFE3;
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
struct ValueCollection_t922832094E5F2A84659A466E8A5D720D004654C5;
struct ValueCollection_t95D84B4301FFC2CEAA9EBB93DE72CFC9CE2995B2;
struct ValueCollection_t174015ACA35495B64C85AA1548AB9AF993DA34C8;
struct ValueCollection_t658F5D3D7ACCB24C9139EFA8FAB7259D07DE4AFB;
struct EntryU5BU5D_tB7C154AD3198312FC1326447C3D595468E10FE78;
struct EntryU5BU5D_t1B7F4FC29B23EAA2C5A6E9B695B79119DE17DCAE;
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
struct EntryU5BU5D_t036BFAA1D42DC0A7C6666D9CEECE10EAA5D07FF8;
struct EntryU5BU5D_t5C6BE3F8D8C9F5DBCDEF6446DF86F557102A5F67;
struct EntryU5BU5D_tAB6DD8643F354E2C224351F29FE2B06BCD836645;
struct EntryU5BU5D_t7DC9840498DE92FBB40DE5C1DD6A75FE9EE27E40;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA;
struct IIterator_1_t8D69E083BAD17D462387AB437229B563AF88EA65;
struct IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8;
struct IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9;
struct ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D(IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t50976420174C9CA10A9A03FD25646CA17F5E9C2A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3797EA66894B595CCFA1CF76AA7B908D54BA9ED7(IIterator_1_t8D69E083BAD17D462387AB437229B563AF88EA65** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m0856AA97F1382A07920E66C894A4C26E5C4017A5(Il2CppHString ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9883197868466209AB4068A4D172DDCD23668A2F(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mA2E9A896DDF53C3A96F82615CC59800A1F215D6E(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mAE450D9ABCCEECF6D1F26D9084234DC2A56764E8(IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___0_first, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3(Il2CppHString ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C() = 0;
};
struct NOVTABLE IMap_2_t600397D97E8EAE9FD451AFA7F22DE1D72D37EAB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5E960281AA2F0A86E3FA35C0F6BA0B20755BD7A1(Il2CppHString ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m325427BA6BE03195E2D3299605156C1491096606(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m7F0EAD1EB58F174234D04918719B705E7C8B4539(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mBCDD40249BE9DA0299E20EB55A79F0B0217A216E(IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m67637DF8A7CDE733159FF4AB4EA560FBDC99E41E(Il2CppHString ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE9C66BB13EA116A1563C50749547E79F216FDBBE(Il2CppHString ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m56B5E6FAEC1A3B6C3A033B047AFAAB9535103C0E() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB7C154AD3198312FC1326447C3D595468E10FE78* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA6D2F2F67698E2E42BD225D1AD6A9E5AB300CE03* ____keys;
	ValueCollection_tDDEA8672F4B0BC8A658DEE39BA98760A4E540556* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1B7F4FC29B23EAA2C5A6E9B695B79119DE17DCAE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t138136109408FD98DBF627F9E05EA32CBF0D9893* ____keys;
	ValueCollection_t64BF35FAA59E1267E091C891F36E42D7AE38CFE3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys;
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t036BFAA1D42DC0A7C6666D9CEECE10EAA5D07FF8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9D0AA6C6242A0E182B1BE5CF8346949901EB2330* ____keys;
	ValueCollection_t922832094E5F2A84659A466E8A5D720D004654C5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5C6BE3F8D8C9F5DBCDEF6446DF86F557102A5F67* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t85D7EE0BF2C0CFEF0B29BD162EBF6D7932A18524* ____keys;
	ValueCollection_t95D84B4301FFC2CEAA9EBB93DE72CFC9CE2995B2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAB6DD8643F354E2C224351F29FE2B06BCD836645* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7C4D5109AFA642572467D1455E09003E4E2C3510* ____keys;
	ValueCollection_t174015ACA35495B64C85AA1548AB9AF993DA34C8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7DC9840498DE92FBB40DE5C1DD6A75FE9EE27E40* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD24FC49337B1D42DC531580391490648B5452727* ____keys;
	ValueCollection_t658F5D3D7ACCB24C9139EFA8FAB7259D07DE4AFB* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key);
il2cpp_hresult_t IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m5E960281AA2F0A86E3FA35C0F6BA0B20755BD7A1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m325427BA6BE03195E2D3299605156C1491096606_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m7F0EAD1EB58F174234D04918719B705E7C8B4539_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mBCDD40249BE9DA0299E20EB55A79F0B0217A216E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m67637DF8A7CDE733159FF4AB4EA560FBDC99E41E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mE9C66BB13EA116A1563C50749547E79F216FDBBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key);
il2cpp_hresult_t IMap_2_Clear_m56B5E6FAEC1A3B6C3A033B047AFAAB9535103C0E_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m3797EA66894B595CCFA1CF76AA7B908D54BA9ED7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8D69E083BAD17D462387AB437229B563AF88EA65** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m0856AA97F1382A07920E66C894A4C26E5C4017A5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m9883197868466209AB4068A4D172DDCD23668A2F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mA2E9A896DDF53C3A96F82615CC59800A1F215D6E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mAE450D9ABCCEECF6D1F26D9084234DC2A56764E8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___0_first, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___1_second);



struct Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper>, IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD, IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8
{
	inline Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8*>(this);
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
		interfaceIds[0] = IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD::IID;
		interfaceIds[1] = IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3(Il2CppHString ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D(IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper(obj));
}

struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_ComCallableWrapper(obj));
}

struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper>, IMap_2_t600397D97E8EAE9FD451AFA7F22DE1D72D37EAB2, IIterable_1_t50976420174C9CA10A9A03FD25646CA17F5E9C2A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9
{
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t600397D97E8EAE9FD451AFA7F22DE1D72D37EAB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t600397D97E8EAE9FD451AFA7F22DE1D72D37EAB2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t50976420174C9CA10A9A03FD25646CA17F5E9C2A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t50976420174C9CA10A9A03FD25646CA17F5E9C2A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9*>(this);
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
		interfaceIds[0] = IMap_2_t600397D97E8EAE9FD451AFA7F22DE1D72D37EAB2::IID;
		interfaceIds[1] = IIterable_1_t50976420174C9CA10A9A03FD25646CA17F5E9C2A::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5E960281AA2F0A86E3FA35C0F6BA0B20755BD7A1(Il2CppHString ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m5E960281AA2F0A86E3FA35C0F6BA0B20755BD7A1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m325427BA6BE03195E2D3299605156C1491096606(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m325427BA6BE03195E2D3299605156C1491096606_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m7F0EAD1EB58F174234D04918719B705E7C8B4539(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m7F0EAD1EB58F174234D04918719B705E7C8B4539_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mBCDD40249BE9DA0299E20EB55A79F0B0217A216E(IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mBCDD40249BE9DA0299E20EB55A79F0B0217A216E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m67637DF8A7CDE733159FF4AB4EA560FBDC99E41E(Il2CppHString ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m67637DF8A7CDE733159FF4AB4EA560FBDC99E41E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE9C66BB13EA116A1563C50749547E79F216FDBBE(Il2CppHString ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mE9C66BB13EA116A1563C50749547E79F216FDBBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m56B5E6FAEC1A3B6C3A033B047AFAAB9535103C0E() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m56B5E6FAEC1A3B6C3A033B047AFAAB9535103C0E_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3797EA66894B595CCFA1CF76AA7B908D54BA9ED7(IIterator_1_t8D69E083BAD17D462387AB437229B563AF88EA65** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3797EA66894B595CCFA1CF76AA7B908D54BA9ED7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m0856AA97F1382A07920E66C894A4C26E5C4017A5(Il2CppHString ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m0856AA97F1382A07920E66C894A4C26E5C4017A5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9883197868466209AB4068A4D172DDCD23668A2F(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m9883197868466209AB4068A4D172DDCD23668A2F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mA2E9A896DDF53C3A96F82615CC59800A1F215D6E(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mA2E9A896DDF53C3A96F82615CC59800A1F215D6E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mAE450D9ABCCEECF6D1F26D9084234DC2A56764E8(IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___0_first, IMapView_2_tE302D9DC4D4B1CAB9E89B7FD4DC57A79E6F4EBD9** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mAE450D9ABCCEECF6D1F26D9084234DC2A56764E8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_ComCallableWrapper(obj));
}

struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F_ComCallableWrapper(obj));
}

struct Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tED98F9DEB20653ED194C08F6C90D3752C3EDEA28_ComCallableWrapper(obj));
}

struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00_ComCallableWrapper(obj));
}

struct Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB30C9EC7EAE1268D7EE7936DB4C6E64DD28387CA_ComCallableWrapper(obj));
}
