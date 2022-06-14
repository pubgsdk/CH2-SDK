// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DropDownComboBoxWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnAnalogValueChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FAnalogInputEvent       InAnalogInputEvent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UDropDownComboBoxWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnAnalogValueChanged"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UDropDownComboBoxWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnKeyDown"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnGenerateRow_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDropDownListItem*       DropDownItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UDropDownComboBoxWidget_C::OnGenerateRow_2(class UDropDownListItem* DropDownItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnGenerateRow_2"));

	struct
	{
		class UDropDownListItem*       DropDownItem;
		class UWidget*                 ReturnValue;
	} params = {};

	params.DropDownItem = DropDownItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropDownComboBoxWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.AddText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::AddText(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.AddText"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.RemoveAllItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropDownComboBoxWidget_C::RemoveAllItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.RemoveAllItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnDropDownClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsDropDownEntry_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::OnDropDownClicked(class UOptionsDropDownEntry_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnDropDownClicked"));

	struct
	{
		class UOptionsDropDownEntry_C* Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseButtonDownEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::OnMouseButtonDownEvent_Event_1(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseButtonDownEvent_Event_1"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.SetBackgroundAndBorderTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              BackgroundTexture              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              BorderTexture                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::SetBackgroundAndBorderTexture(class UTexture2D* BackgroundTexture, class UTexture2D* BorderTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.SetBackgroundAndBorderTexture"));

	struct
	{
		class UTexture2D*              BackgroundTexture;
		class UTexture2D*              BorderTexture;
	} params = {};

	params.BackgroundTexture = BackgroundTexture;
	params.BorderTexture = BorderTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDropDownComboBoxWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseLeave"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDropDownComboBoxWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseEnter"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CurrentText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDropDownComboBoxWidget_C::Open(const struct FText& CurrentText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Open"));

	struct
	{
		struct FText                   CurrentText;
	} params = {};

	params.CurrentText = CurrentText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Re-Calculate Size
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropDownComboBoxWidget_C::Re_Calculate_Size()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Re-Calculate Size"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.ExecuteUbergraph_DropDownComboBoxWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::ExecuteUbergraph_DropDownComboBoxWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.ExecuteUbergraph_DropDownComboBoxWidget"));

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


// Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropDownComboBoxWidget_C::OnSelectionChanged__DelegateSignature(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnSelectionChanged__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
