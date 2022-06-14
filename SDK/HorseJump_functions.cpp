// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseJump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseJump.HorseJump_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseJump_C::NewFunction_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseJump.HorseJump_C.NewFunction_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseJump.HorseJump_C.OnAssemble_HorseJump
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseJump_C::OnAssemble_HorseJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseJump.HorseJump_C.OnAssemble_HorseJump"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseJump.HorseJump_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHorseJump_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseJump.HorseJump_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseJump.HorseJump_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHorseJump_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseJump.HorseJump_C.EventBeginFire"));

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


// Function HorseJump.HorseJump_C.ExecuteUbergraph_HorseJump
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseJump_C::ExecuteUbergraph_HorseJump(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseJump.HorseJump_C.ExecuteUbergraph_HorseJump"));

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
