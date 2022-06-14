// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchmakingStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchmakingStatus.MatchmakingStatus_C.GetMatchmakingTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeInt                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TimeText                       (CPF_Parm, CPF_OutParm)

void UMatchmakingStatus_C::GetMatchmakingTime(int* TimeInt, struct FText* TimeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.GetMatchmakingTime"));

	struct
	{
		int                            TimeInt;
		struct FText                   TimeText;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeInt != nullptr)
		*TimeInt = params.TimeInt;
	if (TimeText != nullptr)
		*TimeText = params.TimeText;
}


// Function MatchmakingStatus.MatchmakingStatus_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMatchmakingStatus_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MatchmakingStatus.MatchmakingStatus_C.Handle Started or Stopped Matchmaking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Matchmaking                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchmakingStatus_C::Handle_Started_or_Stopped_Matchmaking(bool Is_Matchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.Handle Started or Stopped Matchmaking"));

	struct
	{
		bool                           Is_Matchmaking;
	} params = {};

	params.Is_Matchmaking = Is_Matchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.On Is Matchmaking Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsMatchmaking                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchmakingStatus_C::On_Is_Matchmaking_Changed(bool bIsMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.On Is Matchmaking Changed"));

	struct
	{
		bool                           bIsMatchmaking;
	} params = {};

	params.bIsMatchmaking = bIsMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::MatchmakingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::MatchmakingStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.CancelMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::CancelMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.CancelMatchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.HighlightMatchMaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::HighlightMatchMaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.HighlightMatchMaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.UnhighlightMatchMaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::UnhighlightMatchMaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.UnhighlightMatchMaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchmakingStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.Tick"));

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


// Function MatchmakingStatus.MatchmakingStatus_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.OnPartyLeftQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::OnPartyLeftQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.OnPartyLeftQueue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.OnPartyJoinedQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::OnPartyJoinedQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.OnPartyJoinedQueue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMatchmakingStatus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.EnableMatchmakingWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchmakingStatus_C::EnableMatchmakingWidget(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.EnableMatchmakingWidget"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchmakingStatus.MatchmakingStatus_C.ExecuteUbergraph_MatchmakingStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchmakingStatus_C::ExecuteUbergraph_MatchmakingStatus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchmakingStatus.MatchmakingStatus_C.ExecuteUbergraph_MatchmakingStatus"));

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
