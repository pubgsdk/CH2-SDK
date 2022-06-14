// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ObjectiveStatusMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.UpdateHudMarkerInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::UpdateHudMarkerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.UpdateHudMarkerInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.HasObjectiveStatusChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHudMarkerDisplayComponent* HUDMarkerComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveStatusMarker_C::HasObjectiveStatusChanged(class UHudMarkerDisplayComponent* HUDMarkerComponent, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.HasObjectiveStatusChanged"));

	struct
	{
		class UHudMarkerDisplayComponent* HUDMarkerComponent;
		bool                           Return_Value;
	} params = {};

	params.HUDMarkerComponent = HUDMarkerComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.Tick"));

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


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.Update Objective Status
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceUpdate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveStatusMarker_C::Update_Objective_Status(bool ForceUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.Update Objective Status"));

	struct
	{
		bool                           ForceUpdate;
	} params = {};

	params.ForceUpdate = ForceUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnPinned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnPinned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnPinned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnPinned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnUnPinned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnPinned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnReturnedToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnReturnedToPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnReturnedToPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnAssignedToActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnAssignedToActor"));

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


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnHovered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnHovered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnUnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnClamped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnUnClamped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnUnClamped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnClamped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::K2_OnClamped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.K2_OnClamped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveStatusMarker_C::OnVisibilityChanged(bool bNewVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnVisibilityChanged"));

	struct
	{
		bool                           bNewVisibility;
	} params = {};

	params.bNewVisibility = bNewVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnReceivedWidgetVisibilityComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetVisibilityComponent* VisibilityComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::OnReceivedWidgetVisibilityComponent(class UWidgetVisibilityComponent* VisibilityComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnReceivedWidgetVisibilityComponent"));

	struct
	{
		class UWidgetVisibilityComponent* VisibilityComponent;
	} params = {};

	params.VisibilityComponent = VisibilityComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.FadeCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveStatusMarker_C::FadeCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.FadeCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnObjectiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EObjectiveState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::OnObjectiveState(EObjectiveState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnObjectiveState"));

	struct
	{
		EObjectiveState                NewState;
	} params = {};

	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveObjectiveStatusComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjectiveStatusDisplayComponent* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::ReceiveObjectiveStatusComponent(class UObjectiveStatusDisplayComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveObjectiveStatusComponent"));

	struct
	{
		class UObjectiveStatusDisplayComponent* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveHUDMarkerComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHudMarkerDisplayComponent* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::ReceiveHUDMarkerComponent(class UHudMarkerDisplayComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveHUDMarkerComponent"));

	struct
	{
		class UHudMarkerDisplayComponent* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveActorInfoComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorInfoDisplayComponent* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::ReceiveActorInfoComponent(class UActorInfoDisplayComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ReceiveActorInfoComponent"));

	struct
	{
		class UActorInfoDisplayComponent* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnProgressChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewProgress                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::OnProgressChanged(float NewProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.OnProgressChanged"));

	struct
	{
		float                          NewProgress;
	} params = {};

	params.NewProgress = NewProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ExecuteUbergraph_ObjectiveStatusMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveStatusMarker_C::ExecuteUbergraph_ObjectiveStatusMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveStatusMarker.ObjectiveStatusMarker_C.ExecuteUbergraph_ObjectiveStatusMarker"));

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
