// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Base_Deployable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Base_Deployable.BP_Base_Deployable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Base_Deployable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Base_Deployable.BP_Base_Deployable_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Base_Deployable.BP_Base_Deployable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_Base_Deployable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Base_Deployable.BP_Base_Deployable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature"));

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


// Function BP_Base_Deployable.BP_Base_Deployable_C.ResetLifespanTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Base_Deployable_C::ResetLifespanTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Base_Deployable.BP_Base_Deployable_C.ResetLifespanTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Base_Deployable.BP_Base_Deployable_C.DestroyConstructable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Base_Deployable_C::DestroyConstructable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Base_Deployable.BP_Base_Deployable_C.DestroyConstructable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Base_Deployable.BP_Base_Deployable_C.ExecuteUbergraph_BP_Base_Deployable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Base_Deployable_C::ExecuteUbergraph_BP_Base_Deployable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Base_Deployable.BP_Base_Deployable_C.ExecuteUbergraph_BP_Base_Deployable"));

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
