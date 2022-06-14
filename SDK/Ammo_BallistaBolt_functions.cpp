// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_BallistaBolt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.GetAttachRagdollParams
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAttachRagdollParams    AttachRagdollParams            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAmmo_BallistaBolt_C::GetAttachRagdollParams(class ATBLCharacter* Character, const struct FDeathDamageTakenEvent& DamageEvent, struct FAttachRagdollParams* AttachRagdollParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.GetAttachRagdollParams"));

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


// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ShouldAttachRagdoll
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AAmmo_BallistaBolt_C::ShouldAttachRagdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ShouldAttachRagdoll"));

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


// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BaseProjectileBlockingHitWorld_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAmmo_BallistaBolt_C::BaseProjectileBlockingHitWorld_Event_1(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BaseProjectileBlockingHitWorld_Event_1"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_BallistaBolt_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature"));

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


// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAmmo_BallistaBolt_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ExecuteUbergraph_Ammo_BallistaBolt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_BallistaBolt_C::ExecuteUbergraph_Ammo_BallistaBolt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ExecuteUbergraph_Ammo_BallistaBolt"));

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
