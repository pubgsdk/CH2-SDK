// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StatefulButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatefulButton.StatefulButton_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UStatefulButton_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnKeyUp"));

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


// Function StatefulButton.StatefulButton_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UStatefulButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnKeyDown"));

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


// Function StatefulButton.StatefulButton_C.ResetAnims
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::ResetAnims()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.ResetAnims"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.Get Normal StatefulButton ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UStatefulButton_C::Get_Normal_StatefulButton_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.Get Normal StatefulButton ToolTipWidget"));

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


// Function StatefulButton.StatefulButton_C.GetSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::GetSelected(bool* Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.GetSelected"));

	struct
	{
		bool                           Selected;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function StatefulButton.StatefulButton_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.SetSelected"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.SetHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::SetHovered(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.SetHovered"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.On Highlight Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::On_Highlight_Event(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.On Highlight Event"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnSelectedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::OnSelectedChanged(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnSelectedChanged"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.Init Animations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Hover                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        Unhover                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        Select                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        Deselect                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        Click                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UButton*                 Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        SelectedHover                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        DeselectedHover                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        SelectedUnhover                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        DeslectedUnhover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        InitialState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatefulButton_C::Init_Animations(class UWidgetAnimation* Hover, class UWidgetAnimation* Unhover, class UWidgetAnimation* Select, class UWidgetAnimation* Deselect, class UWidgetAnimation* Click, class UButton* Button, class UWidgetAnimation* SelectedHover, class UWidgetAnimation* DeselectedHover, class UWidgetAnimation* SelectedUnhover, class UWidgetAnimation* DeslectedUnhover, class UWidgetAnimation* InitialState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.Init Animations"));

	struct
	{
		class UWidgetAnimation*        Hover;
		class UWidgetAnimation*        Unhover;
		class UWidgetAnimation*        Select;
		class UWidgetAnimation*        Deselect;
		class UWidgetAnimation*        Click;
		class UButton*                 Button;
		class UWidgetAnimation*        SelectedHover;
		class UWidgetAnimation*        DeselectedHover;
		class UWidgetAnimation*        SelectedUnhover;
		class UWidgetAnimation*        DeslectedUnhover;
		class UWidgetAnimation*        InitialState;
	} params = {};

	params.Hover = Hover;
	params.Unhover = Unhover;
	params.Select = Select;
	params.Deselect = Deselect;
	params.Click = Click;
	params.Button = Button;
	params.SelectedHover = SelectedHover;
	params.DeselectedHover = DeselectedHover;
	params.SelectedUnhover = SelectedUnhover;
	params.DeslectedUnhover = DeslectedUnhover;
	params.InitialState = InitialState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.INTERNAL_OnClicked_Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::INTERNAL_OnClicked_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.INTERNAL_OnClicked_Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.INTERNAL_OnReleased_Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::INTERNAL_OnReleased_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.INTERNAL_OnReleased_Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatefulButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.PreConstruct"));

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


// Function StatefulButton.StatefulButton_C.ResetButtonAnimations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::ResetButtonAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.ResetButtonAnimations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.K2_Unhighlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatefulButton_C::K2_Unhighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.K2_Unhighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.K2_Highlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatefulButton_C::K2_Highlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.K2_Highlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.Match Anims To Current State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::Match_Anims_To_Current_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.Match Anims To Current State"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UStatefulButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnAddedToFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.ExecuteUbergraph_StatefulButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatefulButton_C::ExecuteUbergraph_StatefulButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.ExecuteUbergraph_StatefulButton"));

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


// Function StatefulButton.StatefulButton_C.OnFocused__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       StatefulButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatefulButton_C::OnFocused__DelegateSignature(class UStatefulButton_C* StatefulButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnFocused__DelegateSignature"));

	struct
	{
		class UStatefulButton_C*       StatefulButton;
	} params = {};

	params.StatefulButton = StatefulButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnReleased__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnDeselected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::OnDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatefulButton_C::OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatefulButton.StatefulButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatefulButton_C::OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatefulButton.StatefulButton_C.OnClicked__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
