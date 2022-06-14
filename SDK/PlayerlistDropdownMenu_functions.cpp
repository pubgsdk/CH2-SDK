// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerlistDropdownMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnGenerateRow_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDropDownListItem*       DropDownItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UPlayerlistDropdownMenu_C::OnGenerateRow_2(class UDropDownListItem* DropDownItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnGenerateRow_2"));

	struct
	{
		class UDropDownListItem*       DropDownItem;
		class UWidget*                 ReturnValue;
	} params = {};

	params.DropDownItem = DropDownItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.AddText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerlistDropdownMenu_C::AddText(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.AddText"));

	struct
	{
		struct FText                   Text;
		int                            Index;
	} params = {};

	params.Text = Text;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.RemoveAllItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerlistDropdownMenu_C::RemoveAllItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.RemoveAllItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnDropDownClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOptionsDropDownEntry_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerlistDropdownMenu_C::OnDropDownClicked(class UOptionsDropDownEntry_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnDropDownClicked"));

	struct
	{
		class UOptionsDropDownEntry_C* Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnMouseButtonDownEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerlistDropdownMenu_C::OnMouseButtonDownEvent_Event_1(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnMouseButtonDownEvent_Event_1"));

	struct
	{
		struct FText                   Text;
		int                            Index;
	} params = {};

	params.Text = Text;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.UpdatePlayername
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayerlistDropdownMenu_C::UpdatePlayername(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.UpdatePlayername"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerlistDropdownMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.ExecuteUbergraph_PlayerlistDropdownMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerlistDropdownMenu_C::ExecuteUbergraph_PlayerlistDropdownMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.ExecuteUbergraph_PlayerlistDropdownMenu"));

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


// Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerlistDropdownMenu_C::OnSelectionChanged__DelegateSignature(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		int                            Index;
	} params = {};

	params.Text = Text;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
