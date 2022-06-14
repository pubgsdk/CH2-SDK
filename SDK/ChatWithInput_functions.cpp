// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChatWithInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChatWithInput.ChatWithInput_C.GetIsInputMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UChatWithInput_C::GetIsInputMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.GetIsInputMode"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ChatWithInput.ChatWithInput_C.GetFactionColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FColor                  FactionColour                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::GetFactionColour(struct FColor* FactionColour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.GetFactionColour"));

	struct
	{
		struct FColor                  FactionColour;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FactionColour != nullptr)
		*FactionColour = params.FactionColour;
}


// Function ChatWithInput.ChatWithInput_C.OnGenerateRow_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FChatLine               Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UChatWithInput_C::OnGenerateRow_1(const struct FChatLine& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.OnGenerateRow_1"));

	struct
	{
		struct FChatLine               Item;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ChatWithInput.ChatWithInput_C.Switch to next input type
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWithInput_C::Switch_to_next_input_type()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Switch to next input type"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.IsKeyHandled
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKeyEvent               Key_Event                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             Handled                        (CPF_Parm, CPF_OutParm)

void UChatWithInput_C::IsKeyHandled(const struct FKeyEvent& Key_Event, struct FEventReply* Handled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.IsKeyHandled"));

	struct
	{
		struct FKeyEvent               Key_Event;
		struct FEventReply             Handled;
	} params = {};

	params.Key_Event = Key_Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ChatWithInput.ChatWithInput_C.OnKeyChar
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FCharacterEvent         InCharacterEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UChatWithInput_C::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.OnKeyChar"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FCharacterEvent         InCharacterEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ChatWithInput.ChatWithInput_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UChatWithInput_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.OnKeyDown"));

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


// Function ChatWithInput.ChatWithInput_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UChatWithInput_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.OnKeyUp"));

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


// Function ChatWithInput.ChatWithInput_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UChatWithInput_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.Switch To Type
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EChatType>         Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::Switch_To_Type(TEnumAsByte<EChatType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Switch To Type"));

	struct
	{
		TEnumAsByte<EChatType>         Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void UChatWithInput_C::BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.Enter Input Mode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EChatType>         In_ChatType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::Enter_Input_Mode(TEnumAsByte<EChatType> In_ChatType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Enter Input Mode"));

	struct
	{
		TEnumAsByte<EChatType>         In_ChatType;
	} params = {};

	params.In_ChatType = In_ChatType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.Enter Last Channel Input Mode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWithInput_C::Enter_Last_Channel_Input_Mode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Enter Last Channel Input Mode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UChatWithInput_C::BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature"));

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


// Function ChatWithInput.ChatWithInput_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EOverviewScreenState> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EOverviewScreenState> PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature"));

	struct
	{
		TEnumAsByte<EOverviewScreenState> NewState;
		TEnumAsByte<EOverviewScreenState> PreviousState;
	} params = {};

	params.NewState = NewState;
	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EChatType>         InChatType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature(TEnumAsByte<EChatType> InChatType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature"));

	struct
	{
		TEnumAsByte<EChatType>         InChatType;
	} params = {};

	params.InChatType = InChatType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.Resized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enlarged                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UChatWithInput_C::Resized(bool Enlarged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.Resized"));

	struct
	{
		bool                           Enlarged;
	} params = {};

	params.Enlarged = Enlarged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.ExecuteUbergraph_ChatWithInput
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChatWithInput_C::ExecuteUbergraph_ChatWithInput(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.ExecuteUbergraph_ChatWithInput"));

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


// Function ChatWithInput.ChatWithInput_C.On Left Input Mode__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWithInput_C::On_Left_Input_Mode__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.On Left Input Mode__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChatWithInput.ChatWithInput_C.On Entered Input Mode__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChatWithInput_C::On_Entered_Input_Mode__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChatWithInput.ChatWithInput_C.On Entered Input Mode__DelegateSignature"));

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
