#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Sprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sprint.Sprint_C
// 0x000B (0x018B - 0x0180)
class USprint_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               CanSprintAttack;                                          // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanSprintShove;                                           // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanFullSprint;                                            // 0x018A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Sprint.Sprint_C"));
		return ptr;
	}


	void EnableFullSprintCrosshair(bool Enable);
	void EnableSprintShoveCrosshair(bool Enable);
	void EnableSprintCrosshair(bool Enable);
	void EnableSprintAttackCrosshair(bool Enable);
	void OnAssemble_Sprint();
	void EventTick(float DeltaSeconds);
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void ExecuteUbergraph_Sprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
