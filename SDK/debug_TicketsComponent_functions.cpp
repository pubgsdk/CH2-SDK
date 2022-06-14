// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debug_TicketsComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_TicketsComponent.debug_TicketsComponent_C.red tix
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_TicketsComponent_C::red_tix()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.red tix"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.blue tix
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_TicketsComponent_C::blue_tix()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.blue tix"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.Initial Tickets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_TicketsComponent_C::Initial_Tickets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.Initial Tickets"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebug_TicketsComponent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.BndEvt__BlueSet_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void Udebug_TicketsComponent_C::BndEvt__BlueSet_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.BndEvt__BlueSet_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.BndEvt__RedSet_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void Udebug_TicketsComponent_C::BndEvt__RedSet_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.BndEvt__RedSet_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.SetOwner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebug_TicketsComponent_C::SetOwner(class UObject* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.SetOwner"));

	struct
	{
		class UObject*                 Owner;
	} params = {};

	params.Owner = Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_TicketsComponent.debug_TicketsComponent_C.ExecuteUbergraph_debug_TicketsComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebug_TicketsComponent_C::ExecuteUbergraph_debug_TicketsComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_TicketsComponent.debug_TicketsComponent_C.ExecuteUbergraph_debug_TicketsComponent"));

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
