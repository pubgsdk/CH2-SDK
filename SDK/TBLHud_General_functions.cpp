// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBLHud_General_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBLHud_General.TBLHud_General_C.IsScoreboardOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsOpen                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::IsScoreboardOpen(bool* bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.IsScoreboardOpen"));

	struct
	{
		bool                           bIsOpen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsOpen != nullptr)
		*bIsOpen = params.bIsOpen;
}


// Function TBLHud_General.TBLHud_General_C.CanHideRadialVoImmediately
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGamePad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::CanHideRadialVoImmediately(bool IsGamePad, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.CanHideRadialVoImmediately"));

	struct
	{
		bool                           IsGamePad;
		bool                           Return_Value;
	} params = {};

	params.IsGamePad = IsGamePad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TBLHud_General.TBLHud_General_C.ShouldShowRadialMenus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::ShouldShowRadialMenus(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ShouldShowRadialMenus"));

	struct
	{
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TBLHud_General.TBLHud_General_C.DismissRadials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::DismissRadials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.DismissRadials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ConvertDoubleKeyToVOOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewKey                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::ConvertDoubleKeyToVOOption(int Key, int* NewKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ConvertDoubleKeyToVOOption"));

	struct
	{
		int                            Key;
		int                            NewKey;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewKey != nullptr)
		*NewKey = params.NewKey;
}


// Function TBLHud_General.TBLHud_General_C.VOOptionExpired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::VOOptionExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.VOOptionExpired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.HandleVOOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            VOOption                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::HandleVOOption(int VOOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.HandleVOOption"));

	struct
	{
		int                            VOOption;
	} params = {};

	params.VOOption = VOOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_SelectClass_K2Node_InputActionEvent_14
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_SelectClass_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_SelectClass_K2Node_InputActionEvent_14"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Five_K2Node_InputKeyEvent_12
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Five_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Five_K2Node_InputKeyEvent_12"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Six_K2Node_InputKeyEvent_11
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Six_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Six_K2Node_InputKeyEvent_11"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Seven_K2Node_InputKeyEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Seven_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Seven_K2Node_InputKeyEvent_10"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Eight_K2Node_InputKeyEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Eight_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Eight_K2Node_InputKeyEvent_9"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Nine_K2Node_InputKeyEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Nine_K2Node_InputKeyEvent_8"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Zero_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Zero_K2Node_InputKeyEvent_7"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Three_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Three_K2Node_InputKeyEvent_6"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Four_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Four_K2Node_InputKeyEvent_5"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_One_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_One_K2Node_InputKeyEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_Two_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_Two_K2Node_InputKeyEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_DebugMacros_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_5"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_DebugMacros_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowControlMap_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_ShowControlMap_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowControlMap_K2Node_InputActionEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_RadialInventory_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::InpActEvt_RadialInventory_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBLHud_General_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ShowTeamSelectScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bGameStart                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::ShowTeamSelectScreen(bool bGameStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ShowTeamSelectScreen"));

	struct
	{
		bool                           bGameStart;
	} params = {};

	params.bGameStart = bGameStart;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ShowIngameMenu
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::ShowIngameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ShowIngameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ShowLoadoutScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::ShowLoadoutScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ShowLoadoutScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.OnTeamChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.OnTeamChanged_Event_1"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.OnPossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.OnPossessedPawn"));

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


// Function TBLHud_General.TBLHud_General_C.OnDeathRecapReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::OnDeathRecapReplicated_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.OnDeathRecapReplicated_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.OnMatchWonBy_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Victor                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::OnMatchWonBy_Event_1(EFaction Victor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.OnMatchWonBy_Event_1"));

	struct
	{
		EFaction                       Victor;
	} params = {};

	params.Victor = Victor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::Emote_Gamepad_Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.CloseEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::CloseEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.CloseEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Personal                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::Emote_Gamepad_Pressed(const struct FKey& Key, bool Personal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Pressed"));

	struct
	{
		struct FKey                    Key;
		bool                           Personal;
	} params = {};

	params.Key = Key;
	params.Personal = Personal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.SpectateAndHideHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::SpectateAndHideHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.SpectateAndHideHUD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.CloseRadialInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::CloseRadialInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.CloseRadialInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InGameMenuReleased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::InGameMenuReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InGameMenuReleased"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.AfterTimerShowMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::AfterTimerShowMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.AfterTimerShowMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.PS4TouchpadPressed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::PS4TouchpadPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.PS4TouchpadPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.StartRadialVOTimer_PC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::StartRadialVOTimer_PC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.StartRadialVOTimer_PC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.GamepadShowEmoteWheel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBLHud_General_C::GamepadShowEmoteWheel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.GamepadShowEmoteWheel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.GamepadHideEmoteWheel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBLHud_General_C::GamepadHideEmoteWheel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.GamepadHideEmoteWheel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InventoryPressedTimerFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::InventoryPressedTimerFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InventoryPressedTimerFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.HideEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamePad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBLHud_General_C::HideEmoteMenu(bool IsGamePad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.HideEmoteMenu"));

	struct
	{
		bool                           IsGamePad;
	} params = {};

	params.IsGamePad = IsGamePad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.OnGamepadShowKeymapInputComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::OnGamepadShowKeymapInputComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.OnGamepadShowKeymapInputComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.Scoreboard Input Timer Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::Scoreboard_Input_Timer_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.Scoreboard Input Timer Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.InGameMenuPressed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBLHud_General_C::InGameMenuPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.InGameMenuPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLHud_General.TBLHud_General_C.ExecuteUbergraph_TBLHud_General
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::ExecuteUbergraph_TBLHud_General(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.ExecuteUbergraph_TBLHud_General"));

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


// Function TBLHud_General.TBLHud_General_C.NumRowKeyUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBLHud_General_C::NumRowKeyUp__DelegateSignature(int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLHud_General.TBLHud_General_C.NumRowKeyUp__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
