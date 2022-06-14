// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuickThrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuickThrow.QuickThrow_C.OnAssemble_QuickThrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickThrow_C::OnAssemble_QuickThrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickThrow.QuickThrow_C.OnAssemble_QuickThrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function QuickThrow.QuickThrow_C.ExecuteUbergraph_QuickThrow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuickThrow_C::ExecuteUbergraph_QuickThrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuickThrow.QuickThrow_C.ExecuteUbergraph_QuickThrow"));

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
