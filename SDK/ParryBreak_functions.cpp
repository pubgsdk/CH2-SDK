// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ParryBreak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParryBreak.ParryBreak_C.CanSwitchInventoryItems
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UParryBreak_C::CanSwitchInventoryItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.CanSwitchInventoryItems"));

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


// Function ParryBreak.ParryBreak_C.OnAssemble_ParryBreak
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::OnAssemble_ParryBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.OnAssemble_ParryBreak"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UParryBreak_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.EventBeginState"));

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


// Function ParryBreak.ParryBreak_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UParryBreak_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.EventBeginFire"));

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


// Function ParryBreak.ParryBreak_C.ParryBreakStamina
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::ParryBreakStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.ParryBreakStamina"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.SoftRecovery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::SoftRecovery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.SoftRecovery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.DashOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::DashOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.DashOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.OnStartEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UParryBreak_C::OnStartEquip(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.OnStartEquip"));

	struct
	{
		class AInventoryItem*          Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.PlayEquipTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::PlayEquipTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.PlayEquipTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UParryBreak_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.EventEndState"));

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


// Function ParryBreak.ParryBreak_C.JabOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParryBreak_C::JabOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.JabOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ParryBreak.ParryBreak_C.ExecuteUbergraph_ParryBreak
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UParryBreak_C::ExecuteUbergraph_ParryBreak(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ParryBreak.ParryBreak_C.ExecuteUbergraph_ParryBreak"));

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
