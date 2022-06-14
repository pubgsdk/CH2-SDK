#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseKick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HorseKick.HorseKick_C
// 0x000C (0x018C - 0x0180)
class UHorseKick_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              ClearAttackQueueStateTime;                                // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HorseKick.HorseKick_C"));
		return ptr;
	}


	void OnAssemble_HorseKick();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void ExecuteUbergraph_HorseKick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
