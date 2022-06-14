// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DialogManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DialogManager.BP_DialogManager_C.OnCreateExitDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateExitDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateExitDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_DialogManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnKeyDown"));

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


// Function BP_DialogManager.BP_DialogManager_C.OnCreateCancelWorkingDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateCancelWorkingDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateCancelWorkingDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnCreateNoButtonsWorkingDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateNoButtonsWorkingDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateNoButtonsWorkingDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnCreateNoButtonsDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateNoButtonsDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateNoButtonsDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnCreateOkCancelDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateOkCancelDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateOkCancelDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnCreateOkDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateOkDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateOkDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.OnCreateYesNoDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Body                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTBLDialogWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLDialogWidget* UBP_DialogManager_C::OnCreateYesNoDialog(const struct FText& Title, const struct FText& Body)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.OnCreateYesNoDialog"));

	struct
	{
		struct FText                   Title;
		struct FText                   Body;
		class UTBLDialogWidget*        ReturnValue;
	} params = {};

	params.Title = Title;
	params.Body = Body;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DialogManager.BP_DialogManager_C.PushDialog
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBLDialogWidget*        Dialog                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            DialogPriority                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DialogManager_C::PushDialog(class UTBLDialogWidget* Dialog, int DialogPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DialogManager.BP_DialogManager_C.PushDialog"));

	struct
	{
		class UTBLDialogWidget*        Dialog;
		int                            DialogPriority;
	} params = {};

	params.Dialog = Dialog;
	params.DialogPriority = DialogPriority;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
