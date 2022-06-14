#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayingMenuManagerInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayingMenuManagerInterface.PlayingMenuManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayingMenuManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayingMenuManagerInterface.PlayingMenuManagerInterface_C"));
		return ptr;
	}


	void Show_Loadout_First_Time_Only();
	void Open_Loadout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
