#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicModeChangeListenerInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCinematicModeChangeListenerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C"));
		return ptr;
	}


	void Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
