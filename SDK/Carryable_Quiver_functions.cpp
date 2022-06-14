// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Quiver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_Quiver.Carryable_Quiver_C.CanUseItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_Quiver_C::CanUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Quiver.Carryable_Quiver_C.CanUseItem"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_Quiver.Carryable_Quiver_C.OnUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Quiver_C::OnUse(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Quiver.Carryable_Quiver_C.OnUse"));

	struct
	{
		class AInventoryItem*          Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Quiver.Carryable_Quiver_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_Quiver_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Quiver.Carryable_Quiver_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Quiver.Carryable_Quiver_C.ExecuteUbergraph_Carryable_Quiver
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Quiver_C::ExecuteUbergraph_Carryable_Quiver(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Quiver.Carryable_Quiver_C.ExecuteUbergraph_Carryable_Quiver"));

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
