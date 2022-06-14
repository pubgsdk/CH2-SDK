// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationSubButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationSubButton.NavigationSubButton_C.PlayAltSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInstant                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationSubButton_C::PlayAltSelected(bool bInstant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.PlayAltSelected"));

	struct
	{
		bool                           bInstant;
	} params = {};

	params.bInstant = bInstant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationSubButton_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationSubButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.Update Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationSubButton_C::Update_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.Update Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UNavigationSubButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.OnAddedToFocusPath"));

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


// Function NavigationSubButton.NavigationSubButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UNavigationSubButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.OnRemovedFromFocusPath"));

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


// Function NavigationSubButton.NavigationSubButton_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UNavigationSubButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.OnFocusLost"));

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


// Function NavigationSubButton.NavigationSubButton_C.OnInputChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationSubButton_C::OnInputChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.OnInputChanged"));

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


// Function NavigationSubButton.NavigationSubButton_C.Highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationSubButton_C::Highlight(bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.Highlight"));

	struct
	{
		bool                           Instant;
	} params = {};

	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.Unhighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationSubButton_C::Unhighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.Unhighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationSubButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.PreConstruct"));

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


// Function NavigationSubButton.NavigationSubButton_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNavigationSubButton_C::SetName(const struct FText& NewName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.SetName"));

	struct
	{
		struct FText                   NewName;
	} params = {};

	params.NewName = NewName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationSubButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.SetMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationSubButton_C::SetMatchmaking(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.SetMatchmaking"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.SetEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationSubButton_C::SetEnabled(bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.SetEnabled"));

	struct
	{
		bool                           bIsEnabled;
	} params = {};

	params.bIsEnabled = bIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationSubButton.NavigationSubButton_C.ExecuteUbergraph_NavigationSubButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationSubButton_C::ExecuteUbergraph_NavigationSubButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSubButton.NavigationSubButton_C.ExecuteUbergraph_NavigationSubButton"));

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
