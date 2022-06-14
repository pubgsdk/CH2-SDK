// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Siege_Recovery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Siege_Recovery.Siege_Recovery_C.OnAssemble_Siege_Recovery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiege_Recovery_C::OnAssemble_Siege_Recovery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Recovery.Siege_Recovery_C.OnAssemble_Siege_Recovery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Siege_Recovery.Siege_Recovery_C.ExecuteUbergraph_Siege_Recovery
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiege_Recovery_C::ExecuteUbergraph_Siege_Recovery(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Recovery.Siege_Recovery_C.ExecuteUbergraph_Siege_Recovery"));

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
