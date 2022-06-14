// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamepadOnlyVisibilityWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.IsFadedOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamepadOnlyVisibilityWidget_C::IsFadedOut(bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.IsFadedOut"));

	struct
	{
		bool                           bReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamepadOnlyVisibilityWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadOnlyVisibilityWidget_C::Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadOnlyVisibilityWidget_C::Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnGamepadInputModeChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadOnlyVisibilityWidget_C::OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnGamepadInputModeChanged_Event_1"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamepadOnlyVisibilityWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.ExecuteUbergraph_GamepadOnlyVisibilityWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadOnlyVisibilityWidget_C::ExecuteUbergraph_GamepadOnlyVisibilityWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.ExecuteUbergraph_GamepadOnlyVisibilityWidget"));

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


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedOut__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadOnlyVisibilityWidget_C::OnFadedOut__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedOut__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedIn__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadOnlyVisibilityWidget_C::OnFadedIn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedIn__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
