#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Kick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Kick.Kick_C
// 0x0008 (0x0248 - 0x0240)
class UKick_C : public UBaseMovementState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Kick.Kick_C"));
		return ptr;
	}


	void OnAssemble_Kick();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void OnRootMotionChanged(bool bRootMotion);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void UpdateMovement();
	void ExecuteUbergraph_Kick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
