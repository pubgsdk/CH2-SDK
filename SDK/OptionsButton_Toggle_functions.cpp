// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsButton_Toggle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsButton_Toggle_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOptionsButton_Toggle_C::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsButton_Toggle_C::BndEvt__SetGamepad_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.Handle Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsButton_Toggle_C::Handle_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.Handle Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsButton_Toggle_C::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.ExecuteUbergraph_OptionsButton_Toggle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Toggle_C::ExecuteUbergraph_OptionsButton_Toggle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.ExecuteUbergraph_OptionsButton_Toggle"));

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


// Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOptionsButton_Toggle_C::OnClicked__DelegateSignature(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnClicked__DelegateSignature"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
