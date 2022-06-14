// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponWarHammerProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.OnAssemble_WeaponWarHammerProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponWarHammerProgression_C::OnAssemble_WeaponWarHammerProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.OnAssemble_WeaponWarHammerProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.ExecuteUbergraph_WeaponWarHammerProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponWarHammerProgression_C::ExecuteUbergraph_WeaponWarHammerProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.ExecuteUbergraph_WeaponWarHammerProgression"));

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
