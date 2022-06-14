// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicModeChangeListenerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C.Cinematic Mode Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicModeChangeListenerInterface_C::Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C.Cinematic Mode Changed"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> New_Mode;
	} params = {};

	params.New_Mode = New_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
