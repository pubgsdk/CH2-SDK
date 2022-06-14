#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerCarryableCapturePointComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C
// 0x0018 (0x01E0 - 0x01C8)
class UPlayerCarryableCapturePointComponent_C : public UPlayerCapturePointComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class UClass* /*ABaseInventoryItem_C*/>     CarryableInventoryItemClass;                              // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C"));
		return ptr;
	}


	bool PlayerSatisfiesCaptureRequirments(class ATBLCharacter* Player);
	void SetupCarryableEvents(class AInventoryItem* Carryable);
	void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
	void OnEquipped_Event_1(class AInventoryItem* Item);
	void ExecuteUbergraph_PlayerCarryableCapturePointComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
