// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RadialVOMenuCenterCategory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URadialVOMenuCenterCategory_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URadialVOMenuCenterCategory_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialVOMenuCenterCategory_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenuCenterCategory_C::UpdateState(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.UpdateState"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialVOMenuCenterCategory_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.PreConstruct"));

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


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnGamepadInputModeChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenuCenterCategory_C::OnGamepadInputModeChangedEvent(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnGamepadInputModeChangedEvent"));

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


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.ExecuteUbergraph_RadialVOMenuCenterCategory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenuCenterCategory_C::ExecuteUbergraph_RadialVOMenuCenterCategory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.ExecuteUbergraph_RadialVOMenuCenterCategory"));

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


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseLeave__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterCategory_C::RadialButton_MouseLeave__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseLeave__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseEnter__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterCategory_C::RadialButton_MouseEnter__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseEnter__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterCategory_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
