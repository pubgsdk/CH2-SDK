// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_PaviseShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_PaviseShield.Carryable_PaviseShield_C.OnVisualizationActorSpawned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_PaviseShield_C::OnVisualizationActorSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_PaviseShield.Carryable_PaviseShield_C.OnVisualizationActorSpawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_PaviseShield.Carryable_PaviseShield_C.ExecuteUbergraph_Carryable_PaviseShield
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_PaviseShield_C::ExecuteUbergraph_Carryable_PaviseShield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_PaviseShield.Carryable_PaviseShield_C.ExecuteUbergraph_Carryable_PaviseShield"));

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
