// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_Breakable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.DamageCarryable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemDamagedState     DamageState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Breakable_C::DamageCarryable(EInventoryItemDamagedState DamageState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.DamageCarryable"));

	struct
	{
		EInventoryItemDamagedState     DamageState;
	} params = {};

	params.DamageState = DamageState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.PlayDamageParticles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Breakable_C::PlayDamageParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.PlayDamageParticles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.ExecuteUbergraph_BaseCarryable_Breakable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Breakable_C::ExecuteUbergraph_BaseCarryable_Breakable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.ExecuteUbergraph_BaseCarryable_Breakable"));

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
