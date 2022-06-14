// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsMenuEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsMenuEntry.OptionsMenuEntry_C.OnAnalogValueChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FAnalogInputEvent       InAnalogInputEvent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenuEntry_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnAnalogValueChanged"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenuEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyDown"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.Get Inner Entry Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::Get_Inner_Entry_Widget(class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.Get Inner Entry Widget"));

	struct
	{
		class UWidget*                 Widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenuEntry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyUp"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenuEntry_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.CurrentValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::CurrentValueChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.CurrentValueChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnClicked_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOptionsMenuEntry_C::OnClicked_Event_1(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnClicked_Event_1"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelectionChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnSelectionChanged_Event_1(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelectionChanged_Event_1"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnValueChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnValueChanged_Event_1(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnValueChanged_Event_1"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateResetButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::UpdateResetButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateResetButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateSliderProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::UpdateSliderProgressBar(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateSliderProgressBar"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__KeybindingsEntry_K2Node_ComponentBoundEvent_3_KeyBindingUpdated__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::BndEvt__KeybindingsEntry_K2Node_ComponentBoundEvent_3_KeyBindingUpdated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__KeybindingsEntry_K2Node_ComponentBoundEvent_3_KeyBindingUpdated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseLeave"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOptionsMenuEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.PreConstruct"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.InitializeLinebreak
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::InitializeLinebreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.InitializeLinebreak"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnTextCommitted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsMenuEntry_C::OnTextCommitted(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnTextCommitted"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__Reset_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::BndEvt__Reset_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__Reset_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.GamepadResetButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::GamepadResetButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.GamepadResetButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.BP_OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectInfo>       SelectInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::BP_OnSelected(TEnumAsByte<ESelectInfo> SelectInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.BP_OnSelected"));

	struct
	{
		TEnumAsByte<ESelectInfo>       SelectInfo;
	} params = {};

	params.SelectInfo = SelectInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.BindToOptionsListEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsList*            OptionsList                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::BindToOptionsListEvents(class UOptionsList* OptionsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.BindToOptionsListEvents"));

	struct
	{
		class UOptionsList*            OptionsList;
	} params = {};

	params.OptionsList = OptionsList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnOptionsListItemChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ItemSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnOptionsListItemChanged(class UObject* ItemSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnOptionsListItemChanged"));

	struct
	{
		class UObject*                 ItemSelected;
	} params = {};

	params.ItemSelected = ItemSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::HandleOnDropdownOpened(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownOpened"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::HandleOnDropdownClosed(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownClosed"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeybindChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuEntry_C::OnKeybindChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeybindChange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.ExecuteUbergraph_OptionsMenuEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::ExecuteUbergraph_OptionsMenuEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.ExecuteUbergraph_OptionsMenuEntry"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnDropdownClosed__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownClosed__DelegateSignature"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsButton_Dropdown_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnDropdownOpened__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownOpened__DelegateSignature"));

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


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsScreenProperty*  Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnSelected__DelegateSignature(class UOptionsScreenProperty* Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelected__DelegateSignature"));

	struct
	{
		class UOptionsScreenProperty*  Option;
	} params = {};

	params.Option = Option;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsScreenProperty*  Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnUnhovered__DelegateSignature(class UOptionsScreenProperty* Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnUnhovered__DelegateSignature"));

	struct
	{
		class UOptionsScreenProperty*  Option;
	} params = {};

	params.Option = Option;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsMenuEntry.OptionsMenuEntry_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsScreenProperty*  Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsMenuEntry_C::OnHovered__DelegateSignature(class UOptionsScreenProperty* Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsMenuEntry.OptionsMenuEntry_C.OnHovered__DelegateSignature"));

	struct
	{
		class UOptionsScreenProperty*  Option;
	} params = {};

	params.Option = Option;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
