// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationMenuData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationMenuData.NavigationMenuData_C.HasSubMenus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasSubMenus                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationMenuData_C::HasSubMenus(bool* HasSubMenus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationMenuData.NavigationMenuData_C.HasSubMenus"));

	struct
	{
		bool                           HasSubMenus;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasSubMenus != nullptr)
		*HasSubMenus = params.HasSubMenus;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
