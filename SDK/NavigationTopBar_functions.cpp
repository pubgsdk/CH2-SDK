// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationTopBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationTopBar.NavigationTopBar_C.UpdateGamepadButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationTopBar_C::UpdateGamepadButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.UpdateGamepadButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.UpdateNotifications
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    NotificationCounts             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UNavigationTopBar_C::UpdateNotifications(TArray<int>* NotificationCounts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.UpdateNotifications"));

	struct
	{
		TArray<int>                    NotificationCounts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NotificationCounts != nullptr)
		*NotificationCounts = params.NotificationCounts;
}


// Function NavigationTopBar.NavigationTopBar_C.GetNavigationButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InButtonName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UNavigationButton_C*     NavigationButton               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationTopBar_C::GetNavigationButton(const struct FText& InButtonName, class UNavigationButton_C** NavigationButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.GetNavigationButton"));

	struct
	{
		struct FText                   InButtonName;
		class UNavigationButton_C*     NavigationButton;
	} params = {};

	params.InButtonName = InButtonName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NavigationButton != nullptr)
		*NavigationButton = params.NavigationButton;
}


// Function NavigationTopBar.NavigationTopBar_C.ClearButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationTopBar_C::ClearButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.ClearButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.AddNavigationButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationWidget_C*     FrontEndNavigation             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DisabledWIP                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UNavigationButton_C*     NavigationButton               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationTopBar_C::AddNavigationButton(const struct FText& ButtonName, class APlayerController* PlayerController, int Index, class UNavigationWidget_C* FrontEndNavigation, bool DisabledWIP, class UNavigationButton_C** NavigationButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.AddNavigationButton"));

	struct
	{
		struct FText                   ButtonName;
		class APlayerController*       PlayerController;
		int                            Index;
		class UNavigationWidget_C*     FrontEndNavigation;
		bool                           DisabledWIP;
		class UNavigationButton_C*     NavigationButton;
	} params = {};

	params.ButtonName = ButtonName;
	params.PlayerController = PlayerController;
	params.Index = Index;
	params.FrontEndNavigation = FrontEndNavigation;
	params.DisabledWIP = DisabledWIP;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NavigationButton != nullptr)
		*NavigationButton = params.NavigationButton;
}


// Function NavigationTopBar.NavigationTopBar_C.OnMainButtonUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationTopBar_C::OnMainButtonUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.OnMainButtonUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationTopBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.ShowGamepadCallouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationTopBar_C::ShowGamepadCallouts(bool bIsShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.ShowGamepadCallouts"));

	struct
	{
		bool                           bIsShow;
	} params = {};

	params.bIsShow = bIsShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.OnMainButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationTopBar_C::OnMainButtonHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.OnMainButtonHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.BndEvt__Button_138_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationTopBar_C::BndEvt__Button_138_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.BndEvt__Button_138_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationTopBar.NavigationTopBar_C.ExecuteUbergraph_NavigationTopBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationTopBar_C::ExecuteUbergraph_NavigationTopBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationTopBar.NavigationTopBar_C.ExecuteUbergraph_NavigationTopBar"));

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
