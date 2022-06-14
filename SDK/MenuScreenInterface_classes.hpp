#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MenuScreenInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MenuScreenInterface.MenuScreenInterface_C
// 0x0000 (0x0028 - 0x0028)
class UMenuScreenInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MenuScreenInterface.MenuScreenInterface_C"));
		return ptr;
	}


	void SetButtonId(const struct FName& ButtonID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
