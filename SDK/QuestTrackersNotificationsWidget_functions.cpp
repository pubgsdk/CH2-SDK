// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackersNotificationsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowTracker
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UQuestNotificationTracker_C* Tracker                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FQuestCriteriaEntryData Criteria                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::ShowTracker(class UQuestNotificationTracker_C* Tracker, const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowTracker"));

	struct
	{
		class UQuestNotificationTracker_C* Tracker;
		struct FQuestCriteriaEntryData Criteria;
		TSoftObjectPtr<class UTexture2D> Icon;
	} params = {};

	params.Tracker = Tracker;
	params.Criteria = Criteria;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTrackersNotificationsWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowQuestTracker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuestCriteriaEntryData Criteria                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::ShowQuestTracker(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowQuestTracker"));

	struct
	{
		struct FQuestCriteriaEntryData Criteria;
		TSoftObjectPtr<class UTexture2D> Icon;
	} params = {};

	params.Criteria = Criteria;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowCampaignTracker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuestCriteriaEntryData Criteria                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::ShowCampaignTracker(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ShowCampaignTracker"));

	struct
	{
		struct FQuestCriteriaEntryData Criteria;
		TSoftObjectPtr<class UTexture2D> Icon;
	} params = {};

	params.Criteria = Criteria;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTrackersNotificationsWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.InitQuestTracker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackersNotificationsWidget_C::InitQuestTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.InitQuestTracker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnQuestProgressChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Quest                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::OnQuestProgressChangedEvent(class UObject* Quest, float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnQuestProgressChangedEvent"));

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


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnQuestCompeteEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Quest                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::OnQuestCompeteEvent(class UObject* Quest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.OnQuestCompeteEvent"));

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


// Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ExecuteUbergraph_QuestTrackersNotificationsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackersNotificationsWidget_C::ExecuteUbergraph_QuestTrackersNotificationsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C.ExecuteUbergraph_QuestTrackersNotificationsWidget"));

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
