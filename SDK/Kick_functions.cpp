// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Kick_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kick.Kick_C.OnAssemble_Kick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKick_C::OnAssemble_Kick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.OnAssemble_Kick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Kick.Kick_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKick_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Kick.Kick_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKick_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.EventBeginState"));

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


// Function Kick.Kick_C.OnRootMotionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bRootMotion                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKick_C::OnRootMotionChanged(bool bRootMotion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.OnRootMotionChanged"));

	struct
	{
		bool                           bRootMotion;
	} params = {};

	params.bRootMotion = bRootMotion;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Kick.Kick_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKick_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.EventEndState"));

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


// Function Kick.Kick_C.UpdateMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKick_C::UpdateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.UpdateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Kick.Kick_C.ExecuteUbergraph_Kick
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKick_C::ExecuteUbergraph_Kick(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Kick.Kick_C.ExecuteUbergraph_Kick"));

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
