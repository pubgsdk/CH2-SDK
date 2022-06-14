#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_Rapier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Rapier.Weapon_Rapier_C
// 0x0000 (0x12C0 - 0x12C0)
class AWeapon_Rapier_C : public AWeapon_BaseOneHanded_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_Rapier.Weapon_Rapier_C"));
		return ptr;
	}


	void GetSpecialAttackWindupSwitchOverride(struct FString* SwitchState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
