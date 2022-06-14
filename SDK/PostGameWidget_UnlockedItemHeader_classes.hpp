#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_UnlockedItemHeader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C
// 0x0080 (0x02C8 - 0x0248)
class UPostGameWidget_UnlockedItemHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                ItemsUnlocked;                                            // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPostGameWidget_UnlockedItemEntry_C*         PostGameWidget_UnlockedItemEntry;                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPostGameWidget_UnlockedItemEntry_C*         PostGameWidget_UnlockedItemEntry_140;                     // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               TBLTextBlock_47;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FLevelUpResult                              LevelUpResult;                                            // 0x0270(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C"));
		return ptr;
	}


	void GetAssetDescriptor(const struct FPrimaryAssetId& AssetId, struct FText* DescriptorText);
	void Construct();
	void ExecuteUbergraph_PostGameWidget_UnlockedItemHeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
