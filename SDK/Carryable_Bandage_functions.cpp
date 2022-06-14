// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Bandage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_Bandage.Carryable_Bandage_C.SendHealAnalyticsEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_Bandage_C::SendHealAnalyticsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.SendHealAnalyticsEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Bandage.Carryable_Bandage_C.CanUseItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_Bandage_C::CanUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.CanUseItem"));

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


// Function Carryable_Bandage.Carryable_Bandage_C.OnUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Bandage_C::OnUse(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.OnUse"));

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


// Function Carryable_Bandage.Carryable_Bandage_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_Bandage_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Bandage.Carryable_Bandage_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_Bandage_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Bandage.Carryable_Bandage_C.ExecuteUbergraph_Carryable_Bandage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Bandage_C::ExecuteUbergraph_Carryable_Bandage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Bandage.Carryable_Bandage_C.ExecuteUbergraph_Carryable_Bandage"));

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
