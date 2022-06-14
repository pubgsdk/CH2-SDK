// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayingMenuManagerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Show Loadout First Time Only
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManagerInterface_C::Show_Loadout_First_Time_Only()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Show Loadout First Time Only"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Open Loadout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManagerInterface_C::Open_Loadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Open Loadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
