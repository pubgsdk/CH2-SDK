// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClimbingDismountBottom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClimbingDismountBottom.ClimbingDismountBottom_C.OnAssemble_ClimbingDismountBottom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UClimbingDismountBottom_C::OnAssemble_ClimbingDismountBottom()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingDismountBottom.ClimbingDismountBottom_C.OnAssemble_ClimbingDismountBottom"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClimbingDismountBottom.ClimbingDismountBottom_C.ExecuteUbergraph_ClimbingDismountBottom
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClimbingDismountBottom_C::ExecuteUbergraph_ClimbingDismountBottom(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingDismountBottom.ClimbingDismountBottom_C.ExecuteUbergraph_ClimbingDismountBottom"));

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
