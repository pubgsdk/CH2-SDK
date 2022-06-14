#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fire.Fire_C
// 0x0009 (0x0189 - 0x0180)
class UFire_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               DidFireProjectile;                                        // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Fire.Fire_C"));
		return ptr;
	}


	void ToggleArrowCamHint(bool Toggle);
	void OnAssemble_Fire();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void OnActivateAbility();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void ExecuteUbergraph_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
