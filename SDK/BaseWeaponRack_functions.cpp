// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseWeaponRack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseWeaponRack.BaseWeaponRack_C.GrantWeaponToPawn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeaponRack_C::GrantWeaponToPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.GrantWeaponToPawn"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.OnRep_IsEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseWeaponRack_C::OnRep_IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.OnRep_IsEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.SetEnabledVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           __                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseWeaponRack_C::SetEnabledVisibility(bool __)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.SetEnabledVisibility"));

	struct
	{
		bool                           __;
	} params = {};

	params.__ = __;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.GetHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeaponRack_C::GetHealthPercent(float* HealthPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.GetHealthPercent"));

	struct
	{
		float                          HealthPercent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function BaseWeaponRack.BaseWeaponRack_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseWeaponRack_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABaseWeaponRack_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.SetIsEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseWeaponRack_C::SetIsEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.SetIsEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseWeaponRack.BaseWeaponRack_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeaponRack_C::BndEvt__WeaponRack_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature"));

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


// Function BaseWeaponRack.BaseWeaponRack_C.ExecuteUbergraph_BaseWeaponRack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseWeaponRack_C::ExecuteUbergraph_BaseWeaponRack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseWeaponRack.BaseWeaponRack_C.ExecuteUbergraph_BaseWeaponRack"));

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
