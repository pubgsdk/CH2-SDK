// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CrosshairConditonText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrosshairConditonText.CrosshairConditonText_C.SetupUniversalKeyBindWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FString                 InActionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UUniversalKeyBindingWidget_C* InUniversalKeyBindWidget       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshairConditonText_C::SetupUniversalKeyBindWidget(const struct FString& InActionName, class UUniversalKeyBindingWidget_C* InUniversalKeyBindWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.SetupUniversalKeyBindWidget"));

	struct
	{
		struct FString                 InActionName;
		class UUniversalKeyBindingWidget_C* InUniversalKeyBindWidget;
	} params = {};

	params.InActionName = InActionName;
	params.InUniversalKeyBindWidget = InUniversalKeyBindWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrosshairConditonText.CrosshairConditonText_C.IsUsingGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshairConditonText_C::IsUsingGamepad(bool* bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.IsUsingGamepad"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsUsingGamepad != nullptr)
		*bIsUsingGamepad = params.bIsUsingGamepad;
}


// Function CrosshairConditonText.CrosshairConditonText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCrosshairConditonText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrosshairConditonText.CrosshairConditonText_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshairConditonText_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrosshairConditonText.CrosshairConditonText_C.On Gamepad Input Mode Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshairConditonText_C::On_Gamepad_Input_Mode_Changed(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.On Gamepad Input Mode Changed"));

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


// Function CrosshairConditonText.CrosshairConditonText_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCrosshairConditonText_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrosshairConditonText.CrosshairConditonText_C.ExecuteUbergraph_CrosshairConditonText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshairConditonText_C::ExecuteUbergraph_CrosshairConditonText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrosshairConditonText.CrosshairConditonText_C.ExecuteUbergraph_CrosshairConditonText"));

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
