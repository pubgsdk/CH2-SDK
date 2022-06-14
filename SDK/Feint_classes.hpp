#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Feint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Feint.Feint_C
// 0x000A (0x018A - 0x0180)
class UFeint_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               HoldCompleted;                                            // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DoHeavyAttack;                                            // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Feint.Feint_C"));
		return ptr;
	}


	void CanAttackBeHeavy(bool* Output);
	void CrosshairAborted(bool IsStateEnd);
	void CrosshairCompleted();
	void CrosshairInitiated();
	void CrosshairProgress();
	void OnAssemble_Feint();
	void EventEndAnimation();
	void StartHoldAttack();
	void StartHolding();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventTick(float DeltaSeconds);
	void ExecuteUbergraph_Feint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
