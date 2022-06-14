// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDMarkerContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDMarkerContainer.HUDMarkerContainer_C.AddSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDMarkerContainer_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDMarkerContainer.HUDMarkerContainer_C.AddSubwidget"));

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


// Function HUDMarkerContainer.HUDMarkerContainer_C.RemoveSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDMarkerContainer_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDMarkerContainer.HUDMarkerContainer_C.RemoveSubwidget"));

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


// Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetInitFromPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDMarkerContainer_C::SubwidgetInitFromPool(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetInitFromPool"));

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


// Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetReturnToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDMarkerContainer_C::SubwidgetReturnToPool(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetReturnToPool"));

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


// Function HUDMarkerContainer.HUDMarkerContainer_C.ExecuteUbergraph_HUDMarkerContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDMarkerContainer_C::ExecuteUbergraph_HUDMarkerContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDMarkerContainer.HUDMarkerContainer_C.ExecuteUbergraph_HUDMarkerContainer"));

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
