#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_Deployable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCarryable_Deployable.BaseCarryable_Deployable_C
// 0x00C3 (0x1324 - 0x1261)
class ABaseCarryable_Deployable_C : public ABaseCarryable_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass* /*AActor*/                           DeployActor;                                              // 0x1270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Hint;                                                     // 0x1278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlacementOffset__forward_;                                // 0x1280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1284(0x0004) MISSED OFFSET
	class AActor*                                      LastOwner;                                                // 0x1288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        SoftClassDeplyActor;                                      // 0x1290(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FRotator                                    RotationOffset;                                           // 0x12B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x12C4(0x0004) MISSED OFFSET
	class ABP_Visualization_BaseDeployable_C*          VisualizationActor;                                       // 0x12C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*ABP_Visualization_BaseDeployable_C*/ VisualizationActorClass;                                  // 0x12D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanBePlaced;                                              // 0x12D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x12D9(0x0007) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x12E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTimerHandle                                UsingTimerHandle;                                         // 0x1310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ItemLifespan;                                             // 0x1318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableEnemyDistanceLimit;                                 // 0x131C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EFaction                                           OwningFaction;                                            // 0x131D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x2];                                       // 0x131E(0x0002) MISSED OFFSET
	float                                              EnemyDistanceLimit;                                       // 0x1320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCarryable_Deployable.BaseCarryable_Deployable_C"));
		return ptr;
	}


	void OnVisualizationActorSpawned();
	void SetCanBePlaced(bool InCanBePlaced);
	bool CanUseItem();
	void GetSpawnTranform(struct FTransform* SpawnTransform, bool* IsValid);
	void IsInInventory(bool* Return_Value);
	void OnLoaded_3965E93E44194A1A35924595DEAB0846(class UClass* /*UObject*/ Loaded);
	void OnUse(class AInventoryItem* Item);
	void OnInventorySlotsUpdated_Event_1();
	void AsyncLoadDeployActor();
	void UpdateVisualization(float DeltaTime);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void SpawnVisualizationActor(const struct FTransform& SpawnTransform);
	void OnCombatStateChanged_Event_1(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void DestroyVisualizationActor();
	void OnInitialize();
	void OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory);
	void OnStartUse(class AInventoryItem* Item);
	void UpdateSpawnTransform();
	void ExecuteUbergraph_BaseCarryable_Deployable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
