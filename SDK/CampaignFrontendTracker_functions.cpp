// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CampaignFrontendTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CampaignFrontendTracker.CampaignFrontendTracker_C.SetAllCompleteState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCampaignFrontendTracker_C::SetAllCompleteState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.SetAllCompleteState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCampaignFrontendTracker_C::UpdateProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.UpdateProgress"));

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


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.Setup
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> Background                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ExpUntilLevelUp                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FQuestCriteriaEntryData> Criterias                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TEnumAsByte<EQuestTrackerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCampaignFrontendTracker_C::Setup(const struct FText& Name, TSoftObjectPtr<class UTexture2D> Icon, TSoftObjectPtr<class UTexture2D> Background, int Level, float Progress, int MaxLevel, int ExpUntilLevelUp, TEnumAsByte<EQuestTrackerState> State, TArray<struct FQuestCriteriaEntryData>* Criterias)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.Setup"));

	struct
	{
		struct FText                   Name;
		TSoftObjectPtr<class UTexture2D> Icon;
		TSoftObjectPtr<class UTexture2D> Background;
		int                            Level;
		float                          Progress;
		int                            MaxLevel;
		int                            ExpUntilLevelUp;
		TArray<struct FQuestCriteriaEntryData> Criterias;
		TEnumAsByte<EQuestTrackerState> State;
	} params = {};

	params.Name = Name;
	params.Icon = Icon;
	params.Background = Background;
	params.Level = Level;
	params.Progress = Progress;
	params.MaxLevel = MaxLevel;
	params.ExpUntilLevelUp = ExpUntilLevelUp;
	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Criterias != nullptr)
		*Criterias = params.Criterias;
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCampaignFrontendTracker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.PreConstruct"));

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


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCampaignFrontendTracker_C::BndEvt__Button_80_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCampaignFrontendTracker_C::BndEvt__Button_80_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCampaignFrontendTracker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCampaignFrontendTracker_C::BndEvt__Button_80_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.BndEvt__Button_80_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CampaignFrontendTracker.CampaignFrontendTracker_C.ExecuteUbergraph_CampaignFrontendTracker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCampaignFrontendTracker_C::ExecuteUbergraph_CampaignFrontendTracker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CampaignFrontendTracker.CampaignFrontendTracker_C.ExecuteUbergraph_CampaignFrontendTracker"));

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
