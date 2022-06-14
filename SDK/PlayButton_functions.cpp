// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayButton.PlayButton_C.UpdateThumbnailSaturation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayButton_C::UpdateThumbnailSaturation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.UpdateThumbnailSaturation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.SetThumbnailImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayButton_C::SetThumbnailImage(class UTexture2D* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.SetThumbnailImage"));

	struct
	{
		class UTexture2D*              Image;
	} params = {};

	params.Image = Image;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.Play On Hover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInstant                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayButton_C::Play_On_Hover(bool bInstant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.Play On Hover"));

	struct
	{
		bool                           bInstant;
	} params = {};

	params.bInstant = bInstant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.PreConstruct"));

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


// Function PlayButton.PlayButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.SetMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayButton_C::SetMatchmaking(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.SetMatchmaking"));

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


// Function PlayButton.PlayButton_C.Highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayButton_C::Highlight(bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.Highlight"));

	struct
	{
		bool                           Instant;
	} params = {};

	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayButton.PlayButton_C.ExecuteUbergraph_PlayButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayButton_C::ExecuteUbergraph_PlayButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayButton.PlayButton_C.ExecuteUbergraph_PlayButton"));

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
