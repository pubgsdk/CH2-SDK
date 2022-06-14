// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChargeWeak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChargeWeak.ChargeWeak_C.OnAssemble_ChargeWeak
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChargeWeak_C::OnAssemble_ChargeWeak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChargeWeak.ChargeWeak_C.OnAssemble_ChargeWeak"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChargeWeak.ChargeWeak_C.CheckOutOfStamina
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChargeWeak_C::CheckOutOfStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChargeWeak.ChargeWeak_C.CheckOutOfStamina"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChargeWeak.ChargeWeak_C.EventTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChargeWeak_C::EventTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChargeWeak.ChargeWeak_C.EventTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChargeWeak.ChargeWeak_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UChargeWeak_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChargeWeak.ChargeWeak_C.EventEndState"));

	struct
	{
		struct FName                   NextState;
		bool                           bStartAttack;
	} params = {};

	params.NextState = NextState;
	params.bStartAttack = bStartAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChargeWeak.ChargeWeak_C.ExecuteUbergraph_ChargeWeak
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChargeWeak_C::ExecuteUbergraph_ChargeWeak(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChargeWeak.ChargeWeak_C.ExecuteUbergraph_ChargeWeak"));

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
