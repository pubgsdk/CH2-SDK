#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LevelActor_WarningBell_Tiny_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C
// 0x002C (0x03D4 - 0x03A8)
class ALevelActor_WarningBell_Tiny_C : public ALevelActor_CurfewBell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SK_TinyBell_Fall;                                         // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Bell_Rung;                                                // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAnimSequence*                               Destruction_Animation;                                    // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              cull_distance;                                            // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_3_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event);
	void BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void OnUsed();
	void ExecuteUbergraph_LevelActor_WarningBell_Tiny(int EntryPoint);
	void Bell_Rung__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
