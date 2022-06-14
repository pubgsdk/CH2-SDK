// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KnightProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KnightProgression.KnightProgression_C.OnAssemble_KnightProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKnightProgression_C::OnAssemble_KnightProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnightProgression.KnightProgression_C.OnAssemble_KnightProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KnightProgression.KnightProgression_C.ExecuteUbergraph_KnightProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKnightProgression_C::ExecuteUbergraph_KnightProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KnightProgression.KnightProgression_C.ExecuteUbergraph_KnightProgression"));

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
