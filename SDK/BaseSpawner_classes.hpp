#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseSpawner.BaseSpawner_C
// 0x0070 (0x0660 - 0x05F0)
class ABaseSpawner_C : public ASpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       SpawnerName__Ingame_;                                     // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Fade_time;                                                // 0x0608(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time_before_starting_fade;                                // 0x060C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FStageActorAction                           PlayerKilled_StageAction;                                 // 0x0610(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ESpawnercolor>                         Spawnercolor;                                             // 0x0640(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSpawnedPlayerKilled;                                    // 0x0648(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bUsePlayerKilledStageAction;                              // 0x0658(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	float                                              ConstructableDestructionDistance;                         // 0x065C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseSpawner.BaseSpawner_C"));
		return ptr;
	}


	void KillHorsesInRadius(const struct FVector& ForwardVector, const struct FVector& Location);
	void KillConstructablesInRadius(const struct FVector& ForwardVector, const struct FVector& Location);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Cinematics_ControllerPossessedPawn(class ATBLPlayerController* Controller, class ATBLCharacter* Pawn);
	void Add_HUD_Marker_to_Wave(class ASpawnWave* Wave);
	void Interp_Z(float Value);
	void Interp_rot(float Value);
	void OnPossessedCharacter(class ATBLCharacter* Character, class AController* Controller);
	void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
	void StopPlayerKilledStageAction();
	void OnSpawnedCharacter(class ATBLCharacter* NewCharacter, class USceneComponent* SpawnComp);
	void ExecuteUbergraph_BaseSpawner(int EntryPoint);
	void OnSpawnedPlayerKilled__DelegateSignature(class AActor* Killed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
