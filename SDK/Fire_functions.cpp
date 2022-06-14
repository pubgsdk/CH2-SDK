// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fire.Fire_C.ToggleArrowCamHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFire_C::ToggleArrowCamHint(bool Toggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.ToggleArrowCamHint"));

	struct
	{
		bool                           Toggle;
	} params = {};

	params.Toggle = Toggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Fire.Fire_C.OnAssemble_Fire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFire_C::OnAssemble_Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.OnAssemble_Fire"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Fire.Fire_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFire_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Fire.Fire_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFire_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.EventBeginState"));

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


// Function Fire.Fire_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFire_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.EventEndState"));

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


// Function Fire.Fire_C.OnActivateAbility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFire_C::OnActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.OnActivateAbility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Fire.Fire_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFire_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.EventBeginFire"));

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


// Function Fire.Fire_C.ExecuteUbergraph_Fire
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFire_C::ExecuteUbergraph_Fire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Fire.Fire_C.ExecuteUbergraph_Fire"));

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
