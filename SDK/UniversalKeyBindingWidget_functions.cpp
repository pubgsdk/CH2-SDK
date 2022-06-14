// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UniversalKeyBindingWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.ShouldEnlargeKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldEnlarge                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUniversalKeyBindingWidget_C::ShouldEnlargeKey(bool* ShouldEnlarge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.ShouldEnlargeKey"));

	struct
	{
		bool                           ShouldEnlarge;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShouldEnlarge != nullptr)
		*ShouldEnlarge = params.ShouldEnlarge;
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Get Key Display Info
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UDataTable> Input                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FKeyDisplayInfo         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKeyDisplayInfo UUniversalKeyBindingWidget_C::Get_Key_Display_Info(TSoftObjectPtr<class UDataTable> Input, const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Get Key Display Info"));

	struct
	{
		TSoftObjectPtr<class UDataTable> Input;
		struct FKey                    Key;
		struct FKeyDisplayInfo         ReturnValue;
	} params = {};

	params.Input = Input;
	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnLoaded_B23D298343850A5F730299A5DD8185E0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::OnLoaded_B23D298343850A5F730299A5DD8185E0(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnLoaded_B23D298343850A5F730299A5DD8185E0"));

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


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnLoaded_1F3ECE964E80CC3296476998C717835D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::OnLoaded_1F3ECE964E80CC3296476998C717835D(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnLoaded_1F3ECE964E80CC3296476998C717835D"));

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


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUniversalKeyBindingWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.PreConstruct"));

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


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Set Keybinding or Action
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 In_Action                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FKey                    In_Key                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::Set_Keybinding_or_Action(const struct FString& In_Action, const struct FKey& In_Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Set Keybinding or Action"));

	struct
	{
		struct FString                 In_Action;
		struct FKey                    In_Key;
	} params = {};

	params.In_Action = In_Action;
	params.In_Key = In_Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUniversalKeyBindingWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.SetKeybinding
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               IconSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::SetKeybinding(const struct FKey& Key, float Height, const struct FVector2D& IconSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.SetKeybinding"));

	struct
	{
		struct FKey                    Key;
		float                          Height;
		struct FVector2D               IconSize;
	} params = {};

	params.Key = Key;
	params.Height = Height;
	params.IconSize = IconSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnGamepadInputModeChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.OnGamepadInputModeChanged_Event_1"));

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


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.SetKeybindingByActionMapping
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  ActionMapping                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUniversalKeyBindingWidget_C::SetKeybindingByActionMapping(const struct FInputActionKeyMapping& ActionMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.SetKeybindingByActionMapping"));

	struct
	{
		struct FInputActionKeyMapping  ActionMapping;
	} params = {};

	params.ActionMapping = ActionMapping;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUniversalKeyBindingWidget_C::UpdateIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.On Key Bind Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::On_Key_Bind_Changed(const struct FName& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.On Key Bind Changed"));

	struct
	{
		struct FName                   ActionName;
	} params = {};

	params.ActionName = ActionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateStyle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Binding                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUniversalKeyBindingWidget_C::UpdateStyle(const struct FText& Binding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateStyle"));

	struct
	{
		struct FText                   Binding;
	} params = {};

	params.Binding = Binding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateFontSizeOverride
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUniversalKeyBindingWidget_C::UpdateFontSizeOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.UpdateFontSizeOverride"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.ExecuteUbergraph_UniversalKeyBindingWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUniversalKeyBindingWidget_C::ExecuteUbergraph_UniversalKeyBindingWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalKeyBindingWidget.UniversalKeyBindingWidget_C.ExecuteUbergraph_UniversalKeyBindingWidget"));

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
