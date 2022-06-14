// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationButton.NavigationButton_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationButton_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.SetSelected"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.OnButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationButton_C::OnButtonClicked(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.OnButtonClicked"));

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


// Function NavigationButton.NavigationButton_C.OnDeselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationButton_C::OnDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.OnDeselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.UpdateDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DisableWIP                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationButton_C::UpdateDisabled(bool DisableWIP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.UpdateDisabled"));

	struct
	{
		bool                           DisableWIP;
	} params = {};

	params.DisableWIP = DisableWIP;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.INTERNAL_OnClicked_Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationButton_C::INTERNAL_OnClicked_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.INTERNAL_OnClicked_Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.On Highlight Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationButton_C::On_Highlight_Event(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.On Highlight Event"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNavigationButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationButton_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.ResetAnimiations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNavigationButton_C::ResetAnimiations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.ResetAnimiations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NavigationButton.NavigationButton_C.ExecuteUbergraph_NavigationButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationButton_C::ExecuteUbergraph_NavigationButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationButton.NavigationButton_C.ExecuteUbergraph_NavigationButton"));

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
