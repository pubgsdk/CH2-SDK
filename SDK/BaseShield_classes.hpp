#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseShield.BaseShield_C
// 0x0098 (0x1288 - 0x11F0)
class ABaseShield_C : public ABaseInventoryItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               ShieldCollision;                                          // 0x11F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           WorldFaction;                                             // 0x1200(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1201(0x0007) MISSED OFFSET
	class UMaterialInterface*                          WorldMasonMaterial;                                       // 0x1208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          WorldAgathaMaterial;                                      // 0x1210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x1218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               DamagedSound;                                             // 0x1220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               DestroyedSound;                                           // 0x1228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EShieldType>                           ShieldType;                                               // 0x1230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1231(0x0007) MISSED OFFSET
	class UStaticMesh*                                 WorldMasonStaticMesh;                                     // 0x1238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 WorldAgathaStaticMesh;                                    // 0x1240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UCTShield>                    CustomizationShield;                                      // 0x1248(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UCTShield*                                   CustomizationAssetShield;                                 // 0x1270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 World_Tenosia_Static_Mesh;                                // 0x1278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          WorldTenosiaMaterial;                                     // 0x1280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseShield.BaseShield_C"));
		return ptr;
	}


	struct FString GetOwningPlayerName();
	void ApplyHeraldry();
	void GetCustomizationShield(class UCTShield** AsCTShield);
	bool ShouldCustomizePlacedInWorldItem(class ATBLCharacter* OwningCharacter);
	class UPrimitiveComponent* GetShieldCollision();
	void UserConstructionScript();
	void OnLoaded_93186E5C4C953E77222454BE85A78163(class UObject* Loaded);
	void DamageShield(EInventoryItemDamagedState DamageState);
	void OnInitialize();
	void OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory);
	void ExecuteUbergraph_BaseShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
