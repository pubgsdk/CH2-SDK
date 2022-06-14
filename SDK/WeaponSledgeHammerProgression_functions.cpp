// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponSledgeHammerProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.OnAssemble_WeaponSledgeHammerProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSledgeHammerProgression_C::OnAssemble_WeaponSledgeHammerProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.OnAssemble_WeaponSledgeHammerProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.ExecuteUbergraph_WeaponSledgeHammerProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponSledgeHammerProgression_C::ExecuteUbergraph_WeaponSledgeHammerProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.ExecuteUbergraph_WeaponSledgeHammerProgression"));

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
