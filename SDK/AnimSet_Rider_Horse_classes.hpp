#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimSet_Rider_Horse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimSet_Rider_Horse.AnimSet_Rider_Horse_C
// 0x0000 (0x0218 - 0x0218)
class UAnimSet_Rider_Horse_C : public UAnimationSet_BaseRider_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimSet_Rider_Horse.AnimSet_Rider_Horse_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
