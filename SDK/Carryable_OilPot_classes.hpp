#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_OilPot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_OilPot.Carryable_OilPot_C
// 0x0020 (0x1281 - 0x1261)
class ACarryable_OilPot_C : public ABaseCarryable_Throwable_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ps_sparkler;                                              // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               WasThrown;                                                // 0x1278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1279(0x0003) MISSED OFFSET
	float                                              DestroyDelay;                                             // 0x127C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HitHandled;                                               // 0x1280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_OilPot.Carryable_OilPot_C"));
		return ptr;
	}


	void SpawnOilPot(const struct FVector& Location);
	void HandleHitEvent(const struct FHitResult& HitResult);
	void OnBlockingHit_Event_OilPot(const struct FHitResult& HitResult);
	void OnMovementStarted_OilPit();
	void OnComponentHit_Event_OilPot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DestroyOilPot();
	void CustomEvent_1();
	void OnInitialize();
	void ExecuteUbergraph_Carryable_OilPot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
