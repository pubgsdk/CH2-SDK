// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DropItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropItem.DropItem_C.OnAssemble_DropItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropItem_C::OnAssemble_DropItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropItem.DropItem_C.OnAssemble_DropItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DropItem.DropItem_C.ExecuteUbergraph_DropItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropItem_C::ExecuteUbergraph_DropItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DropItem.DropItem_C.ExecuteUbergraph_DropItem"));

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
