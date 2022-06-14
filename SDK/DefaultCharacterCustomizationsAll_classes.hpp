#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultCharacterCustomizationsAll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultCharacterCustomizationsAll.DefaultCharacterCustomizationsAll_C
// 0x0000 (0x0038 - 0x0038)
class UDefaultCharacterCustomizationsAll_C : public UDefaultCharacterCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DefaultCharacterCustomizationsAll.DefaultCharacterCustomizationsAll_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
