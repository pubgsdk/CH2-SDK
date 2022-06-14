#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Draw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Draw.Draw_C
// 0x0014 (0x0194 - 0x0180)
class UDraw_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsWeak;                                                   // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              WeakStaminaPercent;                                       // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxThrowDrawTime;                                         // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Draw.Draw_C"));
		return ptr;
	}


	float GetMaxDrawStrengthTime();
	void ToggleFocusHint(bool _);
	void CrosshairFire();
	void NeedsCharge(bool* bClickToFire);
	void Fire();
	void ClickToFire(bool* bClickToFire);
	void IsOutOfStamina(bool* OutOfStamina);
	void CrosshairAborted();
	void UpdateCrosshair();
	bool CanBeCancelled(bool bIsCancelIntoParry);
	float GetDrawStrengthModifier();
	void CrosshairInitiated();
	void OnAssemble_Draw();
	void EventEndAnimation();
	void EventTick(float DeltaSeconds);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void OnFocusPressed();
	void OnFocusReleased();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void TriggerWeakDraw();
	void OnAttackQueued(const struct FName& AttackName);
	void MaxThrowHoldTime();
	void ExecuteUbergraph_Draw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
