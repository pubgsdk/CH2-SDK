// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BreakableMeleeAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BreakableMeleeAttack.BreakableMeleeAttack_C.OnAssemble_BreakableMeleeAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBreakableMeleeAttack_C::OnAssemble_BreakableMeleeAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BreakableMeleeAttack.BreakableMeleeAttack_C.OnAssemble_BreakableMeleeAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BreakableMeleeAttack.BreakableMeleeAttack_C.ExecuteUbergraph_BreakableMeleeAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBreakableMeleeAttack_C::ExecuteUbergraph_BreakableMeleeAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BreakableMeleeAttack.BreakableMeleeAttack_C.ExecuteUbergraph_BreakableMeleeAttack"));

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
