// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_SmokePot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_SmokePot.Carryable_SmokePot_C.HandleHitEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_SmokePot_C::HandleHitEvent(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.HandleHitEvent"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.SpawnSmokeActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_SmokePot_C::SpawnSmokeActor(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.SpawnSmokeActor"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.HitCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_SmokePot_C::HitCharacter(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.HitCharacter"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.OnBlockingHit_Event_SmokePot
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_SmokePot_C::OnBlockingHit_Event_SmokePot(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.OnBlockingHit_Event_SmokePot"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.OnMovementStarted_Event_SmokePot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_SmokePot_C::OnMovementStarted_Event_SmokePot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.OnMovementStarted_Event_SmokePot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.OnComponentHit_Event_SmokePot
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_SmokePot_C::OnComponentHit_Event_SmokePot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.OnComponentHit_Event_SmokePot"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.DestroySmokePot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_SmokePot_C::DestroySmokePot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.DestroySmokePot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_SmokePot_C::CustomEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.CustomEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_SmokePot_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_SmokePot.Carryable_SmokePot_C.ExecuteUbergraph_Carryable_SmokePot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_SmokePot_C::ExecuteUbergraph_Carryable_SmokePot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_SmokePot.Carryable_SmokePot_C.ExecuteUbergraph_Carryable_SmokePot"));

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
