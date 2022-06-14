// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Climbing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climbing.Climbing_C.OnAssemble_Climbing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UClimbing_C::OnAssemble_Climbing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Climbing.Climbing_C.OnAssemble_Climbing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Climbing.Climbing_C.ExecuteUbergraph_Climbing
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClimbing_C::ExecuteUbergraph_Climbing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Climbing.Climbing_C.ExecuteUbergraph_Climbing"));

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
