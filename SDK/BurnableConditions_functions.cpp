// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BurnableConditions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BurnableConditions.BurnableConditions_C.OnAssemble_BurnableConditions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBurnableConditions_C::OnAssemble_BurnableConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BurnableConditions.BurnableConditions_C.OnAssemble_BurnableConditions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BurnableConditions.BurnableConditions_C.ExecuteUbergraph_BurnableConditions
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBurnableConditions_C::ExecuteUbergraph_BurnableConditions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BurnableConditions.BurnableConditions_C.ExecuteUbergraph_BurnableConditions"));

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
