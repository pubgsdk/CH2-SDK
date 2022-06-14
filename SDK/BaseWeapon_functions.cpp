// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseWeapon.BaseWeapon_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseWeapon_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeapon.BaseWeapon_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeapon.BaseWeapon_C.DamageWeaponFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemDamagedState     NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeapon_C::DamageWeaponFX(EInventoryItemDamagedState NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeapon.BaseWeapon_C.DamageWeaponFX"));

	struct
	{
		EInventoryItemDamagedState     NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeapon.BaseWeapon_C.ExecuteUbergraph_BaseWeapon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeapon_C::ExecuteUbergraph_BaseWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeapon.BaseWeapon_C.ExecuteUbergraph_BaseWeapon"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
