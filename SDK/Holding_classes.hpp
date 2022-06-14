#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Holding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Holding.Holding_C
// 0x0028 (0x01A8 - 0x0180)
class UHolding_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsHoldingInput_1;                                         // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HoldCompleted;                                            // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	float                                              HoldStartTime;                                            // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoHeavyAttack;                                            // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              MinimumHoldTime;                                          // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowCrosshair;                                            // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               NewVar_1;                                                 // 0x0199(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x019A(0x0002) MISSED OFFSET
	float                                              MinCancelTime;                                            // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       PreviousState;                                            // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Holding.Holding_C"));
		return ptr;
	}


	void GetFeintMinTime(float* MinTime);
	bool ShouldDoHeavyAttack();
	void CrosshairAborted(bool IsStateEnd);
	void CrosshairCompleted();
	void CrosshairInitiated();
	void CrosshairProgress();
	bool CanBeCancelled(bool bIsCancelIntoParry);
	void OnAssemble_Holding();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void StartHoldAttack();
	void StartHolding();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventTick(float DeltaSeconds);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Holding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
