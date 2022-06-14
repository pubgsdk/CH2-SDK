// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ConditionsBarEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConditionsBarEntry.ConditionsBarEntry_C.AssignCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBarEntry_C::AssignCondition(EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBarEntry.ConditionsBarEntry_C.AssignCondition"));

	struct
	{
		EConditionType                 Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBarEntry.ConditionsBarEntry_C.UnassignCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConditionsBarEntry_C::UnassignCondition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBarEntry.ConditionsBarEntry_C.UnassignCondition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBarEntry.ConditionsBarEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConditionsBarEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBarEntry.ConditionsBarEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBarEntry.ConditionsBarEntry_C.ExecuteUbergraph_ConditionsBarEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBarEntry_C::ExecuteUbergraph_ConditionsBarEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBarEntry.ConditionsBarEntry_C.ExecuteUbergraph_ConditionsBarEntry"));

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
