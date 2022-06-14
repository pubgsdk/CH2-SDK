// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerIconWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerIconWidget.PlayerIconWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerIconWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerIconWidget.PlayerIconWidget_C.PreConstruct"));

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


// Function PlayerIconWidget.PlayerIconWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerIconWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerIconWidget.PlayerIconWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerIconWidget.PlayerIconWidget_C.SetIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerIconWidget_C::SetIcon(class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerIconWidget.PlayerIconWidget_C.SetIcon"));

	struct
	{
		class UTexture2D*              Icon;
	} params = {};

	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerIconWidget.PlayerIconWidget_C.SetColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerIconWidget_C::SetColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerIconWidget.PlayerIconWidget_C.SetColor"));

	struct
	{
		struct FLinearColor            NewColor;
	} params = {};

	params.NewColor = NewColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerIconWidget.PlayerIconWidget_C.ExecuteUbergraph_PlayerIconWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerIconWidget_C::ExecuteUbergraph_PlayerIconWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerIconWidget.PlayerIconWidget_C.ExecuteUbergraph_PlayerIconWidget"));

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
