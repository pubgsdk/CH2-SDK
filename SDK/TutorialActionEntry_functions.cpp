// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialActionEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialActionEntry.TutorialActionEntry_C.InputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::InputModeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.InputModeChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.UpdateCallout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionEntry_C::UpdateCallout(EGamepadInputMode InputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.UpdateCallout"));

	struct
	{
		EGamepadInputMode              InputMode;
	} params = {};

	params.InputMode = InputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.ClearEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::ClearEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.ClearEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.UpdateCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewCount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionEntry_C::UpdateCount(int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.UpdateCount"));

	struct
	{
		int                            NewCount;
	} params = {};

	params.NewCount = NewCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.InitNewEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewEntryText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ControllerEntryText            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryKeyboardCallout           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryControllerCallout         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   EntryDesc                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            NewMaxCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionEntry_C::InitNewEntry(const struct FString& NewEntryText, const struct FString& ControllerEntryText, const struct FString& EntryKeyboardCallout, const struct FString& EntryControllerCallout, const struct FText& EntryDesc, int NewMaxCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.InitNewEntry"));

	struct
	{
		struct FString                 NewEntryText;
		struct FString                 ControllerEntryText;
		struct FString                 EntryKeyboardCallout;
		struct FString                 EntryControllerCallout;
		struct FText                   EntryDesc;
		int                            NewMaxCount;
	} params = {};

	params.NewEntryText = NewEntryText;
	params.ControllerEntryText = ControllerEntryText;
	params.EntryKeyboardCallout = EntryKeyboardCallout;
	params.EntryControllerCallout = EntryControllerCallout;
	params.EntryDesc = EntryDesc;
	params.NewMaxCount = NewMaxCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.FadeInEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::FadeInEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.FadeInEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.GamePadInputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionEntry_C::GamePadInputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.GamePadInputModeChanged"));

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


// Function TutorialActionEntry.TutorialActionEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTutorialActionEntry_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.PlayProgressTickAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::PlayProgressTickAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.PlayProgressTickAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.PlayChallengeCompleteAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionEntry_C::PlayChallengeCompleteAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.PlayChallengeCompleteAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionEntry.TutorialActionEntry_C.ExecuteUbergraph_TutorialActionEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionEntry_C::ExecuteUbergraph_TutorialActionEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionEntry.TutorialActionEntry_C.ExecuteUbergraph_TutorialActionEntry"));

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
