#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_BrandingIron_Agatha_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_BrandingIron_Agatha.Carryable_BrandingIron_Agatha_C
// 0x0000 (0x12C0 - 0x12C0)
class ACarryable_BrandingIron_Agatha_C : public AWeapon_BaseTwoHanded_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_BrandingIron_Agatha.Carryable_BrandingIron_Agatha_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
