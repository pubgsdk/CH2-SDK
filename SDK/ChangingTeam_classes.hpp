#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChangingTeam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChangingTeam.ChangingTeam_C
// 0x0047 (0x0078 - 0x0031)
class UChangingTeam_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                FadeToBlackHandle;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLSpectatorPawn*                           SpectatorPawn;                                            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bPawnDied;                                                // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bFadeoutComplete;                                         // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	class ATBLCharacter*                               DyingPawn;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DyingCameraLocation;                                      // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DyingCameraRotation;                                      // 0x006C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ChangingTeam.ChangingTeam_C"));
		return ptr;
	}


	void Set_Dying_Camera_Params();
	void BeginState(const struct FGameplayTag& PreviousState);
	void EndState(const struct FGameplayTag& NextState);
	void FadeToBlack();
	void HandlePossessedPawn(class APawn* Pawn);
	void MoveToWaitingToSpawn();
	void FadeOutComplete();
	void OnKilled(const struct FDeathDamageTakenEvent& Event);
	void HandleSuicideNotify(EKillReason KillReason);
	void InitSpectatorCamera();
	void ExecuteUbergraph_ChangingTeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
