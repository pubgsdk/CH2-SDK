#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultWeaponsCustomizationsTenosia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultWeaponsCustomizationsTenosia.DefaultWeaponsCustomizationsTenosia_C
// 0x0000 (0x0078 - 0x0078)
class UDefaultWeaponsCustomizationsTenosia_C : public UDefaultWeaponCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DefaultWeaponsCustomizationsTenosia.DefaultWeaponsCustomizationsTenosia_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
