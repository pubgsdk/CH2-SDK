// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationWidget.NavigationWidget_C.K2_GetFocusWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UNavigationWidget_C::K2_GetFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.K2_GetFocusWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NavigationWidget.NavigationWidget_C.SelectSiblingMenuItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IndexDelta                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CallCameraEvent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           HasChangedTab                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::SelectSiblingMenuItem(int IndexDelta, bool CallCameraEvent, bool* HasChangedTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.SelectSiblingMenuItem"));

	struct
	{
		int                            IndexDelta;
		bool                           CallCameraEvent;
		bool                           HasChangedTab;
	} params = {};

	params.IndexDelta = IndexDelta;
	params.CallCameraEvent = CallCameraEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasChangedTab != nullptr)
		*HasChangedTab = params.HasChangedTab;
}


// Function NavigationWidget.NavigationWidget_C.IsFrontend
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFrontend                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::IsFrontend(bool* IsFrontend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.IsFrontend"));

	struct
	{
		bool                           IsFrontend;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFrontend != nullptr)
		*IsFrontend = params.IsFrontend;
}


// Function NavigationWidget.NavigationWidget_C.UpdateNavigationForConsole
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ScreenName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNavigationWidget_C::UpdateNavigationForConsole(const struct FText& ScreenName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.UpdateNavigationForConsole"));

	struct
	{
		struct FText                   ScreenName;
	} params = {};

	params.ScreenName = ScreenName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.UpdateNotifications
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    NotificationCounts             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::UpdateNotifications(TArray<int>* NotificationCounts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.UpdateNotifications"));

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


// Function NavigationWidget.NavigationWidget_C.UpdateMenuDataUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationMenuData_C*   NavigationMenuData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::UpdateMenuDataUI(class UNavigationMenuData_C* NavigationMenuData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.UpdateMenuDataUI"));

	struct
	{
		class UNavigationMenuData_C*   NavigationMenuData;
	} params = {};

	params.NavigationMenuData = NavigationMenuData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.ShouldCallOnMenuClickedWithShoulderButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UNavigationWidget_C::ShouldCallOnMenuClickedWithShoulderButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ShouldCallOnMenuClickedWithShoulderButtons"));

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


// Function NavigationWidget.NavigationWidget_C.GamepadInGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKeyEvent               KeyEvent                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FGeometry               Geomtry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::GamepadInGame(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.GamepadInGame"));

	struct
	{
		struct FKeyEvent               KeyEvent;
		struct FGeometry               Geomtry;
	} params = {};

	params.KeyEvent = KeyEvent;
	params.Geomtry = Geomtry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.IsSameMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationMenuData_C*   NavigationMenuData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsSame                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::IsSameMenu(class UNavigationMenuData_C* NavigationMenuData, bool* bIsSame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.IsSameMenu"));

	struct
	{
		class UNavigationMenuData_C*   NavigationMenuData;
		bool                           bIsSame;
	} params = {};

	params.NavigationMenuData = NavigationMenuData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsSame != nullptr)
		*bIsSame = params.bIsSame;
}


// Function NavigationWidget.NavigationWidget_C.GamepadInputFrontend
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKeyEvent               KeyEvent                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FGeometry               Geomtry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::GamepadInputFrontend(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.GamepadInputFrontend"));

	struct
	{
		struct FKeyEvent               KeyEvent;
		struct FGeometry               Geomtry;
	} params = {};

	params.KeyEvent = KeyEvent;
	params.Geomtry = Geomtry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.UpdateButtonIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IncrementValue                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   NewSubMenu                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::UpdateButtonIndex(int IncrementValue, class UNavigationMenuData_C** NewSubMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.UpdateButtonIndex"));

	struct
	{
		int                            IncrementValue;
		class UNavigationMenuData_C*   NewSubMenu;
	} params = {};

	params.IncrementValue = IncrementValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewSubMenu != nullptr)
		*NewSubMenu = params.NewSubMenu;
}


// Function NavigationWidget.NavigationWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNavigationWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnKeyDown"));

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


// Function NavigationWidget.NavigationWidget_C.ChangeMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationMenuData_C*   MenuData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bCallCameraEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           MenuChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::ChangeMenu(class UNavigationMenuData_C* MenuData, bool bCallCameraEvent, bool* MenuChanged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ChangeMenu"));

	struct
	{
		class UNavigationMenuData_C*   MenuData;
		bool                           bCallCameraEvent;
		bool                           MenuChanged;
	} params = {};

	params.MenuData = MenuData;
	params.bCallCameraEvent = bCallCameraEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MenuChanged != nullptr)
		*MenuChanged = params.MenuChanged;
}


// Function NavigationWidget.NavigationWidget_C.Focus on first menu button
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::Focus_on_first_menu_button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Focus on first menu button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.ChangeButtonStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationButton_C*     Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNavigationWidget_C::ChangeButtonStyle(class UNavigationButton_C* Button, const struct FText& Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ChangeButtonStyle"));

	struct
	{
		class UNavigationButton_C*     Button;
		struct FText                   Index;
	} params = {};

	params.Button = Button;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.HoverChivalryButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UChivalryButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::HoverChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.HoverChivalryButton"));

	struct
	{
		class UChivalryButton_C*       Button;
		class UTexture2D*              Icon;
	} params = {};

	params.Button = Button;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.InitChivalryButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UChivalryButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Normal                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::InitChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Normal, class UTexture2D* Highlight, float Width, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.InitChivalryButton"));

	struct
	{
		class UChivalryButton_C*       Button;
		class UTexture2D*              Normal;
		class UTexture2D*              Highlight;
		float                          Width;
		float                          Height;
	} params = {};

	params.Button = Button;
	params.Normal = Normal;
	params.Highlight = Highlight;
	params.Width = Width;
	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.GetWidgetFromClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTBLScreenWidget*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBLScreenWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLScreenWidget* UNavigationWidget_C::GetWidgetFromClass(class UClass* /*UTBLScreenWidget*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.GetWidgetFromClass"));

	struct
	{
		class UClass* /*UTBLScreenWidget*/ Class;
		class UTBLScreenWidget*        ReturnValue;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NavigationWidget.NavigationWidget_C.ChangeCameraSubMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SubMenuIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::ChangeCameraSubMenu(int SubMenuIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ChangeCameraSubMenu"));

	struct
	{
		int                            SubMenuIndex;
	} params = {};

	params.SubMenuIndex = SubMenuIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.ChangeCamera
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CameraName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::ChangeCamera(const struct FString& CameraName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ChangeCamera"));

	struct
	{
		struct FString                 CameraName;
	} params = {};

	params.CameraName = CameraName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.OnMenuClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bCallCamera                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::OnMenuClicked(bool bCallCamera, int* ButtonIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnMenuClicked"));

	struct
	{
		int                            ButtonIndex;
		bool                           bCallCamera;
	} params = {};

	params.bCallCamera = bCallCamera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ButtonIndex != nullptr)
		*ButtonIndex = params.ButtonIndex;
}


// Function NavigationWidget.NavigationWidget_C.UpdateNavigationButtonsFromMenuStack
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::UpdateNavigationButtonsFromMenuStack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.UpdateNavigationButtonsFromMenuStack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.LoadScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    Screen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::LoadScreen(TSoftClassPtr<class UClass> Screen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.LoadScreen"));

	struct
	{
		TSoftClassPtr<class UClass>    Screen;
	} params = {};

	params.Screen = Screen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

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


// Function NavigationWidget.NavigationWidget_C.OnUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::OnUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Yes Exit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::Yes_Exit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Yes Exit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.No Do Not
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::No_Do_Not()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.No Do Not"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.OnPlayerStateReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnPlayerStateReplicated_Event_1"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Pop Current Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::Pop_Current_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Pop Current Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

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


// Function NavigationWidget.NavigationWidget_C.ReselectFirstMenuItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCallCameraEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::ReselectFirstMenuItem(bool bCallCameraEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ReselectFirstMenuItem"));

	struct
	{
		bool                           bCallCameraEvent;
	} params = {};

	params.bCallCameraEvent = bCallCameraEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.OpenFriends
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::OpenFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OpenFriends"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.TryQuitting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::TryQuitting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.TryQuitting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.HighlightItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::HighlightItem(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.HighlightItem"));

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


// Function NavigationWidget.NavigationWidget_C.FocusOnCurrentScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::FocusOnCurrentScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.FocusOnCurrentScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.On Is Matchmaking Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsMatchmaking                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::On_Is_Matchmaking_Changed(bool bIsMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.On Is Matchmaking Changed"));

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


// Function NavigationWidget.NavigationWidget_C.TurnOnNotfication
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bTurnOn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::TurnOnNotfication(const struct FText& ButtonID, bool bTurnOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.TurnOnNotfication"));

	struct
	{
		struct FText                   ButtonID;
		bool                           bTurnOn;
	} params = {};

	params.ButtonID = ButtonID;
	params.bTurnOn = bTurnOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.OnNativeSessionStatusChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::OnNativeSessionStatusChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnNativeSessionStatusChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationWidget_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.PreConstruct"));

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


// Function NavigationWidget.NavigationWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)

void UNavigationWidget_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.DirectOpenServerBrowser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::DirectOpenServerBrowser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.DirectOpenServerBrowser"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.SelectMenuItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CallCameraEvent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::SelectMenuItem(int Index, bool CallCameraEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.SelectMenuItem"));

	struct
	{
		int                            Index;
		bool                           CallCameraEvent;
	} params = {};

	params.Index = Index;
	params.CallCameraEvent = CallCameraEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.OnChiv2ButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::OnChiv2ButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnChiv2ButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.ExecuteUbergraph_NavigationWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::ExecuteUbergraph_NavigationWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ExecuteUbergraph_NavigationWidget"));

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


// Function NavigationWidget.NavigationWidget_C.OnMenuChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Changed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationWidget_C::OnMenuChanged__DelegateSignature(bool Changed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.OnMenuChanged__DelegateSignature"));

	struct
	{
		bool                           Changed;
	} params = {};

	params.Changed = Changed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Fired Button Action__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Button_ID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::Fired_Button_Action__DelegateSignature(const struct FName& Button_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Fired Button Action__DelegateSignature"));

	struct
	{
		struct FName                   Button_ID;
	} params = {};

	params.Button_ID = Button_ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.Resume Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::Resume_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.Resume Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.DeselectMenus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationWidget_C::DeselectMenus__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.DeselectMenus__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationWidget.NavigationWidget_C.ChangeCameraEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CameraName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   FrontendEvent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationWidget_C::ChangeCameraEvent__DelegateSignature(const struct FString& CameraName, const struct FName& FrontendEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationWidget.NavigationWidget_C.ChangeCameraEvent__DelegateSignature"));

	struct
	{
		struct FString                 CameraName;
		struct FName                   FrontendEvent;
	} params = {};

	params.CameraName = CameraName;
	params.FrontendEvent = FrontendEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
