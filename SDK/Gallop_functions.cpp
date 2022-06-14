// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Gallop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gallop.Gallop_C.OnAssemble_Gallop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGallop_C::OnAssemble_Gallop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Gallop.Gallop_C.OnAssemble_Gallop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Gallop.Gallop_C.GearDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGallop_C::GearDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Gallop.Gallop_C.GearDown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Gallop.Gallop_C.UpdateMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGallop_C::UpdateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Gallop.Gallop_C.UpdateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Gallop.Gallop_C.ExecuteUbergraph_Gallop
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGallop_C::ExecuteUbergraph_Gallop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Gallop.Gallop_C.ExecuteUbergraph_Gallop"));

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
