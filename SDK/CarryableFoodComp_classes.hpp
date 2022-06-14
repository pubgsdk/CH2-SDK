#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CarryableFoodComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CarryableFoodComp.CarryableFoodComp_C
// 0x001A (0x0122 - 0x0108)
class UCarryableFoodComp_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AInventoryItem*                              OwningItem;                                               // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HealAmount;                                               // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HealSpeed;                                                // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ConsumeItemOnUse;                                         // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EHealingSource                                     HealingSource;                                            // 0x0121(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CarryableFoodComp.CarryableFoodComp_C"));
		return ptr;
	}


	void SendHealAnalyticsEvents();
	void ReceiveBeginPlay();
	void OnBattleCryTriggered_Event_1();
	void OnAnimNotifyWeaponDetach_Event_1(class UTBLCharacterAnimInstance* AnimBP);
	void ExecuteUbergraph_CarryableFoodComp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
