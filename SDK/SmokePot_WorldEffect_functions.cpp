// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SmokePot_WorldEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASmokePot_WorldEffect_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.OnTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokePot_WorldEffect_C::OnTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.OnTimeout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ExecuteUbergraph_SmokePot_WorldEffect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokePot_WorldEffect_C::ExecuteUbergraph_SmokePot_WorldEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ExecuteUbergraph_SmokePot_WorldEffect"));

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
