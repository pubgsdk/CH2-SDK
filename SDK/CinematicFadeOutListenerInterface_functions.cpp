// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicFadeOutListenerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Started
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicFadeOutListenerInterface_C::On_Fade_Out_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicFadeOutListenerInterface_C::On_Fade_Out_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Finished"));

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
