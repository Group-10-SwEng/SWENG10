#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_t8C4186BAF739A06CB04ED49D0C97D7D0D958FFC4;
struct KeyCollection_t90CACBCC2EF68735162D3E06AB348DA104BC191C;
struct KeyCollection_tCC7ABDD3A5B8B9C7BF9B8EBF9D3A577CC32E019E;
struct KeyCollection_tB729D93646D8A6027E2D679782DDB7E901DCF0AF;
struct KeyCollection_tD9B2D8C1325586B685EF1ED42A57C76ACE6CADDE;
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
struct ValueCollection_t27AB97FF84416C93ECBEA6A23AE1969CE89B49BA;
struct ValueCollection_t9856F7D7BA268E2084B24171F4FE251E2E32EB39;
struct ValueCollection_t433601B0FA5278557ABA8EE95FF4A52C9DE29CD4;
struct ValueCollection_t4876451FA318FDA79A55527F48BEE069D876C982;
struct ValueCollection_t44600A93DCC0364B62B39CAE4C76052E4F23DEF3;
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
struct EntryU5BU5D_t713815493F11EE9BCF527D29EAB3C18391F6B199;
struct EntryU5BU5D_tEF257CF0A80D8754C7653BAC9993E4613D944BFD;
struct EntryU5BU5D_tF35440895432F628E8F4E201FB4A3DD88FBE933C;
struct EntryU5BU5D_t905677747FB83521132326E1936E2EDC193C684F;
struct EntryU5BU5D_t953604285FFCCDB242812F6DC0B3405082A42753;
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A;
struct IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01;
struct IIterator_1_tAC9A58D6AA47A1434425387374B2EE334022303D;
struct IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40;
struct IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2;
struct IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8;
struct IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t70E9DD3FED6F3E94805F01FC8652070CEF8033C3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mF4D0A0F1BEDF839BDC8CDAA09AD5CE5559A20433(IIterator_1_tAC9A58D6AA47A1434425387374B2EE334022303D** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8(IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t713815493F11EE9BCF527D29EAB3C18391F6B199* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8C4186BAF739A06CB04ED49D0C97D7D0D958FFC4* ____keys;
	ValueCollection_t27AB97FF84416C93ECBEA6A23AE1969CE89B49BA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEF257CF0A80D8754C7653BAC9993E4613D944BFD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90CACBCC2EF68735162D3E06AB348DA104BC191C* ____keys;
	ValueCollection_t9856F7D7BA268E2084B24171F4FE251E2E32EB39* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF35440895432F628E8F4E201FB4A3DD88FBE933C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCC7ABDD3A5B8B9C7BF9B8EBF9D3A577CC32E019E* ____keys;
	ValueCollection_t433601B0FA5278557ABA8EE95FF4A52C9DE29CD4* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t905677747FB83521132326E1936E2EDC193C684F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB729D93646D8A6027E2D679782DDB7E901DCF0AF* ____keys;
	ValueCollection_t4876451FA318FDA79A55527F48BEE069D876C982* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t953604285FFCCDB242812F6DC0B3405082A42753* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD9B2D8C1325586B685EF1ED42A57C76ACE6CADDE* ____keys;
	ValueCollection_t44600A93DCC0364B62B39CAE4C76052E4F23DEF3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys;
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys;
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values;
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
struct NOVTABLE IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m7CD9BBADFB816B288982ADF873FDCB5CA5154282(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDC016CF13F6608E2ECE97FDC5345B035E4C1C854(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m76C69DE46568A1B82D0D50585450F4EB2E3EB1A0(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m46216B0A357E2A534A342A4FA49EEAB419009A76(IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___0_first, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t801A52F871C545749BBFF3059AF946C1037A4AB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m94A657E68DEBAA93F76DC4A8A44369553E277B74(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m6FD2AE294747A2008924E095D4A87F56151B8889(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m685B4F8CDFF05E976168B853A06F5809003E5DC3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m82372F1701F31615F9DFC44F19F76A354D175713(IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m38437A142F544CB4E6EE314D7A802714B88705BA(Il2CppWindowsRuntimeTypeName ___0_key, bool ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE4BA34CD609063E4A5B5C70C9ABEF4849F8E1ED1(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9853C72FF29DE3CCD86AFB5E5D03F11C4C568555() = 0;
};
struct NOVTABLE IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A() = 0;
};
struct NOVTABLE IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m94A657E68DEBAA93F76DC4A8A44369553E277B74_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m6FD2AE294747A2008924E095D4A87F56151B8889_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m685B4F8CDFF05E976168B853A06F5809003E5DC3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m82372F1701F31615F9DFC44F19F76A354D175713_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m38437A142F544CB4E6EE314D7A802714B88705BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mE4BA34CD609063E4A5B5C70C9ABEF4849F8E1ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m9853C72FF29DE3CCD86AFB5E5D03F11C4C568555_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mF4D0A0F1BEDF839BDC8CDAA09AD5CE5559A20433_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tAC9A58D6AA47A1434425387374B2EE334022303D** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m7CD9BBADFB816B288982ADF873FDCB5CA5154282_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mDC016CF13F6608E2ECE97FDC5345B035E4C1C854_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m76C69DE46568A1B82D0D50585450F4EB2E3EB1A0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m46216B0A357E2A534A342A4FA49EEAB419009A76_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___0_first, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second);



struct Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD9C3D269F12880B9517613EF2481882CF40939A4_ComCallableWrapper(obj));
}

struct Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper>, IMap_2_t801A52F871C545749BBFF3059AF946C1037A4AB2, IIterable_1_t70E9DD3FED6F3E94805F01FC8652070CEF8033C3, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416
{
	inline Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t801A52F871C545749BBFF3059AF946C1037A4AB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t801A52F871C545749BBFF3059AF946C1037A4AB2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t70E9DD3FED6F3E94805F01FC8652070CEF8033C3::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t70E9DD3FED6F3E94805F01FC8652070CEF8033C3*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416*>(this);
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
		interfaceIds[0] = IMap_2_t801A52F871C545749BBFF3059AF946C1037A4AB2::IID;
		interfaceIds[1] = IIterable_1_t70E9DD3FED6F3E94805F01FC8652070CEF8033C3::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m94A657E68DEBAA93F76DC4A8A44369553E277B74(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m94A657E68DEBAA93F76DC4A8A44369553E277B74_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m6FD2AE294747A2008924E095D4A87F56151B8889(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m6FD2AE294747A2008924E095D4A87F56151B8889_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m685B4F8CDFF05E976168B853A06F5809003E5DC3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m685B4F8CDFF05E976168B853A06F5809003E5DC3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m82372F1701F31615F9DFC44F19F76A354D175713(IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m82372F1701F31615F9DFC44F19F76A354D175713_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m38437A142F544CB4E6EE314D7A802714B88705BA(Il2CppWindowsRuntimeTypeName ___0_key, bool ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m38437A142F544CB4E6EE314D7A802714B88705BA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE4BA34CD609063E4A5B5C70C9ABEF4849F8E1ED1(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mE4BA34CD609063E4A5B5C70C9ABEF4849F8E1ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9853C72FF29DE3CCD86AFB5E5D03F11C4C568555() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m9853C72FF29DE3CCD86AFB5E5D03F11C4C568555_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mF4D0A0F1BEDF839BDC8CDAA09AD5CE5559A20433(IIterator_1_tAC9A58D6AA47A1434425387374B2EE334022303D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mF4D0A0F1BEDF839BDC8CDAA09AD5CE5559A20433_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m7CD9BBADFB816B288982ADF873FDCB5CA5154282(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m7CD9BBADFB816B288982ADF873FDCB5CA5154282_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDC016CF13F6608E2ECE97FDC5345B035E4C1C854(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mDC016CF13F6608E2ECE97FDC5345B035E4C1C854_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m76C69DE46568A1B82D0D50585450F4EB2E3EB1A0(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m76C69DE46568A1B82D0D50585450F4EB2E3EB1A0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m46216B0A357E2A534A342A4FA49EEAB419009A76(IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___0_first, IMapView_2_t8727856BA5F25AB2877206F357667BED46D4E416** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m46216B0A357E2A534A342A4FA49EEAB419009A76_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3037EFA08A290C6E53EA7FE921F5067CB97C9BAE_ComCallableWrapper(obj));
}

struct Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper(obj));
}

struct Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper>, IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7, IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8
{
	inline Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8*>(this);
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
		interfaceIds[0] = IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7::IID;
		interfaceIds[1] = IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8(IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper(obj));
}

struct Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper(obj));
}

struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(obj));
}

struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper>, IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB, IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2
{
	inline Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2*>(this);
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
		interfaceIds[0] = IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID;
		interfaceIds[1] = IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper(obj));
}
