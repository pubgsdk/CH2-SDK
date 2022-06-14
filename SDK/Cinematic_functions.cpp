// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Cinematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cinematic.Cinematic_C.EventCannotQueueAttack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAttackType*             AttackType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UCinematic_C::EventCannotQueueAttack(class UAttackType* AttackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematic.Cinematic_C.EventCannotQueueAttack"));

	struct
	{
		class UAttackType*             AttackType;
		bool                           ReturnValue;
	} params = {};

	params.AttackType = AttackType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Cinematic.Cinematic_C.OnAssemble_Cinematic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::OnAssemble_Cinematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematic.Cinematic_C.OnAssemble_Cinematic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematic.Cinematic_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCinematic_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematic.Cinematic_C.EventBeginFire"));

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


// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematic_C::ExecuteUbergraph_Cinematic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic"));

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
