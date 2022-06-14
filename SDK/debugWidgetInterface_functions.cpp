// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugWidgetInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugWidgetInterface.debugWidgetInterface_C.SetOwner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UdebugWidgetInterface_C::SetOwner(class UObject* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugWidgetInterface.debugWidgetInterface_C.SetOwner"));

	struct
	{
		class UObject*                 Owner;
	} params = {};

	params.Owner = Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
