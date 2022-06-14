// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RadialVOMenuCenterButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.SetKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadialVOMenuCenterCategory_C* VOButton                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBLPlayerInput*         TBLPlayerInput                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenuCenterButton_C::SetKey(class URadialVOMenuCenterCategory_C* VOButton, class UTBLPlayerInput* TBLPlayerInput, const struct FName& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.SetKey"));

	struct
	{
		class URadialVOMenuCenterCategory_C* VOButton;
		class UTBLPlayerInput*         TBLPlayerInput;
		struct FName                   NewParam;
	} params = {};

	params.VOButton = VOButton;
	params.TBLPlayerInput = TBLPlayerInput;
	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URadialVOMenuCenterButton_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDoubleClick"));

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


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URadialVOMenuCenterButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDown"));

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


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URadialVOMenuCenterButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URadialVOMenuCenterButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ERadialVOMenuPageEnum> CurrentPage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenuCenterButton_C::UpdateState(TEnumAsByte<ERadialVOMenuPageEnum> CurrentPage, class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.UpdateState"));

	struct
	{
		TEnumAsByte<ERadialVOMenuPageEnum> CurrentPage;
		class ATBLCharacter*           Character;
	} params = {};

	params.CurrentPage = CurrentPage;
	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.ExecuteUbergraph_RadialVOMenuCenterButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialVOMenuCenterButton_C::ExecuteUbergraph_RadialVOMenuCenterButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.ExecuteUbergraph_RadialVOMenuCenterButton"));

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


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseLeave__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterButton_C::RadialButton_MouseLeave__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseLeave__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseEnter__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterButton_C::RadialButton_MouseEnter__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseEnter__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialVOMenuCenterButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnClicked__DelegateSignature"));

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
