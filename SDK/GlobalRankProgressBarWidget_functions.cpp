// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GlobalRankProgressBarWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.GetStartingRatio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UProgressBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Ratio                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalRankProgressBarWidget_C::GetStartingRatio(class UProgressBar* Bar, int Index, float* Ratio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.GetStartingRatio"));

	struct
	{
		class UProgressBar*            Bar;
		int                            Index;
		float                          Ratio;
	} params = {};

	params.Bar = Bar;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.SetLevelData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::SetLevelData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.SetLevelData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalRankProgressBarWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Tick"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsStatValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalRankProgressBarWidget_C::OnlineStatsStatValueChanged(EOnlineStat Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsStatValueChanged"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Start Animating
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::Start_Animating()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Start Animating"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.On Progress Bar Filled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::On_Progress_Bar_Filled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.On Progress Bar Filled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Inital Values
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::Set_Inital_Values()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Inital Values"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Data
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::Set_Data()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Data"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLoaded                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGlobalRankProgressBarWidget_C::OnStatsLogin(bool bIsLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsLogin"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTBLOnlineStats         OnlineStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGlobalRankProgressBarWidget_C::OnStatsUpdated(const struct FTBLOnlineStats& OnlineStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsUpdated"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Bind Delegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::Bind_Delegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Bind Delegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsOriginalValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalRankProgressBarWidget_C::OnlineStatsOriginalValueChanged(EOnlineStat Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsOriginalValueChanged"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.ExecuteUbergraph_GlobalRankProgressBarWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalRankProgressBarWidget_C::ExecuteUbergraph_GlobalRankProgressBarWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.ExecuteUbergraph_GlobalRankProgressBarWidget"));

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


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnProgressCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::OnProgressCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnProgressCompleted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnLeveledUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalRankProgressBarWidget_C::OnLeveledUp__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnLeveledUp__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
