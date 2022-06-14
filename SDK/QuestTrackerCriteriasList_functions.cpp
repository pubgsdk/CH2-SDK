// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackerCriteriasList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.SetupCriterias
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FQuestCriteriaEntryData> Criterias                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UQuestTrackerCriteriasList_C::SetupCriterias(TArray<struct FQuestCriteriaEntryData>* Criterias)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.SetupCriterias"));

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


// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.GatherCriteriaWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerCriteriasList_C::GatherCriteriaWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.GatherCriteriaWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestTrackerCriteriasList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.PreConstruct"));

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


// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.SetAllQuestsComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDateTime               ResetTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ResetLabel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UQuestTrackerCriteriasList_C::SetAllQuestsComplete(const struct FDateTime& ResetTime, const struct FText& ResetLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.SetAllQuestsComplete"));

	struct
	{
		struct FDateTime               ResetTime;
		struct FText                   ResetLabel;
	} params = {};

	params.ResetTime = ResetTime;
	params.ResetLabel = ResetLabel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.UpdateTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerCriteriasList_C::UpdateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.UpdateTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.ExecuteUbergraph_QuestTrackerCriteriasList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackerCriteriasList_C::ExecuteUbergraph_QuestTrackerCriteriasList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriasList.QuestTrackerCriteriasList_C.ExecuteUbergraph_QuestTrackerCriteriasList"));

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
