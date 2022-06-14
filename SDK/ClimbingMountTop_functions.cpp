// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClimbingMountTop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClimbingMountTop.ClimbingMountTop_C.OnAssemble_ClimbingMountTop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UClimbingMountTop_C::OnAssemble_ClimbingMountTop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingMountTop.ClimbingMountTop_C.OnAssemble_ClimbingMountTop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClimbingMountTop.ClimbingMountTop_C.ExecuteUbergraph_ClimbingMountTop
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClimbingMountTop_C::ExecuteUbergraph_ClimbingMountTop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClimbingMountTop.ClimbingMountTop_C.ExecuteUbergraph_ClimbingMountTop"));

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
