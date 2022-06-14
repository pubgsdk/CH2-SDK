// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamepadCalloutsEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Callout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FButtonCallout          In_Callout                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGamepadCalloutsEntry_C::Set_Callout(const struct FButtonCallout& In_Callout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Callout"));

	struct
	{
		struct FButtonCallout          In_Callout;
	} params = {};

	params.In_Callout = In_Callout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamepadCalloutsEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.PreConstruct"));

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


// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Icon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadCalloutsEntry_C::Set_Icon(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Icon"));

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


// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadCalloutsEntry_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetTextSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FontSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadCalloutsEntry_C::SetTextSize(int FontSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetTextSize"));

	struct
	{
		int                            FontSize;
	} params = {};

	params.FontSize = FontSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.ExecuteUbergraph_GamepadCalloutsEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadCalloutsEntry_C::ExecuteUbergraph_GamepadCalloutsEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.ExecuteUbergraph_GamepadCalloutsEntry"));

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
