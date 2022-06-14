#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseItem_Drunk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseItem_Drunk.BaseItem_Drunk_C
// 0x001F (0x1280 - 0x1261)
class ABaseItem_Drunk_C : public ABaseCarryable_Offhand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCarryableDrunkComp_C*                       CarryableDrunkComp;                                       // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLCharacter*                               Character;                                                // 0x1278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseItem_Drunk.BaseItem_Drunk_C"));
		return ptr;
	}


	void OnCombatStateBegin_Event_1(class AActor* Actor, const struct FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void OnEquipped_Event_1(class AInventoryItem* Item);
	void ReceiveBeginPlay();
	void ApplyDrunkEffect(class AActor* Owner);
	void ExecuteUbergraph_BaseItem_Drunk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
