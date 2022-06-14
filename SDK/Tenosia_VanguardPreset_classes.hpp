#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tenosia_VanguardPreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tenosia_VanguardPreset.Tenosia_VanguardPreset_C
// 0x0000 (0x00D8 - 0x00D8)
class UTenosia_VanguardPreset_C : public UCharacterCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Tenosia_VanguardPreset.Tenosia_VanguardPreset_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
