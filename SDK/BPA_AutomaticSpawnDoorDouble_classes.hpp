#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_AutomaticSpawnDoorDouble_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C
// 0x0048 (0x0400 - 0x03B8)
class ABPA_AutomaticSpawnDoorDouble_C : public ABPA_SimpleDoor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGateComponent*                              PermanentGate;                                            // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        OneWaySpawnWall;                                          // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               Box1;                                                     // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Door_Right;                                               // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               OpenClose;                                                // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumCharactersInVolume;                                    // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FTimerHandle                                ClosedDoorTimer;                                          // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OpenedTime;                                               // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DurationAuto;                                             // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C"));
		return ptr;
	}


	void AreCharactersInOpenCloseBox(bool* CharactersPresent);
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void BndEvt__OpenClose_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OpenClose_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnGateClosedEvent_SimpleDoor(float Value);
	void OnGateOpenedEvent_SimpleDoor(float Value);
	void DisableGateClosing();
	void BndEvt__PermanentGate_K2Node_ComponentBoundEvent_4_GateOpened__DelegateSignature();
	void BndEvt__PermanentGate_K2Node_ComponentBoundEvent_5_GateClosed__DelegateSignature();
	void PermanentlyOpenDoor(bool Open);
	void EnableGateClosing();
	void ExecuteUbergraph_BPA_AutomaticSpawnDoorDouble(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
