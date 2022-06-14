#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultWeaponsCustomizationsAgatha_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultWeaponsCustomizationsAgatha.DefaultWeaponsCustomizationsAgatha_C
// 0x0000 (0x0078 - 0x0078)
class UDefaultWeaponsCustomizationsAgatha_C : public UDefaultWeaponCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DefaultWeaponsCustomizationsAgatha.DefaultWeaponsCustomizationsAgatha_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
