// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InitiativeAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InitiativeAttack.InitiativeAttack_C.OnAssemble_InitiativeAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInitiativeAttack_C::OnAssemble_InitiativeAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InitiativeAttack.InitiativeAttack_C.OnAssemble_InitiativeAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InitiativeAttack.InitiativeAttack_C.ExecuteUbergraph_InitiativeAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInitiativeAttack_C::ExecuteUbergraph_InitiativeAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InitiativeAttack.InitiativeAttack_C.ExecuteUbergraph_InitiativeAttack"));

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
