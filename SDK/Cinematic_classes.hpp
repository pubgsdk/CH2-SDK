#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Cinematic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cinematic.Cinematic_C
// 0x0008 (0x0188 - 0x0180)
class UCinematic_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Cinematic.Cinematic_C"));
		return ptr;
	}


	bool EventCannotQueueAttack(class UAttackType* AttackType);
	void OnAssemble_Cinematic();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void ExecuteUbergraph_Cinematic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
