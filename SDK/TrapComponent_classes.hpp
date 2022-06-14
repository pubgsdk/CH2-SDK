#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TrapComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrapComponent.TrapComponent_C
// 0x00D0 (0x01D8 - 0x0108)
class UTrapComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnTrapInitiated;                                          // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnTrapActivated;                                          // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnTrapReset;                                              // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsTrapEnabled;                                            // 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsTrapActivating;                                         // 0x0141(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              ActivateDuration;                                         // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsResetting;                                              // 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              ActivationTime;                                           // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTrapEndActivated;                                       // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              ResetDuration;                                            // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTrapResetStarted;                                       // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class AActor*>                              DamagedPawns;                                             // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TMap<class AActor*, float>                         DamagedPawnsTimer;                                        // 0x0188(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TrapComponent.TrapComponent_C"));
		return ptr;
	}


	void TrackDamageDealt(class AActor* Actor);
	void AttemptDamageActor(class AActor* Actor, bool* Success);
	float GetTimeSinceActivation();
	void AttemptResetTrap(bool* Success);
	void AttemptActivateTrap(bool* Success);
	void AttemptInitiateTrap(bool* Success);
	void InitiateTrap();
	void ActivateTrap();
	void StartResetTrap();
	void EndActivation();
	void TrapEndActivated();
	void ReplicateResetTrap();
	void TrapReset();
	void TrapResetStarted();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TrapComponent(int EntryPoint);
	void OnTrapResetStarted__DelegateSignature();
	void OnTrapEndActivated__DelegateSignature();
	void OnTrapReset__DelegateSignature();
	void OnTrapActivated__DelegateSignature();
	void OnTrapInitiated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
