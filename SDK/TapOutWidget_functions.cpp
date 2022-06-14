// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TapOutWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TapOutWidget.TapOutWidget_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTapOutWidget_C::SetProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.SetProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.SetEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTapOutWidget_C::SetEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.SetEnabled"));

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


// Function TapOutWidget.TapOutWidget_C.ShowWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTapOutWidget_C::ShowWidget(EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.ShowWidget"));

	struct
	{
		EConditionType                 Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.ShowGetUpState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanGetUp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTapOutWidget_C::ShowGetUpState(bool CanGetUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.ShowGetUpState"));

	struct
	{
		bool                           CanGetUp;
	} params = {};

	params.CanGetUp = CanGetUp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTapOutWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTapOutWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.Tick"));

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


// Function TapOutWidget.TapOutWidget_C.HighlightDeathIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanGetUp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTapOutWidget_C::HighlightDeathIcon(bool CanGetUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.HighlightDeathIcon"));

	struct
	{
		bool                           CanGetUp;
	} params = {};

	params.CanGetUp = CanGetUp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.HighlightGetUpIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanGetUp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTapOutWidget_C::HighlightGetUpIcon(bool CanGetUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.HighlightGetUpIcon"));

	struct
	{
		bool                           CanGetUp;
	} params = {};

	params.CanGetUp = CanGetUp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.Handle Gamepad Input Mode Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTapOutWidget_C::Handle_Gamepad_Input_Mode_Changed(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.Handle Gamepad Input Mode Changed"));

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


// Function TapOutWidget.TapOutWidget_C.HideWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTapOutWidget_C::HideWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.HideWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.On Being Revived By Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           ThisCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         BeingRevivedBy                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTapOutWidget_C::On_Being_Revived_By_Changed(class ATBLCharacter* ThisCharacter, class ATBLPlayerState* BeingRevivedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.On Being Revived By Changed"));

	struct
	{
		class ATBLCharacter*           ThisCharacter;
		class ATBLPlayerState*         BeingRevivedBy;
	} params = {};

	params.ThisCharacter = ThisCharacter;
	params.BeingRevivedBy = BeingRevivedBy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.UpdateInputMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTapOutWidget_C::UpdateInputMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.UpdateInputMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TapOutWidget.TapOutWidget_C.ExecuteUbergraph_TapOutWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTapOutWidget_C::ExecuteUbergraph_TapOutWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.ExecuteUbergraph_TapOutWidget"));

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


// Function TapOutWidget.TapOutWidget_C.IsBeingRevived__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTapOutWidget_C::IsBeingRevived__DelegateSignature(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TapOutWidget.TapOutWidget_C.IsBeingRevived__DelegateSignature"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
