// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponPoleHammerProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.OnAssemble_WeaponPoleHammerProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponPoleHammerProgression_C::OnAssemble_WeaponPoleHammerProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.OnAssemble_WeaponPoleHammerProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.ExecuteUbergraph_WeaponPoleHammerProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponPoleHammerProgression_C::ExecuteUbergraph_WeaponPoleHammerProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.ExecuteUbergraph_WeaponPoleHammerProgression"));

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
