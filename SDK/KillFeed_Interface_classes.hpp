#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillFeed_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KillFeed_Interface.KillFeed_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UKillFeed_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass KillFeed_Interface.KillFeed_Interface_C"));
		return ptr;
	}


	void BeginRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
