#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpikeWallComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpikeWallComponent.SpikeWallComponent_C
// 0x008D (0x0195 - 0x0108)
class USpikeWallComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATBLCharacter*                               Character;                                                // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTrapComponent_C*                            TrapComponent;                                            // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     WallNormal;                                               // 0x0120(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class AActor*                                      TrapObject;                                               // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLCharacter*                               CharacterOwner;                                           // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class ATBLCharacter*, struct FDateTime>       AppliedStaggerTo;                                         // 0x0140(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              MinimumSpeedForDamage;                                    // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasDealtDamage;                                           // 0x0194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SpikeWallComponent.SpikeWallComponent_C"));
		return ptr;
	}


	void GetAttachRagdollParams_SpikeWall_TwoSided(class ATBLCharacter* Character, class USceneComponent* AttachRagdoll, const struct FName& RagdollBone, float AttachOffset, struct FAttachRagdollParams* Params);
	void GetAttachRagdollParams_SpikeWall(class ATBLCharacter* Character, class USceneComponent* AttachRagdoll, const struct FName& RagdollBone, struct FAttachRagdollParams* Params);
	class AActor* GetDamageInstigator();
	void IsFacingWall(class ATBLCharacter* Target, bool* _);
	void BeginOverlap(class AActor* OtherActor, const struct FVector& InWallNormal, class UAkComponent* AkComponent);
	void OnDamageTaken_Event_1(const struct FDamageTakenEvent& Event);
	void KillCharacter(class ATBLCharacter* InCharacter);
	void SetTrapComponent(class UTrapComponent_C* InTrapComponent);
	void EndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void HandleTrapEvent(ETrapEventResult Result, class ATBLCharacter* TargetCharacter);
	void ExecuteUbergraph_SpikeWallComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
