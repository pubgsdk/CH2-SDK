// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_FireArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_FireArrow.Ammo_FireArrow_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_FireArrow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_FireArrow.Ammo_FireArrow_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_FireArrow.Ammo_FireArrow_C.OnMovementFinished_Event_FireArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_FireArrow_C::OnMovementFinished_Event_FireArrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_FireArrow.Ammo_FireArrow_C.OnMovementFinished_Event_FireArrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_FireArrow.Ammo_FireArrow_C.FireArrow_AssignProjectileEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_FireArrow_C::FireArrow_AssignProjectileEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_FireArrow.Ammo_FireArrow_C.FireArrow_AssignProjectileEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_FireArrow.Ammo_FireArrow_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAmmo_FireArrow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_FireArrow.Ammo_FireArrow_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_FireArrow.Ammo_FireArrow_C.ExecuteUbergraph_Ammo_FireArrow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_FireArrow_C::ExecuteUbergraph_Ammo_FireArrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_FireArrow.Ammo_FireArrow_C.ExecuteUbergraph_Ammo_FireArrow"));

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
