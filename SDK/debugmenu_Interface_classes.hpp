#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass debugmenu_Interface.debugmenu_Interface_C
// 0x0000 (0x0028 - 0x0028)
class Udebugmenu_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass debugmenu_Interface.debugmenu_Interface_C"));
		return ptr;
	}


	void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
