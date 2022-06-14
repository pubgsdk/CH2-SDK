// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackersMenuWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.UpdateQuestTrackerProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Quest                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersMenuWidget_C::UpdateQuestTrackerProgress(class UObject* Quest, float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.UpdateQuestTrackerProgress"));

	struct
	{
		class UObject*                 Quest;
		float                          Progress;
	} params = {};

	params.Quest = Quest;
	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.UpdateQuestTrackerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Quest                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersMenuWidget_C::UpdateQuestTrackerState(class UObject* Quest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.UpdateQuestTrackerState"));

	struct
	{
		class UObject*                 Quest;
	} params = {};

	params.Quest = Quest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.GetQuestPoolComplete
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UQuestPool*              QuestPool                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestTrackersMenuWidget_C::GetQuestPoolComplete(class UQuestPool* QuestPool, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.GetQuestPoolComplete"));

	struct
	{
		class UQuestPool*              QuestPool;
		bool                           Result;
	} params = {};

	params.QuestPool = QuestPool;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.GetAllQuestsComplete
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class UQuest>> Quests                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestTrackersMenuWidget_C::GetAllQuestsComplete(TArray<TScriptInterface<class UQuest>>* Quests, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.GetAllQuestsComplete"));

	struct
	{
		TArray<TScriptInterface<class UQuest>> Quests;
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Quests != nullptr)
		*Quests = params.Quests;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.InitQuestTracker
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackersMenuWidget_C::InitQuestTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.InitQuestTracker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTrackersMenuWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.ExecuteUbergraph_QuestTrackersMenuWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersMenuWidget_C::ExecuteUbergraph_QuestTrackersMenuWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersMenuWidget.QuestTrackersMenuWidget_C.ExecuteUbergraph_QuestTrackersMenuWidget"));

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
