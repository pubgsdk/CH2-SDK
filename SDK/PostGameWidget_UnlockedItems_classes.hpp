#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_UnlockedItems_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C
// 0x0028 (0x0270 - 0x0248)
class UPostGameWidget_UnlockedItems_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPostGameWidget_UnlockedItemHeader_C*        PostGameWidget_UnlockedItemHeader;                        // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPostGameWidget_UnlockedItemHeader_C*        PostGameWidget_UnlockedItemHeader_100;                    // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               TBLTextBlock_47;                                          // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                UnlockedItemList;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C"));
		return ptr;
	}


	void Construct();
	void InitUnlockList(TArray<struct FLevelUpResult> LevelUpResults);
	void ExecuteUbergraph_PostGameWidget_UnlockedItems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
