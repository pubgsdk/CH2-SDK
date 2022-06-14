// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadingScreensConfig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadingScreensConfig.LoadingScreensConfig_C.GetDefaultLoadingScreenPanelWidgetClass
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ULoadingScreenPanelWidget*/ ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

class UClass* /*ULoadingScreenPanelWidget*/ ULoadingScreensConfig_C::GetDefaultLoadingScreenPanelWidgetClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadingScreensConfig.LoadingScreensConfig_C.GetDefaultLoadingScreenPanelWidgetClass"));

	struct
	{
		class UClass* /*ULoadingScreenPanelWidget*/ ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
