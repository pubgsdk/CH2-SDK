// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GenericDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericDialog.GenericDialog_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGenericDialog_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnPreviewKeyDown"));

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


// Function GenericDialog.GenericDialog_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGenericDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnKeyDown"));

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


// Function GenericDialog.GenericDialog_C.OnHoveredButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadiobutton_C*          Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterial*               FontMaterial                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::OnHoveredButton(class URadiobutton_C* Button, class UMaterial* FontMaterial, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnHoveredButton"));

	struct
	{
		class URadiobutton_C*          Button;
		class UMaterial*               FontMaterial;
		class UTexture2D*              Icon;
	} params = {};

	params.Button = Button;
	params.FontMaterial = FontMaterial;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.InitButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadiobutton_C*          Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FKey                    ButtonCalloutKey               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UTexture2D*              IconTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::InitButton(class URadiobutton_C* Button, const struct FText& ButtonText, const struct FKey& ButtonCalloutKey, class UTexture2D* IconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.InitButton"));

	struct
	{
		class URadiobutton_C*          Button;
		struct FText                   ButtonText;
		struct FKey                    ButtonCalloutKey;
		class UTexture2D*              IconTexture;
	} params = {};

	params.Button = Button;
	params.ButtonText = ButtonText;
	params.ButtonCalloutKey = ButtonCalloutKey;
	params.IconTexture = IconTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.CheckForFrontendHUD
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFrontend                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGenericDialog_C::CheckForFrontendHUD(bool* IsFrontend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.CheckForFrontendHUD"));

	struct
	{
		bool                           IsFrontend;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFrontend != nullptr)
		*IsFrontend = params.IsFrontend;
}


// Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature"));

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


// Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature"));

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


// Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature"));

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


// Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGenericDialog_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.PreConstruct"));

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


// Function GenericDialog.GenericDialog_C.OnEscapeRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::OnEscapeRequested()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnEscapeRequested"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.Press Accept or Single Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::Press_Accept_or_Single_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.Press Accept or Single Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.Press Decline Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::Press_Decline_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.Press Decline Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.ChangeText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGenericDialog_C::ChangeText(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.ChangeText"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGenericDialog_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.OnOutroAnimationDone
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasScreenClosed               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGenericDialog_C::OnOutroAnimationDone(bool bWasScreenClosed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnOutroAnimationDone"));

	struct
	{
		bool                           bWasScreenClosed;
	} params = {};

	params.bWasScreenClosed = bWasScreenClosed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.OnClosedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::OnClosedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnClosedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.OnOpenedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::OnOpenedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnOpenedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericDialog.GenericDialog_C.ExecuteUbergraph_GenericDialog
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGenericDialog_C::ExecuteUbergraph_GenericDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.ExecuteUbergraph_GenericDialog"));

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


// Function GenericDialog.GenericDialog_C.OnClose__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGenericDialog_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericDialog.GenericDialog_C.OnClose__DelegateSignature"));

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
