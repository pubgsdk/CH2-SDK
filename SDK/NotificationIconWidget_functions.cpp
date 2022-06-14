// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NotificationIconWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotificationIconWidget.NotificationIconWidget_C.UpdateWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHasUnviewed                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHasPurchasable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNotificationIconWidget_C::UpdateWidget(bool bHasUnviewed, bool bHasPurchasable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NotificationIconWidget.NotificationIconWidget_C.UpdateWidget"));

	struct
	{
		bool                           bHasUnviewed;
		bool                           bHasPurchasable;
	} params = {};

	params.bHasUnviewed = bHasUnviewed;
	params.bHasPurchasable = bHasPurchasable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCustomizationEntry     CustomizationEntry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNotificationIconWidget_C::UpdateCustNotification(const struct FCustomizationEntry& CustomizationEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustNotification"));

	struct
	{
		struct FCustomizationEntry     CustomizationEntry;
	} params = {};

	params.CustomizationEntry = CustomizationEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustListNotification
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FCustomizationEntry> CustomizationEntryList         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UNotificationIconWidget_C::UpdateCustListNotification(TArray<struct FCustomizationEntry> CustomizationEntryList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustListNotification"));

	struct
	{
		TArray<struct FCustomizationEntry> CustomizationEntryList;
	} params = {};

	params.CustomizationEntryList = CustomizationEntryList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NotificationIconWidget.NotificationIconWidget_C.ExecuteUbergraph_NotificationIconWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNotificationIconWidget_C::ExecuteUbergraph_NotificationIconWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NotificationIconWidget.NotificationIconWidget_C.ExecuteUbergraph_NotificationIconWidget"));

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
