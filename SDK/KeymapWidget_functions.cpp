// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KeymapWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeymapWidget.KeymapWidget_C.GetGamepadOpenKeymapButton
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    NewParam                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::GetGamepadOpenKeymapButton(struct FKey* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.GetGamepadOpenKeymapButton"));

	struct
	{
		struct FKey                    NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function KeymapWidget.KeymapWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeymapWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.OnKeyUp"));

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


// Function KeymapWidget.KeymapWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeymapWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.OnKeyDown"));

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


// Function KeymapWidget.KeymapWidget_C.ChangeKeymap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EeActiveKeymap>    _NewKeyMap                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::ChangeKeymap(TEnumAsByte<EeActiveKeymap> _NewKeyMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.ChangeKeymap"));

	struct
	{
		TEnumAsByte<EeActiveKeymap>    _NewKeyMap;
	} params = {};

	params._NewKeyMap = _NewKeyMap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.OnLoaded_71FF425349550646758E7CAA0A5DF91F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::OnLoaded_71FF425349550646758E7CAA0A5DF91F(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.OnLoaded_71FF425349550646758E7CAA0A5DF91F"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeymapWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.Animate Deanimate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeymapWidget_C::Animate_Deanimate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Animate Deanimate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.Async Load Key Map Texture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         KeyMapTexturePath              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::Async_Load_Key_Map_Texture(const struct FSoftObjectPath& KeyMapTexturePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Async Load Key Map Texture"));

	struct
	{
		struct FSoftObjectPath         KeyMapTexturePath;
	} params = {};

	params.KeyMapTexturePath = KeyMapTexturePath;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.On Gamepad Input Mode Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::On_Gamepad_Input_Mode_Changed(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.On Gamepad Input Mode Changed"));

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


// Function KeymapWidget.KeymapWidget_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeymapWidget_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeymapWidget_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.Resume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeymapWidget_C::Resume()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.Resume"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.GoToInGameMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeymapWidget_C::GoToInGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.GoToInGameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKeymapWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.PreConstruct"));

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


// Function KeymapWidget.KeymapWidget_C.BndEvt__ResumeButton_90_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)

void UKeymapWidget_C::BndEvt__ResumeButton_90_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.BndEvt__ResumeButton_90_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UKeymapWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeymapWidget.KeymapWidget_C.ExecuteUbergraph_KeymapWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeymapWidget_C::ExecuteUbergraph_KeymapWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeymapWidget.KeymapWidget_C.ExecuteUbergraph_KeymapWidget"));

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
