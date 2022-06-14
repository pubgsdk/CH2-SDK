#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineSubsystemPlayFab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemPlayFab.PlayFabAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayFabAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemPlayFab.PlayFabAuthComponentModuleInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
