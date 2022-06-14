// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Objective_Time_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective_Time.Objective_Time_C.ResetWarnings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::ResetWarnings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.ResetWarnings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.Set Time Component From Stage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjective_Time_C::Set_Time_Component_From_Stage(class AActor* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.Set Time Component From Stage"));

	struct
	{
		class AActor*                  Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.Get_StageTimeRemaining_Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
// float                          TimeSeconds                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FText UObjective_Time_C::Get_StageTimeRemaining_Text(float* TimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.Get_StageTimeRemaining_Text"));

	struct
	{
		struct FText                   ReturnValue;
		float                          TimeSeconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeSeconds != nullptr)
		*TimeSeconds = params.TimeSeconds;

	return params.ReturnValue;
}


// Function Objective_Time.Objective_Time_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjective_Time_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.OnBonusTimeAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BonusTimeSeconds               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjective_Time_C::OnBonusTimeAdded(float BonusTimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.OnBonusTimeAdded"));

	struct
	{
		float                          BonusTimeSeconds;
	} params = {};

	params.BonusTimeSeconds = BonusTimeSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.Update Game Time
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::Update_Game_Time()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.Update Game Time"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.FadeTimeWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjective_Time_C::FadeTimeWarning(float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.FadeTimeWarning"));

	struct
	{
		float                          Delay;
	} params = {};

	params.Delay = Delay;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.HideTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::HideTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.HideTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.SetCustomTimeLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeLeft                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjective_Time_C::SetCustomTimeLeft(float TimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.SetCustomTimeLeft"));

	struct
	{
		float                          TimeLeft;
	} params = {};

	params.TimeLeft = TimeLeft;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.UpdateCustomTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::UpdateCustomTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.UpdateCustomTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.SetTimeText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UObjective_Time_C::SetTimeText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.SetTimeText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.SetWaveArenaMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjective_Time_C::SetWaveArenaMode(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.SetWaveArenaMode"));

	struct
	{
		bool                           bEnabled;
	} params = {};

	params.bEnabled = bEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.ShowTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::ShowTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.ShowTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjective_Time_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.OnMatchEnded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_Time_C::OnMatchEnded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.OnMatchEnded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Objective_Time.Objective_Time_C.ExecuteUbergraph_Objective_Time
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjective_Time_C::ExecuteUbergraph_Objective_Time(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Objective_Time.Objective_Time_C.ExecuteUbergraph_Objective_Time"));

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
