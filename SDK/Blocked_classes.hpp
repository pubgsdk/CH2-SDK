#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Blocked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Blocked.Blocked_C
// 0x000B (0x0193 - 0x0188)
class UBlocked_C : public UBaseCrowdControlState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsSoftRecovery;                                           // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowCombos;                                              // 0x0191(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowParries;                                             // 0x0192(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Blocked.Blocked_C"));
		return ptr;
	}


	EAttackTransition GetAttackTransition();
	void OnAssemble_Blocked();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void AllowCombo();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void AllowParry();
	void SoftRecovery();
	void TryStartAttack();
	void ExecuteUbergraph_Blocked(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
