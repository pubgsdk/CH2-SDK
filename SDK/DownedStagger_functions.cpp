// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DownedStagger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DownedStagger.DownedStagger_C.OnAssemble_DownedStagger
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDownedStagger_C::OnAssemble_DownedStagger()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DownedStagger.DownedStagger_C.OnAssemble_DownedStagger"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DownedStagger.DownedStagger_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDownedStagger_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DownedStagger.DownedStagger_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DownedStagger.DownedStagger_C.ExecuteUbergraph_DownedStagger
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDownedStagger_C::ExecuteUbergraph_DownedStagger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DownedStagger.DownedStagger_C.ExecuteUbergraph_DownedStagger"));

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
