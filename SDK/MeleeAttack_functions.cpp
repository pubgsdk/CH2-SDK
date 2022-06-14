// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeleeAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeAttack.MeleeAttack_C.OnAssemble_MeleeAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMeleeAttack_C::OnAssemble_MeleeAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeleeAttack.MeleeAttack_C.OnAssemble_MeleeAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeleeAttack.MeleeAttack_C.ExecuteUbergraph_MeleeAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMeleeAttack_C::ExecuteUbergraph_MeleeAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeleeAttack.MeleeAttack_C.ExecuteUbergraph_MeleeAttack"));

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
