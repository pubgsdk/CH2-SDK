#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Windup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Windup.Windup_C
// 0x000C (0x018C - 0x0180)
class UWindup_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              MinimumCouchSpeed;                                        // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Windup.Windup_C"));
		return ptr;
	}


	struct FName GetCancelledCombatState();
	bool CanJump();
	float GetDrawStrengthModifier();
	bool CanBeCancelled(bool bIsCancelIntoParry);
	void OnAssemble_Windup();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void CheckMinimumSpeed();
	void EventTick(float DeltaSeconds);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Windup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
