﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IEqualityComparer_1_t0093267684ED46D77C6C9BE38ADE9867D8FA2034;
struct IEqualityComparer_1_t8CD6C0FF1780A1D009FF0D9829F1371C708F8B1B;
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
struct IEqualityComparer_1_tF9F1A8EA49C027FA45CFF34B2360A103EC4B4970;
struct KeyCollection_t13EBAB3D3E1C1D0516B35021A0ED42367C15572C;
struct KeyCollection_t897986D345FB4F917F42257603EA98452A117E9E;
struct KeyCollection_tCF169B05D74DB258617AD23E946B6DAF4ADEF3C4;
struct KeyCollection_t390544EF57BC256EC921BF9C3E8979D723712E84;
struct KeyCollection_tE74D654B31216599243F5499AA51D672292A6851;
struct KeyCollection_t01FC4F65DAAD127AF4022127E61C6449A0589146;
struct KeyCollection_tB3FAA62F9C12C65FEC51CA27CA6B3F2FCDC5173B;
struct ValueCollection_t018154B24774097E7CC573B84A4370DA87DD222B;
struct ValueCollection_t39E5B1D70D8383DFB82C929B3A433BF43DD13625;
struct ValueCollection_t127319FB40AEB5A20DC1637D50EDA12884854D1E;
struct ValueCollection_t780B21F6CC6FCBEBF6EB34B9DBEC5C1F625B5638;
struct ValueCollection_t65F0931BB8199A85426F468967F13738049D3969;
struct ValueCollection_t0C0B26EF4DDEF34A73D1482EFB5E513B82F27A77;
struct ValueCollection_t00C6C88A65B312A75F26F71381E34B3A6D8AA740;
struct EntryU5BU5D_t524FB57F4275986E1E35D3A27037859378EC3E9F;
struct EntryU5BU5D_tF144ACE6249B861D0360435A99A1081AC08BF7CD;
struct EntryU5BU5D_tF5AE20C6C1AB0FB8928FDF5E9DA6AA824571822C;
struct EntryU5BU5D_t1E2048CF63C65D21449B2049951F73F1EA5DD692;
struct EntryU5BU5D_t3B160AF749C4DBE0A0A371D938394ED85BAC4D62;
struct EntryU5BU5D_tF62E36C6522D5BC1D06D027F9CA1ACCEAAFC369E;
struct EntryU5BU5D_tF94CF48764A92F79CAC9630D8B1F4ADB437B18D9;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t3C34BE234BDBA613733B073FC912621544C2A79F;
struct IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tDD614376C4294C587A57B87A50D6C0A19E5758FF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE14E250FA961D0468224413CB78026261F1111C7(IIterator_1_t3C34BE234BDBA613733B073FC912621544C2A79F** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m826E69CA64F17207A4BDD21FE5BD0DB62B36084F(uint64_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m483221B10D032C11E22802AF2F381654436F03D6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m8C297619FDFCA966AC980C1D5C016D34F6C3417F(uint64_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mF59B65923CB34534134222A04B43B4E19DDEA52C(IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___0_first, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t56F6A2B3EB0CEF00B4F6E6EBC8CC832555001AF9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m7A4B58C9E1DBF91AB97164DC7D9D46DA46413C8F(uint64_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mFBDBEBE799E2CAE0703A553CF4F1EFC822EA6E32(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mEF1A43FD79589BE5764F7E25D57E19921AB46A7C(uint64_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mA7B69C9337B089EEAF02A5DF134F66A4A385BB5F(IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAE17418784740E79FBB5EFD8EC9ABB60E058D0E4(uint64_t ___0_key, bool ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m20ADDC6EF011E9403EB80AD2B050B885825C275E(uint64_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mEC269ED97C2BBAB901B88A6E14A509BA56AB94C5() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t524FB57F4275986E1E35D3A27037859378EC3E9F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t13EBAB3D3E1C1D0516B35021A0ED42367C15572C* ____keys;
	ValueCollection_t018154B24774097E7CC573B84A4370DA87DD222B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF144ACE6249B861D0360435A99A1081AC08BF7CD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t897986D345FB4F917F42257603EA98452A117E9E* ____keys;
	ValueCollection_t39E5B1D70D8383DFB82C929B3A433BF43DD13625* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF5AE20C6C1AB0FB8928FDF5E9DA6AA824571822C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCF169B05D74DB258617AD23E946B6DAF4ADEF3C4* ____keys;
	ValueCollection_t127319FB40AEB5A20DC1637D50EDA12884854D1E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E2048CF63C65D21449B2049951F73F1EA5DD692* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t390544EF57BC256EC921BF9C3E8979D723712E84* ____keys;
	ValueCollection_t780B21F6CC6FCBEBF6EB34B9DBEC5C1F625B5638* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3B160AF749C4DBE0A0A371D938394ED85BAC4D62* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE74D654B31216599243F5499AA51D672292A6851* ____keys;
	ValueCollection_t65F0931BB8199A85426F468967F13738049D3969* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF62E36C6522D5BC1D06D027F9CA1ACCEAAFC369E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t01FC4F65DAAD127AF4022127E61C6449A0589146* ____keys;
	ValueCollection_t0C0B26EF4DDEF34A73D1482EFB5E513B82F27A77* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF94CF48764A92F79CAC9630D8B1F4ADB437B18D9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB3FAA62F9C12C65FEC51CA27CA6B3F2FCDC5173B* ____keys;
	ValueCollection_t00C6C88A65B312A75F26F71381E34B3A6D8AA740* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m7A4B58C9E1DBF91AB97164DC7D9D46DA46413C8F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mFBDBEBE799E2CAE0703A553CF4F1EFC822EA6E32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mEF1A43FD79589BE5764F7E25D57E19921AB46A7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mA7B69C9337B089EEAF02A5DF134F66A4A385BB5F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mAE17418784740E79FBB5EFD8EC9ABB60E058D0E4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key, bool ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m20ADDC6EF011E9403EB80AD2B050B885825C275E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_mEC269ED97C2BBAB901B88A6E14A509BA56AB94C5_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mE14E250FA961D0468224413CB78026261F1111C7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t3C34BE234BDBA613733B073FC912621544C2A79F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m826E69CA64F17207A4BDD21FE5BD0DB62B36084F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m483221B10D032C11E22802AF2F381654436F03D6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m8C297619FDFCA966AC980C1D5C016D34F6C3417F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mF59B65923CB34534134222A04B43B4E19DDEA52C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___0_first, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___1_second);



struct Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper(obj));
}

struct Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper>, IMap_2_t56F6A2B3EB0CEF00B4F6E6EBC8CC832555001AF9, IIterable_1_tDD614376C4294C587A57B87A50D6C0A19E5758FF, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D
{
	inline Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t56F6A2B3EB0CEF00B4F6E6EBC8CC832555001AF9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t56F6A2B3EB0CEF00B4F6E6EBC8CC832555001AF9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDD614376C4294C587A57B87A50D6C0A19E5758FF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDD614376C4294C587A57B87A50D6C0A19E5758FF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D*>(this);
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
		interfaceIds[0] = IMap_2_t56F6A2B3EB0CEF00B4F6E6EBC8CC832555001AF9::IID;
		interfaceIds[1] = IIterable_1_tDD614376C4294C587A57B87A50D6C0A19E5758FF::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m7A4B58C9E1DBF91AB97164DC7D9D46DA46413C8F(uint64_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m7A4B58C9E1DBF91AB97164DC7D9D46DA46413C8F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mFBDBEBE799E2CAE0703A553CF4F1EFC822EA6E32(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mFBDBEBE799E2CAE0703A553CF4F1EFC822EA6E32_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mEF1A43FD79589BE5764F7E25D57E19921AB46A7C(uint64_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mEF1A43FD79589BE5764F7E25D57E19921AB46A7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mA7B69C9337B089EEAF02A5DF134F66A4A385BB5F(IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mA7B69C9337B089EEAF02A5DF134F66A4A385BB5F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAE17418784740E79FBB5EFD8EC9ABB60E058D0E4(uint64_t ___0_key, bool ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mAE17418784740E79FBB5EFD8EC9ABB60E058D0E4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m20ADDC6EF011E9403EB80AD2B050B885825C275E(uint64_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m20ADDC6EF011E9403EB80AD2B050B885825C275E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mEC269ED97C2BBAB901B88A6E14A509BA56AB94C5() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mEC269ED97C2BBAB901B88A6E14A509BA56AB94C5_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE14E250FA961D0468224413CB78026261F1111C7(IIterator_1_t3C34BE234BDBA613733B073FC912621544C2A79F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE14E250FA961D0468224413CB78026261F1111C7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m826E69CA64F17207A4BDD21FE5BD0DB62B36084F(uint64_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m826E69CA64F17207A4BDD21FE5BD0DB62B36084F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m483221B10D032C11E22802AF2F381654436F03D6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m483221B10D032C11E22802AF2F381654436F03D6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m8C297619FDFCA966AC980C1D5C016D34F6C3417F(uint64_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m8C297619FDFCA966AC980C1D5C016D34F6C3417F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mF59B65923CB34534134222A04B43B4E19DDEA52C(IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___0_first, IMapView_2_t3E6A9383545D552535CCF55911D3CD909308766D** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mF59B65923CB34534134222A04B43B4E19DDEA52C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t9F1806E717860146F88E53EA3FA844A5B8AE4EC5_ComCallableWrapper(obj));
}

struct Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCE4406EB4D1889C33754C40067E98390FE99F8C5_ComCallableWrapper(obj));
}

struct Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tC28B5F3F34408BE2E94CAE8F26AE095C3795DF8A_ComCallableWrapper(obj));
}

struct Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t6BDF6C6A51DC0496650EFFE508AA26D693F3D540_ComCallableWrapper(obj));
}

struct Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCCC3D5D314E064269ED3724D3E1F4E00574ED144_ComCallableWrapper(obj));
}

struct Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E_ComCallableWrapper(obj));
}
