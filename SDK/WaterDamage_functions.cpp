// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WaterDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterDamage.WaterDamage_C.OnAssemble_WaterDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaterDamage_C::OnAssemble_WaterDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaterDamage.WaterDamage_C.OnAssemble_WaterDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaterDamage.WaterDamage_C.ExecuteUbergraph_WaterDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaterDamage_C::ExecuteUbergraph_WaterDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaterDamage.WaterDamage_C.ExecuteUbergraph_WaterDamage"));

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
