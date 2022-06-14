// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerReportWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerReportWidget.PlayerReportWidget_C.ChangedSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadiobutton_C*          SelectedButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::ChangedSelected(class URadiobutton_C* SelectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.ChangedSelected"));

	struct
	{
		class URadiobutton_C*          SelectedButton;
	} params = {};

	params.SelectedButton = SelectedButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayerReportWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.OnMouseButtonDown"));

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


// Function PlayerReportWidget.PlayerReportWidget_C.GetReportedController
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Reported                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::GetReportedController(class AController** Reported)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.GetReportedController"));

	struct
	{
		class AController*             Reported;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Reported != nullptr)
		*Reported = params.Reported;
}


// Function PlayerReportWidget.PlayerReportWidget_C.EnableReportWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::EnableReportWidget(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.EnableReportWidget"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.DisableReportWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerReportWidget_C::DisableReportWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.DisableReportWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

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


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

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


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerReportWidget_C::BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.ExecuteUbergraph_PlayerReportWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::ExecuteUbergraph_PlayerReportWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.ExecuteUbergraph_PlayerReportWidget"));

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


// Function PlayerReportWidget.PlayerReportWidget_C.OnReportClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerReportWidget_C::OnReportClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.OnReportClosed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerReportWidget.PlayerReportWidget_C.OnReportChosen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerReportCategory          ReportType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerReportWidget_C::OnReportChosen__DelegateSignature(EPlayerReportCategory ReportType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerReportWidget.PlayerReportWidget_C.OnReportChosen__DelegateSignature"));

	struct
	{
		EPlayerReportCategory          ReportType;
	} params = {};

	params.ReportType = ReportType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
