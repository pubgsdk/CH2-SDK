#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Charge.Charge_C
// 0x0010 (0x0190 - 0x0180)
class UCharge_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              WeakStaminaPercent;                                       // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinimumCouchSpeed;                                        // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Charge.Charge_C"));
		return ptr;
	}


	struct FName GetCancelledCombatState();
	bool CanSwitchInventoryItems();
	bool CanBeCancelled(bool bIsCancelIntoParry);
	void OnAssemble_Charge();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void CheckWeak();
	void EventTick(float DeltaSeconds);
	void CheckMinimumSpeed();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
