#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_math_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_math.BPF_math_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_math_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_math.BPF_math_C"));
		return ptr;
	}


	static void VectorMinimum(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* Min);
	static void VectorMaximum(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* Max);
	static void iDeltaTime(int A, class UObject* __WorldContext, float* A___);
	static void vDeltaTime(const struct FVector& A, class UObject* __WorldContext, struct FVector* A___);
	static void fDeltaTime(float A, class UObject* __WorldContext, float* A___);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
