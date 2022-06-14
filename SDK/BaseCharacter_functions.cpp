// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCharacter.BaseCharacter_C.DisableOutOfCombatPostProcess
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::DisableOutOfCombatPostProcess(bool bEnabled, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.DisableOutOfCombatPostProcess"));

	struct
	{
		bool                           bEnabled;
		class APlayerController*       PlayerController;
	} params = {};

	params.bEnabled = bEnabled;
	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.ToggleOutOfCombatPostProcess
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCharacter_C::ToggleOutOfCombatPostProcess(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.ToggleOutOfCombatPostProcess"));

	struct
	{
		bool                           bEnabled;
	} params = {};

	params.bEnabled = bEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.SetGameTimeOnMeshComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>  MeshComponents                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::SetGameTimeOnMeshComponents(TArray<class UMeshComponent*>* MeshComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.SetGameTimeOnMeshComponents"));

	struct
	{
		TArray<class UMeshComponent*>  MeshComponents;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MeshComponents != nullptr)
		*MeshComponents = params.MeshComponents;
}


// Function BaseCharacter.BaseCharacter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.Set master pose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::Set_master_pose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.Set master pose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.InitAltWeightsState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::InitAltWeightsState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.InitAltWeightsState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.OnCustomized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseCharacter_C::OnCustomized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.OnCustomized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.SetSpawnTime Material Parameter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::SetSpawnTime_Material_Parameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.SetSpawnTime Material Parameter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.OnInitializeAltWeightsState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseCharacter_C::OnInitializeAltWeightsState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.OnInitializeAltWeightsState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.K2_OnBecomeViewTarget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.K2_OnBecomeViewTarget"));

	struct
	{
		class APlayerController*       PC;
	} params = {};

	params.PC = PC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.K2_OnEndViewTarget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.K2_OnEndViewTarget"));

	struct
	{
		class APlayerController*       PC;
	} params = {};

	params.PC = PC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.OnApplyCondition_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::OnApplyCondition_Event(class AActor* Actor, EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.OnApplyCondition_Event"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.OnRemoveCondition_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::OnRemoveCondition_Event(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.OnRemoveCondition_Event"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
		class AActor*                  ConditionRemover;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;
	params.ConditionRemover = ConditionRemover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.Customize bot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::Customize_bot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.Customize bot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.TEMP Customize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::TEMP_Customize(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.TEMP Customize"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABaseCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCharacter.BaseCharacter_C.ExecuteUbergraph_BaseCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCharacter_C::ExecuteUbergraph_BaseCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.ExecuteUbergraph_BaseCharacter"));

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


// Function BaseCharacter.BaseCharacter_C.OnCustomized_animBP__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCharacter_C::OnCustomized_animBP__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCharacter.BaseCharacter_C.OnCustomized_animBP__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
