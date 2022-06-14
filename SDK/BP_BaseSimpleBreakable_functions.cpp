// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BaseSimpleBreakable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UpdateMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseSimpleBreakable_C::UpdateMesh(class UStaticMesh* NewMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UpdateMesh"));

	struct
	{
		class UStaticMesh*             NewMesh;
	} params = {};

	params.NewMesh = NewMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnRep_BreakableState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseSimpleBreakable_C::OnRep_BreakableState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnRep_BreakableState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseSimpleBreakable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BaseSimpleBreakable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature"));

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


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseSimpleBreakable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature"));

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


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BaseSimpleBreakable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ExecuteUbergraph_BP_BaseSimpleBreakable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseSimpleBreakable_C::ExecuteUbergraph_BP_BaseSimpleBreakable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ExecuteUbergraph_BP_BaseSimpleBreakable"));

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


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnBreakableStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBreakableState>   BreakableState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseSimpleBreakable_C::OnBreakableStateChanged__DelegateSignature(TEnumAsByte<EBreakableState> BreakableState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnBreakableStateChanged__DelegateSignature"));

	struct
	{
		TEnumAsByte<EBreakableState>   BreakableState;
	} params = {};

	params.BreakableState = BreakableState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnKilled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseSimpleBreakable_C::OnKilled__DelegateSignature(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnKilled__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
