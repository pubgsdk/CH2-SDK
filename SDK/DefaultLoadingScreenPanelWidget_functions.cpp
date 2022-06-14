// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultLoadingScreenPanelWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.StopFadeAnimations
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDefaultLoadingScreenPanelWidget_C::StopFadeAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.StopFadeAnimations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetBackGroundImageColorAndOpacity
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ColorOpacity                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultLoadingScreenPanelWidget_C::SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetBackGroundImageColorAndOpacity"));

	struct
	{
		struct FLinearColor            ColorOpacity;
	} params = {};

	params.ColorOpacity = ColorOpacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeOutMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDefaultLoadingScreenPanelWidget_C::FadeOutMapTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeOutMapTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeInMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDefaultLoadingScreenPanelWidget_C::FadeInMapTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeInMapTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultLoadingScreenPanelWidget_C::SetMapTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapTexture"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapDescriptionText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDefaultLoadingScreenPanelWidget_C::SetMapDescriptionText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapDescriptionText"));

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


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapNameText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDefaultLoadingScreenPanelWidget_C::SetMapNameText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapNameText"));

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


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.EnabledScreenInputBlocking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDefaultLoadingScreenPanelWidget_C::EnabledScreenInputBlocking(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.EnabledScreenInputBlocking"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetContinueButtonVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDefaultLoadingScreenPanelWidget_C::SetContinueButtonVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetContinueButtonVisibility"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDefaultLoadingScreenPanelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDefaultLoadingScreenPanelWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.ExecuteUbergraph_DefaultLoadingScreenPanelWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultLoadingScreenPanelWidget_C::ExecuteUbergraph_DefaultLoadingScreenPanelWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.ExecuteUbergraph_DefaultLoadingScreenPanelWidget"));

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
