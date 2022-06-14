// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeObjectiveInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeObjectiveInterface.TimeObjectiveInterface_C.GetTimeRemaining
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeSeconds                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTimeObjectiveInterface_C::GetTimeRemaining(float* TimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeObjectiveInterface.TimeObjectiveInterface_C.GetTimeRemaining"));

	struct
	{
		float                          TimeSeconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeSeconds != nullptr)
		*TimeSeconds = params.TimeSeconds;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
