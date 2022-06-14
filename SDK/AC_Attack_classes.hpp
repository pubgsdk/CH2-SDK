#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Attack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_Attack.AC_Attack_C
// 0x0028 (0x0068 - 0x0040)
class UAC_Attack_C : public UUtilityAI_Action
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FCombatAiAttackParams                       Attack_Params;                                            // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FTimerHandle                                Timeout_handle;                                           // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_Attack.AC_Attack_C"));
		return ptr;
	}


	void PerformAction(const struct FUtilityAI_Context& C);
	void Combat_State_Begin(class AActor* Actor, const struct FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void Timeout();
	void CompleteAction(const struct FUtilityAI_Context& C);
	void ExecuteUbergraph_AC_Attack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
