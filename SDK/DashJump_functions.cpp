// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DashJump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DashJump.DashJump_C.OnAssemble_DashJump
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDashJump_C::OnAssemble_DashJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DashJump.DashJump_C.OnAssemble_DashJump"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DashJump.DashJump_C.ExecuteUbergraph_DashJump
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDashJump_C::ExecuteUbergraph_DashJump(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DashJump.DashJump_C.ExecuteUbergraph_DashJump"));

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
