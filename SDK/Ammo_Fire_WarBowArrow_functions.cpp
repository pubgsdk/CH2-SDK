// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_Fire_WarBowArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAmmo_Fire_WarBowArrow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.OnMovementFinished_Event_FireArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_Fire_WarBowArrow_C::OnMovementFinished_Event_FireArrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.OnMovementFinished_Event_FireArrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.FireArrow_AssignProjectileEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_Fire_WarBowArrow_C::FireArrow_AssignProjectileEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.FireArrow_AssignProjectileEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ExecuteUbergraph_Ammo_Fire_WarBowArrow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_Fire_WarBowArrow_C::ExecuteUbergraph_Ammo_Fire_WarBowArrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ExecuteUbergraph_Ammo_Fire_WarBowArrow"));

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
