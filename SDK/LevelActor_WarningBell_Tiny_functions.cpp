// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LevelActor_WarningBell_Tiny_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALevelActor_WarningBell_Tiny_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_DamageTakenSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ALevelActor_WarningBell_Tiny_C::BndEvt__Stats_K2Node_ComponentBoundEvent_3_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_DamageTakenSignature__DelegateSignature"));

	struct
	{
		struct FDamageTakenEvent       Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ALevelActor_WarningBell_Tiny_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.OnUsed
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALevelActor_WarningBell_Tiny_C::OnUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.OnUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.ExecuteUbergraph_LevelActor_WarningBell_Tiny
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALevelActor_WarningBell_Tiny_C::ExecuteUbergraph_LevelActor_WarningBell_Tiny(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.ExecuteUbergraph_LevelActor_WarningBell_Tiny"));

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


// Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.Bell Rung__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALevelActor_WarningBell_Tiny_C::Bell_Rung__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WarningBell_Tiny.LevelActor_WarningBell_Tiny_C.Bell Rung__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
