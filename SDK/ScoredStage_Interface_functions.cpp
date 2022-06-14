// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoredStage_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoredStage_Interface.ScoredStage_Interface_C.AddScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoredStage_Interface_C::AddScore(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage_Interface.ScoredStage_Interface_C.AddScore"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
