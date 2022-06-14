// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KnockdownGround_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KnockdownGround.KnockdownGround_C.HitDirectionToGetUpDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownGround_C::HitDirectionToGetUpDirection(struct FName* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.HitDirectionToGetUpDirection"));

	struct
	{
		struct FName                   Direction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function KnockdownGround.KnockdownGround_C.OverrideCrowdControlEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECrowdControlCombatState       CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlVariant           Variant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UKnockdownGround_C::OverrideCrowdControlEvent(ECrowdControlCombatState CombatState, ECrowdControlVariant Variant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.OverrideCrowdControlEvent"));

	struct
	{
		ECrowdControlCombatState       CombatState;
		ECrowdControlVariant           Variant;
		bool                           ReturnValue;
	} params = {};

	params.CombatState = CombatState;
	params.Variant = Variant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function KnockdownGround.KnockdownGround_C.OnAssemble_KnockdownGround
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKnockdownGround_C::OnAssemble_KnockdownGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.OnAssemble_KnockdownGround"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownGround.KnockdownGround_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownGround_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.EventBeginState"));

	struct
	{
		struct FName                   PreviousState;
		float                          PreviousStateTime;
		float                          AnimationLength;
	} params = {};

	params.PreviousState = PreviousState;
	params.PreviousStateTime = PreviousStateTime;
	params.AnimationLength = AnimationLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownGround.KnockdownGround_C.OnMovementInput
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownGround_C::OnMovementInput(const struct FName& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.OnMovementInput"));

	struct
	{
		struct FName                   Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownGround.KnockdownGround_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKnockdownGround_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.EventEndState"));

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


// Function KnockdownGround.KnockdownGround_C.MinimumTimeEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKnockdownGround_C::MinimumTimeEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.MinimumTimeEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownGround.KnockdownGround_C.OnJumpPressed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKnockdownGround_C::OnJumpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.OnJumpPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownGround.KnockdownGround_C.ExecuteUbergraph_KnockdownGround
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownGround_C::ExecuteUbergraph_KnockdownGround(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownGround.KnockdownGround_C.ExecuteUbergraph_KnockdownGround"));

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
