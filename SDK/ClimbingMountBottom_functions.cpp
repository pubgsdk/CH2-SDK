// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClimbingMountBottom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClimbingMountBottom.ClimbingMountBottom_C.OnAssemble_ClimbingMountBottom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UClimbingMountBottom_C::OnAssemble_ClimbingMountBottom()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingMountBottom.ClimbingMountBottom_C.OnAssemble_ClimbingMountBottom"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClimbingMountBottom.ClimbingMountBottom_C.ExecuteUbergraph_ClimbingMountBottom
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClimbingMountBottom_C::ExecuteUbergraph_ClimbingMountBottom(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingMountBottom.ClimbingMountBottom_C.ExecuteUbergraph_ClimbingMountBottom"));

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
