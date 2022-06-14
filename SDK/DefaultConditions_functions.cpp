// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultConditions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultConditions.DefaultConditions_C.OnAssemble_DefaultConditions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDefaultConditions_C::OnAssemble_DefaultConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultConditions.DefaultConditions_C.OnAssemble_DefaultConditions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultConditions.DefaultConditions_C.ExecuteUbergraph_DefaultConditions
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultConditions_C::ExecuteUbergraph_DefaultConditions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultConditions.DefaultConditions_C.ExecuteUbergraph_DefaultConditions"));

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
