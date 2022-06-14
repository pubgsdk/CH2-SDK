// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BatteringRamStates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BatteringRamStates.BatteringRamStates_C.OnAssemble_BatteringRamStates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBatteringRamStates_C::OnAssemble_BatteringRamStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamStates.BatteringRamStates_C.OnAssemble_BatteringRamStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BatteringRamStates.BatteringRamStates_C.ExecuteUbergraph_BatteringRamStates
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBatteringRamStates_C::ExecuteUbergraph_BatteringRamStates(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamStates.BatteringRamStates_C.ExecuteUbergraph_BatteringRamStates"));

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
