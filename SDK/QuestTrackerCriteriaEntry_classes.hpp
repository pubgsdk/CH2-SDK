#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackerCriteriaEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C
// 0x0081 (0x03A1 - 0x0320)
class UQuestTrackerCriteriaEntry_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      CompleteIcon;                                             // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      InProgressIcon;                                           // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               ProgressText;                                             // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_3;                                                // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               TitleTextBlock;                                           // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Title;                                                    // 0x0350(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Progress;                                                 // 0x0368(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       MaxProgress;                                              // 0x0380(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsComplete;                                               // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                FontSize;                                                 // 0x039C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsSmall;                                                 // 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass QuestTrackerCriteriaEntry.QuestTrackerCriteriaEntry_C"));
		return ptr;
	}


	void Setup(const struct FText& Title, const struct FText& Progress, const struct FText& MaxProgress);
	void SetComplete(bool IsComplete);
	void PreConstruct(bool IsDesignTime);
	void SetupFromData(const struct FQuestCriteriaEntryData& Data);
	void ExecuteUbergraph_QuestTrackerCriteriaEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
