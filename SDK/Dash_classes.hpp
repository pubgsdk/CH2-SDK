#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dash.Dash_C
// 0x001C (0x019C - 0x0180)
class UDash_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              SoftStateWindow__FromStart_;                              // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanAttack;                                                // 0x018C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	float                                              MinStateTimePercentage;                                   // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanParry;                                                 // 0x0194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              MinParryTime;                                             // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Dash.Dash_C"));
		return ptr;
	}


	bool CanSprint();
	float GetSoftRecoveryPercent();
	bool CanJump();
	void OnAssemble_Dash();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EnableCombo();
	void EnableParry();
	void ExecuteUbergraph_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
