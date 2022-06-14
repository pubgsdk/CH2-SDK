// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HeavyAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeavyAttack.HeavyAttack_C.OnAssemble_HeavyAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHeavyAttack_C::OnAssemble_HeavyAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HeavyAttack.HeavyAttack_C.OnAssemble_HeavyAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HeavyAttack.HeavyAttack_C.ExecuteUbergraph_HeavyAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHeavyAttack_C::ExecuteUbergraph_HeavyAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HeavyAttack.HeavyAttack_C.ExecuteUbergraph_HeavyAttack"));

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
