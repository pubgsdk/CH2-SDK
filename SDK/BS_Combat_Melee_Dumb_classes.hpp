#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BS_Combat_Melee_Dumb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BS_Combat_Melee_Dumb.BS_Combat_Melee_Dumb_C
// 0x0000 (0x0038 - 0x0038)
class UBS_Combat_Melee_Dumb_C : public UBS_Combat_Melee_Normal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BS_Combat_Melee_Dumb.BS_Combat_Melee_Dumb_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
