// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TopplingStoneAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TopplingStoneAttack.TopplingStoneAttack_C.OnAssemble_TopplingStoneAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTopplingStoneAttack_C::OnAssemble_TopplingStoneAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStoneAttack.TopplingStoneAttack_C.OnAssemble_TopplingStoneAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TopplingStoneAttack.TopplingStoneAttack_C.ExecuteUbergraph_TopplingStoneAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTopplingStoneAttack_C::ExecuteUbergraph_TopplingStoneAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStoneAttack.TopplingStoneAttack_C.ExecuteUbergraph_TopplingStoneAttack"));

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
