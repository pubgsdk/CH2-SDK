// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PinnedInteractableWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PinnedInteractableWidget.PinnedInteractableWidget_C.GetFadeOutAnimTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UPinnedInteractableWidget_C::GetFadeOutAnimTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.GetFadeOutAnimTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.HighlightActor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPinnedInteractableWidget_C::HighlightActor(class AActor* Actor, bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.HighlightActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           Enable;
	} params = {};

	params.Actor = Actor;
	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.CanFadeOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPinnedInteractableWidget_C::CanFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CanFadeOut"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetInteractionDescription
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::SetInteractionDescription(class UInteractableComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetInteractionDescription"));

	struct
	{
		class UInteractableComponent*  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::SetProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.Tick"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnUse(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUse"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.Use Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          UseTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::Use_Released(class APawn* Pawn, float UseTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.Use Released"));

	struct
	{
		class APawn*                   Pawn;
		float                          UseTime;
	} params = {};

	params.Pawn = Pawn;
	params.UseTime = UseTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnInteractableLostFocus_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus_Event_1"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseHeldInitiated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnUseHeldInitiated_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseHeldInitiated_Event_1"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableEnabled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPinnedInteractableWidget_C::OnInteractableEnabled_Event_1(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableEnabled_Event_1"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationStarted"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractbleFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnInteractbleFocus(class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractbleFocus"));

	struct
	{
		class UInteractableComponent*  Interactable;
	} params = {};

	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::OnInteractableLostFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.On Assigned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::On_Assigned(class AActor* Actor, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.On Assigned"));

	struct
	{
		class AActor*                  Actor;
		class UInteractableComponent*  Interactable;
	} params = {};

	params.Actor = Actor;
	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.InitializeHealthBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Comp                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::InitializeHealthBar(class UInteractableComponent* Comp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.InitializeHealthBar"));

	struct
	{
		class UInteractableComponent*  Comp;
	} params = {};

	params.Comp = Comp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOutUsableOverlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::FadeOutUsableOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOutUsableOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeInUsableOverlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::FadeInUsableOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeInUsableOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::CustomEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPinnedInteractableWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UPinnedInteractableWidget_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnKilled_Event_1"));

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


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseableActorFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::OnUseableActorFocused(class UInteractableComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseableActorFocused"));

	struct
	{
		class UInteractableComponent*  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedInteractableWidget.PinnedInteractableWidget_C.ExecuteUbergraph_PinnedInteractableWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedInteractableWidget_C::ExecuteUbergraph_PinnedInteractableWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedInteractableWidget.PinnedInteractableWidget_C.ExecuteUbergraph_PinnedInteractableWidget"));

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
