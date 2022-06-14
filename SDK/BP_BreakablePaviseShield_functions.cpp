// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakablePaviseShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.GetGroundOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Forward                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakablePaviseShield_C::GetGroundOffset(bool Forward, float* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.GetGroundOffset"));

	struct
	{
		bool                           Forward;
		float                          _;
	} params = {};

	params.Forward = Forward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UpdateTeam
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::UpdateTeam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UpdateTeam"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__NewTrack_1__EventFunc
// (FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::Timeline_0__NewTrack_1__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__NewTrack_1__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakablePaviseShield_C::OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BreakablePaviseShield_C::BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature"));

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


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.KilledFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BreakablePaviseShield_C::KilledFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.KilledFx"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakablePaviseShield_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature"));

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


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ApplyFFAMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface> Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_BreakablePaviseShield_C::ApplyFFAMaterial(TSoftObjectPtr<class UMaterialInterface> Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ApplyFFAMaterial"));

	struct
	{
		TSoftObjectPtr<class UMaterialInterface> Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ForceBrokenState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::ForceBrokenState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ForceBrokenState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ResetLifespanTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::ResetLifespanTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ResetLifespanTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.DestroySelf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakablePaviseShield_C::DestroySelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.DestroySelf"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ExecuteUbergraph_BP_BreakablePaviseShield
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakablePaviseShield_C::ExecuteUbergraph_BP_BreakablePaviseShield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ExecuteUbergraph_BP_BreakablePaviseShield"));

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
