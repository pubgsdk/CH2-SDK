#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_SpikeTrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_SpikeTrap.Carryable_SpikeTrap_C
// 0x0000 (0x1324 - 0x1324)
class ACarryable_SpikeTrap_C : public ABaseCarryable_Deployable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_SpikeTrap.Carryable_SpikeTrap_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
