// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StandardAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandardAttack.StandardAttack_C.OnAssemble_StandardAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStandardAttack_C::OnAssemble_StandardAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StandardAttack.StandardAttack_C.OnAssemble_StandardAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StandardAttack.StandardAttack_C.ExecuteUbergraph_StandardAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStandardAttack_C::ExecuteUbergraph_StandardAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StandardAttack.StandardAttack_C.ExecuteUbergraph_StandardAttack"));

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
