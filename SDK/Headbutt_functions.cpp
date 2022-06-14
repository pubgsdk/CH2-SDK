// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Headbutt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Headbutt.Headbutt_C.OnAssemble_Headbutt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHeadbutt_C::OnAssemble_Headbutt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Headbutt.Headbutt_C.OnAssemble_Headbutt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Headbutt.Headbutt_C.ExecuteUbergraph_Headbutt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHeadbutt_C::ExecuteUbergraph_Headbutt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Headbutt.Headbutt_C.ExecuteUbergraph_Headbutt"));

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
