// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponAxeProgression.WeaponAxeProgression_C.OnAssemble_WeaponAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponAxeProgression_C::OnAssemble_WeaponAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponAxeProgression.WeaponAxeProgression_C.OnAssemble_WeaponAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponAxeProgression.WeaponAxeProgression_C.ExecuteUbergraph_WeaponAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponAxeProgression_C::ExecuteUbergraph_WeaponAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponAxeProgression.WeaponAxeProgression_C.ExecuteUbergraph_WeaponAxeProgression"));

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
