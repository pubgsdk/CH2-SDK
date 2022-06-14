// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackerCriteriaEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.Setup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   MaxProgress                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UQuestTrackerCriteriaEntry_C::Setup(const struct FText& Title, const struct FText& Progress, const struct FText& MaxProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.Setup"));

	struct
	{
		struct FText                   Title;
		struct FText                   Progress;
		struct FText                   MaxProgress;
	} params = {};

	params.Title = Title;
	params.Progress = Progress;
	params.MaxProgress = MaxProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.SetComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsComplete                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestTrackerCriteriaEntry_C::SetComplete(bool IsComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.SetComplete"));

	struct
	{
		bool                           IsComplete;
	} params = {};

	params.IsComplete = IsComplete;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestTrackerCriteriaEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.PreConstruct"));

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


// Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.SetupFromData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuestCriteriaEntryData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UQuestTrackerCriteriaEntry_C::SetupFromData(const struct FQuestCriteriaEntryData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.SetupFromData"));

	struct
	{
		struct FQuestCriteriaEntryData Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.ExecuteUbergraph_QuestTrackerCriteriaEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackerCriteriaEntry_C::ExecuteUbergraph_QuestTrackerCriteriaEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C.ExecuteUbergraph_QuestTrackerCriteriaEntry"));

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
