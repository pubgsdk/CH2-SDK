// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_Blocked_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_Blocked.MS_Blocked_C.OnAssemble_MS_Blocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Blocked_C::OnAssemble_MS_Blocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Blocked.MS_Blocked_C.OnAssemble_MS_Blocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Blocked.MS_Blocked_C.ExecuteUbergraph_MS_Blocked
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Blocked_C::ExecuteUbergraph_MS_Blocked(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Blocked.MS_Blocked_C.ExecuteUbergraph_MS_Blocked"));

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
