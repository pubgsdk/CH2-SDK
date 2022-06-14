// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestFrontendTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestFrontendTracker.QuestFrontendTracker_C.UpdateCriterias
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FQuestCriteriaEntryData> Criterias                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UQuestFrontendTracker_C::UpdateCriterias(TArray<struct FQuestCriteriaEntryData>* Criterias)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.UpdateCriterias"));

	struct
	{
		TArray<struct FQuestCriteriaEntryData> Criterias;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Criterias != nullptr)
		*Criterias = params.Criterias;
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.GetCriterias
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UQuestDisplayable> QuestDisplayable               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FQuestCriteriaEntryData> Criterias                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UQuestFrontendTracker_C::GetCriterias(const TScriptInterface<class UQuestDisplayable>& QuestDisplayable, TArray<struct FQuestCriteriaEntryData>* Criterias)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.GetCriterias"));

	struct
	{
		TScriptInterface<class UQuestDisplayable> QuestDisplayable;
		TArray<struct FQuestCriteriaEntryData> Criterias;
	} params = {};

	params.QuestDisplayable = QuestDisplayable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Criterias != nullptr)
		*Criterias = params.Criterias;
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.SetupFromQuestDisplayable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UQuestDisplayable> QuestDisplayable               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AllQuestsComplete              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestFrontendTracker_C::SetupFromQuestDisplayable(const TScriptInterface<class UQuestDisplayable>& QuestDisplayable, bool AllQuestsComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.SetupFromQuestDisplayable"));

	struct
	{
		TScriptInterface<class UQuestDisplayable> QuestDisplayable;
		bool                           AllQuestsComplete;
	} params = {};

	params.QuestDisplayable = QuestDisplayable;
	params.AllQuestsComplete = AllQuestsComplete;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.SetAllCompleteState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestFrontendTracker_C::SetAllCompleteState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.SetAllCompleteState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.SetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EQuestTrackerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestFrontendTracker_C::SetState(TEnumAsByte<EQuestTrackerState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.SetState"));

	struct
	{
		TEnumAsByte<EQuestTrackerState> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.Setup
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> Background                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TArray<struct FQuestCriteriaEntryData> Criterias                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TEnumAsByte<EQuestTrackerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bNoQuests                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestFrontendTracker_C::Setup(const struct FText& Name, TSoftObjectPtr<class UTexture2D> Icon, TSoftObjectPtr<class UTexture2D> Background, TEnumAsByte<EQuestTrackerState> State, bool bNoQuests, TArray<struct FQuestCriteriaEntryData>* Criterias)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.Setup"));

	struct
	{
		struct FText                   Name;
		TSoftObjectPtr<class UTexture2D> Icon;
		TSoftObjectPtr<class UTexture2D> Background;
		TArray<struct FQuestCriteriaEntryData> Criterias;
		TEnumAsByte<EQuestTrackerState> State;
		bool                           bNoQuests;
	} params = {};

	params.Name = Name;
	params.Icon = Icon;
	params.Background = Background;
	params.State = State;
	params.bNoQuests = bNoQuests;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Criterias != nullptr)
		*Criterias = params.Criterias;
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestFrontendTracker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.PreConstruct"));

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


// Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UQuestFrontendTracker_C::BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestFrontendTracker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UQuestFrontendTracker_C::BndEvt__Button_83_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UQuestFrontendTracker_C::BndEvt__Button_83_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.BndEvt__Button_83_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestFrontendTracker.QuestFrontendTracker_C.ExecuteUbergraph_QuestFrontendTracker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestFrontendTracker_C::ExecuteUbergraph_QuestFrontendTracker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestFrontendTracker.QuestFrontendTracker_C.ExecuteUbergraph_QuestFrontendTracker"));

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
