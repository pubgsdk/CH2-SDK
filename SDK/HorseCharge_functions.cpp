// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseCharge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseCharge.HorseCharge_C.OnAssemble_HorseCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseCharge_C::OnAssemble_HorseCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCharge.HorseCharge_C.OnAssemble_HorseCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseCharge.HorseCharge_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHorseCharge_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCharge.HorseCharge_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseCharge.HorseCharge_C.EventDamageCaused
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UHorseCharge_C::EventDamageCaused(const struct FDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCharge.HorseCharge_C.EventDamageCaused"));

	struct
	{
		struct FDamageTakenEvent       DamageEvent;
	} params = {};

	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseCharge.HorseCharge_C.ExecuteUbergraph_HorseCharge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseCharge_C::ExecuteUbergraph_HorseCharge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseCharge.HorseCharge_C.ExecuteUbergraph_HorseCharge"));

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
