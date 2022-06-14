// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RangedCrosshair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedCrosshair.RangedCrosshair_C.SetSpacer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Initialize                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedCrosshair_C::SetSpacer(bool Initialize, float* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.SetSpacer"));

	struct
	{
		bool                           Initialize;
		float                          Output_Get;
	} params = {};

	params.Initialize = Initialize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function RangedCrosshair.RangedCrosshair_C.UpdateChargebarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URangedCrosshair_C::UpdateChargebarVisibility(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.UpdateChargebarVisibility"));

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


// Function RangedCrosshair.RangedCrosshair_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedCrosshair.RangedCrosshair_C.FiredProjectile
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URangedCrosshair_C::FiredProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.FiredProjectile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedCrosshair.RangedCrosshair_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URangedCrosshair_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedCrosshair.RangedCrosshair_C.UpdateChargebar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Valur                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedCrosshair_C::UpdateChargebar(float Valur)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.UpdateChargebar"));

	struct
	{
		float                          Valur;
	} params = {};

	params.Valur = Valur;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedCrosshair.RangedCrosshair_C.ExecuteUbergraph_RangedCrosshair
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedCrosshair_C::ExecuteUbergraph_RangedCrosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedCrosshair.RangedCrosshair_C.ExecuteUbergraph_RangedCrosshair"));

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
