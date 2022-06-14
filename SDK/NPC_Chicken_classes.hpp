#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NPC_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_Chicken.NPC_Chicken_C
// 0x0070 (0x07E0 - 0x0770)
class ANPC_Chicken_C : public ATBLAnimal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFxComponent*                                Fx;                                                       // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                Ak_Kevin;                                                 // 0x0780(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInteractableComponent*                      Interactable;                                             // 0x0788(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        Inventory_Item;                                           // 0x0790(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x0798(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStatsComponent*                             Stats1;                                                   // 0x07A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      Inv_Item;                                                 // 0x07A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               Stream;                                                   // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<class UMaterialInstance*>                   mats;                                                     // 0x07B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   mats02;                                                   // 0x07C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                RandNum;                                                  // 0x07D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FallDamage;                                               // 0x07DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NPC_Chicken.NPC_Chicken_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Client_Hit();
	void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
	void OnInteractableEnabled_Event_1(bool Enabled);
	void K2_TornOff();
	void OnSetAttached(bool bAttached);
	void ExecuteUbergraph_NPC_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
