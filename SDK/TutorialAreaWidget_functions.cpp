// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialAreaWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialAreaWidget.TutorialAreaWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateTitleText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::UpdateTitleText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateTitleText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateEntryCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            NewCount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialAreaWidget_C::UpdateEntryCount(const struct FString& EntryText, int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateEntryCount"));

	struct
	{
		struct FString                 EntryText;
		int                            NewCount;
	} params = {};

	params.EntryText = EntryText;
	params.NewCount = NewCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.AddActionEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ControllerEntryText            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryKeyboardCallout           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryControllerCallout         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   EntryDesc                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            EntryMaxCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialAreaWidget_C::AddActionEntry(const struct FString& EntryText, const struct FString& ControllerEntryText, const struct FString& EntryKeyboardCallout, const struct FString& EntryControllerCallout, const struct FText& EntryDesc, int EntryMaxCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.AddActionEntry"));

	struct
	{
		struct FString                 EntryText;
		struct FString                 ControllerEntryText;
		struct FString                 EntryKeyboardCallout;
		struct FString                 EntryControllerCallout;
		struct FText                   EntryDesc;
		int                            EntryMaxCount;
	} params = {};

	params.EntryText = EntryText;
	params.ControllerEntryText = ControllerEntryText;
	params.EntryKeyboardCallout = EntryKeyboardCallout;
	params.EntryControllerCallout = EntryControllerCallout;
	params.EntryDesc = EntryDesc;
	params.EntryMaxCount = EntryMaxCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.ClearActionList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Fade                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialAreaWidget_C::ClearActionList(bool Fade)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.ClearActionList"));

	struct
	{
		bool                           Fade;
	} params = {};

	params.Fade = Fade;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarrator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NarratorText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTutorialAreaWidget_C::UpdateNarrator(const struct FText& NarratorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarrator"));

	struct
	{
		struct FText                   NarratorText;
	} params = {};

	params.NarratorText = NarratorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarratorText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::UpdateNarratorText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarratorText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialAreaWidget_C::UpdateProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateProgress"));

	struct
	{
		float                          Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateAreaWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   NarratorText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTutorialAreaWidget_C::UpdateAreaWidget(const struct FText& TitleText, const struct FText& NarratorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateAreaWidget"));

	struct
	{
		struct FText                   TitleText;
		struct FText                   NarratorText;
	} params = {};

	params.TitleText = TitleText;
	params.NarratorText = NarratorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.StationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::StationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.StationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::ChallengeReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.ActionFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTutorialAreaWidget_C::ActionFailed(const struct FText& Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.ActionFailed"));

	struct
	{
		struct FText                   Entry;
	} params = {};

	params.Entry = Entry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.FadeInActionList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialAreaWidget_C::FadeInActionList(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.FadeInActionList"));

	struct
	{
		bool                           In;
	} params = {};

	params.In = In;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::ChallengeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.AttemptFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialAreaWidget_C::AttemptFade(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.AttemptFade"));

	struct
	{
		bool                           In;
	} params = {};

	params.In = In;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.OnTutorialComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialAreaWidget_C::OnTutorialComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.OnTutorialComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialAreaWidget.TutorialAreaWidget_C.ExecuteUbergraph_TutorialAreaWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialAreaWidget_C::ExecuteUbergraph_TutorialAreaWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialAreaWidget.TutorialAreaWidget_C.ExecuteUbergraph_TutorialAreaWidget"));

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
