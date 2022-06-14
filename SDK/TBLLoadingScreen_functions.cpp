// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBLLoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBLLoadingScreen.LoadingScreenPanelWidget.StopFadeAnimations
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadingScreenPanelWidget::StopFadeAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.StopFadeAnimations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetStageEntries
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FMapSpecificStageEntries> TextEntries                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetStageEntries(TArray<struct FMapSpecificStageEntries> TextEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetStageEntries"));

	struct
	{
		TArray<struct FMapSpecificStageEntries> TextEntries;
	} params = {};

	params.TextEntries = TextEntries;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetMapTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapTexture"));

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


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapNameText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetMapNameText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapNameText"));

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


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapDescriptionText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetMapDescriptionText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapDescriptionText"));

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


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetContinueButtonVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetContinueButtonVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetContinueButtonVisibility"));

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


// Function TBLLoadingScreen.LoadingScreenPanelWidget.SetBackGroundImageColorAndOpacity
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ColorOpacity                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetBackGroundImageColorAndOpacity"));

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


// Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeOutMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadingScreenPanelWidget::FadeOutMapTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeOutMapTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeInMapTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadingScreenPanelWidget::FadeInMapTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeInMapTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBLLoadingScreen.LoadingScreenPanelWidget.EnabledScreenInputBlocking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULoadingScreenPanelWidget::EnabledScreenInputBlocking(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.LoadingScreenPanelWidget.EnabledScreenInputBlocking"));

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


// Function TBLLoadingScreen.MapSpecificLoadingScreenConfig.GetDefaultLoadingScreenPanelWidgetClass
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ULoadingScreenPanelWidget*/ ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* /*ULoadingScreenPanelWidget*/ UMapSpecificLoadingScreenConfig::GetDefaultLoadingScreenPanelWidgetClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBLLoadingScreen.MapSpecificLoadingScreenConfig.GetDefaultLoadingScreenPanelWidgetClass"));

	struct
	{
		class UClass* /*ULoadingScreenPanelWidget*/ ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
