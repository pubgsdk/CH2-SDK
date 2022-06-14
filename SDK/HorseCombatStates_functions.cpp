// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseCombatStates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseCombatStates.HorseCombatStates_C.OnAssemble_HorseCombatStates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseCombatStates_C::OnAssemble_HorseCombatStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCombatStates.HorseCombatStates_C.OnAssemble_HorseCombatStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseCombatStates.HorseCombatStates_C.ExecuteUbergraph_HorseCombatStates
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseCombatStates_C::ExecuteUbergraph_HorseCombatStates(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCombatStates.HorseCombatStates_C.ExecuteUbergraph_HorseCombatStates"));

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
