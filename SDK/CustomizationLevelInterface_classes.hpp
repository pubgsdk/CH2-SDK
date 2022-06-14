#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CustomizationLevelInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CustomizationLevelInterface.CustomizationLevelInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCustomizationLevelInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CustomizationLevelInterface.CustomizationLevelInterface_C"));
		return ptr;
	}


	void ManuallySetCamera(class UCameraComponent* TargetCameraComp, const struct FName& Camera, class ABP_CustomizationCameras_C* CameraBlueprint);
	void GetCustomizationCharacter(TEnumAsByte<EAudioClassType> Class, class ATBLCharacter** Return_Value);
	void GetCurrentFaction(EFaction* Faction);
	void AttemptRotate(float Value);
	void AttemptZoom(bool In);
	void CustomizationCategoryChanged(const struct FName& CategoryName);
	void GetSpecatorPawnSpawnLocation(struct FTransform* Transform);
	void RequestTutorialDeSpawn();
	void RequestTutorialSpawn();
	void SetClass(TEnumAsByte<EAudioClassType> Class);
	void EquipWeapon(class UClass* /*AInventoryItem*/ Weapon, TEnumAsByte<EAudioClassType> Class, EFaction Faction);
	void AttemptFocus();
	void AttemptTurn();
	void AttemptBattlecry();
	void SetFaction(EFaction Faction);
	void ApplyAssets(TArray<struct FCustomizationEntry> Assts, TEnumAsByte<EAudioClassType> Class, EFaction Faction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
