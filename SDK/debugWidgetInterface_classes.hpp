#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugWidgetInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass debugWidgetInterface.debugWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UdebugWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass debugWidgetInterface.debugWidgetInterface_C"));
		return ptr;
	}


	void SetOwner(class UObject* Owner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
