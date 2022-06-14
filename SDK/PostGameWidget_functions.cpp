// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameWidget.PostGameWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPostGameWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnKeyUp"));

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


// Function PostGameWidget.PostGameWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPostGameWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnKeyDown"));

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


// Function PostGameWidget.PostGameWidget_C.Update Widget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::Update_Widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.Update Widget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.OnMatchEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::OnMatchEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnMatchEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.OnlineStatsStatValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_C::OnlineStatsStatValueChanged(EOnlineStat Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnlineStatsStatValueChanged"));

	struct
	{
		EOnlineStat                    Stat;
	} params = {};

	params.Stat = Stat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.OnStatsLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLoaded                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostGameWidget_C::OnStatsLogin(bool bIsLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnStatsLogin"));

	struct
	{
		bool                           bIsLoaded;
	} params = {};

	params.bIsLoaded = bIsLoaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.OnStatsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTBLOnlineStats         OnlineStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPostGameWidget_C::OnStatsUpdated(const struct FTBLOnlineStats& OnlineStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnStatsUpdated"));

	struct
	{
		struct FTBLOnlineStats         OnlineStats;
	} params = {};

	params.OnlineStats = OnlineStats;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.Bind Delegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::Bind_Delegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.Bind Delegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.OnlineStatsOriginalValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_C::OnlineStatsOriginalValueChanged(EOnlineStat Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.OnlineStatsOriginalValueChanged"));

	struct
	{
		EOnlineStat                    Stat;
	} params = {};

	params.Stat = Stat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_0_OnLeveledUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UPostGameWidget_C::BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_0_OnLeveledUp__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_0_OnLeveledUp__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.FadeInComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::FadeInComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.FadeInComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_1_OnProgressCompleted__DelegateSignature
// (FUNC_BlueprintEvent)

void UPostGameWidget_C::BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_1_OnProgressCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.BndEvt__ProgressionProfileWidget_K2Node_ComponentBoundEvent_1_OnProgressCompleted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.PlayerListOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::PlayerListOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.PlayerListOpened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.PlayerListClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameWidget_C::PlayerListClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.PlayerListClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget.PostGameWidget_C.ExecuteUbergraph_PostGameWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_C::ExecuteUbergraph_PostGameWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget.PostGameWidget_C.ExecuteUbergraph_PostGameWidget"));

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
