// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCrowdControlState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCrowdControlState.BaseCrowdControlState_C.OnAssemble_BaseCrowdControlState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseCrowdControlState_C::OnAssemble_BaseCrowdControlState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCrowdControlState.BaseCrowdControlState_C.OnAssemble_BaseCrowdControlState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCrowdControlState.BaseCrowdControlState_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBaseCrowdControlState_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCrowdControlState.BaseCrowdControlState_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCrowdControlState.BaseCrowdControlState_C.ExecuteUbergraph_BaseCrowdControlState
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCrowdControlState_C::ExecuteUbergraph_BaseCrowdControlState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCrowdControlState.BaseCrowdControlState_C.ExecuteUbergraph_BaseCrowdControlState"));

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
