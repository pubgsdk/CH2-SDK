// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterCombatStates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterCombatStates.CharacterCombatStates_C.OnAssemble_CharacterCombatStates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharacterCombatStates_C::OnAssemble_CharacterCombatStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCombatStates.CharacterCombatStates_C.OnAssemble_CharacterCombatStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCombatStates.CharacterCombatStates_C.ExecuteUbergraph_CharacterCombatStates
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCharacterCombatStates_C::ExecuteUbergraph_CharacterCombatStates(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCombatStates.CharacterCombatStates_C.ExecuteUbergraph_CharacterCombatStates"));

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
