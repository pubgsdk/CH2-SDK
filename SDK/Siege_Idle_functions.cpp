// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Siege_Idle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Siege_Idle.Siege_Idle_C.OnAssemble_Siege_Idle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiege_Idle_C::OnAssemble_Siege_Idle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Idle.Siege_Idle_C.OnAssemble_Siege_Idle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Siege_Idle.Siege_Idle_C.ExecuteUbergraph_Siege_Idle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiege_Idle_C::ExecuteUbergraph_Siege_Idle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Idle.Siege_Idle_C.ExecuteUbergraph_Siege_Idle"));

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
