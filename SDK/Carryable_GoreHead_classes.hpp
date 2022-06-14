#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_GoreHead_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_GoreHead.Carryable_GoreHead_C
// 0x006B (0x12CC - 0x1261)
class ACarryable_GoreHead_C : public ABaseCarryable_Offhand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        NoGoreHeadMesh;                                           // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Gore_Artery_m;                                          // 0x1278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Helmet;                                                   // 0x1280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hair;                                                     // 0x1288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Beard;                                                    // 0x1290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Head;                                                     // 0x1298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLCharacter*                               DeadCharacter;                                            // 0x12A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGoreHeadParams                             ReplicatedGoreHeadParams;                                 // 0x12A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_NoDestructor)
	class ATBLCharacter*                               ReplicatedDeadCharacter;                                  // 0x12B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Impulse;                                                  // 0x12C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_GoreHead.Carryable_GoreHead_C"));
		return ptr;
	}


	void OnRep_Impulse();
	void SetNoGoreHeadMesh();
	bool ShouldUseNoGore();
	void PostReplication();
	void OnRep_ReplicatedGoreHeadParams();
	void OnRep_ReplicatedDeadCharacter();
	class USkeletalMeshComponent* GetSkeletalMesh();
	void ApplyCustomization();
	void InitializeGoreHead(class ATBLCharacter* Character, const struct FGoreHeadParams& Params, const struct FVector& Impulse);
	void ApplyImpulseToGoreHead(const struct FVector& Impulse);
	void OnInitialize();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Carryable_GoreHead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
