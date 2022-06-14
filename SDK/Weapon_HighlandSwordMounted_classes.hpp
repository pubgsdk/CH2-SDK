#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_HighlandSwordMounted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_HighlandSwordMounted.Weapon_HighlandSwordMounted_C
// 0x0000 (0x12C8 - 0x12C8)
class AWeapon_HighlandSwordMounted_C : public AWeapon_HighlandSword_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_HighlandSwordMounted.Weapon_HighlandSwordMounted_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
