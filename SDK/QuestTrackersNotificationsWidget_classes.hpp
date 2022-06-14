#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackersNotificationsWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C
// 0x0018 (0x0338 - 0x0320)
class UQuestTrackersNotificationsWidget_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UQuestNotificationTracker_C*                 CampaignNotificationTracker;                              // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UQuestNotificationTracker_C*                 QuestNotificationTracker;                                 // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass QuestTrackersNotificationsWidget.QuestTrackersNotificationsWidget_C"));
		return ptr;
	}


	void ShowTracker(class UQuestNotificationTracker_C* Tracker, const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon);
	void Construct();
	void ShowQuestTracker(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon);
	void ShowCampaignTracker(const struct FQuestCriteriaEntryData& Criteria, TSoftObjectPtr<class UTexture2D> Icon);
	void OnInitialized();
	void InitQuestTracker();
	void OnQuestProgressChangedEvent(class UObject* Quest, float Progress);
	void OnQuestCompeteEvent(class UObject* Quest);
	void ExecuteUbergraph_QuestTrackersNotificationsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
