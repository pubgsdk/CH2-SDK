#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimationBudgetAllocator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary"));
		return ptr;
	}


	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0C20 - 0x0BF0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0BF0(0x0020) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0C10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0C10(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0C10(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0C11(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted"));
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
