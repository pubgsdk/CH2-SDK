// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Emote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emote.Emote_C.CanJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UEmote_C::CanJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.CanJump"));

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


// Function Emote.Emote_C.CanBeCancelled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           bIsCancelIntoParry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UEmote_C::CanBeCancelled(bool bIsCancelIntoParry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.CanBeCancelled"));

	struct
	{
		bool                           bIsCancelIntoParry;
		bool                           ReturnValue;
	} params = {};

	params.bIsCancelIntoParry = bIsCancelIntoParry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Emote.Emote_C.OnAssemble_Emote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmote_C::OnAssemble_Emote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.OnAssemble_Emote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEmote_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEmote_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.EventBeginFire"));

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


// Function Emote.Emote_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmote_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.EventBeginState"));

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


// Function Emote.Emote_C.EventSoftRecovery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmote_C::EventSoftRecovery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.EventSoftRecovery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.OnMovementInput
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmote_C::OnMovementInput(const struct FName& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.OnMovementInput"));

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


// Function Emote.Emote_C.TryCancelEmote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmote_C::TryCancelEmote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.TryCancelEmote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmote_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEmote_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.EventEndState"));

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


// Function Emote.Emote_C.OnJumpPressed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEmote_C::OnJumpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.OnJumpPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Emote.Emote_C.ExecuteUbergraph_Emote
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmote_C::ExecuteUbergraph_Emote(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Emote.Emote_C.ExecuteUbergraph_Emote"));

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
