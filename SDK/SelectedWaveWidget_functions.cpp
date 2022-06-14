// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SelectedWaveWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SelectedWaveWidget.SelectedWaveWidget_C.Get seconds to deploy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Seconds_as_text                (CPF_Parm, CPF_OutParm)
// int                            Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::Get_seconds_to_deploy(struct FText* Seconds_as_text, int* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Get seconds to deploy"));

	struct
	{
		struct FText                   Seconds_as_text;
		int                            Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds_as_text != nullptr)
		*Seconds_as_text = params.Seconds_as_text;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Set Spawn Wave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              In_Spawn_Wave                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::Set_Spawn_Wave(class ASpawnWave* In_Spawn_Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Set Spawn Wave"));

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


// Function SelectedWaveWidget.SelectedWaveWidget_C.ShowWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::ShowWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.ShowWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.HideWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::HideWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.HideWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.InvalidateCache
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::InvalidateCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.InvalidateCache"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void USelectedWaveWidget_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void USelectedWaveWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Current Stage Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 New_Stage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::Current_Stage_Changed(class UObject* Previous_Stage, class UObject* New_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Current Stage Changed"));

	struct
	{
		class UObject*                 Previous_Stage;
		class UObject*                 New_Stage;
	} params = {};

	params.Previous_Stage = Previous_Stage;
	params.New_Stage = New_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Client Tickets Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::Client_Tickets_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Client Tickets Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Tick"));

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


// Function SelectedWaveWidget.SelectedWaveWidget_C.HandlePlayerSelectedSpectatorMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlayerSpectator              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USelectedWaveWidget_C::HandlePlayerSelectedSpectatorMode(bool IsPlayerSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.HandlePlayerSelectedSpectatorMode"));

	struct
	{
		bool                           IsPlayerSpectator;
	} params = {};

	params.IsPlayerSpectator = IsPlayerSpectator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.ExecuteUbergraph_SelectedWaveWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::ExecuteUbergraph_SelectedWaveWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.ExecuteUbergraph_SelectedWaveWidget"));

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


// Function SelectedWaveWidget.SelectedWaveWidget_C.ChangeLoadout__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelectedWaveWidget_C::ChangeLoadout__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.ChangeLoadout__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SelectedWaveWidget.SelectedWaveWidget_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USelectedWaveWidget_C::Clicked__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Clicked__DelegateSignature"));

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


// Function SelectedWaveWidget.SelectedWaveWidget_C.Hovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USelectedWaveWidget_C::Hovered__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SelectedWaveWidget.SelectedWaveWidget_C.Hovered__DelegateSignature"));

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
