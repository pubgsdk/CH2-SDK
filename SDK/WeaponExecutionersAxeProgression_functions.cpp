// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponExecutionersAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.OnAssemble_WeaponExecutionersAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponExecutionersAxeProgression_C::OnAssemble_WeaponExecutionersAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.OnAssemble_WeaponExecutionersAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.ExecuteUbergraph_WeaponExecutionersAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponExecutionersAxeProgression_C::ExecuteUbergraph_WeaponExecutionersAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.ExecuteUbergraph_WeaponExecutionersAxeProgression"));

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
