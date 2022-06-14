// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InputHintsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputHintsWidget.InputHintsWidget_C.FindCrosshairConditionWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InActionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UCrosshairConditonText_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInputHintsWidget_C::FindCrosshairConditionWidget(const struct FString& InActionName, bool* Found, class UCrosshairConditonText_C** Widget, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.FindCrosshairConditionWidget"));

	struct
	{
		struct FString                 InActionName;
		bool                           Found;
		class UCrosshairConditonText_C* Widget;
		int                            Index;
	} params = {};

	params.InActionName = InActionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Found != nullptr)
		*Found = params.Found;
	if (Widget != nullptr)
		*Widget = params.Widget;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function InputHintsWidget.InputHintsWidget_C.FindCrosshairCondition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFound                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ArrayIndex                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInputHintsWidget_C::FindCrosshairCondition(const struct FName& Tag, bool* bFound, int* ArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.FindCrosshairCondition"));

	struct
	{
		struct FName                   Tag;
		bool                           bFound;
		int                            ArrayIndex;
	} params = {};

	params.Tag = Tag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}


// Function InputHintsWidget.InputHintsWidget_C.UpdateCrosshairConditionWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInputHintsWidget_C::UpdateCrosshairConditionWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.UpdateCrosshairConditionWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.InitCrosshairConditionWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInputHintsWidget_C::InitCrosshairConditionWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.InitCrosshairConditionWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.EnableCombatConditions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   HintText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AddToTop                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInputHintsWidget_C::EnableCombatConditions(const struct FString& Keybinding, const struct FName& Tag, const struct FText& HintText, bool Enable, bool AddToTop)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.EnableCombatConditions"));

	struct
	{
		struct FString                 Keybinding;
		struct FName                   Tag;
		struct FText                   HintText;
		bool                           Enable;
		bool                           AddToTop;
	} params = {};

	params.Keybinding = Keybinding;
	params.Tag = Tag;
	params.HintText = HintText;
	params.Enable = Enable;
	params.AddToTop = AddToTop;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.ClearAllHints
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInputHintsWidget_C::ClearAllHints()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.ClearAllHints"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.OnPlayerKilled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UInputHintsWidget_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.OnPlayerKilled_Event_1"));

	struct
	{
		struct FDeathEvent             DeathEvent;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInputHintsWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InputHintsWidget.InputHintsWidget_C.ExecuteUbergraph_InputHintsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInputHintsWidget_C::ExecuteUbergraph_InputHintsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputHintsWidget.InputHintsWidget_C.ExecuteUbergraph_InputHintsWidget"));

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
