#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_utility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_utility.BPF_utility_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_utility_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_utility.BPF_utility_C"));
		return ptr;
	}


	static void GetVectorProgressBetweenPointAToPointB(const struct FVector& In_Vector, const struct FVector& PointA, const struct FVector& PointB, class UObject* __WorldContext, float* Progress);
	static void ClampFloat__Max_(float Value, float Max, class UObject* __WorldContext, float* _);
	static void ClampFloat__Min_(float Value, float Min, class UObject* __WorldContext, float* _);
	static void Random_Vector_In_Range_From_Stream(const struct FVector& Min, const struct FVector& Max, const struct FRandomStream& Stream, class UObject* __WorldContext, struct FVector* Return_Value);
	static void Set_Cull_Distance(class UPrimitiveComponent* PrimitiveComponent, float DistanceMultiplier, class UObject* __WorldContext);
	static void Composite_Component_Bounds(class UBoxComponent* Group_Bounds_Component, class AActor* Owning_Actor, class UObject* __WorldContext, TArray<class USceneComponent*>* Components);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
