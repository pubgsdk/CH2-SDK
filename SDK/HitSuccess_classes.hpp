#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HitSuccess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitSuccess.CombatStateBlueprint_0_C
// 0x000A (0x018A - 0x0180)
class UCombatStateBlueprint_0_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               CanCombo;                                                 // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bCanSpecial;                                              // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HitSuccess.CombatStateBlueprint_0_C"));
		return ptr;
	}


	void OnAssemble_CombatStateBlueprint_1();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void SetCanCombo();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void SetCanSpecial();
	void TryStartAttack();
	void AllowParry();
	void ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint);
};


// BlueprintGeneratedClass HitSuccess.HitSuccess_C
// 0x000A (0x018A - 0x0180)
class UHitSuccess_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               CanCombo;                                                 // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bCanSpecial;                                              // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HitSuccess.HitSuccess_C"));
		return ptr;
	}


	void OnAssemble_CombatStateBlueprint_1();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void SetCanCombo();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void SetCanSpecial();
	void TryStartAttack();
	void AllowParry();
	void ExecuteUbergraph_HitSuccess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
