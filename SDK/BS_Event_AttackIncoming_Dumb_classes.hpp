#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BS_Event_AttackIncoming_Dumb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BS_Event_AttackIncoming_Dumb.BS_Event_AttackIncoming_Dumb_C
// 0x0000 (0x0038 - 0x0038)
class UBS_Event_AttackIncoming_Dumb_C : public UBS_Event_AttackIncoming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BS_Event_AttackIncoming_Dumb.BS_Event_AttackIncoming_Dumb_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
