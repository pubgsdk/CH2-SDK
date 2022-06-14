#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tenosia_KnightPreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tenosia_KnightPreset.Tenosia_KnightPreset_C
// 0x0000 (0x00D8 - 0x00D8)
class UTenosia_KnightPreset_C : public UCharacterCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Tenosia_KnightPreset.Tenosia_KnightPreset_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
