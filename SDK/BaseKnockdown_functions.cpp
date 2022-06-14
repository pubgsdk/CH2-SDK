// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseKnockdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseKnockdown.BaseKnockdown_C.OnAssemble_BaseKnockdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseKnockdown_C::OnAssemble_BaseKnockdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseKnockdown.BaseKnockdown_C.OnAssemble_BaseKnockdown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseKnockdown.BaseKnockdown_C.ExecuteUbergraph_BaseKnockdown
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseKnockdown_C::ExecuteUbergraph_BaseKnockdown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseKnockdown.BaseKnockdown_C.ExecuteUbergraph_BaseKnockdown"));

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
