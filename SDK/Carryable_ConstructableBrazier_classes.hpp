#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_ConstructableBrazier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_ConstructableBrazier.Carryable_ConstructableBrazier_C
// 0x0000 (0x1324 - 0x1324)
class ACarryable_ConstructableBrazier_C : public ABaseCarryable_Deployable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_ConstructableBrazier.Carryable_ConstructableBrazier_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
