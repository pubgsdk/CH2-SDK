#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BurnableComponent_LevelActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C
// 0x017A (0x02C2 - 0x0148)
class UBP_BurnableComponent_LevelActor_C : public UBurnableComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AActor*                                      Owner;                                                    // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UBP_flammableSceneComponent_C*>       FlammableSceneComponents;                                 // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UBP_FireDamage_Component_C*>          FlammableDamageComponents;                                // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TSet<class UMaterialInterface*>                    BurnableMaterials;                                        // 0x0178(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	class UStatsComponent*                             StatsComponent;                                           // 0x01C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionsComponent*                        ConditionsComponent_1;                                    // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBLGameScoringComponent*                    ScoringComponent;                                         // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    BurnableActorKilled;                                      // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<class UStaticMesh*, class UStaticMesh*>       DestroyableMeshes;                                        // 0x01F0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UStaticMeshComponent*>                DestroyableMeshComponents;                                // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            BurnableMaterialsDynamic;                                 // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            BurnableParticleSystems;                                  // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UAkComponent*>                        SoundComponents;                                          // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class ABPA_L_parent_C*>                     LightComponents;                                          // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CreateLocators;                                           // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              MaterialBurnPercent;                                      // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                BurnTimer;                                                // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DissolveDuration;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                COUNTER;                                                  // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasTakenDamage;                                           // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              Spawn;                                                    // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsKilled;                                                 // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               KeepEmbers;                                               // 0x02C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C"));
		return ptr;
	}


	void DestroyWithoutDamage();
	void UnbindEvents();
	void BindEvents();
	void CreateBurntMeshReplacements();
	void ApplyBurnToOverlappingCharacters();
	void AssembleComponents();
	void SetBurnableExpressions(const struct FName& Parameter, float Value);
	void CreateDynamicMaterials();
	void ReceiveBeginPlay();
	void HealthChanged(float Amount, class AActor* Initiator);
	void StartBurningEffect();
	void StopBurningEffect();
	void BeginDissolve();
	void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BeginFireFade();
	void OnHit(const struct FFLammableHitEvent& HitEvent);
	void CreateDestroyedParticles();
	void StopBurningSound_PlayDestroyedSound();
	void UpdateCharring(float Value);
	void UpdateDissolve(float Value);
	void UpdateFireParticle(float Value);
	void HealthChangedCosmetic(float Health, class AActor* Initiator);
	void ConditionsChangedCosmetic(class AActor* Actor, EConditionType Condition);
	void UpdateHealthMaterial(float Value);
	void SwapToDestroyedMeshes();
	void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BurnPlayer(class AActor* Actor);
	void LockBurningEffects();
	void BeginFireFadeReverse();
	void ConditionsRemovedCosmetic(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover);
	void ExecuteUbergraph_BP_BurnableComponent_LevelActor(int EntryPoint);
	void CreateLocators__DelegateSignature();
	void BurnableActorKilled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
