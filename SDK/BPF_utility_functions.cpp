// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_utility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_utility.BPF_utility_C.GetVectorProgressBetweenPointAToPointB
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 In_Vector                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 PointA                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 PointB                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::GetVectorProgressBetweenPointAToPointB(const struct FVector& In_Vector, const struct FVector& PointA, const struct FVector& PointB, class UObject* __WorldContext, float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.GetVectorProgressBetweenPointAToPointB"));

	struct
	{
		struct FVector                 In_Vector;
		struct FVector                 PointA;
		struct FVector                 PointB;
		class UObject*                 __WorldContext;
		float                          Progress;
	} params = {};

	params.In_Vector = In_Vector;
	params.PointA = PointA;
	params.PointB = PointB;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BPF_utility.BPF_utility_C.ClampFloat (Max)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::ClampFloat__Max_(float Value, float Max, class UObject* __WorldContext, float* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.ClampFloat (Max)"));

	struct
	{
		float                          Value;
		float                          Max;
		class UObject*                 __WorldContext;
		float                          _;
	} params = {};

	params.Value = Value;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_utility.BPF_utility_C.ClampFloat (Min)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::ClampFloat__Min_(float Value, float Min, class UObject* __WorldContext, float* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.ClampFloat (Min)"));

	struct
	{
		float                          Value;
		float                          Min;
		class UObject*                 __WorldContext;
		float                          _;
	} params = {};

	params.Value = Value;
	params.Min = Min;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_utility.BPF_utility_C.Random Vector In Range From Stream
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRandomStream           Stream                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::Random_Vector_In_Range_From_Stream(const struct FVector& Min, const struct FVector& Max, const struct FRandomStream& Stream, class UObject* __WorldContext, struct FVector* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.Random Vector In Range From Stream"));

	struct
	{
		struct FVector                 Min;
		struct FVector                 Max;
		struct FRandomStream           Stream;
		class UObject*                 __WorldContext;
		struct FVector                 Return_Value;
	} params = {};

	params.Min = Min;
	params.Max = Max;
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BPF_utility.BPF_utility_C.Set Cull Distance
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceMultiplier             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::Set_Cull_Distance(class UPrimitiveComponent* PrimitiveComponent, float DistanceMultiplier, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.Set Cull Distance"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		float                          DistanceMultiplier;
		class UObject*                 __WorldContext;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.DistanceMultiplier = DistanceMultiplier;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_utility.BPF_utility_C.Composite Component Bounds
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> Components                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBoxComponent*           Group_Bounds_Component         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Owning_Actor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_utility_C::Composite_Component_Bounds(class UBoxComponent* Group_Bounds_Component, class AActor* Owning_Actor, class UObject* __WorldContext, TArray<class USceneComponent*>* Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_utility.BPF_utility_C.Composite Component Bounds"));

	struct
	{
		TArray<class USceneComponent*> Components;
		class UBoxComponent*           Group_Bounds_Component;
		class AActor*                  Owning_Actor;
		class UObject*                 __WorldContext;
	} params = {};

	params.Group_Bounds_Component = Group_Bounds_Component;
	params.Owning_Actor = Owning_Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Components != nullptr)
		*Components = params.Components;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
