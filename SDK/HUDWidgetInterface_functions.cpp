// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDWidgetInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDWidgetInterface.HUDWidgetInterface_C.Set Owning HUD Component
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUDComponent_C*         New_Owner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidgetInterface_C::Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidgetInterface.HUDWidgetInterface_C.Set Owning HUD Component"));

	struct
	{
		class UHUDComponent_C*         New_Owner;
	} params = {};

	params.New_Owner = New_Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
