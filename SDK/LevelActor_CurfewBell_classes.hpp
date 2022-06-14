#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LevelActor_CurfewBell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelActor_CurfewBell.LevelActor_CurfewBell_C
// 0x0048 (0x03A8 - 0x0360)
class ALevelActor_CurfewBell_C : public ALevelActor_WorldBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            BellCollision;                                            // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_G_Bell_ground;                                         // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Anim_8E103552468D9E2F0B4CD3811008539E;         // 0x0378(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8E103552468D9E2F0B4CD3811008539E;   // 0x037C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedModifier;                                            // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DefaultSpeed;                                             // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              UseSoundDuration;                                         // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Used;                                                  // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LevelActor_CurfewBell.LevelActor_CurfewBell_C"));
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__NewTrack_1__EventFunc();
	void StartBellAnimation(float Duration);
	void StopBellAnimation();
	void OnUsed();
	void ReceiveBeginPlay();
	void PlayFromStart();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event);
	void ExecuteUbergraph_LevelActor_CurfewBell(int EntryPoint);
	void On_Used__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
