// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tackle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tackle.Tackle_C.OnAssemble_Tackle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTackle_C::OnAssemble_Tackle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tackle.Tackle_C.OnAssemble_Tackle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tackle.Tackle_C.ExecuteUbergraph_Tackle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTackle_C::ExecuteUbergraph_Tackle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tackle.Tackle_C.ExecuteUbergraph_Tackle"));

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
