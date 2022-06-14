// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeObjectiveComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetTimeRemaining
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeSeconds                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::GetTimeRemaining(float* TimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetTimeRemaining"));

	struct
	{
		float                          TimeSeconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeSeconds != nullptr)
		*TimeSeconds = params.TimeSeconds;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Create debug menu widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Debug_menu_widget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Create debug menu widget"));

	struct
	{
		class UUserWidget*             Debug_menu_widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Debug_menu_widget != nullptr)
		*Debug_menu_widget = params.Debug_menu_widget;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetDebugStringInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UTimeObjectiveComponent_C::GetDebugStringInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetDebugStringInfo"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Minutes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Elapsed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Get_Elapsed_Time_Minutes(float* Elapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Minutes"));

	struct
	{
		float                          Elapsed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Elapsed != nullptr)
		*Elapsed = params.Elapsed;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetBonusTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BonusTimeSeconds               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::GetBonusTime(float* BonusTimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetBonusTime"));

	struct
	{
		float                          BonusTimeSeconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BonusTimeSeconds != nullptr)
		*BonusTimeSeconds = params.BonusTimeSeconds;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Seconds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Elapsed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Get_Elapsed_Time_Seconds(float* Elapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Seconds"));

	struct
	{
		float                          Elapsed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Elapsed != nullptr)
		*Elapsed = params.Elapsed;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Time Left
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Time_Left_Seconds              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Get_Time_Left(float* Time_Left_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Time Left"));

	struct
	{
		float                          Time_Left_Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time_Left_Seconds != nullptr)
		*Time_Left_Seconds = params.Time_Left_Seconds;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Take Shared Time
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TimeSharingGroup               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTimespan               SharedTime                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Take_Shared_Time(const struct FName& TimeSharingGroup, struct FTimespan* SharedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Take Shared Time"));

	struct
	{
		struct FName                   TimeSharingGroup;
		struct FTimespan               SharedTime;
	} params = {};

	params.TimeSharingGroup = TimeSharingGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SharedTime != nullptr)
		*SharedTime = params.SharedTime;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Total Duration Seconds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Get_Total_Duration_Seconds(float* Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Total Duration Seconds"));

	struct
	{
		float                          Duration;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Add Bonus Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::Add_Bonus_Time(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Add Bonus Time"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Is Duration Exceeded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Exceeded                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTimeObjectiveComponent_C::Is_Duration_Exceeded(bool* Exceeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Is Duration Exceeded"));

	struct
	{
		bool                           Exceeded;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Exceeded != nullptr)
		*Exceeded = params.Exceeded;
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Duration Exceeded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::PRIVATE_Handle_Duration_Exceeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Duration Exceeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Bonus Duration Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::PRIVATE_Handle_Bonus_Duration_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Bonus Duration Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE (Re)Start Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::PRIVATE__Re_Start_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE (Re)Start Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Add Shared Bonus Time
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::PRIVATE_Add_Shared_Bonus_Time()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Add Shared Bonus Time"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.ExecuteUbergraph_TimeObjectiveComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::ExecuteUbergraph_TimeObjectiveComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ExecuteUbergraph_TimeObjectiveComponent"));

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


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.MinutesRemaining__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MinutesRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveComponent_C::MinutesRemaining__DelegateSignature(int MinutesRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.MinutesRemaining__DelegateSignature"));

	struct
	{
		int                            MinutesRemaining;
	} params = {};

	params.MinutesRemaining = MinutesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeObjectiveComponent.TimeObjectiveComponent_C.On Duration Exceeded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTimeObjectiveComponent_C::On_Duration_Exceeded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveComponent.TimeObjectiveComponent_C.On Duration Exceeded__DelegateSignature"));

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
