#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_FeintAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_FeintAttack.AC_FeintAttack_C
// 0x0088 (0x00C8 - 0x0040)
class UAC_FeintAttack_C : public UUtilityAI_Action
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FName>                               AttackList;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Timeout_handle;                                           // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<struct FName>                                 FeintList;                                                // 0x0060(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       Attack;                                                   // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FeintAttack;                                              // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLAICombatController*                      Controller;                                               // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_FeintAttack.AC_FeintAttack_C"));
		return ptr;
	}


	void PickFeintAttack(const struct FName& Attack, struct FName* Feint);
	void PerformAction(const struct FUtilityAI_Context& C);
	void Combat_State_Begin(class AActor* Actor, const struct FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void Timeout();
	void CompleteAction(const struct FUtilityAI_Context& C);
	void OnFeintQueued();
	void ResetAction();
	void ExecuteUbergraph_AC_FeintAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
