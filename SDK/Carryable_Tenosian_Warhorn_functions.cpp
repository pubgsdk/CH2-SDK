// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Tenosian_Warhorn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_Tenosian_Warhorn_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.OnUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Tenosian_Warhorn_C::OnUse(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.OnUse"));

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


// Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.ExecuteUbergraph_Carryable_Tenosian_Warhorn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Tenosian_Warhorn_C::ExecuteUbergraph_Carryable_Tenosian_Warhorn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Tenosian_Warhorn.Carryable_Tenosian_Warhorn_C.ExecuteUbergraph_Carryable_Tenosian_Warhorn"));

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
