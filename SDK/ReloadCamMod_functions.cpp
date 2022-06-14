// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReloadCamMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReloadCamMod.ReloadCamMod_C.ShouldBlend
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                ControlRot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                SocketRot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReloadCamMod_C::ShouldBlend(const struct FRotator& ControlRot, const struct FRotator& SocketRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReloadCamMod.ReloadCamMod_C.ShouldBlend"));

	struct
	{
		struct FRotator                ControlRot;
		struct FRotator                SocketRot;
		bool                           ReturnValue;
	} params = {};

	params.ControlRot = ControlRot;
	params.SocketRot = SocketRot;

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
