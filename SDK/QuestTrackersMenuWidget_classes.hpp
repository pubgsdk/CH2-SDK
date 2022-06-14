#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackersMenuWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestTrackersMenuWidget.QuestTrackersMenuWidget_C
// 0x0018 (0x0338 - 0x0320)
class UQuestTrackersMenuWidget_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCampaignFrontendTracker_C*                  CampaignTracker;                                          // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UQuestFrontendTracker_C*                     QuestTracker;                                             // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass QuestTrackersMenuWidget.QuestTrackersMenuWidget_C"));
		return ptr;
	}


	void UpdateQuestTrackerProgress(class UObject* Quest, float Progress);
	void UpdateQuestTrackerState(class UObject* Quest);
	void GetQuestPoolComplete(class UQuestPool* QuestPool, bool* Result);
	void GetAllQuestsComplete(TArray<TScriptInterface<class UQuest>>* Quests, bool* Result);
	void InitQuestTracker();
	void Construct();
	void ExecuteUbergraph_QuestTrackersMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
