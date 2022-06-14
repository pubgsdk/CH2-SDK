#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_SmokePot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_SmokePot.Carryable_SmokePot_C
// 0x0017 (0x1278 - 0x1261)
class ACarryable_SmokePot_C : public ABaseCarryable_Throwable_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               WasThrown;                                                // 0x1270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HitHandled;                                               // 0x1271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1272(0x0002) MISSED OFFSET
	float                                              DestroyDelay;                                             // 0x1274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_SmokePot.Carryable_SmokePot_C"));
		return ptr;
	}


	void HandleHitEvent(const struct FHitResult& HitResult);
	void SpawnSmokeActor(const struct FVector& Location);
	void HitCharacter(class ATBLCharacter* Character);
	void OnBlockingHit_Event_SmokePot(const struct FHitResult& HitResult);
	void OnMovementStarted_Event_SmokePot();
	void OnComponentHit_Event_SmokePot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DestroySmokePot();
	void CustomEvent();
	void OnInitialize();
	void ExecuteUbergraph_Carryable_SmokePot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
