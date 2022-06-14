// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCarryable.BaseCarryable_C.GetEquippableOnHorse
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseCarryable_C::GetEquippableOnHorse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.GetEquippableOnHorse"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseCarryable.BaseCarryable_C.EvaluateImpact
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DistanceTravelled              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_C::EvaluateImpact(float DistanceTravelled, int* Index, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.EvaluateImpact"));

	struct
	{
		float                          DistanceTravelled;
		int                            Index;
		bool                           Success;
	} params = {};

	params.DistanceTravelled = DistanceTravelled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Index != nullptr)
		*Index = params.Index;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BaseCarryable.BaseCarryable_C.OnCustomImpact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseCarryable_C::OnCustomImpact(int Index, const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.OnCustomImpact"));

	struct
	{
		int                            Index;
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.Index = Index;
	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitWorld_Event_BaseCarryable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseCarryable_C::BaseProjectileBlockingHitWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitWorld_Event_BaseCarryable"));

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


// Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitNonWorld_Event_BaseCarryable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseCarryable_C::BaseProjectileBlockingHitNonWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitNonWorld_Event_BaseCarryable"));

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


// Function BaseCarryable.BaseCarryable_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseCarryable_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable.BaseCarryable_C.ExecuteUbergraph_BaseCarryable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_C::ExecuteUbergraph_BaseCarryable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable.BaseCarryable_C.ExecuteUbergraph_BaseCarryable"));

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
