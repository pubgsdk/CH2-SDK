// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ObjectiveHudMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectiveHudMarker.ObjectiveHudMarker_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UObjectiveHudMarker_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.GetText_1"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.ApplyState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::ApplyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.ApplyState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::SetProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.SetProgress"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnLoaded_F3AEA3EC4FA00AFAB2AE8AA39999F82C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::OnLoaded_F3AEA3EC4FA00AFAB2AE8AA39999F82C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnLoaded_F3AEA3EC4FA00AFAB2AE8AA39999F82C"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Pin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::Pin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Pin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.UnPin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::UnPin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.UnPin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveHudMarker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.PreConstruct"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Parameters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjectiveMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjMarkerTeam>    Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Show_Progress                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Objective_Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UObjectiveHudMarker_C::Update_Parameters(float Progress, TEnumAsByte<EObjectiveMarkerState> State, TEnumAsByte<EObjMarkerTeam> Team, bool Show_Progress, const struct FText& Objective_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Parameters"));

	struct
	{
		float                          Progress;
		TEnumAsByte<EObjectiveMarkerState> State;
		TEnumAsByte<EObjMarkerTeam>    Team;
		bool                           Show_Progress;
		struct FText                   Objective_Text;
	} params = {};

	params.Progress = Progress;
	params.State = State;
	params.Team = Team;
	params.Show_Progress = Show_Progress;
	params.Objective_Text = Objective_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Icon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              New_Icon_Texture               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::Update_Icon(class UTexture2D* New_Icon_Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Icon"));

	struct
	{
		class UTexture2D*              New_Icon_Texture;
	} params = {};

	params.New_Icon_Texture = New_Icon_Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::Update_Progress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Progress"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveMarkerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::Update_State(TEnumAsByte<EObjectiveMarkerState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update State"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Team
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjMarkerTeam>    Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::Update_Team(TEnumAsByte<EObjMarkerTeam> Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Team"));

	struct
	{
		TEnumAsByte<EObjMarkerTeam>    Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Team From Faction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::Update_Team_From_Faction(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Update Team From Faction"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.EnableProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::EnableProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.EnableProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.EnableProgressBarMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveHudMarker_C::EnableProgressBarMode(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.EnableProgressBarMode"));

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


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateDisplayInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHudMarkerDisplayComponent* New_HUDMarker                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::UpdateDisplayInfo(class UHudMarkerDisplayComponent* New_HUDMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateDisplayInfo"));

	struct
	{
		class UHudMarkerDisplayComponent* New_HUDMarker;
	} params = {};

	params.New_HUDMarker = New_HUDMarker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UObjectiveHudMarker_C::UpdateText(const struct FText& _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateText"));

	struct
	{
		struct FText                   _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::OnTeamChanged(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnTeamChanged"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.CompletionAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::CompletionAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.CompletionAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateDisplayInfoBinding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHudMarkerDisplayComponent* NewHUDMarker                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::UpdateDisplayInfoBinding(class UHudMarkerDisplayComponent* NewHUDMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateDisplayInfoBinding"));

	struct
	{
		class UHudMarkerDisplayComponent* NewHUDMarker;
	} params = {};

	params.NewHUDMarker = NewHUDMarker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnClampedUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveHudMarker_C::OnClampedUpdate(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnClampedUpdate"));

	struct
	{
		bool                           _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnHoveredUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UObjectiveHudMarker_C::OnHoveredUpdate(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnHoveredUpdate"));

	struct
	{
		bool                           _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveHudMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateMarkerType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMarkerType                    Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::UpdateMarkerType(EMarkerType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.UpdateMarkerType"));

	struct
	{
		EMarkerType                    Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnPerTeamDisplayInfoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHudMarkerDisplayComponent* HUDMarkerComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::OnPerTeamDisplayInfoChanged(class UHudMarkerDisplayComponent* HUDMarkerComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.OnPerTeamDisplayInfoChanged"));

	struct
	{
		class UHudMarkerDisplayComponent* HUDMarkerComponent;
	} params = {};

	params.HUDMarkerComponent = HUDMarkerComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ObjectiveHudMarker.ObjectiveHudMarker_C.ExecuteUbergraph_ObjectiveHudMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UObjectiveHudMarker_C::ExecuteUbergraph_ObjectiveHudMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ObjectiveHudMarker.ObjectiveHudMarker_C.ExecuteUbergraph_ObjectiveHudMarker"));

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
