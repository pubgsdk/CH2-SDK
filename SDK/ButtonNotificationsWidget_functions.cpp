// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ButtonNotificationsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.UpdateNotifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Notifications                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UButtonNotificationsWidget_C::UpdateNotifications(int Notifications)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.UpdateNotifications"));

	struct
	{
		int                            Notifications;
	} params = {};

	params.Notifications = Notifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.NewNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UButtonNotificationsWidget_C::NewNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.NewNotification"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UButtonNotificationsWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.PreConstruct"));

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


// Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.SetStyle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationsWidgetStyle> Style                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UButtonNotificationsWidget_C::SetStyle(TEnumAsByte<ENotificationsWidgetStyle> Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.SetStyle"));

	struct
	{
		TEnumAsByte<ENotificationsWidgetStyle> Style;
	} params = {};

	params.Style = Style;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.ExecuteUbergraph_ButtonNotificationsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UButtonNotificationsWidget_C::ExecuteUbergraph_ButtonNotificationsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.ExecuteUbergraph_ButtonNotificationsWidget"));

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
