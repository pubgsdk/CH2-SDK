// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NewsButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewsButton.NewsButton_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewsButton_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.OnPreviewKeyDown"));

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


// Function NewsButton.NewsButton_C.ProcessStoreClick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButton_C::ProcessStoreClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.ProcessStoreClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.ProcessGameUpdateClick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UpdateVersionNumber            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::ProcessGameUpdateClick(const struct FString& UpdateVersionNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.ProcessGameUpdateClick"));

	struct
	{
		struct FString                 UpdateVersionNumber;
	} params = {};

	params.UpdateVersionNumber = UpdateVersionNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.ProcessClick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButton_C::ProcessClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.ProcessClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.TickAutoSlide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::TickAutoSlide(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.TickAutoSlide"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewsButton_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.OnMouseWheel"));

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


// Function NewsButton.NewsButton_C.SetupItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FNewsButtonData> ItemsData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UNewsButton_C::SetupItems(TArray<struct FNewsButtonData>* ItemsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.SetupItems"));

	struct
	{
		TArray<struct FNewsButtonData> ItemsData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemsData != nullptr)
		*ItemsData = params.ItemsData;
}


// Function NewsButton.NewsButton_C.SelectItemRelative
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNewsButton_C::SelectItemRelative(int Delta, bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.SelectItemRelative"));

	struct
	{
		int                            Delta;
		bool                           Instant;
	} params = {};

	params.Delta = Delta;
	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.SelectItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNewsButton_C::SelectItem(int Index, bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.SelectItem"));

	struct
	{
		int                            Index;
		bool                           Instant;
	} params = {};

	params.Index = Index;
	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewsButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.Tick"));

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


// Function NewsButton.NewsButton_C.K2_Highlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewsButton_C::K2_Highlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.K2_Highlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.K2_Unhighlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewsButton_C::K2_Unhighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.K2_Unhighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.INTERNAL_OnClicked_Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButton_C::INTERNAL_OnClicked_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.INTERNAL_OnClicked_Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.PopulateItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButton_C::PopulateItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.PopulateItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewsButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButton.NewsButton_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

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


// Function NewsButton.NewsButton_C.OnInputModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::OnInputModeChange(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.OnInputModeChange"));

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


// Function NewsButton.NewsButton_C.ExecuteUbergraph_NewsButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButton_C::ExecuteUbergraph_NewsButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButton.NewsButton_C.ExecuteUbergraph_NewsButton"));

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
