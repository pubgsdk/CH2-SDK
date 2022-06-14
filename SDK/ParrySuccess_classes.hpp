#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ParrySuccess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ParrySuccess.ParrySuccess_C
// 0x0013 (0x0193 - 0x0180)
class UParrySuccess_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       PreviousState;                                            // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanKick;                                                  // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanRiposte;                                               // 0x0191(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanSpecial;                                               // 0x0192(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ParrySuccess.ParrySuccess_C"));
		return ptr;
	}


	bool HasRiposteStamina();
	void OnAssemble_ParrySuccess();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void CanKickCheck();
	void CanSpecialCheck();
	void CanRiposteCheck();
	void TryStartAttack();
	void ExecuteUbergraph_ParrySuccess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
