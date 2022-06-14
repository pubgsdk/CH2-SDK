#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultWeaponsCustomizationsMason_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultWeaponsCustomizationsMason.DefaultWeaponsCustomizationsMason_C
// 0x0000 (0x0078 - 0x0078)
class UDefaultWeaponsCustomizationsMason_C : public UDefaultWeaponCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DefaultWeaponsCustomizationsMason.DefaultWeaponsCustomizationsMason_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
