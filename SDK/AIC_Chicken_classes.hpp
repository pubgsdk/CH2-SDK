#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIC_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_Chicken.AIC_Chicken_C
// 0x0010 (0x0370 - 0x0360)
class AAIC_Chicken_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPawnSensingComponent*                       PawnSensing;                                              // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AIC_Chicken.AIC_Chicken_C"));
		return ptr;
	}


	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	void Heard_a_chicken_panic(const struct FVector& Location);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AIC_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
