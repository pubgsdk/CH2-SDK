// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MaterialProgressBar_Circular_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Circular_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.PreConstruct"));

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


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMaterialProgressBar_Circular_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Circular_C::UpdateProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgress"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 KeyBind                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Circular_C::UpdateKeybind(const struct FString& KeyBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybind"));

	struct
	{
		struct FString                 KeyBind;
	} params = {};

	params.KeyBind = KeyBind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybindVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Circular_C::UpdateKeybindVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybindVisibility"));

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


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundFillVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Circular_C::UpdateBackgroundFillVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundFillVisibility"));

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


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Circular_C::UpdateBackgroundVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundVisibility"));

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


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgressBarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Circular_C::UpdateProgressBarVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgressBarVisibility"));

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


// Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.ExecuteUbergraph_MaterialProgressBar_Circular
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Circular_C::ExecuteUbergraph_MaterialProgressBar_Circular(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.ExecuteUbergraph_MaterialProgressBar_Circular"));

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
