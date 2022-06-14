// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamemodeProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamemodeProgressBar.GamemodeProgressBar_C.GetProgressPercentageText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UGamemodeProgressBar_C::GetProgressPercentageText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.GetProgressPercentageText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.ApplyState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamemodeProgressBar_C::ApplyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.ApplyState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::SetProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.SetProgress"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.PreConstruct"));

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


// Function GamemodeProgressBar.GamemodeProgressBar_C.Update Parameters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjectiveMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjMarkerTeam>    Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Show_Progress                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Objective_Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ShowIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UMaterialInstance*       MaterialInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::Update_Parameters(float Progress, TEnumAsByte<EObjectiveMarkerState> State, TEnumAsByte<EObjMarkerTeam> Team, bool Show_Progress, const struct FText& Objective_Text, bool ShowIcon, class UMaterialInstance* MaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Update Parameters"));

	struct
	{
		float                          Progress;
		TEnumAsByte<EObjectiveMarkerState> State;
		TEnumAsByte<EObjMarkerTeam>    Team;
		bool                           Show_Progress;
		struct FText                   Objective_Text;
		bool                           ShowIcon;
		class UMaterialInstance*       MaterialInstance;
	} params = {};

	params.Progress = Progress;
	params.State = State;
	params.Team = Team;
	params.Show_Progress = Show_Progress;
	params.Objective_Text = Objective_Text;
	params.ShowIcon = ShowIcon;
	params.MaterialInstance = MaterialInstance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.Update Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::Update_Progress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Update Progress"));

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


// Function GamemodeProgressBar.GamemodeProgressBar_C.Update State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::Update_State(TEnumAsByte<EObjectiveMarkerState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Update State"));

	struct
	{
		TEnumAsByte<EObjectiveMarkerState> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjMarkerTeam>    Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AttackingTeam                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeProgressBar_C::Update_Team(TEnumAsByte<EObjMarkerTeam> Team, bool AttackingTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team"));

	struct
	{
		TEnumAsByte<EObjMarkerTeam>    Team;
		bool                           AttackingTeam;
	} params = {};

	params.Team = Team;
	params.AttackingTeam = AttackingTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team From Faction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::Update_Team_From_Faction(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team From Faction"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamemodeProgressBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.PlayScoreGainedAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGamemodeScoreChange> Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::PlayScoreGainedAnim(TEnumAsByte<EGamemodeScoreChange> Change)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.PlayScoreGainedAnim"));

	struct
	{
		TEnumAsByte<EGamemodeScoreChange> Change;
	} params = {};

	params.Change = Change;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationStarted"));

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


// Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationFinished"));

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


// Function GamemodeProgressBar.GamemodeProgressBar_C.PlayHighlightAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamemodeProgressBar_C::PlayHighlightAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.PlayHighlightAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamemodeProgressBar.GamemodeProgressBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.Tick"));

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


// Function GamemodeProgressBar.GamemodeProgressBar_C.ExecuteUbergraph_GamemodeProgressBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeProgressBar_C::ExecuteUbergraph_GamemodeProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeProgressBar.GamemodeProgressBar_C.ExecuteUbergraph_GamemodeProgressBar"));

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
