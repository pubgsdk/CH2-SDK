// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FootmanProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FootmanProgression.FootmanProgression_C.OnAssemble_FootmanProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFootmanProgression_C::OnAssemble_FootmanProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FootmanProgression.FootmanProgression_C.OnAssemble_FootmanProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FootmanProgression.FootmanProgression_C.ExecuteUbergraph_FootmanProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFootmanProgression_C::ExecuteUbergraph_FootmanProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FootmanProgression.FootmanProgression_C.ExecuteUbergraph_FootmanProgression"));

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
