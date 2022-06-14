// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GlobalProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalProgression.GlobalProgression_C.OnAssemble_GlobalProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalProgression_C::OnAssemble_GlobalProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalProgression.GlobalProgression_C.OnAssemble_GlobalProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalProgression.GlobalProgression_C.ExecuteUbergraph_GlobalProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalProgression_C::ExecuteUbergraph_GlobalProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalProgression.GlobalProgression_C.ExecuteUbergraph_GlobalProgression"));

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
