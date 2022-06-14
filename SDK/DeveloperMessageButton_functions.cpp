// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DeveloperMessageButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeveloperMessageButton.DeveloperMessageButton_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UDeveloperMessageButton_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OnPreviewKeyDown"));

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


// Function DeveloperMessageButton.DeveloperMessageButton_C.UpdateMotd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::UpdateMotd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.UpdateMotd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.OnMotdUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::OnMotdUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OnMotdUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__DeveloperButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UDeveloperMessageButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OnAddedToFocusPath"));

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


// Function DeveloperMessageButton.DeveloperMessageButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UDeveloperMessageButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OnRemovedFromFocusPath"));

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


// Function DeveloperMessageButton.DeveloperMessageButton_C.OpenLink
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeveloperMessageButton_C::OpenLink()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OpenLink"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.OnGamepadInputModeChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeveloperMessageButton_C::OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.OnGamepadInputModeChanged_Event_1"));

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


// Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__OpenLinkBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeveloperMessageButton_C::BndEvt__OpenLinkBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.BndEvt__OpenLinkBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

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


// Function DeveloperMessageButton.DeveloperMessageButton_C.AttemptOpenURL
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UDeveloperMessageButton_C::AttemptOpenURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.AttemptOpenURL"));

	struct
	{
		struct FString                 URL;
	} params = {};

	params.URL = URL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DeveloperMessageButton.DeveloperMessageButton_C.ExecuteUbergraph_DeveloperMessageButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeveloperMessageButton_C::ExecuteUbergraph_DeveloperMessageButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DeveloperMessageButton.DeveloperMessageButton_C.ExecuteUbergraph_DeveloperMessageButton"));

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
