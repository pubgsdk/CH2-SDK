// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Siege_Cancel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Siege_Cancel.Siege_Cancel_C.OnAssemble_Siege_Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiege_Cancel_C::OnAssemble_Siege_Cancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Cancel.Siege_Cancel_C.OnAssemble_Siege_Cancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Siege_Cancel.Siege_Cancel_C.ExecuteUbergraph_Siege_Cancel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiege_Cancel_C::ExecuteUbergraph_Siege_Cancel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Siege_Cancel.Siege_Cancel_C.ExecuteUbergraph_Siege_Cancel"));

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
