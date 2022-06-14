// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ForwardSpawnWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForwardSpawnWidget.ForwardSpawnWidget_C.IsOwningPlayerInSpawnWave
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UForwardSpawnWidget_C::IsOwningPlayerInSpawnWave()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.IsOwningPlayerInSpawnWave"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetMaxPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            MaxPlayerCount                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::GetMaxPlayers(int* MaxPlayerCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetMaxPlayers"));

	struct
	{
		int                            MaxPlayerCount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaxPlayerCount != nullptr)
		*MaxPlayerCount = params.MaxPlayerCount;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetSpawnWaveIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::SetSpawnWaveIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetSpawnWaveIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Can Horse Spawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanSpawn                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::Can_Horse_Spawn(bool* CanSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Can Horse Spawn"));

	struct
	{
		bool                           CanSpawn;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Does Prompt Meet Auto Spawn Requirements
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::Does_Prompt_Meet_Auto_Spawn_Requirements(class ASpawnWave* Wave, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Does Prompt Meet Auto Spawn Requirements"));

	struct
	{
		class ASpawnWave*              Wave;
		bool                           IsValid;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Does Prompt Meet Post Death Requirements
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::Does_Prompt_Meet_Post_Death_Requirements(class ASpawnWave* Wave, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Does Prompt Meet Post Death Requirements"));

	struct
	{
		class ASpawnWave*              Wave;
		bool                           IsValid;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.UpdateForcedSpawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bForced                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::UpdateForcedSpawn(bool bForced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.UpdateForcedSpawn"));

	struct
	{
		bool                           bForced;
	} params = {};

	params.bForced = bForced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetRejectInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RejectInput                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::SetRejectInput(const struct FName& RejectInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetRejectInput"));

	struct
	{
		struct FName                   RejectInput;
	} params = {};

	params.RejectInput = RejectInput;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetAcceptInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AcceptInput                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::SetAcceptInput(const struct FName& AcceptInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetAcceptInput"));

	struct
	{
		struct FName                   AcceptInput;
	} params = {};

	params.AcceptInput = AcceptInput;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetInputVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::SetInputVisibility(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetInputVisibility"));

	struct
	{
		bool                           IsVisible;
	} params = {};

	params.IsVisible = IsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Playing State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EWaveWidgetPlayingState> New_Playing_State              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Changed_                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::Set_Playing_State(TEnumAsByte<EWaveWidgetPlayingState> New_Playing_State, bool* Changed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Playing State"));

	struct
	{
		TEnumAsByte<EWaveWidgetPlayingState> New_Playing_State;
		bool                           Changed_;
	} params = {};

	params.New_Playing_State = New_Playing_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Changed_ != nullptr)
		*Changed_ = params.Changed_;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get seconds to deploy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   SecondsText                    (CPF_Parm, CPF_OutParm)

void UForwardSpawnWidget_C::Get_seconds_to_deploy(int* Seconds, struct FText* SecondsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get seconds to deploy"));

	struct
	{
		int                            Seconds;
		struct FText                   SecondsText;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (SecondsText != nullptr)
		*SecondsText = params.SecondsText;
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.ApplyStateStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::ApplyStateStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.ApplyStateStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinOverlay_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UForwardSpawnWidget_C::Get_JoinOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinOverlay_Visibility_1"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinedOverlay_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UForwardSpawnWidget_C::Get_JoinedOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinedOverlay_Visibility_1"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UForwardSpawnWidget_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetVisibility_1"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Spawn Wave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              In_Spawn_Wave                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::Set_Spawn_Wave(class ASpawnWave* In_Spawn_Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Spawn Wave"));

	struct
	{
		class ASpawnWave*              In_Spawn_Wave;
	} params = {};

	params.In_Spawn_Wave = In_Spawn_Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.PreConstruct"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Tick"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnAssignedToActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnAssignedToActor"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnReturnedToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::K2_OnReturnedToPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnReturnedToPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Handle Accept
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Handle_Accept()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Handle Accept"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start hide timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Start_hide_timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start hide timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Start_fade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start fade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Cinematic Mode Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Cinematic Mode Changed"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> New_Mode;
	} params = {};

	params.New_Mode = New_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationStarted"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationFinished"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetPromptMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerPromptFormattedMessage Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            MessageId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::SetPromptMessage(const struct FPlayerPromptFormattedMessage& Message, int MessageId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetPromptMessage"));

	struct
	{
		struct FPlayerPromptFormattedMessage Message;
		int                            MessageId;
	} params = {};

	params.Message = Message;
	params.MessageId = MessageId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.PromptFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::PromptFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.PromptFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleReject
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::HandleReject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleReject"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleNoLongerOutOfCombat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::HandleNoLongerOutOfCombat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleNoLongerOutOfCombat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnClientPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::OnClientPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnClientPossessedPawn"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnRemoveCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::OnRemoveCondition(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnRemoveCondition"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.EnableInputs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::EnableInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.EnableInputs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.DisableInputs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::DisableInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.DisableInputs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Accept Key pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Accept_Key_pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Accept Key pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Reject Input Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnWidget_C::Reject_Input_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Reject Input Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.InputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::InputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.InputModeChanged"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnWaveFilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::OnWaveFilled(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnWaveFilled"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.ExecuteUbergraph_ForwardSpawnWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::ExecuteUbergraph_ForwardSpawnWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.ExecuteUbergraph_ForwardSpawnWidget"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnWidget_C::Clicked__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Clicked__DelegateSignature"));

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


// Function ForwardSpawnWidget.ForwardSpawnWidget_C.Hovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UForwardSpawnWidget_C::Hovered__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Hovered__DelegateSignature"));

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
