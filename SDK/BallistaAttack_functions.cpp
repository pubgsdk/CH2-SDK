// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BallistaAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BallistaAttack.BallistaAttack_C.OnAssemble_BallistaAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBallistaAttack_C::OnAssemble_BallistaAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BallistaAttack.BallistaAttack_C.OnAssemble_BallistaAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BallistaAttack.BallistaAttack_C.ExecuteUbergraph_BallistaAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBallistaAttack_C::ExecuteUbergraph_BallistaAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BallistaAttack.BallistaAttack_C.ExecuteUbergraph_BallistaAttack"));

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
