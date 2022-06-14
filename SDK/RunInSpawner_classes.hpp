#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RunInSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RunInSpawner.RunInSpawner_C
// 0x00D1 (0x0731 - 0x0660)
class ARunInSpawner_C : public ABaseSpawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USplineComponent*                            RunPathSpline;                                            // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<class ATBLCharacter*>                         Steered_Pawns;                                            // 0x0670(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FTransform                                  Start_location;                                           // 0x06C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class ATBLCharacter*                               Attach_Character;                                         // 0x06F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Follow_First_Spawned_Character;                           // 0x06F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	TArray<class ATBLCharacter*>                       Characters_to_unlock;                                     // 0x0700(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FVector                                     Attach_relative_location;                                 // 0x0710(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       SpawnAnimation;                                           // 0x071C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BattleCry;                                                // 0x0724(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Currently_Forcing_Autorun;                                // 0x0725(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0726(0x0002) MISSED OFFSET
	float                                              Seconds_Until_Autorun_Stops;                              // 0x0728(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EAutorunStartSpeed                                 Start_speed;                                              // 0x072C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EAutorunMovementMode                               Movement_mode;                                            // 0x072D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EAutorunEndOfSplineAction                          End_of_spline_action;                                     // 0x072E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               NoStopLocksCharacterRotation;                             // 0x072F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EAutorunMovementMode                               Override_Movement_Mode;                                   // 0x0730(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RunInSpawner.RunInSpawner_C"));
		return ptr;
	}


	void Make_Autorun_Params(bool bInitialRunIn, struct FAutorunParams* AutorunParams);
	void Get_Speed(float* Speed);
	void UserConstructionScript();
	void OnSpawnedCharacter(class ATBLCharacter* NewCharacter, class USceneComponent* SpawnComp);
	void Cinematics_ControllerPossessedPawn(class ATBLPlayerController* Controller, class ATBLCharacter* Pawn);
	void ReceiveBeginPlay();
	void OnSpawningStarted_Event_1(class ASpawnWave* Wave);
	void OnSpawningEnded_Event_1();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void ReceiveTick(float DeltaSeconds);
	void OnPossessedCharacter(class ATBLCharacter* Character, class AController* Controller);
	void Start_Autorun(bool AutomaticallyStop, EAutorunMovementMode Autorun_Movement_Mode);
	void OnCinematicAllowedControl_Event_1(class ATBLCharacter* ThisCharacter);
	void Set_Autorun_Mode(EAutorunMovementMode Autorun_Movement_Mode);
	void StartInitialAutoRun(bool bAutomaticallyStop, EAutorunMovementMode AutorunMovementMode);
	void ExecuteUbergraph_RunInSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
