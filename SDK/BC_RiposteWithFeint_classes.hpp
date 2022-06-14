#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BC_RiposteWithFeint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BC_RiposteWithFeint.BC_RiposteWithFeint_C
// 0x0000 (0x0078 - 0x0078)
class UBC_RiposteWithFeint_C : public UUtilityAI_Behavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BC_RiposteWithFeint.BC_RiposteWithFeint_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
