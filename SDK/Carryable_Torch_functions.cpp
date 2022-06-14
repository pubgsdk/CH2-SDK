// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Torch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_Torch.Carryable_Torch_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_Torch_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature"));

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


// Function Carryable_Torch.Carryable_Torch_C.PlayBurnableHitEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Torch_C::PlayBurnableHitEvent(class AActor* HitActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.PlayBurnableHitEvent"));

	struct
	{
		class AActor*                  HitActor;
	} params = {};

	params.HitActor = HitActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.TorchAppliedBurning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Torch_C::TorchAppliedBurning(class AActor* Hit_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.TorchAppliedBurning"));

	struct
	{
		class AActor*                  Hit_Actor;
	} params = {};

	params.Hit_Actor = Hit_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.Play World Hit Event
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Hit_Location                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Hit_Normal                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Torch_C::Play_World_Hit_Event(class AActor* Hit_Actor, const struct FVector& Hit_Location, const struct FVector& Hit_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.Play World Hit Event"));

	struct
	{
		class AActor*                  Hit_Actor;
		struct FVector                 Hit_Location;
		struct FVector                 Hit_Normal;
	} params = {};

	params.Hit_Actor = Hit_Actor;
	params.Hit_Location = Hit_Location;
	params.Hit_Normal = Hit_Normal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.OnAddedToInventoryChanged_Event
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAddedToInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ACarryable_Torch_C::OnAddedToInventoryChanged_Event(class AInventoryItem* Item, bool IsAddedToInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.OnAddedToInventoryChanged_Event"));

	struct
	{
		class AInventoryItem*          Item;
		bool                           IsAddedToInventory;
	} params = {};

	params.Item = Item;
	params.IsAddedToInventory = IsAddedToInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_Torch_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.Turn Off Embers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_Torch_C::Turn_Off_Embers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.Turn Off Embers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_Torch.Carryable_Torch_C.ExecuteUbergraph_Carryable_Torch
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_Torch_C::ExecuteUbergraph_Carryable_Torch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_Torch.Carryable_Torch_C.ExecuteUbergraph_Carryable_Torch"));

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
