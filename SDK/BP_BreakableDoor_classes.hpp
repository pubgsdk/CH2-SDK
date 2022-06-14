#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakableDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BreakableDoor.BP_BreakableDoor_C
// 0x0097 (0x0510 - 0x0479)
class ABP_BreakableDoor_C : public ABP_BaseBreakableGate_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInteractableComponent*                      Interactable;                                             // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        DOOR;                                                     // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UActorInfoDisplayComponent*                  ActorInfoDisplay;                                         // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBLGameScoringComponent*                    TBLGameScoring_1;                                         // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBreakableComponent*                         Breakable;                                                // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Open_99531705412FFAA72E579992A689D07D;         // 0x04C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_99531705412FFAA72E579992A689D07D;   // 0x04C4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              KilledTimeline_NewTrack_2_EE683F8A4CCB581A9C062B8E3BE81E02;// 0x04D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              KilledTimeline_Impact1_EE683F8A4CCB581A9C062B8E3BE81E02;  // 0x04D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    KilledTimeline__Direction_EE683F8A4CCB581A9C062B8E3BE81E02;// 0x04D8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          KilledTimeline;                                           // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DamageTimeline_Impact1_36A3978540357DC9D190F59D6F987599;  // 0x04E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    DamageTimeline__Direction_36A3978540357DC9D190F59D6F987599;// 0x04EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DamageTimeline;                                           // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               FallDirection;                                            // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EDoorState>                            DoorState;                                                // 0x04F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDestroyed;                                              // 0x04FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsOpen;                                                   // 0x04FB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              DoorYaw;                                                  // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlayFallAnimation__Forward_;                              // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PlayFallAnimation__Backwards_;                            // 0x0501(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0502(0x0006) MISSED OFFSET
	class UParticleSystem*                             DestroyParticle;                                          // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BreakableDoor.BP_BreakableDoor_C"));
		return ptr;
	}


	void OnRep_DoorState();
	void GetGroundOffset(bool Forward, float* _);
	void KilledTimeline__FinishedFunc();
	void KilledTimeline__UpdateFunc();
	void KilledTimeline__NewTrack_1__EventFunc();
	void DamageTimeline__FinishedFunc();
	void DamageTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void KilledFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void DamageFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void ReceiveBeginPlay();
	void ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection);
	void OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection);
	void TriggerFall(bool Forward);
	void DestroyDoor();
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void OpenDoor(bool Open);
	void SetDoorOpened();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_1_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void ToggleDoorCollision(bool Enabled);
	void ExecuteUbergraph_BP_BreakableDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
