// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_Rapier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Rapier.Weapon_Rapier_C.GetSpecialAttackWindupSwitchOverride
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SwitchState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AWeapon_Rapier_C::GetSpecialAttackWindupSwitchOverride(struct FString* SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_Rapier.Weapon_Rapier_C.GetSpecialAttackWindupSwitchOverride"));

	struct
	{
		struct FString                 SwitchState;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SwitchState != nullptr)
		*SwitchState = params.SwitchState;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
