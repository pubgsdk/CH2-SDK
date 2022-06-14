#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_SimpleDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPA_SimpleDoor.BPA_SimpleDoor_C
// 0x00A8 (0x03B8 - 0x0310)
class ABPA_SimpleDoor_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBLGameScoringComponent*                    TBLGameScoring;                                           // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStatsComponent*                             Stats;                                                    // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh_Door;                                          // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInteractableComponent*                      OpenClose_InteractableComponent;                          // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class URepairableComponent*                        Repairable;                                               // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBreakableComponent*                         Breakable;                                                // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UGateComponent*                              Gate;                                                     // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBLNavModifierComponent*                    TBLNavModifier;                                           // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           FriendlyFaction;                                          // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    DoorFullyHealed;                                          // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              Duration;                                                 // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DoorOpenSound;                                            // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               DoorCloseSound;                                           // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                LastPlayingId;                                            // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnGateDestroyed;                                          // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPA_SimpleDoor.BPA_SimpleDoor_C"));
		return ptr;
	}


	void PlaySound(class UAkAudioEvent* AKEvent, bool StopLastPlayingSound);
	void BndEvt__Gate_K2Node_ComponentBoundEvent_0_GateOpened__DelegateSignature();
	void OnGateOpenedEvent_SimpleDoor(float Value);
	void BndEvt__Gate_K2Node_ComponentBoundEvent_1_GateClosed__DelegateSignature();
	void OnGateClosedEvent_SimpleDoor(float Value);
	void BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableThresholdReached__DelegateSignature(float NewHealthPercentThreshold, class UObject* GenericObject);
	void OnStatHealthChanged_Event_1(float Amount, class AActor* Initiator);
	void BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableOnKilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void DoorRepaired();
	void ConfigureSimpleDoor(EFaction FriendlyTeam, EFaction EnemyTeam, float Health, bool IsDestroyable, bool IsDoorOpen, float RepairTime, float RepairHealthAmount);
	void ReceiveBeginPlay();
	void BndEvt__OpenClose_InteractableComponent_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void PlayDoorOpenSound();
	void PlayDoorCloseSound();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void ExecuteUbergraph_BPA_SimpleDoor(int EntryPoint);
	void OnGateDestroyed__DelegateSignature();
	void DoorFullyHealed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
