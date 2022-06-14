// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GenericHUDContainerOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.AddSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericHUDContainerOverlay_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.AddSubwidget"));

	struct
	{
		class UHUDContainerSubWidget*  SubWidget;
	} params = {};

	params.SubWidget = SubWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.RemoveSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericHUDContainerOverlay_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.RemoveSubwidget"));

	struct
	{
		class UHUDContainerSubWidget*  SubWidget;
	} params = {};

	params.SubWidget = SubWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.ExecuteUbergraph_GenericHUDContainerOverlay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericHUDContainerOverlay_C::ExecuteUbergraph_GenericHUDContainerOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.ExecuteUbergraph_GenericHUDContainerOverlay"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
