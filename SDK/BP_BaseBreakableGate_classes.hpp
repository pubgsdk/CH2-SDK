#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BaseBreakableGate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseBreakableGate.BP_BaseBreakableGate_C
// 0x0169 (0x0479 - 0x0310)
class ABP_BaseBreakableGate_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBLGameScoringComponent*                    TBLGameScoring;                                           // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                AkComponent;                                              // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             BrokenComponents;                                         // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DamagedComponents;                                        // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             HealthyComponents;                                        // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             arrow;                                                    // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               ObjectCollision;                                          // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStatsComponent*                             Stats;                                                    // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             BaseComponents;                                           // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSiegeDamage;                                            // 0x0368(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              DamageAnimScaling;                                        // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverrideScale;                                            // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FVector                                     ActorScale;                                               // 0x0374(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             DamageTakenEmitter;                                       // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             OnKilledEmitter;                                          // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 HealthyMesh;                                              // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 DamagedMesh;                                              // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>                ActorMeshes;                                              // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnGateDamaged;                                            // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnGateOpened;                                             // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<EBreakableState>                       BreakableState;                                           // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EGateDirection>                        GateState;                                                // 0x03D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasInitialized;                                           // 0x03DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanBeKickedDown;                                          // 0x03DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OpenGateSound;                                            // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ImpactSiegeSound;                                         // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               EnterDamagedStateSound;                                   // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               EnteredDamagedStateSiegeSound;                            // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               KilledSound;                                              // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               KilledSiegeSound;                                         // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnGateDestroyed;                                          // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_AdvancedDisplay, CPF_BlueprintCallable)
	bool                                               disableVisualLogic;                                       // 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              cull_distance;                                            // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasTakenDamage;                                           // 0x0430(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UTBLGameScoringComponent*                    GameScoringComponent_ServerOnly;                          // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableScoreComponent;                                     // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FDataTableRowSelection                      GameScoringRow;                                           // 0x0448(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	EFaction                                           OwningCharacterFaction;                                   // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EGateDirection>                        ClientGateState;                                          // 0x0461(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0462(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnGateBroken;                                             // 0x0468(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bShouldThwackOnHit;                                       // 0x0478(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseBreakableGate.BP_BaseBreakableGate_C"));
		return ptr;
	}


	void ThwackOnHit(const struct FDamageTakenEvent& DamageTakenEvent);
	void Destroy_Constructable(class AActor* DamageCauser, const struct FHitResult& HitResult);
	void Trigger_On_Gate_Broken_delegate(class ATBLCharacter* Destroyer);
	bool IsValidDamagingFaction(class AActor* DamageCauser);
	void Get_Owner_Faction(EFaction* Output_Get);
	void SetGateState(const struct FDamageTakenEvent& DamageTakenEvent);
	void ToggleDoorCollision(bool Enabled);
	void UpdateBreakableState(TEnumAsByte<EBreakableState> Selection);
	void EnableChildComponents(class USceneComponent* ParentComponent, bool Enable);
	void OnGateStateChanged(bool bForce);
	void OnRep_GateState();
	void OnRep_BreakableState();
	void UpdateMesh(class UStaticMesh* NewMesh);
	void UserConstructionScript();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event);
	void DamageFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void KilledFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void UpdateState(float Value);
	void BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature(float Amount, class AActor* Initiator);
	void InitializeState(float Value);
	void ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection);
	void ManuallyOpenGate(TEnumAsByte<EGateDirection> Direction);
	void OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection);
	void RemoveCollisionOnMeshes();
	void ReceiveBeginPlay();
	void ForceBrokenState();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void BreakableStateChanged(TEnumAsByte<EBreakableState> BreakableState);
	void SetActorInvulnerable(bool Enable);
	void ChangeCanBeDamaged(bool CanBeDamaged);
	void OnPushableBeginOverlap(class UPushableComponent* Pushable);
	void ManuallyCloseGate();
	void ExecuteUbergraph_BP_BaseBreakableGate(int EntryPoint);
	void OnGateBroken__DelegateSignature(class ATBLCharacter* Player, class ABP_BaseBreakableGate_C* Gate);
	void OnGateDestroyed__DelegateSignature(class ATBLCharacter* Destroyer);
	void OnGateOpened__DelegateSignature();
	void OnGateDamaged__DelegateSignature(float Damage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
