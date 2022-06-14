#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KnockdownGround_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KnockdownGround.KnockdownGround_C
// 0x000D (0x0195 - 0x0188)
class UKnockdownGround_C : public UBaseKnockdown_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              MinimumTime;                                              // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanGetUp;                                                 // 0x0194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass KnockdownGround.KnockdownGround_C"));
		return ptr;
	}


	void HitDirectionToGetUpDirection(struct FName* Direction);
	bool OverrideCrowdControlEvent(ECrowdControlCombatState CombatState, ECrowdControlVariant Variant);
	void OnAssemble_KnockdownGround();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void OnMovementInput(const struct FName& Direction);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void MinimumTimeEnded();
	void OnJumpPressed();
	void ExecuteUbergraph_KnockdownGround(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
