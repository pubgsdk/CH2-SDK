// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuickPlayScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuickPlayScreen.QuickPlayScreen_C.IsMatchmaking
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UQuickPlayScreen_C::IsMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.IsMatchmaking"));

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


// Function QuickPlayScreen.QuickPlayScreen_C.Set MM Button Image
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationSubButton_C*  Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Image_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::Set_MM_Button_Image(class UNavigationSubButton_C* Button, const struct FName& Image_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.Set MM Button Image"));

	struct
	{
		class UNavigationSubButton_C*  Button;
		struct FName                   Image_Name;
	} params = {};

	params.Button = Button;
	params.Image_Name = Image_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.SetNavMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::SetNavMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.SetNavMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnOpenedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::OnOpenedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnOpenedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnInputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::OnInputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnInputModeChanged"));

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


// Function QuickPlayScreen.QuickPlayScreen_C.OnIsMatchmakingChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsMatchmaking                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuickPlayScreen_C::OnIsMatchmakingChanged_Event_1(bool bIsMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnIsMatchmakingChanged_Event_1"));

	struct
	{
		bool                           bIsMatchmaking;
	} params = {};

	params.bIsMatchmaking = bIsMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

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


// Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

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


// Function QuickPlayScreen.QuickPlayScreen_C.SetCreateGamePermission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::SetCreateGamePermission()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.SetCreateGamePermission"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnCreatedParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 PartyId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::OnCreatedParty(bool Result, const struct FString& PartyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnCreatedParty"));

	struct
	{
		bool                           Result;
		struct FString                 PartyId;
	} params = {};

	params.Result = Result;
	params.PartyId = PartyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeaderChange_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::OnPartyLeaderChange_Event_1(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeaderChange_Event_1"));

	struct
	{
		struct FString                 UserId;
		struct FString                 DisplayName;
	} params = {};

	params.UserId = UserId;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeave_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UQuickPlayScreen_C::OnPartyLeave_Event_1(bool Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeave_Event_1"));

	struct
	{
		bool                           Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyDisband_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::OnPartyDisband_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyDisband_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnMemberJoin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::OnMemberJoin(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnMemberJoin"));

	struct
	{
		struct FString                 UserId;
		struct FString                 DisplayName;
	} params = {};

	params.UserId = UserId;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyInviteAccept_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::OnPartyInviteAccept_Event_1(const struct FString& PartyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyInviteAccept_Event_1"));

	struct
	{
		struct FString                 PartyId;
	} params = {};

	params.PartyId = PartyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyJoinedQueue_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::OnPartyJoinedQueue_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyJoinedQueue_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeftQueue_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::OnPartyLeftQueue_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeftQueue_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.CanCancelMatchMaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickPlayScreen_C::CanCancelMatchMaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.CanCancelMatchMaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__PlayButton_271_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::BndEvt__PlayButton_271_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__PlayButton_271_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function QuickPlayScreen.QuickPlayScreen_C.ExecuteUbergraph_QuickPlayScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickPlayScreen_C::ExecuteUbergraph_QuickPlayScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickPlayScreen.QuickPlayScreen_C.ExecuteUbergraph_QuickPlayScreen"));

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
