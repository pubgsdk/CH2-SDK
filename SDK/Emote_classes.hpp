#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Emote_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emote.Emote_C
// 0x0010 (0x0190 - 0x0180)
class UEmote_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               SoftRecovery;                                             // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	int                                                CancelEmoteOnMovementTimerHandle;                         // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Emote.Emote_C"));
		return ptr;
	}


	bool CanJump();
	bool CanBeCancelled(bool bIsCancelIntoParry);
	void OnAssemble_Emote();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventSoftRecovery();
	void OnMovementInput(const struct FName& Direction);
	void TryCancelEmote();
	void CustomEvent_1();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void OnJumpPressed();
	void ExecuteUbergraph_Emote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
