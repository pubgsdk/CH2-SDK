#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_Chicken_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_Chicken_V2.BPA_Chicken_V2_C
// 0x0C48 (0x1148 - 0x0500)
class UBPA_Chicken_V2_C : public UTBLAnimalAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x0508(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x0580(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_3;                           // 0x05F8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x0698(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x0738(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x07B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x0828(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x08A0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x0918(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x09B8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x0A30(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0x0AA8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0B48(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0BC0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0C38(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x0CF0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x0D18(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0DB8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x0DE8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0E88(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0F00(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0FA0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1018(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x1090(0x00A0)
	int                                                Idle_Index;                                               // 0x1130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Move_index;                                               // 0x1134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimationSet_BaseAnimal_C*                  AnimationSet;                                             // 0x1138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isDeath_Ragdoll;                                          // 0x1140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1141(0x0003) MISSED OFFSET
	int                                                run_Index;                                                // 0x1144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BPA_Chicken_V2.BPA_Chicken_V2_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Montage_blending_out(class UAnimMontage* Montage, bool bInterrupted);
	void Ragdoll();
	void CustomEvent();
	void CustomEvent_2();
	void BlueprintInitializeAnimation();
	void Do_Ragdoll();
	void AnimNotify_idle_end();
	void AnimNotify_death_ragdoll();
	void ExecuteUbergraph_BPA_Chicken_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
