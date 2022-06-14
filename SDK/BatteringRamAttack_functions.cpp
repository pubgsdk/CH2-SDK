// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BatteringRamAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BatteringRamAttack.BatteringRamAttack_C.OnAssemble_BatteringRamAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBatteringRamAttack_C::OnAssemble_BatteringRamAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamAttack.BatteringRamAttack_C.OnAssemble_BatteringRamAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BatteringRamAttack.BatteringRamAttack_C.ExecuteUbergraph_BatteringRamAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBatteringRamAttack_C::ExecuteUbergraph_BatteringRamAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamAttack.BatteringRamAttack_C.ExecuteUbergraph_BatteringRamAttack"));

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
