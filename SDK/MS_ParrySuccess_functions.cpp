// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_ParrySuccess_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_ParrySuccess.MS_ParrySuccess_C.OnAssemble_MS_ParrySuccess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_ParrySuccess_C::OnAssemble_MS_ParrySuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_ParrySuccess.MS_ParrySuccess_C.OnAssemble_MS_ParrySuccess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_ParrySuccess.MS_ParrySuccess_C.ExecuteUbergraph_MS_ParrySuccess
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_ParrySuccess_C::ExecuteUbergraph_MS_ParrySuccess(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_ParrySuccess.MS_ParrySuccess_C.ExecuteUbergraph_MS_ParrySuccess"));

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
