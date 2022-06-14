// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NDASplashScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NDASplashScreen.NDASplashScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNDASplashScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.OnKeyDown"));

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


// Function NDASplashScreen.NDASplashScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::BndEvt__Radiobutton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature"));

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


// Function NDASplashScreen.NDASplashScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature"));

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


// Function NDASplashScreen.NDASplashScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNDASplashScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNDASplashScreen_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.SetAutoCloseText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeRemaining                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::SetAutoCloseText(int TimeRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.SetAutoCloseText"));

	struct
	{
		int                            TimeRemaining;
	} params = {};

	params.TimeRemaining = TimeRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UNDASplashScreen_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.BndEvt__ScrollBox_97_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::BndEvt__ScrollBox_97_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.BndEvt__ScrollBox_97_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature"));

	struct
	{
		float                          CurrentOffset;
	} params = {};

	params.CurrentOffset = CurrentOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.OnUserScrolled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNDASplashScreen_C::OnUserScrolled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.OnUserScrolled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UNDASplashScreen_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.OnFocusLost"));

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


// Function NDASplashScreen.NDASplashScreen_C.K2_OnFocusChanging
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNDASplashScreen_C::K2_OnFocusChanging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.K2_OnFocusChanging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.Tick"));

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


// Function NDASplashScreen.NDASplashScreen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNDASplashScreen_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NDASplashScreen.NDASplashScreen_C.ExecuteUbergraph_NDASplashScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNDASplashScreen_C::ExecuteUbergraph_NDASplashScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.ExecuteUbergraph_NDASplashScreen"));

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


// Function NDASplashScreen.NDASplashScreen_C.NDAAccepted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNDASplashScreen_C::NDAAccepted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NDASplashScreen.NDASplashScreen_C.NDAAccepted__DelegateSignature"));

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
