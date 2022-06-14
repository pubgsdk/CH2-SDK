// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_OilPot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_OilPot.Carryable_OilPot_C.SpawnOilPot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_OilPot_C::SpawnOilPot(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.SpawnOilPot"));

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


// Function Carryable_OilPot.Carryable_OilPot_C.HandleHitEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_OilPot_C::HandleHitEvent(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.HandleHitEvent"));

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


// Function Carryable_OilPot.Carryable_OilPot_C.OnBlockingHit_Event_OilPot
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_OilPot_C::OnBlockingHit_Event_OilPot(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.OnBlockingHit_Event_OilPot"));

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


// Function Carryable_OilPot.Carryable_OilPot_C.OnMovementStarted_OilPit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_OilPot_C::OnMovementStarted_OilPit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.OnMovementStarted_OilPit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_OilPot.Carryable_OilPot_C.OnComponentHit_Event_OilPot
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_OilPot_C::OnComponentHit_Event_OilPot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.OnComponentHit_Event_OilPot"));

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


// Function Carryable_OilPot.Carryable_OilPot_C.DestroyOilPot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_OilPot_C::DestroyOilPot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.DestroyOilPot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_OilPot.Carryable_OilPot_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_OilPot_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_OilPot.Carryable_OilPot_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_OilPot_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_OilPot.Carryable_OilPot_C.ExecuteUbergraph_Carryable_OilPot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_OilPot_C::ExecuteUbergraph_Carryable_OilPot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_OilPot.Carryable_OilPot_C.ExecuteUbergraph_Carryable_OilPot"));

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
