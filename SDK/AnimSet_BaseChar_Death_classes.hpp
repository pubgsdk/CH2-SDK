#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimSet_BaseChar_Death_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimSet_BaseChar_Death.AnimSet_BaseChar_Death_C
// 0x0000 (0x01F8 - 0x01F8)
class UAnimSet_BaseChar_Death_C : public UAnimationSet_BaseDeath_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimSet_BaseChar_Death.AnimSet_BaseChar_Death_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
