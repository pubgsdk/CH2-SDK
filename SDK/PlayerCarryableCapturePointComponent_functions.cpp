// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerCarryableCapturePointComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.PlayerSatisfiesCaptureRequirments
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPlayerCarryableCapturePointComponent_C::PlayerSatisfiesCaptureRequirments(class ATBLCharacter* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.PlayerSatisfiesCaptureRequirments"));

	struct
	{
		class ATBLCharacter*           Player;
		bool                           ReturnValue;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.SetupCarryableEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Carryable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryableCapturePointComponent_C::SetupCarryableEvents(class AInventoryItem* Carryable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.SetupCarryableEvents"));

	struct
	{
		class AInventoryItem*          Carryable;
	} params = {};

	params.Carryable = Carryable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnDropped_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCarryableCapturePointComponent_C::OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnDropped_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		class ATBLCharacter*           Character;
		struct FTransform              Transform;
	} params = {};

	params.Item = Item;
	params.Character = Character;
	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnEquipped_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryableCapturePointComponent_C::OnEquipped_Event_1(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnEquipped_Event_1"));

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


// Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.ExecuteUbergraph_PlayerCarryableCapturePointComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryableCapturePointComponent_C::ExecuteUbergraph_PlayerCarryableCapturePointComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.ExecuteUbergraph_PlayerCarryableCapturePointComponent"));

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
