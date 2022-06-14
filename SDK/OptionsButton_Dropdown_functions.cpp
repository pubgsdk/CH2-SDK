// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsButton_Dropdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnAnalogValueChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FAnalogInputEvent       InAnalogInputEvent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsButton_Dropdown_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnAnalogValueChanged"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FAnalogInputEvent       InAnalogInputEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsButton_Dropdown_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnKeyDown"));

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


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnGetMenuContent_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UOptionsButton_Dropdown_C::OnGetMenuContent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnGetMenuContent_1"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature"));

	struct
	{
		class UStatefulButton_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.CloseDropDownList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::CloseDropDownList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.CloseDropDownList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OpenDropDownList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::OpenDropDownList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OpenDropDownList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOptionsButton_Dropdown_C::BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature"));

	struct
	{
		bool                           bIsOpen;
	} params = {};

	params.bIsOpen = bIsOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Clear Options
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::Clear_Options()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Clear Options"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.UpdateOptions
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Options                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::UpdateOptions(TArray<struct FText> Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.UpdateOptions"));

	struct
	{
		TArray<struct FText>           Options;
	} params = {};

	params.Options = Options;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.SetSelectedOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TextIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::SetSelectedOption(int TextIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.SetSelectedOption"));

	struct
	{
		int                            TextIndex;
	} params = {};

	params.TextIndex = TextIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnSelectionChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::OnSelectionChanged_Event_1(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnSelectionChanged_Event_1"));

	struct
	{
		struct FText                   Text;
		int                            Index;
	} params = {};

	params.Text = Text;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.GamepadClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::GamepadClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.GamepadClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.On Preview Mouse Button Down
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsButton_Dropdown_C::On_Preview_Mouse_Button_Down(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.On Preview Mouse Button Down"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsButton_Dropdown_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.ExecuteUbergraph_OptionsButton_Dropdown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::ExecuteUbergraph_OptionsButton_Dropdown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.ExecuteUbergraph_OptionsButton_Dropdown"));

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


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::OnDropdownClosed__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownClosed__DelegateSignature"));

	struct
	{
		class UOptionsButton_Dropdown_C* Dropdown;
	} params = {};

	params.Dropdown = Dropdown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsButton_Dropdown_C::OnDropdownOpened__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownOpened__DelegateSignature"));

	struct
	{
		class UOptionsButton_Dropdown_C* Dropdown;
	} params = {};

	params.Dropdown = Dropdown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Selected option changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Option_text                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsButton_Dropdown_C::Selected_option_changed__DelegateSignature(int Index, const struct FText& Option_text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Selected option changed__DelegateSignature"));

	struct
	{
		int                            Index;
		struct FText                   Option_text;
	} params = {};

	params.Index = Index;
	params.Option_text = Option_text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
