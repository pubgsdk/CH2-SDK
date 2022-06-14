// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpawnMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnMarker.SpawnMarker_C.Get_PlayersTexT_Deploying
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USpawnMarker_C::Get_PlayersTexT_Deploying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Get_PlayersTexT_Deploying"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpawnMarker.SpawnMarker_C.Get_PlayersText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USpawnMarker_C::Get_PlayersText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Get_PlayersText_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpawnMarker.SpawnMarker_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility USpawnMarker_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.GetVisibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpawnMarker.SpawnMarker_C.Get_DeployingInText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USpawnMarker_C::Get_DeployingInText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Get_DeployingInText_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpawnMarker.SpawnMarker_C.SetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESpawnMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::SetState(TEnumAsByte<ESpawnMarkerState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.SetState"));

	struct
	{
		TEnumAsByte<ESpawnMarkerState> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.ApplyStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESpawnMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::ApplyStyle(TEnumAsByte<ESpawnMarkerState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.ApplyStyle"));

	struct
	{
		TEnumAsByte<ESpawnMarkerState> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USpawnMarker_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.ForceHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawnMarker_C::ForceHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.ForceHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.ForceUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawnMarker_C::ForceUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.ForceUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USpawnMarker_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpawnMarker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.On Started Wave Hover_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::On_Started_Wave_Hover_Event_1(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.On Started Wave Hover_Event_1"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.On Ended Wave Hover_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::On_Ended_Wave_Hover_Event_1(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.On Ended Wave Hover_Event_1"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpawnMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.K2_OnAssignedToActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.K2_OnAssignedToActor"));

	struct
	{
		class AActor*                  Actor;
		class UActorComponent*         Component;
	} params = {};

	params.Actor = Actor;
	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.K2_OnReturnedToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpawnMarker_C::K2_OnReturnedToPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.K2_OnReturnedToPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USpawnMarker_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.WidgetAnimationEvt_DeployingStartAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void USpawnMarker_C::WidgetAnimationEvt_DeployingStartAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.WidgetAnimationEvt_DeployingStartAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawnMarker.SpawnMarker_C.ExecuteUbergraph_SpawnMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawnMarker_C::ExecuteUbergraph_SpawnMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.ExecuteUbergraph_SpawnMarker"));

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


// Function SpawnMarker.SpawnMarker_C.Hovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpawnMarker_C::Hovered__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawnMarker.SpawnMarker_C.Hovered__DelegateSignature"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
