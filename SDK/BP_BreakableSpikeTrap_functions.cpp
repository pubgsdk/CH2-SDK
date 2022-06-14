// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakableSpikeTrap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.GetAttachRagdollParams
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAttachRagdollParams    AttachRagdollParams            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BreakableSpikeTrap_C::GetAttachRagdollParams(class ATBLCharacter* Character, const struct FDeathDamageTakenEvent& DamageEvent, struct FAttachRagdollParams* AttachRagdollParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.GetAttachRagdollParams"));

	struct
	{
		struct FAttachRagdollParams    AttachRagdollParams;
		class ATBLCharacter*           Character;
		struct FDeathDamageTakenEvent  DamageEvent;
	} params = {};

	params.Character = Character;
	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AttachRagdollParams != nullptr)
		*AttachRagdollParams = params.AttachRagdollParams;
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.OnRagdollAttach
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableSpikeTrap_C::OnRagdollAttach(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.OnRagdollAttach"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.OnRagdollDetach
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableSpikeTrap_C::OnRagdollDetach(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.OnRagdollDetach"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BreakableSpikeTrap_C::BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_5_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableSpikeTrap_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_5_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_5_InteractableComponentOnUseSignature__DelegateSignature"));

	struct
	{
		class APawn*                   Pawn;
		class UInteractableComponent*  Interactable;
	} params = {};

	params.Pawn = Pawn;
	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BreakableSpikeTrap_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BreakableSpikeTrap_C::BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableSpikeTrap_C::BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.BndEvt__SpikeCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.ExecuteUbergraph_BP_BreakableSpikeTrap
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableSpikeTrap_C::ExecuteUbergraph_BP_BreakableSpikeTrap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableSpikeTrap.BP_BreakableSpikeTrap_C.ExecuteUbergraph_BP_BreakableSpikeTrap"));

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
