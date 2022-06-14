#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCharacter.BaseCharacter_C
// 0x00B0 (0x1790 - 0x16E0)
class ABaseCharacter_C : public ATBLCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x16E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCarryablePlayerComponent*                   CarryablePlayer;                                          // 0x16E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x16F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParryComponent*                             Parry;                                                    // 0x16F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UFxComponent*                                Fx;                                                       // 0x1700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParryComponent*                             TracerParry;                                              // 0x1708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPhysicsAsset*                               Server_Physics_Asset;                                     // 0x1710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FAltWeightsState>                    AltWeightsStates_1;                                       // 0x1718(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              MudValue;                                                 // 0x1728(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x172C(0x0004) MISSED OFFSET
	class AInventoryItem*                              CarryableItem;                                            // 0x1730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsBeingHeld;                                              // 0x1738(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               WasThrown;                                                // 0x1739(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x173A(0x0002) MISSED OFFSET
	struct FRotator                                    LastCarryRotation;                                        // 0x173C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class ATBLCharacter*                               ParentCharacter;                                          // 0x1748(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bUseRelativeCarryRotation;                                // 0x1750(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1751(0x0003) MISSED OFFSET
	struct FRotator                                    RelativeCarryRotation;                                    // 0x1754(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AddGameplayRules;                                         // 0x1760(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1761(0x0003) MISSED OFFSET
	float                                              SpawnGameTime;                                            // 0x1764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnCustomized_animBP;                                      // 0x1768(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FsSubclassPerk>                      SubclassPerks;                                            // 0x1778(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UPhysicsAsset*                               Fake_Client_Physics_Asset;                                // 0x1788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCharacter.BaseCharacter_C"));
		return ptr;
	}


	void DisableOutOfCombatPostProcess(bool bEnabled, class APlayerController* PlayerController);
	void ToggleOutOfCombatPostProcess(bool bEnabled);
	void SetGameTimeOnMeshComponents(TArray<class UMeshComponent*>* MeshComponents);
	void UserConstructionScript();
	void Set_master_pose();
	void InitAltWeightsState();
	void OnCustomized();
	void SetSpawnTime_Material_Parameter();
	void OnInitializeAltWeightsState();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void K2_OnEndViewTarget(class APlayerController* PC);
	void OnApplyCondition_Event(class AActor* Actor, EConditionType Condition);
	void OnRemoveCondition_Event(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover);
	void Customize_bot();
	void TEMP_Customize(EFaction Faction);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BaseCharacter(int EntryPoint);
	void OnCustomized_animBP__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
