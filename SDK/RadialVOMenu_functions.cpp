// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RadialVOMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialVOMenu.RadialVOMenu_C.IsCharacterCarried
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Carried                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::IsCharacterCarried(bool* Carried)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.IsCharacterCarried"));

	struct
	{
		bool                           Carried;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Carried != nullptr)
		*Carried = params.Carried;
}


// Function RadialVOMenu.RadialVOMenu_C.Update Controller Movement Allowance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IngoreMovements                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::Update_Controller_Movement_Allowance(bool IngoreMovements)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.Update Controller Movement Allowance"));

	struct
	{
		bool                           IngoreMovements;
	} params = {};

	params.IngoreMovements = IngoreMovements;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.TogglePage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ERadialVOMenuPageEnum> Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ERadialVOMenuPageEnum> Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::TogglePage(TEnumAsByte<ERadialVOMenuPageEnum> Selection, TEnumAsByte<ERadialVOMenuPageEnum>* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.TogglePage"));

	struct
	{
		TEnumAsByte<ERadialVOMenuPageEnum> Selection;
		TEnumAsByte<ERadialVOMenuPageEnum> Output_Get;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function RadialVOMenu.RadialVOMenu_C.UpdateNumKeyOrder
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceDefaultOrder              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SwapOrder                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::UpdateNumKeyOrder(bool ForceDefaultOrder, bool SwapOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.UpdateNumKeyOrder"));

	struct
	{
		bool                           ForceDefaultOrder;
		bool                           SwapOrder;
	} params = {};

	params.ForceDefaultOrder = ForceDefaultOrder;
	params.SwapOrder = SwapOrder;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnNumDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::OnNumDown(int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnNumDown"));

	struct
	{
		int                            Number;
	} params = {};

	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URadialVOMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnKeyDown"));

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


// Function RadialVOMenu.RadialVOMenu_C.ResetUnusedButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StartingIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::ResetUnusedButtons(int StartingIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ResetUnusedButtons"));

	struct
	{
		int                            StartingIndex;
	} params = {};

	params.StartingIndex = StartingIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.PopulateRadialButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::PopulateRadialButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.PopulateRadialButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.ShouldOverrideIsFocusable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URadialVOMenu_C::ShouldOverrideIsFocusable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ShouldOverrideIsFocusable"));

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


// Function RadialVOMenu.RadialVOMenu_C.ShouldShowMouseCursorOnInputCapture
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URadialVOMenu_C::ShouldShowMouseCursorOnInputCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ShouldShowMouseCursorOnInputCapture"));

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


// Function RadialVOMenu.RadialVOMenu_C.SetOverlayColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                Overlay                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FColor                  Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UImage*                  EmoteImage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::SetOverlayColorAndOpacity(class UOverlay* Overlay, const struct FColor& Color, float Opacity, class UImage** EmoteImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.SetOverlayColorAndOpacity"));

	struct
	{
		class UOverlay*                Overlay;
		struct FColor                  Color;
		float                          Opacity;
		class UImage*                  EmoteImage;
	} params = {};

	params.Overlay = Overlay;
	params.Color = Color;
	params.Opacity = Opacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EmoteImage != nullptr)
		*EmoteImage = params.EmoteImage;
}


// Function RadialVOMenu.RadialVOMenu_C.BindActionInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Consume                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FScriptDelegate         Callback                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor)

void URadialVOMenu_C::BindActionInput(const struct FName& ActionName, bool Consume, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.BindActionInput"));

	struct
	{
		struct FName                   ActionName;
		bool                           Consume;
		struct FScriptDelegate         Callback;
	} params = {};

	params.ActionName = ActionName;
	params.Consume = Consume;
	params.Callback = Callback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.IsCharacterDowned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Downed                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::IsCharacterDowned(bool* Downed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.IsCharacterDowned"));

	struct
	{
		bool                           Downed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Downed != nullptr)
		*Downed = params.Downed;
}


// Function RadialVOMenu.RadialVOMenu_C.SetEquippedPersonality
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::SetEquippedPersonality()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.SetEquippedPersonality"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.GetFirstHeldChicken
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AInventory_Chicken_C*    Chicken                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::GetFirstHeldChicken(class AInventory_Chicken_C** Chicken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.GetFirstHeldChicken"));

	struct
	{
		class AInventory_Chicken_C*    Chicken;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Chicken != nullptr)
		*Chicken = params.Chicken;
}


// Function RadialVOMenu.RadialVOMenu_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::GetCharacter(class ATBLCharacter** Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.GetCharacter"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Character != nullptr)
		*Character = params.Character;
}


// Function RadialVOMenu.RadialVOMenu_C.GetPersonalityEmotes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPersonalityEmoteTableRow> Output                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::GetPersonalityEmotes(TArray<struct FPersonalityEmoteTableRow>* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.GetPersonalityEmotes"));

	struct
	{
		TArray<struct FPersonalityEmoteTableRow> Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function RadialVOMenu.RadialVOMenu_C.SetTextAndColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUIRadialEmoteStruct    RadialEmote                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::SetTextAndColor(const struct FUIRadialEmoteStruct& RadialEmote, const struct FText& Text, bool IsDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.SetTextAndColor"));

	struct
	{
		struct FUIRadialEmoteStruct    RadialEmote;
		struct FText                   Text;
		bool                           IsDisabled;
	} params = {};

	params.RadialEmote = RadialEmote;
	params.Text = Text;
	params.IsDisabled = IsDisabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.UpdateRadialButtonText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ERadialVOMenuPageEnum> NewPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::UpdateRadialButtonText(TEnumAsByte<ERadialVOMenuPageEnum> NewPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.UpdateRadialButtonText"));

	struct
	{
		TEnumAsByte<ERadialVOMenuPageEnum> NewPage;
	} params = {};

	params.NewPage = NewPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.ShowRadialMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ERadialVOMenuPageEnum> VOMenuPage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::ShowRadialMenu(TEnumAsByte<ERadialVOMenuPageEnum> VOMenuPage, const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ShowRadialMenu"));

	struct
	{
		TEnumAsByte<ERadialVOMenuPageEnum> VOMenuPage;
		struct FKey                    Key;
	} params = {};

	params.VOMenuPage = VOMenuPage;
	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.HideRadialMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SkipPlayingEmote               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::HideRadialMenu(bool SkipPlayingEmote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.HideRadialMenu"));

	struct
	{
		bool                           SkipPlayingEmote;
	} params = {};

	params.SkipPlayingEmote = SkipPlayingEmote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.SetupRadialImageStruct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::SetupRadialImageStruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.SetupRadialImageStruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.PlayEmote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::PlayEmote(int EmoteIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.PlayEmote"));

	struct
	{
		int                            EmoteIndex;
	} params = {};

	params.EmoteIndex = EmoteIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.PlayCurrentEmote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::PlayCurrentEmote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.PlayCurrentEmote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnToggleEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::OnToggleEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnToggleEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.BindToggleEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::BindToggleEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.BindToggleEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.UnbindTOggleEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::UnbindTOggleEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.UnbindTOggleEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OpenAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::OpenAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OpenAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.CloseAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::CloseAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.CloseAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.PreConstruct"));

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


// Function RadialVOMenu.RadialVOMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.Tick"));

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


// Function RadialVOMenu.RadialVOMenu_C.GenerateEmoteLists
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::GenerateEmoteLists()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.GenerateEmoteLists"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnReverToggleEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::OnReverToggleEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnReverToggleEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void URadialVOMenu_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnKilled_Event_1"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.HideRadialMenuNoEmote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::HideRadialMenuNoEmote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.HideRadialMenuNoEmote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.HideRadialEmotePlayEmote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::HideRadialEmotePlayEmote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.HideRadialEmotePlayEmote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialVOMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.StartQuickUseTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepadKey                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenu_C::StartQuickUseTimer(bool IsGamepadKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.StartQuickUseTimer"));

	struct
	{
		bool                           IsGamepadKey;
	} params = {};

	params.IsGamepadKey = IsGamepadKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.Not used
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::Not_used()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.Not used"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialVOMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.BindNumberKeys
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::BindNumberKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.BindNumberKeys"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.1Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_1Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.1Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.2Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_2Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.2Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.3Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_3Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.3Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.4Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_4Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.4Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.5Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_5Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.5Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.6Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_6Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.6Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.7Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_7Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.7Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.8Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::_8Key()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.8Key"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.UnBindNumberKeys
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::UnBindNumberKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.UnBindNumberKeys"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.ProcessNumKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::ProcessNumKey(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ProcessNumKey"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.FadeAndCloseRadialVo_Internal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::FadeAndCloseRadialVo_Internal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.FadeAndCloseRadialVo_Internal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.CollapseRadialVO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::CollapseRadialVO()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.CollapseRadialVO"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.AutoHideTimerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::AutoHideTimerStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.AutoHideTimerStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.InputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::InputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.InputModeChanged"));

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


// Function RadialVOMenu.RadialVOMenu_C.UnlockSprint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::UnlockSprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.UnlockSprint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.OnFadeOutAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenu_C::OnFadeOutAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.OnFadeOutAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenu.RadialVOMenu_C.ExecuteUbergraph_RadialVOMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenu_C::ExecuteUbergraph_RadialVOMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenu.RadialVOMenu_C.ExecuteUbergraph_RadialVOMenu"));

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
