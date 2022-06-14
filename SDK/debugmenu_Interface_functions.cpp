// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugmenu_Interface.debugmenu_Interface_C.Create debug menu widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Debug_menu_widget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_Interface_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_Interface.debugmenu_Interface_C.Create debug menu widget"));

	struct
	{
		class UUserWidget*             Debug_menu_widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Debug_menu_widget != nullptr)
		*Debug_menu_widget = params.Debug_menu_widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
