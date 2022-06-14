// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NewsButtonContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewsButtonContent.NewsButtonContent_C.Setup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Subtitle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              BackgroundImage                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButtonContent_C::Setup(const struct FText& Title, const struct FText& Subtitle, class UTexture2D* BackgroundImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.Setup"));

	struct
	{
		struct FText                   Title;
		struct FText                   Subtitle;
		class UTexture2D*              BackgroundImage;
	} params = {};

	params.Title = Title;
	params.Subtitle = Subtitle;
	params.BackgroundImage = BackgroundImage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButtonContent.NewsButtonContent_C.OnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButtonContent_C::OnHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.OnHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButtonContent.NewsButtonContent_C.OnUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButtonContent_C::OnUnhover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.OnUnhover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButtonContent.NewsButtonContent_C.PlaySlideFromLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButtonContent_C::PlaySlideFromLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.PlaySlideFromLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButtonContent.NewsButtonContent_C.PlaySlideFromRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewsButtonContent_C::PlaySlideFromRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.PlaySlideFromRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewsButtonContent.NewsButtonContent_C.ExecuteUbergraph_NewsButtonContent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewsButtonContent_C::ExecuteUbergraph_NewsButtonContent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewsButtonContent.NewsButtonContent_C.ExecuteUbergraph_NewsButtonContent"));

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
