// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HitSuccess_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitSuccess.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::OnAssemble_CombatStateBlueprint_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCombatStateBlueprint_0_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.EventBeginFire"));

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


// Function HitSuccess.CombatStateBlueprint_0_C.SetCanCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::SetCanCombo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.SetCanCombo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatStateBlueprint_0_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.EventBeginState"));

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


// Function HitSuccess.CombatStateBlueprint_0_C.SetCanSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::SetCanSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.SetCanSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatStateBlueprint_0_C::ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1"));

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


// Function HitSuccess.HitSuccess_C.OnAssemble_CombatStateBlueprint_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitSuccess_C::OnAssemble_CombatStateBlueprint_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.OnAssemble_CombatStateBlueprint_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHitSuccess_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHitSuccess_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.EventBeginFire"));

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


// Function HitSuccess.HitSuccess_C.SetCanCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitSuccess_C::SetCanCombo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.SetCanCombo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitSuccess_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.EventBeginState"));

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


// Function HitSuccess.HitSuccess_C.SetCanSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitSuccess_C::SetCanSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.SetCanSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitSuccess_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitSuccess_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HitSuccess.HitSuccess_C.ExecuteUbergraph_HitSuccess
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitSuccess_C::ExecuteUbergraph_HitSuccess(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HitSuccess.HitSuccess_C.ExecuteUbergraph_HitSuccess"));

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
