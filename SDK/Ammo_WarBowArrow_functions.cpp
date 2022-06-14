// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_WarBowArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_WarBowArrow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementStarted_Event_Arrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_WarBowArrow_C::OnMovementStarted_Event_Arrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementStarted_Event_Arrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementFinished_Event_Arrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_WarBowArrow_C::OnMovementFinished_Event_Arrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementFinished_Event_Arrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.StandardArrow_AssignProjectileEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_WarBowArrow_C::StandardArrow_AssignProjectileEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.StandardArrow_AssignProjectileEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.ExecuteUbergraph_Ammo_WarBowArrow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_WarBowArrow_C::ExecuteUbergraph_Ammo_WarBowArrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.ExecuteUbergraph_Ammo_WarBowArrow"));

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
