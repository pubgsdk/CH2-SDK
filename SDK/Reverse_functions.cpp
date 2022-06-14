// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Reverse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Reverse.Reverse_C.OnAssemble_Reverse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReverse_C::OnAssemble_Reverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Reverse.Reverse_C.OnAssemble_Reverse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Reverse.Reverse_C.GearUp
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReverse_C::GearUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Reverse.Reverse_C.GearUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Reverse.Reverse_C.UpdateMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReverse_C::UpdateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Reverse.Reverse_C.UpdateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Reverse.Reverse_C.ExecuteUbergraph_Reverse
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReverse_C::ExecuteUbergraph_Reverse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Reverse.Reverse_C.ExecuteUbergraph_Reverse"));

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
