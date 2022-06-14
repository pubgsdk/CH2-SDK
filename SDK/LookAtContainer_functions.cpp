// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LookAtContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LookAtContainer.LookAtContainer_C.Update
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULookAtContainer_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LookAtContainer.LookAtContainer_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LookAtContainer.LookAtContainer_C.AddSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULookAtContainer_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LookAtContainer.LookAtContainer_C.AddSubwidget"));

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


// Function LookAtContainer.LookAtContainer_C.RemoveSubwidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHUDContainerSubWidget*  SubWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULookAtContainer_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LookAtContainer.LookAtContainer_C.RemoveSubwidget"));

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


// Function LookAtContainer.LookAtContainer_C.ExecuteUbergraph_LookAtContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULookAtContainer_C::ExecuteUbergraph_LookAtContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LookAtContainer.LookAtContainer_C.ExecuteUbergraph_LookAtContainer"));

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
