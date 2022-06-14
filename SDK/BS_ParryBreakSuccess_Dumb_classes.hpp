#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BS_ParryBreakSuccess_Dumb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BS_ParryBreakSuccess_Dumb.BS_ParryBreakSuccess_Dumb_C
// 0x0000 (0x0038 - 0x0038)
class UBS_ParryBreakSuccess_Dumb_C : public UBS_ParryBreakSuccess_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BS_ParryBreakSuccess_Dumb.BS_ParryBreakSuccess_Dumb_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
