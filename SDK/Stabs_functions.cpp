// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Stabs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stabs.Stabs_C.OnAssemble_Stabs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStabs_C::OnAssemble_Stabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stabs.Stabs_C.OnAssemble_Stabs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stabs.Stabs_C.ExecuteUbergraph_Stabs
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStabs_C::ExecuteUbergraph_Stabs(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stabs.Stabs_C.ExecuteUbergraph_Stabs"));

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
