#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RankupUnlockContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RankupUnlockContainer.RankupUnlockContainer_C
// 0x0010 (0x0258 - 0x0248)
class URankupUnlockContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                VerticalBox_80;                                           // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass RankupUnlockContainer.RankupUnlockContainer_C"));
		return ptr;
	}


	void StartRankMessage(const struct FRankUpMessage& RankMessage);
	void StartUnlockMessage(const struct FPrimaryAssetId& Unlocked);
	void Construct();
	void AddWidgetToList(class UWidget* NewWidget);
	void ExecuteUbergraph_RankupUnlockContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
