// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MaterialProgressBar_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.PreConstruct"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMaterialProgressBar_Loadout_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Loadout_C::UpdateProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgress"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundFillVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Loadout_C::UpdateBackgroundFillVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundFillVisibility"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Loadout_C::UpdateBackgroundVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundVisibility"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgressBarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMaterialProgressBar_Loadout_C::UpdateProgressBarVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgressBarVisibility"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Loadout_C::UpdateColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateColor"));

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


// Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.ExecuteUbergraph_MaterialProgressBar_Loadout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaterialProgressBar_Loadout_C::ExecuteUbergraph_MaterialProgressBar_Loadout(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.ExecuteUbergraph_MaterialProgressBar_Loadout"));

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
