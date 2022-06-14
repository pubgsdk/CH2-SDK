// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InitiativeAttack_Fists_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.OnAssemble_InitiativeAttack_Fists
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInitiativeAttack_Fists_C::OnAssemble_InitiativeAttack_Fists()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.OnAssemble_InitiativeAttack_Fists"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.ExecuteUbergraph_InitiativeAttack_Fists
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInitiativeAttack_Fists_C::ExecuteUbergraph_InitiativeAttack_Fists(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.ExecuteUbergraph_InitiativeAttack_Fists"));

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
