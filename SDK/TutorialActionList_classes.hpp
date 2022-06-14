#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialActionList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialActionList.TutorialActionList_C
// 0x001C (0x0264 - 0x0248)
class UTutorialActionList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTutorialActionEntry_C*                      TutorialActionEntry;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_680;                                          // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                NumActiveEntries;                                         // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TutorialActionList.TutorialActionList_C"));
		return ptr;
	}


	void GetActionEntry(class UTutorialActionEntry_C** Action_Entry);
	void EntryFailed(const struct FText& EntryText);
	void ResetEntries();
	void GetPercentTasksDone(float* ProgressPercent);
	void ClearEntries();
	void UpdateEntryCount(const struct FString& EntryText, int NewCount);
	void AddEntry(const struct FString& EntryText, const struct FString& ControllerEntryText, const struct FString& EntryKeyboardCallout, const struct FString& EntryControllerCallout, const struct FText& EntryDesc, int EntryCount);
	void Construct();
	void ExecuteUbergraph_TutorialActionList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
