// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UseItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UseItem.UseItem_C.OnAssemble_UseItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUseItem_C::OnAssemble_UseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UseItem.UseItem_C.OnAssemble_UseItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UseItem.UseItem_C.ExecuteUbergraph_UseItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUseItem_C::ExecuteUbergraph_UseItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UseItem.UseItem_C.ExecuteUbergraph_UseItem"));

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
