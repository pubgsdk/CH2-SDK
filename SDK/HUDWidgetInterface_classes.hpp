#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDWidgetInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HUDWidgetInterface.HUDWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UHUDWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HUDWidgetInterface.HUDWidgetInterface_C"));
		return ptr;
	}


	void Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
