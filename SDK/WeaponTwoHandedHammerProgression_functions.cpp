// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponTwoHandedHammerProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.OnAssemble_WeaponTwoHandedHammerProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponTwoHandedHammerProgression_C::OnAssemble_WeaponTwoHandedHammerProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.OnAssemble_WeaponTwoHandedHammerProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.ExecuteUbergraph_WeaponTwoHandedHammerProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponTwoHandedHammerProgression_C::ExecuteUbergraph_WeaponTwoHandedHammerProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.ExecuteUbergraph_WeaponTwoHandedHammerProgression"));

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
