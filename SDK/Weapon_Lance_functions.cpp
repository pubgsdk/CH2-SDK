// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_Lance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Lance.Weapon_Lance_C.OnDamaged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FInventoryItemDamagedParams Params                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AWeapon_Lance_C::OnDamaged(const struct FInventoryItemDamagedParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_Lance.Weapon_Lance_C.OnDamaged"));

	struct
	{
		struct FInventoryItemDamagedParams Params;
	} params = {};

	params.Params = Params;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Weapon_Lance.Weapon_Lance_C.ExecuteUbergraph_Weapon_Lance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_Lance_C::ExecuteUbergraph_Weapon_Lance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_Lance.Weapon_Lance_C.ExecuteUbergraph_Weapon_Lance"));

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
