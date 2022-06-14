#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Walk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Walk.Walk_C
// 0x0008 (0x0248 - 0x0240)
class UWalk_C : public UBaseMovementState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Walk.Walk_C"));
		return ptr;
	}


	void OnAssemble_Walk();
	void StrafeGearUp();
	void StrafeGearDown();
	void GearUp();
	void GearDown();
	void UpdateMovement();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void ExecuteUbergraph_Walk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
