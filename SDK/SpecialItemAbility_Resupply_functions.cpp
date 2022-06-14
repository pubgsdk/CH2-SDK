// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialItemAbility_Resupply_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.OnUseItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemAbility_Resupply_C::OnUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.OnUseItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.ExecuteUbergraph_SpecialItemAbility_Resupply
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemAbility_Resupply_C::ExecuteUbergraph_SpecialItemAbility_Resupply(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.ExecuteUbergraph_SpecialItemAbility_Resupply"));

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
