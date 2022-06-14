// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TopplingStonePush_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TopplingStonePush.TopplingStonePush_C.OnAssemble_TopplingStonePush
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTopplingStonePush_C::OnAssemble_TopplingStonePush()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStonePush.TopplingStonePush_C.OnAssemble_TopplingStonePush"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TopplingStonePush.TopplingStonePush_C.ExecuteUbergraph_TopplingStonePush
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTopplingStonePush_C::ExecuteUbergraph_TopplingStonePush(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStonePush.TopplingStonePush_C.ExecuteUbergraph_TopplingStonePush"));

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
