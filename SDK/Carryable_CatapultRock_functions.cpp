// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_CatapultRock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_CatapultRock.Carryable_CatapultRock_C.BroadcastProjectileWorldBlockingHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ACarryable_CatapultRock_C::BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_CatapultRock.Carryable_CatapultRock_C.BroadcastProjectileWorldBlockingHit"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_CatapultRock.Carryable_CatapultRock_C.BroadcastNonWorldBlockingHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ACarryable_CatapultRock_C::BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_CatapultRock.Carryable_CatapultRock_C.BroadcastNonWorldBlockingHit"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_CatapultRock.Carryable_CatapultRock_C.ExecuteUbergraph_Carryable_CatapultRock
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_CatapultRock_C::ExecuteUbergraph_Carryable_CatapultRock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_CatapultRock.Carryable_CatapultRock_C.ExecuteUbergraph_Carryable_CatapultRock"));

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
