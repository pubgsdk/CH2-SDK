#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_Weapon.BPA_Weapon_C
// 0x0869 (0x0E09 - 0x05A0)
class UBPA_Weapon_C : public UTBLWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x05A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x05D8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0650(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x0698(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0738(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x07B0(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0870(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                   // 0x0890(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0A40(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0A60(0x0020)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x0A80(0x01B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0C30(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x0CE8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0D10(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x0DB0(0x0028)
	struct FName                                       CharacterCombatState;                                     // 0x0DD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsServer;                                                 // 0x0DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               is3P_OLD;                                                 // 0x0DE1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0DE2(0x0006) MISSED OFFSET
	class ATBLCharacter*                               OwnerCharacter;                                           // 0x0DE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Weapon_Montage;                                           // 0x0DF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       PreviousCharacterCombatState;                             // 0x0DF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimationSet_Base_C*                        AnimationSet;                                             // 0x0E00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isCrossbow;                                               // 0x0E08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BPA_Weapon.BPA_Weapon_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName);
	void OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName);
	void OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName);
	void OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName);
	void OnCompleted_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName);
	void OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName);
	void OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName);
	void OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName);
	void OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName);
	void OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EventOnCombatStateChanged(const struct FName& PreviousState, const struct FName& NewState);
	void ExecuteUbergraph_BPA_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
