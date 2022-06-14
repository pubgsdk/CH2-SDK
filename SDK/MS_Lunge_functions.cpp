// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_Lunge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_Lunge.MS_Lunge_C.OnAssemble_MS_Lunge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Lunge_C::OnAssemble_MS_Lunge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Lunge.MS_Lunge_C.OnAssemble_MS_Lunge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Lunge.MS_Lunge_C.ExecuteUbergraph_MS_Lunge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Lunge_C::ExecuteUbergraph_MS_Lunge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Lunge.MS_Lunge_C.ExecuteUbergraph_MS_Lunge"));

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
