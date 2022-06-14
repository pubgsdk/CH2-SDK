// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ParrySuccess_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParrySuccess.ParrySuccess_C.HasRiposteStamina
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UParrySuccess_C::HasRiposteStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.HasRiposteStamina"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ParrySuccess.ParrySuccess_C.OnAssemble_ParrySuccess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParrySuccess_C::OnAssemble_ParrySuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.OnAssemble_ParrySuccess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UParrySuccess_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UParrySuccess_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.EventBeginFire"));

	struct
	{
		struct FName                   AttackName;
		bool                           bHeldQueue;
	} params = {};

	params.AttackName = AttackName;
	params.bHeldQueue = bHeldQueue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UParrySuccess_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.EventBeginState"));

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


// Function ParrySuccess.ParrySuccess_C.CanKickCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParrySuccess_C::CanKickCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.CanKickCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.CanSpecialCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParrySuccess_C::CanSpecialCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.CanSpecialCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.CanRiposteCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParrySuccess_C::CanRiposteCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.CanRiposteCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParrySuccess_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParrySuccess.ParrySuccess_C.ExecuteUbergraph_ParrySuccess
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UParrySuccess_C::ExecuteUbergraph_ParrySuccess(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParrySuccess.ParrySuccess_C.ExecuteUbergraph_ParrySuccess"));

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
