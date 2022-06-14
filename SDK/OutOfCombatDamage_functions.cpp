// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OutOfCombatDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OutOfCombatDamage.OutOfCombatDamage_C.OnAssemble_OutOfCombatDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutOfCombatDamage_C::OnAssemble_OutOfCombatDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OutOfCombatDamage.OutOfCombatDamage_C.OnAssemble_OutOfCombatDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OutOfCombatDamage.OutOfCombatDamage_C.ExecuteUbergraph_OutOfCombatDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOutOfCombatDamage_C::ExecuteUbergraph_OutOfCombatDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OutOfCombatDamage.OutOfCombatDamage_C.ExecuteUbergraph_OutOfCombatDamage"));

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
