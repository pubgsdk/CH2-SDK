// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestNotificationTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestNotificationTracker.QuestNotificationTracker_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestNotificationTracker_C::UpdateIcon(TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestNotificationTracker.QuestNotificationTracker_C.UpdateIcon"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> Icon;
	} params = {};

	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuestNotificationTracker.QuestNotificationTracker_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuestCriteriaEntryData Criteria                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestNotificationTracker_C::Setup(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestNotificationTracker.QuestNotificationTracker_C.Setup"));

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


// Function QuestNotificationTracker.QuestNotificationTracker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuestNotificationTracker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestNotificationTracker.QuestNotificationTracker_C.PreConstruct"));

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


// Function QuestNotificationTracker.QuestNotificationTracker_C.ShowTracker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuestCriteriaEntryData Criteria                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UQuestNotificationTracker_C::ShowTracker(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestNotificationTracker.QuestNotificationTracker_C.ShowTracker"));

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


// Function QuestNotificationTracker.QuestNotificationTracker_C.ExecuteUbergraph_QuestNotificationTracker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestNotificationTracker_C::ExecuteUbergraph_QuestNotificationTracker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestNotificationTracker.QuestNotificationTracker_C.ExecuteUbergraph_QuestNotificationTracker"));

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
