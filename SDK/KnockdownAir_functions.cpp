// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KnockdownAir_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KnockdownAir.KnockdownAir_C.OnAssemble_KnockdownAir
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKnockdownAir_C::OnAssemble_KnockdownAir()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.OnAssemble_KnockdownAir"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownAir.KnockdownAir_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownAir_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.EventBeginState"));

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


// Function KnockdownAir.KnockdownAir_C.EventLanded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownAir_C::EventLanded(class ACharacter* InTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.EventLanded"));

	struct
	{
		class ACharacter*              InTarget;
	} params = {};

	params.InTarget = InTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownAir.KnockdownAir_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKnockdownAir_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnockdownAir.KnockdownAir_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKnockdownAir_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.EventEndState"));

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


// Function KnockdownAir.KnockdownAir_C.ExecuteUbergraph_KnockdownAir
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnockdownAir_C::ExecuteUbergraph_KnockdownAir(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnockdownAir.KnockdownAir_C.ExecuteUbergraph_KnockdownAir"));

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
