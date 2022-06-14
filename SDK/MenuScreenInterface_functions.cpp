// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MenuScreenInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MenuScreenInterface.MenuScreenInterface_C.SetButtonId
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMenuScreenInterface_C::SetButtonId(const struct FName& ButtonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MenuScreenInterface.MenuScreenInterface_C.SetButtonId"));

	struct
	{
		struct FName                   ButtonID;
	} params = {};

	params.ButtonID = ButtonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
