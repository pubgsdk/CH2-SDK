// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsSpinBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsSpinBox.OptionsSpinBox_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsSpinBox_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsSpinBox.OptionsSpinBox_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsSpinBox.OptionsSpinBox_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsSpinBox_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsSpinBox.OptionsSpinBox_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsSpinBox.OptionsSpinBox_C.SetText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsSpinBox_C::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsSpinBox.OptionsSpinBox_C.SetText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OptionsSpinBox.OptionsSpinBox_C.ExecuteUbergraph_OptionsSpinBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOptionsSpinBox_C::ExecuteUbergraph_OptionsSpinBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsSpinBox.OptionsSpinBox_C.ExecuteUbergraph_OptionsSpinBox"));

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


// Function OptionsSpinBox.OptionsSpinBox_C.OnTextCommitted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsSpinBox_C::OnTextCommitted__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OptionsSpinBox.OptionsSpinBox_C.OnTextCommitted__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
