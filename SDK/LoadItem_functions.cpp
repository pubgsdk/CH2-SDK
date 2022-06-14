// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadItem.LoadItem_C.OnAssemble_LoadItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadItem_C::OnAssemble_LoadItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadItem.LoadItem_C.OnAssemble_LoadItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadItem.LoadItem_C.ExecuteUbergraph_LoadItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadItem_C::ExecuteUbergraph_LoadItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadItem.LoadItem_C.ExecuteUbergraph_LoadItem"));

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
