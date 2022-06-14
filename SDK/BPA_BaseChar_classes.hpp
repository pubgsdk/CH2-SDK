#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_BaseChar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BPA_BaseChar.BPA_BaseChar_C
// 0x23C40 (0x252A0 - 0x1660)
class UBPA_BaseChar_C : public UTBLCharacterAnimInstance_Playable
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x1660(0x00D8) MISSED OFFSET
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_116;                         // 0x1738(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_68;                        // 0x17B0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_29;                           // 0x1890(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47;                              // 0x1958(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_67;                        // 0x1A60(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_57;                          // 0x1B40(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_151;                          // 0x1BF8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_11;                  // 0x1C20(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_62;                        // 0x1CF0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66;                        // 0x1DB0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_28;                           // 0x1E90(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_3;                           // 0x1F58(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_115;                         // 0x1FF8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_114;                         // 0x2070(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_113;                         // 0x20E8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_112;                         // 0x2160(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_111;                         // 0x21D8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96;                         // 0x2250(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_110;                       // 0x22F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_109;                       // 0x2318(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_44;                             // 0x2340(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_62;                 // 0x2408(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_61;                 // 0x2470(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_31;                  // 0x24D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_108;                       // 0x2508(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_43;                             // 0x2530(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_60;                 // 0x25F8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_59;                 // 0x2660(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_30;                  // 0x26C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_107;                       // 0x26F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_106;                       // 0x2720(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_42;                             // 0x2748(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_58;                 // 0x2810(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_57;                 // 0x2878(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_29;                  // 0x28E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105;                       // 0x2910(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_104;                       // 0x2938(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_41;                             // 0x2960(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_56;                 // 0x2A28(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_55;                 // 0x2A90(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_28;                  // 0x2AF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_40;                             // 0x2B28(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_54;                 // 0x2BF0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_53;                 // 0x2C58(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_27;                  // 0x2CC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_103;                       // 0x2CF0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_39;                             // 0x2D18(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_52;                 // 0x2DE0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_51;                 // 0x2E48(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_26;                  // 0x2EB0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102;                       // 0x2EE0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_101;                       // 0x2F08(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_100;                       // 0x2F30(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99;                        // 0x2F58(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_38;                             // 0x2F80(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_50;                 // 0x3048(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_49;                 // 0x30B0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_25;                  // 0x3118(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98;                        // 0x3148(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_37;                             // 0x3170(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_48;                 // 0x3238(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_47;                 // 0x32A0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_24;                  // 0x3308(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97;                        // 0x3338(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_36;                             // 0x3360(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_46;                 // 0x3428(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_45;                 // 0x3490(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_23;                  // 0x34F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96;                        // 0x3528(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95;                        // 0x3550(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94;                        // 0x3578(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93;                        // 0x35A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92;                        // 0x35C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_35;                             // 0x35F0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_44;                 // 0x36B8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_43;                 // 0x3720(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_22;                  // 0x3788(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91;                        // 0x37B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90;                        // 0x37E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89;                        // 0x3808(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88;                        // 0x3830(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87;                        // 0x3858(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86;                        // 0x3880(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85;                        // 0x38A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_34;                             // 0x38D0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_42;                 // 0x3998(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_41;                 // 0x3A00(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_21;                  // 0x3A68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84;                        // 0x3A98(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_33;                             // 0x3AC0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_40;                 // 0x3B88(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_39;                 // 0x3BF0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_20;                  // 0x3C58(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83;                        // 0x3C88(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82;                        // 0x3CB0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81;                        // 0x3CD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_32;                             // 0x3D00(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_38;                 // 0x3DC8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_37;                 // 0x3E30(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_19;                  // 0x3E98(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80;                        // 0x3EC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79;                        // 0x3EF0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_31;                             // 0x3F18(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_36;                 // 0x3FE0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_35;                 // 0x4048(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_18;                  // 0x40B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78;                        // 0x40E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_30;                             // 0x4108(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_34;                 // 0x41D0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_33;                 // 0x4238(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_17;                  // 0x42A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77;                        // 0x42D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76;                        // 0x42F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75;                        // 0x4320(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74;                        // 0x4348(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73;                        // 0x4370(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_29;                             // 0x4398(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_32;                 // 0x4460(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_31;                 // 0x44C8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_16;                  // 0x4530(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72;                        // 0x4560(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71;                        // 0x4588(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70;                        // 0x45B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69;                        // 0x45D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_150;                          // 0x4600(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_61;                        // 0x4628(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_65;                        // 0x46E8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_60;                        // 0x47C8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_110;                         // 0x4888(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_59;                             // 0x4900(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_109;                         // 0x4930(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_59;                        // 0x49A8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_64;                        // 0x4A68(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58;                             // 0x4B48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_149;                          // 0x4B78(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_58;                        // 0x4BA0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_108;                         // 0x4C60(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_27;                           // 0x4CD8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_95;                         // 0x4DA0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63;                        // 0x4E40(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_62;                        // 0x4F20(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_57;                             // 0x5000(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_107;                         // 0x5030(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_57;                        // 0x50A8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_148;                          // 0x5168(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_26;                           // 0x5190(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94;                         // 0x5258(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_61;                        // 0x52F8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_60;                        // 0x53D8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_56;                             // 0x54B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_147;                          // 0x54E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_56;                        // 0x5510(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_106;                         // 0x55D0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_25;                           // 0x5648(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_93;                         // 0x5710(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_59;                        // 0x57B0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58;                        // 0x5890(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55;                             // 0x5970(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_146;                          // 0x59A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_24;                           // 0x59C8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92;                         // 0x5A90(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_57;                        // 0x5B30(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_56;                        // 0x5C10(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54;                             // 0x5CF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_145;                          // 0x5D20(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_55;                        // 0x5D48(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_105;                         // 0x5E08(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_53;                             // 0x5E80(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_10;                  // 0x5EB0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_55;                        // 0x5F80(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_28;                             // 0x6060(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_104;                         // 0x6128(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_54;                        // 0x61A0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_144;                          // 0x6260(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_103;                         // 0x6288(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52;                             // 0x6300(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_53;                        // 0x6330(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_143;                          // 0x63F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_102;                         // 0x6418(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_27;                             // 0x6490(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_101;                         // 0x6558(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_51;                             // 0x65D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_100;                         // 0x6600(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_13;                      // 0x6678(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_23;                           // 0x66E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91;                         // 0x67A8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_52;                        // 0x6848(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_142;                          // 0x6908(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_141;                          // 0x6930(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99;                          // 0x6958(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_12;                      // 0x69D0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_22;                           // 0x6A38(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_54;                        // 0x6B00(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_53;                        // 0x6BE0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52;                        // 0x6CC0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_50;                             // 0x6DA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_140;                          // 0x6DD0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_139;                          // 0x6DF8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_138;                          // 0x6E20(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_137;                          // 0x6E48(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_26;                             // 0x6E70(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_25;                             // 0x6F38(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_136;                          // 0x7000(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_21;                           // 0x7028(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_51;                        // 0x70F0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49;                             // 0x71B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_135;                          // 0x71E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_20;                           // 0x7208(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51;                        // 0x72D0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_48;                             // 0x73B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_134;                          // 0x73E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_19;                           // 0x7408(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90;                         // 0x74D0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50;                        // 0x7570(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_49;                        // 0x7650(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47;                             // 0x7730(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_15;                            // 0x7760(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30;                                    // 0x7810(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_56;                          // 0x7858(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_133;                          // 0x7910(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_132;                          // 0x7938(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_50;                        // 0x7960(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55;                          // 0x7A20(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_131;                          // 0x7AD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89;                         // 0x7B00(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_130;                          // 0x7BA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98;                          // 0x7BC8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_49;                        // 0x7C40(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_13;                            // 0x7D00(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88;                         // 0x7D18(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_17;                            // 0x7DB8(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_46;                              // 0x7E48(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_14;                                // 0x7F50(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_129;                          // 0x8040(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_45;                              // 0x8068(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_13;                                // 0x8170(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_12;                                // 0x8260(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_44;                              // 0x8350(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43;                              // 0x8458(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_29;                                    // 0x8560(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28;                                    // 0x85A8(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_48;                        // 0x85F0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_128;                          // 0x86B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_27;                                    // 0x86D8(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68;                        // 0x8720(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67;                        // 0x8748(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_24;                             // 0x8770(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_30;                 // 0x8838(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_29;                 // 0x88A0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_15;                  // 0x8908(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66;                        // 0x8938(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65;                        // 0x8960(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64;                        // 0x8988(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_23;                             // 0x89B0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_28;                 // 0x8A78(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_27;                 // 0x8AE0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_14;                  // 0x8B48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63;                        // 0x8B78(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97;                          // 0x8BA0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_46;                             // 0x8C18(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_16;                            // 0x8C48(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_45;                             // 0x8CD8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_48;                        // 0x8D08(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_44;                             // 0x8DE8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96;                          // 0x8E18(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87;                         // 0x8E90(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47;                        // 0x8F30(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_43;                             // 0x9010(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_46;                        // 0x9040(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_42;                             // 0x9120(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14;                            // 0x9150(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_18;                           // 0x9200(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x92C8(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x92E8(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86;                         // 0x9308(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85;                         // 0x93A8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_127;                          // 0x9448(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84;                         // 0x9470(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_26;                                    // 0x9510(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83;                         // 0x9558(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_45;                        // 0x95F8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_17;                           // 0x96D8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x97A0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x97C0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_16;                           // 0x97E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_82;                         // 0x98A8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95;                          // 0x9948(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_15;                           // 0x99C0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_44;                        // 0x9A88(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_3;                                    // 0x9B68(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_42;                              // 0x9C60(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_11;                                // 0x9D68(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_10;                                // 0x9E58(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41;                              // 0x9F48(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40;                              // 0xA050(0x0108) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0xA158(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_8;                                // 0xA160(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7;                                // 0xA340(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94;                          // 0xA520(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62;                        // 0xA598(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61;                        // 0xA5C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_22;                             // 0xA5E8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_26;                 // 0xA6B0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_25;                 // 0xA718(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_13;                  // 0xA780(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60;                        // 0xA7B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59;                        // 0xA7D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_21;                             // 0xA800(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_24;                 // 0xA8C8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_23;                 // 0xA930(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_12;                  // 0xA998(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58;                        // 0xA9C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57;                        // 0xA9F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93;                          // 0xAA18(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92;                          // 0xAA90(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81;                         // 0xAB08(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80;                         // 0xABA8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91;                          // 0xAC48(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_41;                             // 0xACC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_79;                         // 0xACF0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_43;                        // 0xAD90(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_14;                           // 0xAE70(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90;                          // 0xAF38(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_42;                        // 0xAFB0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_40;                             // 0xB090(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_41;                        // 0xB0C0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78;                         // 0xB1A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_13;                           // 0xB240(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89;                          // 0xB308(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_40;                        // 0xB380(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_39;                             // 0xB460(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_13;                            // 0xB490(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56;                        // 0xB540(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55;                        // 0xB568(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_20;                             // 0xB590(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_22;                 // 0xB658(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_21;                 // 0xB6C0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_11;                  // 0xB728(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54;                        // 0xB758(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53;                        // 0xB780(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_19;                             // 0xB7A8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_20;                 // 0xB870(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_19;                 // 0xB8D8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_10;                  // 0xB940(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52;                        // 0xB970(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51;                        // 0xB998(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88;                          // 0xB9C0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87;                          // 0xBA38(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77;                         // 0xBAB0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76;                         // 0xBB50(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86;                          // 0xBBF0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_38;                             // 0xBC68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_12;                           // 0xBC98(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_126;                          // 0xBD60(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39;                        // 0xBD88(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_37;                             // 0xBE68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_38;                        // 0xBE98(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75;                         // 0xBF78(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_125;                          // 0xC018(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_11;                           // 0xC040(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_37;                        // 0xC108(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_36;                             // 0xC1E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                            // 0xC218(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39;                              // 0xC2C8(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend_2;                            // 0xC3D0(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25;                                    // 0xC420(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_36;                        // 0xC468(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_24;                                    // 0xC548(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_23;                                    // 0xC590(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74;                         // 0xC5D8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38;                              // 0xC678(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73;                         // 0xC780(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_15;                            // 0xC820(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37;                              // 0xC8B0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_35;                        // 0xC9B8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_9;                   // 0xCA98(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85;                          // 0xCB68(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72;                         // 0xCBE0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_124;                          // 0xCC80(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0xCCA8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84;                          // 0xCD48(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71;                         // 0xCDC0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6;                                // 0xCE60(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47;                        // 0xD040(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5;                                // 0xD100(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50;                        // 0xD2E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49;                        // 0xD308(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48;                        // 0xD330(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47;                        // 0xD358(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46;                        // 0xD380(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45;                        // 0xD3A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_35;                             // 0xD3D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83;                          // 0xD400(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_34;                             // 0xD478(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_18;                             // 0xD4A8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82;                          // 0xD570(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81;                          // 0xD5E8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_33;                             // 0xD660(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80;                          // 0xD690(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                             // 0xD708(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                            // 0xD738(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44;                        // 0xD7E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43;                        // 0xD810(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42;                        // 0xD838(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41;                        // 0xD860(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                        // 0xD888(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                        // 0xD8B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                             // 0xD8D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79;                          // 0xD908(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                             // 0xD980(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_17;                             // 0xD9B0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78;                          // 0xDA78(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77;                          // 0xDAF0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                             // 0xDB68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76;                          // 0xDB98(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                             // 0xDC10(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                            // 0xDC40(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70;                         // 0xDCF0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69;                         // 0xDD90(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75;                          // 0xDE30(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74;                          // 0xDEA8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73;                          // 0xDF20(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                          // 0xDF98(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                          // 0xE010(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                          // 0xE088(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                          // 0xE100(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                          // 0xE178(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                          // 0xE1F0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                          // 0xE268(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                          // 0xE2E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                          // 0xE358(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                          // 0xE3D0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54;                          // 0xE448(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_34;                        // 0xE500(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68;                         // 0xE5E0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67;                         // 0xE680(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_33;                        // 0xE720(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_123;                          // 0xE800(0x0028) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0xE828(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4;                                // 0xE830(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                // 0xEA10(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_16;                             // 0xEBF0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_18;                 // 0xECB8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_17;                 // 0xED20(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_9;                   // 0xED88(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                        // 0xEDB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_15;                             // 0xEDE0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_16;                 // 0xEEA8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_15;                 // 0xEF10(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_8;                   // 0xEF78(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_14;                             // 0xEFA8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_14;                 // 0xF070(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_13;                 // 0xF0D8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_7;                   // 0xF140(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                        // 0xF170(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_13;                             // 0xF198(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_12;                 // 0xF260(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_11;                 // 0xF2C8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_6;                   // 0xF330(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                        // 0xF360(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                        // 0xF388(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_8;                   // 0xF3B0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_32;                        // 0xF480(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_122;                          // 0xF560(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_46;                        // 0xF588(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31;                        // 0xF648(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                             // 0xF728(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7;                   // 0xF758(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30;                        // 0xF828(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_121;                          // 0xF908(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_45;                        // 0xF930(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_29;                        // 0xF9F0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                             // 0xFAD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_120;                          // 0xFB00(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                             // 0xFB28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                             // 0xFB58(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_53;                          // 0xFC08(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_119;                          // 0xFCC0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_118;                          // 0xFCE8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66;                         // 0xFD10(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_117;                          // 0xFDB0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_116;                          // 0xFDD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_115;                          // 0xFE00(0x0028) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0xFE28(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_3;                                   // 0xFE30(0x01B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                   // 0xFFE0(0x01B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_28;                        // 0x10190(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_22;                                    // 0x10270(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                          // 0x102B8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_44;                        // 0x10330(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36;                              // 0x103F0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35;                              // 0x104F8(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34;                              // 0x10600(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33;                              // 0x10708(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32;                              // 0x10810(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31;                              // 0x10918(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_30;                              // 0x10A20(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_43;                        // 0x10B28(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21;                                    // 0x10BE8(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27;                        // 0x10C30(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_6;                   // 0x10D10(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20;                                    // 0x10DE0(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65;                         // 0x10E28(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_114;                          // 0x10EC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                          // 0x10EF0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_42;                        // 0x10F68(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_113;                          // 0x11028(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_19;                                    // 0x11050(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_29;                              // 0x11098(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64;                         // 0x111A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18;                                    // 0x11240(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17;                                    // 0x11288(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16;                                    // 0x112D0(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15;                                    // 0x11318(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                          // 0x11360(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_2;                           // 0x113D8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26;                        // 0x11478(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25;                        // 0x11558(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_28;                              // 0x11638(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27;                              // 0x11740(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_2;                                    // 0x11848(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26;                              // 0x11940(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25;                              // 0x11A48(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24;                              // 0x11B50(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                          // 0x11C58(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63;                         // 0x11CD0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23;                              // 0x11D70(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_14;                                    // 0x11E78(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_41;                        // 0x11EC0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_13;                                    // 0x11F80(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                          // 0x11FC8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62;                         // 0x12040(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                          // 0x120E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_11;                      // 0x12158(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x121C0(0x01B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                              // 0x12370(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_14;                            // 0x12478(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                          // 0x12508(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61;                         // 0x12580(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9;                                 // 0x12620(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8;                                 // 0x12710(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                              // 0x12800(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                              // 0x12908(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                          // 0x12A10(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                          // 0x12A88(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_12;                             // 0x12B00(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                          // 0x12BC8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_11;                             // 0x12C40(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52;                          // 0x12D08(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7;                                 // 0x12DC0(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24;                        // 0x12EB0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_40;                        // 0x12F90(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_3;                             // 0x13050(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                          // 0x13068(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                          // 0x130E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_39;                        // 0x13158(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51;                          // 0x13218(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60;                         // 0x132D0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                          // 0x13370(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59;                         // 0x133E8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                              // 0x13488(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                              // 0x13590(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                              // 0x13698(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58;                         // 0x137A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57;                         // 0x13840(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                          // 0x138E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x13958(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56;                         // 0x139D0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10;                           // 0x13A70(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_112;                          // 0x13B38(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_111;                          // 0x13B60(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_110;                          // 0x13B88(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55;                         // 0x13BB0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x13C50(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50;                          // 0x13CC8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_109;                          // 0x13D80(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23;                        // 0x13DA8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_49;                          // 0x13E88(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54;                         // 0x13F40(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_12;                            // 0x13FE0(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_11;                            // 0x13FF8(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53;                         // 0x14010(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_108;                          // 0x140B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_10;                            // 0x140D8(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9;                             // 0x140F0(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52;                         // 0x14108(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_48;                          // 0x141A8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_107;                          // 0x14260(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_106;                          // 0x14288(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend;                              // 0x142B0(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x14300(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x14378(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x143F0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_47;                          // 0x14468(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_105;                          // 0x14520(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_51;                         // 0x14548(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_104;                          // 0x145E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_12;                                    // 0x14610(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                              // 0x14658(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_46;                          // 0x14760(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_103;                          // 0x14818(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_102;                          // 0x14840(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5;                   // 0x14868(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_11;                                    // 0x14938(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_10;                                    // 0x14980(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_38;                        // 0x149C8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8;                             // 0x14A88(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9;                                     // 0x14AA0(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_45;                          // 0x14AE8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_101;                          // 0x14BA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_100;                          // 0x14BC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9;                            // 0x14BF0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_99;                           // 0x14CB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50;                         // 0x14CE0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_44;                          // 0x14D80(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98;                           // 0x14E38(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97;                           // 0x14E60(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96;                           // 0x14E88(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49;                         // 0x14EB0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_43;                          // 0x14F50(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95;                           // 0x15008(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_42;                          // 0x15030(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94;                           // 0x150E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93;                           // 0x15110(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_37;                        // 0x15138(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_41;                          // 0x151F8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48;                         // 0x152B0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_36;                        // 0x15350(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92;                           // 0x15410(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91;                           // 0x15438(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90;                           // 0x15460(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_47;                         // 0x15488(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_40;                          // 0x15528(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89;                           // 0x155E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4;                   // 0x15608(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88;                           // 0x156D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46;                         // 0x15700(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                              // 0x157A0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x158A8(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x158C8(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_39;                          // 0x158E8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87;                           // 0x159A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45;                         // 0x159C8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86;                           // 0x15A68(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_38;                          // 0x15A90(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85;                           // 0x15B48(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44;                         // 0x15B70(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_37;                          // 0x15C10(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84;                           // 0x15CC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43;                         // 0x15CF0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_36;                          // 0x15D90(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83;                           // 0x15E48(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42;                         // 0x15E70(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82;                           // 0x15F10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8;                                     // 0x15F38(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_13;                            // 0x15F80(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81;                           // 0x16010(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_35;                          // 0x16038(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                        // 0x160F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                        // 0x16118(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80;                           // 0x16140(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                             // 0x16168(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79;                           // 0x16198(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                             // 0x161C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                             // 0x161F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41;                         // 0x162A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x16340(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_13;                      // 0x163B8(0x00F0) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x8];                                       // 0x164A8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x164B0(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x16690(0x01E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_12;                      // 0x16870(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6;                                 // 0x16960(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5;                                 // 0x16A50(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4;                                 // 0x16B40(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3;                                 // 0x16C30(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_10;                      // 0x16D20(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7;                             // 0x16D88(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x16DA0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_34;                          // 0x16E18(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x16ED0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_33;                          // 0x16F48(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40;                         // 0x17000(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_12;                            // 0x170A0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39;                         // 0x17130(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38;                         // 0x171D0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37;                         // 0x17270(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_11;                            // 0x17310(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_10;                            // 0x173A0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78;                           // 0x17430(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x17458(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32;                          // 0x174D0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x17588(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_31;                          // 0x17600(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77;                           // 0x176B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36;                         // 0x176E0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x17780(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x177F8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30;                          // 0x17870(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76;                           // 0x17928(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_29;                          // 0x17950(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_35;                         // 0x17A08(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75;                           // 0x17AA8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34;                         // 0x17AD0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33;                         // 0x17B70(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32;                         // 0x17C10(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_9;                             // 0x17CB0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_8;                             // 0x17D40(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31;                         // 0x17DD0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30;                         // 0x17E70(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                         // 0x17F10(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_7;                             // 0x17FB0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_6;                             // 0x18040(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74;                           // 0x180D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                         // 0x180F8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                         // 0x18198(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                         // 0x18238(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_5;                             // 0x182D8(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_4;                             // 0x18368(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73;                           // 0x183F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                              // 0x18420(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x18528(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x18548(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_28;                          // 0x18568(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_27;                          // 0x18620(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_26;                          // 0x186D8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72;                           // 0x18790(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71;                           // 0x187B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70;                           // 0x187E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                         // 0x18808(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69;                           // 0x188A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                         // 0x188D0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                         // 0x18970(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x18A10(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_22;                        // 0x18A88(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21;                        // 0x18B68(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8;                            // 0x18C48(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7;                            // 0x18D10(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25;                          // 0x18DD8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68;                           // 0x18E90(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67;                           // 0x18EB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_9;                       // 0x18EE0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x18F48(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                              // 0x18FC0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                              // 0x190C8(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66;                           // 0x191D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65;                           // 0x191F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_35;                        // 0x19220(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x192E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24;                          // 0x19358(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64;                           // 0x19410(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                         // 0x19438(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7;                                     // 0x194D8(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34;                        // 0x19520(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_10;                             // 0x195E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_10;                 // 0x196A8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_9;                  // 0x19710(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_5;                   // 0x19778(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                        // 0x197A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                        // 0x197D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9;                              // 0x197F8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_8;                  // 0x198C0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_7;                  // 0x19928(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_4;                   // 0x19990(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x199C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x199E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x19A10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x19A38(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20;                        // 0x19A60(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                             // 0x19B40(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63;                           // 0x19B70(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                             // 0x19B98(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62;                           // 0x19BC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x19BF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_19;                        // 0x19C20(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x19D00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                             // 0x19D30(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x19DE0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                         // 0x19EE8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_3;                             // 0x19F88(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_33;                        // 0x1A018(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2;                             // 0x1A0D8(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x1A0F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8;                              // 0x1A118(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_6;                  // 0x1A1E0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_5;                  // 0x1A248(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_3;                   // 0x1A2B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x1A2E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x1A308(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_32;                        // 0x1A380(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_18;                        // 0x1A440(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x1A520(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone;                             // 0x1A550(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_3;                   // 0x1A5F0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17;                        // 0x1A6C0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7;                              // 0x1A7A0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61;                           // 0x1A868(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x1A890(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x1A908(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                             // 0x1A938(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x1A9E8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x1AA60(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                         // 0x1AAD8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_31;                        // 0x1AB78(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_8;                       // 0x1AC38(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60;                           // 0x1ACA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_16;                        // 0x1ACC8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30;                        // 0x1ADA8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6;                            // 0x1AE68(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59;                           // 0x1AF30(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_58;                           // 0x1AF58(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                            // 0x1AF80(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x1B048(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23;                          // 0x1B0C0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x1B178(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22;                          // 0x1B1F0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6;                              // 0x1B2A8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57;                           // 0x1B370(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56;                           // 0x1B398(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                         // 0x1B3C0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x1B460(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_29;                        // 0x1B4D8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                            // 0x1B598(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                         // 0x1B660(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21;                          // 0x1B700(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55;                           // 0x1B7B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54;                           // 0x1B7E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x1B808(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByRandom                 TBLAnimGraphNode_BlendListByRandom_2;                     // 0x1B830(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x1B940(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x1B9B8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x1BA30(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x1BAA8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x1BAD8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x1BB50(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x1BB80(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                         // 0x1BC30(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                         // 0x1BCD0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                               // 0x1BD70(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_7;                       // 0x1BD88(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x1BDF0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_6;                       // 0x1BE68(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x1BED0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_28;                        // 0x1BF48(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x1C008(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                         // 0x1C080(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                     // 0x1C120(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6;                             // 0x1C168(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_5;                       // 0x1C180(0x0068) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x8];                                       // 0x1C1E8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x1C1F0(0x0590) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1C780(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1C7A0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_20;                          // 0x1C7C0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53;                           // 0x1C878(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52;                           // 0x1C8A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5;                             // 0x1C8C8(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x1C8E0(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                         // 0x1C928(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_2;                             // 0x1C9C8(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                             // 0x1CA58(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_4;                       // 0x1CA70(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51;                           // 0x1CAD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19;                          // 0x1CB00(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50;                           // 0x1CBB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_27;                        // 0x1CBE0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49;                           // 0x1CCA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26;                        // 0x1CCC8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18;                          // 0x1CD88(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48;                           // 0x1CE40(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47;                           // 0x1CE68(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25;                        // 0x1CE90(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17;                          // 0x1CF50(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46;                           // 0x1D008(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45;                           // 0x1D030(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24;                        // 0x1D058(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x1D118(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23;                        // 0x1D220(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44;                           // 0x1D2E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43;                           // 0x1D308(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16;                          // 0x1D330(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                              // 0x1D3E8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_4;                  // 0x1D4B0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_3;                  // 0x1D518(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult_2;                   // 0x1D580(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x1D5B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x1D5D8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_2;                  // 0x1D6A0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator;                    // 0x1D708(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_CustomTransitionResult;                     // 0x1D770(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x1D7A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_22;                        // 0x1D7C8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x1D888(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15;                        // 0x1D900(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x1D9E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42;                           // 0x1DA10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x1DA38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x1DA68(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14;                        // 0x1DB18(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                         // 0x1DBF8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x1DC98(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_11;                      // 0x1DD10(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x1DE00(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_15;                          // 0x1DE48(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41;                           // 0x1DF00(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40;                           // 0x1DF28(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39;                           // 0x1DF50(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_21;                        // 0x1DF78(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x1E038(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20;                        // 0x1E0B0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38;                           // 0x1E170(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x1E198(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37;                           // 0x1E238(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14;                          // 0x1E260(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36;                           // 0x1E318(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35;                           // 0x1E340(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13;                        // 0x1E368(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34;                           // 0x1E448(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_3;                       // 0x1E470(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x1E4D8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13;                          // 0x1E550(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_33;                           // 0x1E608(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32;                           // 0x1E630(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x1E658(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x1E6A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_19;                        // 0x1E740(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x1E800(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x1E818(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x1E8E0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                               // 0x1E958(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x1E9E8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31;                           // 0x1EAB0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x1EAD8(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                 // 0x1EBD0(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x1ECC0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30;                           // 0x1EDC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1EDF0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_10;                      // 0x1EEA0(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9;                       // 0x1EF90(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_8;                       // 0x1F080(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7;                       // 0x1F170(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x1F260(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x1F368(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_6;                       // 0x1F470(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_5;                       // 0x1F560(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_4;                       // 0x1F650(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_3;                       // 0x1F740(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_2;                       // 0x1F830(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier;                         // 0x1F920(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                           // 0x1FA10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_12;                          // 0x1FA38(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18;                        // 0x1FAF0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x1FBB0(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                           // 0x1FBC8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x1FBF0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11;                          // 0x1FC90(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                           // 0x1FD48(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                           // 0x1FD70(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                          // 0x1FD98(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                           // 0x1FE50(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                           // 0x1FE78(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x1FF30(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x1FF58(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x1FF80(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x1FFA8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x1FFD0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x1FFF8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17;                        // 0x20020(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                        // 0x200E0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                           // 0x201C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x201E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                        // 0x20218(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_16;                        // 0x202F8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                           // 0x203B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x203E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                           // 0x20410(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x20438(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x20468(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15;                        // 0x20518(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                           // 0x205D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                           // 0x20600(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x20628(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x20730(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2;                   // 0x207E8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                           // 0x208B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x208E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_14;                        // 0x20908(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x209C8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x20A68(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x20AB0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x20B68(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x20B90(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x20C30(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByRandom                 TBLAnimGraphNode_BlendListByRandom;                       // 0x20D38(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x20E48(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x20F50(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x21008(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x210C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x210E8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x211A0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Inertialization                   AnimGraphNode_Inertialization;                            // 0x212A8(0x0070) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                        // 0x21318(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13;                        // 0x213F8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x214B8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x21530(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x215E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x21610(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x21638(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x21660(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x21688(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x216B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x216D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x21700(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x21728(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x217A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x217D0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x21848(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x21878(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x218F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x21920(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x21998(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x219C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x219F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x21AA0(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                   // 0x21BA8(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x21C98(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_12;                        // 0x21CB8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x21D78(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x21D90(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x21E08(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x21E80(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x21F20(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                         // 0x21FC0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x220A0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                        // 0x22140(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x22200(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                        // 0x22228(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x222E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                         // 0x22310(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x223D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x223F8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x224D8(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x224F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x22520(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                         // 0x225F0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x226B0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x22790(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x22858(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x22938(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel_2;                       // 0x22A00(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x22A68(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x22AE0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x22B08(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x22BC0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x22BE8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x22C10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x22C38(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x22CD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x22D00(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x22DB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                         // 0x22DE0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x22EA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                         // 0x22EC8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x22F88(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x23048(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x23070(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x23098(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x23158(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x23238(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x232D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x23300(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x233A0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x23460(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x23540(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x23608(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x236E8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel;                         // 0x237B0(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x23818(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x23890(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x238B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x238E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x23908(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x23930(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x23958(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x23980(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x239A8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x23A20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x23A50(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x23AC8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x23AF8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x23B70(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x23BA0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x23C80(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x23CB0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x23D28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x23D58(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x23E08(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x23EC8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x23F40(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x24020(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x240C0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x24160(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x241A8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x24268(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x24370(0x0030) (CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet;                                             // 0x243A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet1P;                                           // 0x243A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet3P;                                           // 0x243B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isStrafe;                                                 // 0x243B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprint;                                                 // 0x243B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDash;                                                   // 0x243BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInAir;                                                  // 0x243BB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isPrevDash;                                               // 0x243BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x243BD(0x0003) MISSED OFFSET
	float                                              _1P_Weight;                                               // 0x243C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CombatWeight;                                             // 0x243C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeAttackWeight;                                        // 0x243C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x4];                                       // 0x243CC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_Shoulder_Combat_Lft;                                // 0x243D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_Shoulder_Combat_Rgt;                                // 0x243D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ShoulderCombat_Offset_Lft;                                // 0x243E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ShoulderCombat_Offset_Rgt;                                // 0x243EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ArmBaseCombat_Offset_T_1P;                                // 0x243F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ArmBaseCombat_Offset_R_3P;                                // 0x24404(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isStrafeFront;                                            // 0x24410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x24411(0x0003) MISSED OFFSET
	float                                              StrafeBlendTime;                                          // 0x24414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x24418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDamage_Interrupt;                                       // 0x24420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDamage_Stagger;                                         // 0x24421(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDamage_Stun;                                            // 0x24422(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombat;                                                 // 0x24423(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isActiveHipsYawByAttack;                                  // 0x24424(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x24425(0x0003) MISSED OFFSET
	float                                              combatInterpSpeed;                                        // 0x24428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CombatYawOffset;                                          // 0x2442C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Strafe_TY_Offset;                                         // 0x24430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFullBodyMotion;                                         // 0x24434(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x24435(0x0003) MISSED OFFSET
	class UAnimMontage*                                DamageMontage;                                            // 0x24438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                MovementMontage;                                          // 0x24440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MovementMontageSectionName;                               // 0x24448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                MovementMontage_3P;                                       // 0x24450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       DamageMontageSectionName;                                 // 0x24458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isAltAttack;                                              // 0x24460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x24461(0x0003) MISSED OFFSET
	struct FName                                       AttackName;                                               // 0x24464(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isWorldHit;                                               // 0x2446C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2446D(0x0003) MISSED OFFSET
	struct FVector                                     Turn_bodyDirection;                                       // 0x24470(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYaw;                                                   // 0x2447C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_TurnAnimWeight;                                      // 0x24480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_turnAngle;                                           // 0x24484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isApply3PLowerBody;                                       // 0x24488(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x24489(0x0003) MISSED OFFSET
	float                                              Apply3PLowerBodyBlendTime;                                // 0x2448C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isNotCombatIdle;                                          // 0x24490(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombatRelease;                                          // 0x24491(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x2];                                       // 0x24492(0x0002) MISSED OFFSET
	float                                              _3P_Weight;                                               // 0x24494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CombatState_Real;                                         // 0x24498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombatRecovery;                                         // 0x244A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x244A1(0x0003) MISSED OFFSET
	float                                              strafeYawDirection;                                       // 0x244A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isStrafeHop;                                              // 0x244A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x3];                                       // 0x244A9(0x0003) MISSED OFFSET
	float                                              Turn_strafeAimYawLimit;                                   // 0x244AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    LowerBodyRotator;                                         // 0x244B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawOffset;                                             // 0x244BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_isStrafeTurn;                                        // 0x244C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x3];                                       // 0x244C1(0x0003) MISSED OFFSET
	float                                              Turn_StrafeAnimRate;                                      // 0x244C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_isLeft;                                              // 0x244C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x3];                                       // 0x244C9(0x0003) MISSED OFFSET
	float                                              StrafeTYOffsetLegBendWeight;                              // 0x244CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_isTurn;                                              // 0x244D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x3];                                       // 0x244D1(0x0003) MISSED OFFSET
	struct FVector                                     Strafe_Hip_TY_Offset;                                     // 0x244D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ladderSpineRotator;                                       // 0x244E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawAdditive;                                           // 0x244EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isAimCombat;                                              // 0x244F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOutControl;                                             // 0x244F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x2];                                       // 0x244F2(0x0002) MISSED OFFSET
	float                                              LeftArmAnimWeight;                                        // 0x244F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet_Shield;                                      // 0x244F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      lookAtMesh;                                               // 0x24500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet_Shield_3P;                                   // 0x24508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    AnimationSet_Shield_1P;                                   // 0x24510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                MovementMontage_Shield;                                   // 0x24518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       previous_combatState;                                     // 0x24520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isStrafeStart;                                            // 0x24528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x3];                                       // 0x24529(0x0003) MISSED OFFSET
	float                                              SprintYawDirction;                                        // 0x2452C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpineOffsetWeight;                                        // 0x24530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              preSprintYawDirction;                                     // 0x24534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprintAdditiveWeight;                                     // 0x24538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               sprintAdditiveLeft;                                       // 0x2453C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFastSprint;                                             // 0x2453D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintStart;                                            // 0x2453E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintStop;                                             // 0x2453F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprintFast_InTime;                                        // 0x24540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprintFast_OutTime;                                       // 0x24544(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              jumpLand_weight;                                          // 0x24548(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rightHandIK_Weight;                                       // 0x2454C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowerBody_Pitch;                                          // 0x24550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprint_weight;                                            // 0x24554(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprintAdditiveWeight2;                                    // 0x24558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Mount_MovementGear_Index;                                 // 0x2455C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              crouch_HipsTYAdd_1P;                                      // 0x24560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x4];                                       // 0x24564(0x0004) MISSED OFFSET
	class UAnimationSet*                               AnimationSetMount;                                        // 0x24568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTBLHorseAnimInstance*                       HorseBP;                                                  // 0x24570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mount_MovementDirection;                                  // 0x24578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mount_MovementStateWeight;                                // 0x2457C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       mount_SectionName;                                        // 0x24580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               IK_Weapon_List;                                           // 0x24588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              strafe_PlayRate;                                          // 0x24598(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mount_TurnRate;                                           // 0x2459C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    PreviousAnimationSet;                                     // 0x245A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isParry;                                                  // 0x245A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDowned_GetUp;                                           // 0x245A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInterruptStep;                                          // 0x245AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x1];                                       // 0x245AB(0x0001) MISSED OFFSET
	float                                              interrupt_step_direction;                                 // 0x245AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isJog;                                                    // 0x245B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x3];                                       // 0x245B1(0x0003) MISSED OFFSET
	float                                              jogTimer;                                                 // 0x245B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isEmote;                                                  // 0x245B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSwitchWeapon;                                           // 0x245B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLanding;                                                // 0x245BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x1];                                       // 0x245BB(0x0001) MISSED OFFSET
	float                                              landTimeStamp;                                            // 0x245BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLanding_move;                                           // 0x245C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isKnockDown;                                              // 0x245C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isKnockDown_GetUp;                                        // 0x245C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x5];                                       // 0x245C3(0x0005) MISSED OFFSET
	struct FAnimDamageParams                           DamageEvent;                                              // 0x245C8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WindDirection;                                            // 0x24608(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShieldWeaponWeight;                                       // 0x24614(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LeftHandOverwriteWeight;                                  // 0x24618(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2461C(0x0004) MISSED OFFSET
	class USceneComponent*                             mesh_Capsule;                                             // 0x24620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_isAnotherTurn;                                       // 0x24628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isStrafeMove;                                             // 0x24629(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData28[0x2];                                       // 0x2462A(0x0002) MISSED OFFSET
	float                                              PreMovementDirection;                                     // 0x2462C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isChangeMovementDirection;                                // 0x24630(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isChangeMovementDirection_another;                        // 0x24631(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintToStrafe;                                         // 0x24632(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData29[0x1];                                       // 0x24633(0x0001) MISSED OFFSET
	float                                              interruptDamageGate;                                      // 0x24634(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Death_MovementState;                                      // 0x24638(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Death_CombatState;                                        // 0x24640(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Death_HitDirection;                                       // 0x24648(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Death_DamageValue;                                        // 0x24650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData30[0x4];                                       // 0x24654(0x0004) MISSED OFFSET
	struct FString                                     Death_Type;                                               // 0x24658(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Death_IsRagdoll;                                          // 0x24668(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData31[0x7];                                       // 0x24669(0x0007) MISSED OFFSET
	struct FAnimDeathParams                            Death_Params;                                             // 0x24670(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               trans_toSprintStop;                                       // 0x246D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintStopDetected;                                     // 0x246D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData32[0x2];                                       // 0x246DA(0x0002) MISSED OFFSET
	float                                              lastCombatTime;                                           // 0x246DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              timeSpan_randomHead;                                      // 0x246E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsHeavyAttack;                                            // 0x246E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsSuicide;                                                // 0x246E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData33[0x2];                                       // 0x246E6(0x0002) MISSED OFFSET
	float                                              aimRateYaw_Smooth;                                        // 0x246E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    headRotator;                                              // 0x246EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isKick;                                                   // 0x246F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isNotAlive;                                               // 0x246F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombatWindup;                                           // 0x246FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData34[0x1];                                       // 0x246FB(0x0001) MISSED OFFSET
	float                                              legIKPitch;                                               // 0x246FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    legIKRotator;                                             // 0x24700(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     turn_fixHipTY;                                            // 0x2470C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              slopeHipsTY;                                              // 0x24718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    footIKOffset_RootRotator;                                 // 0x2471C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              turnDelayTime;                                            // 0x24728(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       preAttackName;                                            // 0x2472C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rightWeaponWeight;                                        // 0x24734(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsBlocked;                                                // 0x24738(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData35[0x7];                                       // 0x24739(0x0007) MISSED OFFSET
	TArray<struct FName>                               LeftHandSet_List;                                         // 0x24740(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Root_1POffset;                                            // 0x24750(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       damageMontageName;                                        // 0x2475C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMoveDash;                                               // 0x24764(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData36[0x3];                                       // 0x24765(0x0003) MISSED OFFSET
	class UAnimationSet*                               AnimationSetSiege;                                        // 0x24768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSiegeFire;                                              // 0x24770(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSiegeReload;                                            // 0x24771(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData37[0x2];                                       // 0x24772(0x0002) MISSED OFFSET
	float                                              siegeFireWeight;                                          // 0x24774(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              turn_arimYawSnap;                                         // 0x24778(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HandIKWorldWeight;                                        // 0x2477C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     animCameraPos;                                            // 0x24780(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData38[0x4];                                       // 0x2478C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_ArmBase_3POffsetRX;                                 // 0x24790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ArmBaseCombat_Offset_R_1P;                                // 0x24798(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnSiege_Ballista;                                       // 0x247A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnSiege_Catapult;                                       // 0x247A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData39[0x2];                                       // 0x247A6(0x0002) MISSED OFFSET
	float                                              SiegeBallista_Weight;                                     // 0x247A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SiegeCatapult_Weight;                                     // 0x247AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMovementComponent*                          charMovementComponent;                                    // 0x247B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isClimbLadder;                                            // 0x247B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData40[0x3];                                       // 0x247B9(0x0003) MISSED OFFSET
	float                                              climbLadder_weight;                                       // 0x247BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnLand;                                                 // 0x247C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData41[0x3];                                       // 0x247C1(0x0003) MISSED OFFSET
	int                                                LOD_Gate;                                                 // 0x247C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLocalControlled;                                        // 0x247C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData42[0x3];                                       // 0x247C9(0x0003) MISSED OFFSET
	float                                              aimYaw_Sprint;                                            // 0x247CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYaw_Strafe;                                            // 0x247D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              realDeltaTime;                                            // 0x247D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              leftHandIK_Weight;                                        // 0x247D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYaw_Turn;                                              // 0x247DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              leanBodyAdd_weight;                                       // 0x247E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCameraOffset_Pre;                                       // 0x247E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData43[0x3];                                       // 0x247E5(0x0003) MISSED OFFSET
	class UCurveFloat*                                 Curve_ArmBase_ServerPitch;                                // 0x247E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              siegeRam_Weight;                                          // 0x247F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnSiegeRam;                                             // 0x247F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData44[0x3];                                       // 0x247F5(0x0003) MISSED OFFSET
	float                                              bodyOffsetWeight_1P;                                      // 0x247F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Siege_HeadLocOffset;                                      // 0x247FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ArmBase_1POffset;                                         // 0x24808(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCrossbowReload;                                         // 0x24814(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData45[0x3];                                       // 0x24815(0x0003) MISSED OFFSET
	struct FRotator                                    LadderHeadRotator;                                        // 0x24818(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isLungeFinished;                                          // 0x24824(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData46[0x3];                                       // 0x24825(0x0003) MISSED OFFSET
	struct FVector                                     legIK_Pos;                                                // 0x24828(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     legIK_Scale;                                              // 0x24834(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_LegIK_Pos;                                          // 0x24840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_LegIK_Scale;                                        // 0x24848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_LegIK_Pos_Sprint;                                   // 0x24850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_LegIK_Scale_Sprint;                                 // 0x24858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDownedKnockdown;                                        // 0x24860(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDownedPickup;                                           // 0x24861(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDownedThrow;                                            // 0x24862(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isKnockdownGround;                                        // 0x24863(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isKnockdownGetup;                                         // 0x24864(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMountGallop;                                            // 0x24865(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData47[0x2];                                       // 0x24866(0x0002) MISSED OFFSET
	float                                              Mount_TurnAdd;                                            // 0x24868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SiegeThrone_Weight;                                       // 0x2486C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnSiege_Throne;                                         // 0x24870(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData48[0x3];                                       // 0x24871(0x0003) MISSED OFFSET
	float                                              Mount_TurnAngle;                                          // 0x24874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mount_RiderLeanDegree;                                    // 0x24878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData49[0x4];                                       // 0x2487C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_Mount_RiderLean;                                    // 0x24880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_IsSpeedUp;                                          // 0x24888(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDeath_Mount;                                            // 0x24889(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCameraFix;                                              // 0x2488A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData50[0x1];                                       // 0x2488B(0x0001) MISSED OFFSET
	float                                              preAimYaw;                                                // 0x2488C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_isAnimPlay_MountOn;                                 // 0x24890(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_isAnimPlay_MountOff;                                // 0x24891(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData51[0x2];                                       // 0x24892(0x0002) MISSED OFFSET
	struct FRotator                                    death_spineRootRotation_World;                            // 0x24894(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MovementAcce_Weight;                                      // 0x248A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       death_missLimbName;                                       // 0x248A4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isHeadRotate;                                             // 0x248AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isParry_Loop;                                             // 0x248AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFullbodyReload;                                         // 0x248AE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isParrySuccess;                                           // 0x248AF(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              parryWeak_weight;                                         // 0x248B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMissingLimb;                                            // 0x248B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData52[0x3];                                       // 0x248B5(0x0003) MISSED OFFSET
	struct FRotator                                    jawRotator;                                               // 0x248B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              jawYaw;                                                   // 0x248C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFreezeDeathPose;                                        // 0x248C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData53[0x3];                                       // 0x248C9(0x0003) MISSED OFFSET
	struct FVector                                     headLocation_Default_Loc;                                 // 0x248CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              weaponParryIK_weight;                                     // 0x248D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isWeaponParryIK;                                          // 0x248DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isParryWeight;                                            // 0x248DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isParryPoseWeight;                                        // 0x248DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData54[0x1];                                       // 0x248DF(0x0001) MISSED OFFSET
	float                                              strainghtMove_weight;                                     // 0x248E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYawLerp_weight;                                        // 0x248E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              combatYawOffset_smooth;                                   // 0x248E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isArmBaseOffset_1P;                                       // 0x248EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isArmBaseOffset;                                          // 0x248ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMeleeAttack;                                            // 0x248EE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isShoulderCombat_Offset;                                  // 0x248EF(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LazyWeaponYaw;                                            // 0x248F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombat_Draw;                                            // 0x248F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isStartCrouch;                                            // 0x248F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInterruptAnim;                                          // 0x248F6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData55[0x1];                                       // 0x248F7(0x0001) MISSED OFFSET
	struct FName                                       EmoteMorphTargetName;                                     // 0x248F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EmoteMorphTargetName_Pre;                                 // 0x24900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isHeadLookAt;                                             // 0x24908(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDismount;                                               // 0x24909(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMount;                                                  // 0x2490A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDeathRagdollAnim;                                       // 0x2490B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_isRagdoll_LeftLeg;                                  // 0x2490C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_isRagdoll_RightLeg;                                 // 0x2490D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isApplyStrafeAdditive;                                    // 0x2490E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeftFootGround;                                         // 0x2490F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRightFootGround;                                        // 0x24910(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintShieldParry;                                      // 0x24911(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData56[0x2];                                       // 0x24912(0x0002) MISSED OFFSET
	struct FRotator                                    footIKOffset_IKEffectorRotator;                           // 0x24914(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeaveCrouch;                                            // 0x24920(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData57[0x7];                                       // 0x24921(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Curve_StartCrouch;                                        // 0x24928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              crouchLazyTimer;                                          // 0x24930(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LazyWeaponPitch;                                          // 0x24934(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isAdditiveIdleApply;                                      // 0x24938(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData58[0x3];                                       // 0x24939(0x0003) MISSED OFFSET
	float                                              aimYaw_StrafeRateWeight;                                  // 0x2493C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLungeEnd;                                               // 0x24940(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLungeAlt;                                               // 0x24941(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombatLowerBody;                                        // 0x24942(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData59[0x1];                                       // 0x24943(0x0001) MISSED OFFSET
	float                                              cheapAimOffset_Up;                                        // 0x24944(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              cheapAimOffset_Center;                                    // 0x24948(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              cheapAimOffset_Down;                                      // 0x2494C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               turn_isLazyArm;                                           // 0x24950(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData60[0x3];                                       // 0x24951(0x0003) MISSED OFFSET
	float                                              turn_strafeAnimStartPosition;                             // 0x24954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMiniAnim;                                               // 0x24958(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData61[0x3];                                       // 0x24959(0x0003) MISSED OFFSET
	float                                              mountAimAdd_Rate;                                         // 0x2495C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeftHandWeapon;                                         // 0x24960(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData62[0x3];                                       // 0x24961(0x0003) MISSED OFFSET
	float                                              leftHandWeapon_weight;                                    // 0x24964(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isHorseKick;                                              // 0x24968(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isBowWeapon;                                              // 0x24969(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLowLodsChar;                                            // 0x2496A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSimulateCloth;                                          // 0x2496B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isHitAfterDeath;                                          // 0x2496C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isEmote_crouchPose;                                       // 0x2496D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintTurn;                                             // 0x2496E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData63[0x1];                                       // 0x2496F(0x0001) MISSED OFFSET
	TArray<struct FName>                               IK_Stagger_Weapon_List;                                   // 0x24970(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               is1hSpearShieldParry;                                     // 0x24980(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDownedIdle;                                             // 0x24981(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData64[0x2];                                       // 0x24982(0x0002) MISSED OFFSET
	float                                              slopePitch;                                               // 0x24984(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    slopeRotator_downed;                                      // 0x24988(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               is2HLootWeapon;                                           // 0x24994(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCanSkipSprintStop;                                      // 0x24995(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCanSkipStrafeStop;                                      // 0x24996(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDisableHandIK;                                          // 0x24997(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              thwack_pop_1P_pitch;                                      // 0x24998(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               is1hAnimSet;                                              // 0x2499C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData65[0x3];                                       // 0x2499D(0x0003) MISSED OFFSET
	TArray<struct FName>                               _1hAnimSet_List;                                          // 0x249A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimRate_Yaw;                                              // 0x249B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              sprintFast_weight;                                        // 0x249B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCopyVBHeadTrans;                                        // 0x249B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData66[0x3];                                       // 0x249B9(0x0003) MISSED OFFSET
	float                                              lazyWeaponMoveWeight;                                     // 0x249BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              lazyWeaponMoveWeight_1;                                   // 0x249C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawAdditive_smooth;                                    // 0x249C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rightWeaponWeight_smooth;                                 // 0x249C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData67[0x4];                                       // 0x249CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               snapShotPoseName_Lst;                                     // 0x249D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isIKWeapon;                                               // 0x249E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData68[0x3];                                       // 0x249E1(0x0003) MISSED OFFSET
	float                                              aimPitch_smooth;                                          // 0x249E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFootIK;                                                 // 0x249E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFootIK_Mount;                                           // 0x249E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData69[0x2];                                       // 0x249EA(0x0002) MISSED OFFSET
	float                                              movementDirection_smooth;                                 // 0x249EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDisableArmBaseOffset_3P;                                // 0x249F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDownedSprint;                                           // 0x249F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLockHead;                                               // 0x249F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCombat_cancel;                                          // 0x249F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeftKnife;                                              // 0x249F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData70[0x3];                                       // 0x249F5(0x0003) MISSED OFFSET
	float                                              aimYaw_inSpot;                                            // 0x249F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYaw_anotherTurn;                                       // 0x249FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYaw_inSpot_offset;                                     // 0x24A00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYaw_Additive_Pre;                                      // 0x24A04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APawn*                                       currentPawn;                                              // 0x24A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               currentTBLCharacter;                                      // 0x24A10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ThroneHeadLocOffset;                                      // 0x24A18(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimPitch_combatOffset;                                    // 0x24A24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprint_deceleration;                                    // 0x24A28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLowLodsChar_Pre;                                        // 0x24A29(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLowLodsChar_toHighLod;                                  // 0x24A2A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData71[0x1];                                       // 0x24A2B(0x0001) MISSED OFFSET
	float                                              sprintWeight_smooth;                                      // 0x24A2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               is2hPoleWeapon;                                           // 0x24A30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               canLeaveSprintTap;                                        // 0x24A31(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData72[0x2];                                       // 0x24A32(0x0002) MISSED OFFSET
	int                                                serverMoveIndex;                                          // 0x24A34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isFakeStrafe;                                             // 0x24A38(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLungeTap;                                               // 0x24A39(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData73[0x2];                                       // 0x24A3A(0x0002) MISSED OFFSET
	float                                              aimYaw_Lunge;                                             // 0x24A3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintTurn_State;                                       // 0x24A40(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData74[0x3];                                       // 0x24A41(0x0003) MISSED OFFSET
	float                                              sprintStart_startPosition;                                // 0x24A44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              leftFootTap_timer;                                        // 0x24A48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rightFootTap_timer;                                       // 0x24A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsSpecialAttack;                                          // 0x24A50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isWorldHit_Finish;                                        // 0x24A51(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData75[0x2];                                       // 0x24A52(0x0002) MISSED OFFSET
	struct FRotator                                    ladderShoulderRotator;                                    // 0x24A54(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isSprintShove;                                            // 0x24A60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInterruptStep_another;                                  // 0x24A61(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData76[0x2];                                       // 0x24A62(0x0002) MISSED OFFSET
	float                                              JawAngle;                                                 // 0x24A64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 Curve_JawAngle_Damage;                                    // 0x24A68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              JawAngle_Timer;                                           // 0x24A70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isEmoteStandPose;                                         // 0x24A74(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isCrouchAnim;                                             // 0x24A75(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isShieldInHand;                                           // 0x24A76(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               is1hSpearRule;                                            // 0x24A77(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               disableSpecialUpwardLst;                                  // 0x24A78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRecoveryToHolding;                                      // 0x24A88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeaveCombatState;                                       // 0x24A89(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInterruptLow;                                           // 0x24A8A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData77[0x1];                                       // 0x24A8B(0x0001) MISSED OFFSET
	float                                              WoundedWeight_Blend;                                      // 0x24A8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isLeftCarry;                                              // 0x24A90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData78[0x7];                                       // 0x24A91(0x0007) MISSED OFFSET
	TArray<struct FName>                               QueuedSnapshotList;                                       // 0x24A98(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               canLeaveInterruptStep;                                    // 0x24AA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isIgnoreWounderPose;                                      // 0x24AA9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCameraSpawnAnimation;                                    // 0x24AAA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData79[0x1];                                       // 0x24AAB(0x0001) MISSED OFFSET
	struct FVector                                     Root_1P_Offset;                                           // 0x24AAC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isOnSiegeStocks;                                          // 0x24AB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData80[0x3];                                       // 0x24AB9(0x0003) MISSED OFFSET
	int                                                sprintFastRandom;                                         // 0x24ABC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              aimYawSprintTurn;                                         // 0x24AC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData81[0x4];                                       // 0x24AC4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_ArmBase_3POffsetRX_Bow;                             // 0x24AC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isHeadRotate_Ladder;                                      // 0x24AD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData82[0x3];                                       // 0x24AD1(0x0003) MISSED OFFSET
	float                                              recoveryStateBlendOutPercent;                             // 0x24AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              crouchHeightOffset_1P_Move;                               // 0x24AD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              crouchHeightOffset_1P_InSpot;                             // 0x24ADC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              crouchHeightOffset_1P_Duck;                               // 0x24AE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              duckTimeLength;                                           // 0x24AE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isInspotDuck;                                             // 0x24AE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData83[0x3];                                       // 0x24AE9(0x0003) MISSED OFFSET
	float                                              duckOverwriteWeight;                                      // 0x24AEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              duck_weight;                                              // 0x24AF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               canDuckCrouch;                                            // 0x24AF4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData84[0x3];                                       // 0x24AF5(0x0003) MISSED OFFSET
	float                                              leftShoulderWeight;                                       // 0x24AF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              _1PCameraMoveWeight;                                      // 0x24AFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_On_Toppling_Stone;                                     // 0x24B00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData85[0x3];                                       // 0x24B01(0x0003) MISSED OFFSET
	float                                              Toppling_Stone_Weight;                                    // 0x24B04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               debug_IK_enabled;                                         // 0x24B08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_on_Bombard;                                            // 0x24B09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData86[0x2];                                       // 0x24B0A(0x0002) MISSED OFFSET
	float                                              Bombard_Weight;                                           // 0x24B0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_useCombatAimOffset;                                 // 0x24B10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x24B11(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x24B12(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x24B13(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x24B14(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_3;                            // 0x24B15(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_3;                      // 0x24B16(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_4;                            // 0x24B17(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_4;                      // 0x24B18(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_5;                            // 0x24B19(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x24B1A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_5;                      // 0x24B1B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_6;                            // 0x24B1C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData87[0x3];                                       // 0x24B1D(0x0003) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable;                            // 0x24B20(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x24B24(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_6;                      // 0x24B28(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_7;                            // 0x24B29(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_7;                      // 0x24B2A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_8;                            // 0x24B2B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_8;                      // 0x24B2C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_9;                            // 0x24B2D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_9;                      // 0x24B2E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_10;                           // 0x24B2F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;// 0x24B30(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_10;                     // 0x24B31(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_11;                           // 0x24B32(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;// 0x24B33(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_11;                     // 0x24B34(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_12;                           // 0x24B35(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x24B36(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x24B37(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4;// 0x24B38(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_12;                     // 0x24B39(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_13;                           // 0x24B3A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_13;                     // 0x24B3B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_14;                           // 0x24B3C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData88[0x3];                                       // 0x24B3D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x24B40(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x24B4C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x24B58(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakTransform_Location_2;                       // 0x24B64(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    CallFunc_BreakTransform_Rotation_2;                       // 0x24B70(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakTransform_Scale_2;                          // 0x24B7C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_5;// 0x24B88(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_6;// 0x24B89(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_14;                     // 0x24B8A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_15;                           // 0x24B8B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_15;                     // 0x24B8C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_16;                           // 0x24B8D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData89[0x2];                                       // 0x24B8E(0x0002) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x24B90(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_16;                     // 0x24B94(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_17;                           // 0x24B95(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_17;                     // 0x24B96(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x24B97(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_18;                           // 0x24B98(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x24B99(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_5;                                     // 0x24B9A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_7;// 0x24B9B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_8;// 0x24B9C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_18;                     // 0x24B9D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_19;                           // 0x24B9E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_19;                     // 0x24B9F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_20;                           // 0x24BA0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_20;                     // 0x24BA1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_21;                           // 0x24BA2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_21;                     // 0x24BA3(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_22;                           // 0x24BA4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x24BA5(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_9;// 0x24BA6(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_22;                     // 0x24BA7(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_23;                           // 0x24BA8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_23;                     // 0x24BA9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_24;                           // 0x24BAA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_10;// 0x24BAB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_24;                     // 0x24BAC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_25;                           // 0x24BAD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_25;                     // 0x24BAE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_26;                     // 0x24BAF(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_26;                           // 0x24BB0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_27;                     // 0x24BB1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_27;                           // 0x24BB2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_28;                     // 0x24BB3(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_28;                           // 0x24BB4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_29;                           // 0x24BB5(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData90[0x2];                                       // 0x24BB6(0x0002) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable_2;                          // 0x24BB8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable_2;                         // 0x24BBC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x24BC0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_29;                     // 0x24BD0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_30;                           // 0x24BD1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_30;                     // 0x24BD2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_31;                     // 0x24BD3(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_31;                           // 0x24BD4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_6;                                     // 0x24BD5(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData91[0x2];                                       // 0x24BD6(0x0002) MISSED OFFSET
	class UAnimSequence*                               K2Node_Select_Default;                                    // 0x24BD8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_32;                     // 0x24BE0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_7;                                     // 0x24BE1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData92[0x6];                                       // 0x24BE2(0x0006) MISSED OFFSET
	class UBlendSpace*                                 K2Node_Select_Default_2;                                  // 0x24BE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_32;                           // 0x24BF0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_33;                     // 0x24BF1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_33;                           // 0x24BF2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData93[0x1];                                       // 0x24BF3(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x24BF4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x24BF8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x24BFC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x24C00(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_34;                     // 0x24C04(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData94[0x3];                                       // 0x24C05(0x0003) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter;                        // 0x24C08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x24C10(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData95[0x7];                                       // 0x24C11(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_2;                      // 0x24C18(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x24C20(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData96[0x7];                                       // 0x24C21(0x0007) MISSED OFFSET
	struct FAnimDamageParams                           K2Node_Event_DamageEvent_2;                               // 0x24C28(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_Actor_2;                                     // 0x24C68(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_State_2;                                     // 0x24C70(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAttackInfo                                 K2Node_Event_EventAttackInfo_2;                           // 0x24C78(0x0108) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class UCombatState*                                K2Node_Event_InCombatState_2;                             // 0x24D80(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InMovementState;                             // 0x24D88(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InPreviousMovementState;                     // 0x24D90(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_2;                           // 0x24D98(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_3;                           // 0x24D99(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_4;                           // 0x24D9A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData97[0x5];                                       // 0x24D9B(0x0005) MISSED OFFSET
	class AActor*                                      K2Node_Event_Actor;                                       // 0x24DA0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_State;                                       // 0x24DA8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAttackInfo                                 K2Node_Event_EventAttackInfo;                             // 0x24DB0(0x0108) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class UCombatState*                                K2Node_Event_InCombatState;                               // 0x24EB8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDismountType                                      K2Node_Event_DismountType_2;                              // 0x24EC0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData98[0x3];                                       // 0x24EC1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x24EC4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x24EC8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x24ECC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsHoldingMoveKey;                           // 0x24ED0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_34;                           // 0x24ED1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData99[0x2];                                       // 0x24ED2(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_3;                             // 0x24ED4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_3;                            // 0x24ED8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_3;                              // 0x24EDC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_Direction_3;                                 // 0x24EE0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_MovementName;                                // 0x24EE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_Event_Direction_2;                                 // 0x24EF0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_4;                             // 0x24EFC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_4;                            // 0x24F00(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_4;                              // 0x24F04(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_flipYawDirection_outputYaw;                      // 0x24F08(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData100[0x4];                                      // 0x24F0C(0x0004) MISSED OFFSET
	struct FAnimDamageParams                           K2Node_Event_DamageEvent;                                 // 0x24F10(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                K2Node_Select_Default_3;                                  // 0x24F50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                K2Node_Select_Default_4;                                  // 0x24F58(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAnimDeathParams                            K2Node_Event_Params_2;                                    // 0x24F60(0x0068) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAnimDeathParams                            K2Node_Event_Params;                                      // 0x24FC8(0x0068) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CallFunc_GetDamageTypeName_NameString;                    // 0x25030(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_35;                     // 0x25040(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData101[0x3];                                      // 0x25041(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_5;                             // 0x25044(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_5;                            // 0x25048(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_5;                              // 0x2504C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_6;                             // 0x25050(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_6;                            // 0x25054(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_6;                              // 0x25058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_7;                             // 0x2505C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_7;                            // 0x25060(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_7;                              // 0x25064(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_8;                             // 0x25068(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_8;                            // 0x2506C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_8;                              // 0x25070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_35;                           // 0x25074(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_FirstRun;                                // 0x25075(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_ScratchBool;                             // 0x25076(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData102[0x1];                                      // 0x25077(0x0001) MISSED OFFSET
	int                                                K2Node_MultiGate_ScratchIndex;                            // 0x25078(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_9;                             // 0x2507C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_9;                            // 0x25080(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_9;                              // 0x25084(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_AngleOffset;                                 // 0x25088(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_5;                           // 0x2508C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData103[0x3];                                      // 0x2508D(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_10;                            // 0x25090(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_10;                           // 0x25094(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_10;                             // 0x25098(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDismountType                                      K2Node_Event_DismountType;                                // 0x2509C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_36;                     // 0x2509D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_36;                           // 0x2509E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData104[0x1];                                      // 0x2509F(0x0001) MISSED OFFSET
	class UCurveFloat*                                 K2Node_Select_Default_5;                                  // 0x250A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 K2Node_Select_Default_6;                                  // 0x250A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_MathExpression_ReturnValue;                        // 0x250B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_EventName;                                   // 0x250B4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData105[0x4];                                      // 0x250BC(0x0004) MISSED OFFSET
	class ATBLCharacter*                               K2Node_Event_ParentCharacter;                             // 0x250C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_Direction;                                   // 0x250C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_37;                           // 0x250D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData106[0x3];                                      // 0x250D1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_11;                            // 0x250D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_11;                           // 0x250D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_11;                             // 0x250DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bWantsToGallop;                              // 0x250E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_6;                           // 0x250E1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData107[0x2];                                      // 0x250E2(0x0002) MISSED OFFSET
	struct FName                                       K2Node_Event_Condition;                                   // 0x250E4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_37;                     // 0x250EC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_IsPlaying;                                   // 0x250ED(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_7;                           // 0x250EE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData108[0x1];                                      // 0x250EF(0x0001) MISSED OFFSET
	float                                              CallFunc_angleBetweenVectors_Degree;                      // 0x250F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_angleBetweenVectors_Degree_2;                    // 0x250F4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InDashDirection;                             // 0x250F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CallFunc_ConvertDirectionAngleToName_Direction_Name;      // 0x250FC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_38;                     // 0x25104(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData109[0x3];                                      // 0x25105(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x25108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_38;                           // 0x25110(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData110[0x7];                                      // 0x25111(0x0007) MISSED OFFSET
	class UCTHelmet*                                   K2Node_DynamicCast_AsCTHelmet;                            // 0x25118(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x25120(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData111[0x7];                                      // 0x25121(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsBase_Character;                      // 0x25128(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x25130(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData112[0x7];                                      // 0x25131(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base;                  // 0x25138(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x25140(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData113[0x7];                                      // 0x25141(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_2;                // 0x25148(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_6;                            // 0x25150(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData114[0x7];                                      // 0x25151(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_3;                // 0x25158(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_7;                            // 0x25160(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData115[0x7];                                      // 0x25161(0x0007) MISSED OFFSET
	class UAnimationSet*                               K2Node_DynamicCast_AsAnimation_Set_Base_Rider;            // 0x25168(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_8;                            // 0x25170(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData116[0x7];                                      // 0x25171(0x0007) MISSED OFFSET
	class UAnimationSet*                               K2Node_DynamicCast_AsAnimation_Set_Base_Siege;            // 0x25178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_9;                            // 0x25180(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData117[0x7];                                      // 0x25181(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_4;                // 0x25188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_10;                           // 0x25190(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData118[0x7];                                      // 0x25191(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_5;                // 0x25198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_11;                           // 0x251A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData119[0x7];                                      // 0x251A1(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_6;                // 0x251A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_12;                           // 0x251B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData120[0x7];                                      // 0x251B1(0x0007) MISSED OFFSET
	class UNativeAnimationSet_Base*                    K2Node_DynamicCast_AsAnimation_Set_Base_7;                // 0x251B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_13;                           // 0x251C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_39;                     // 0x251C1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_1_FirstRun;                              // 0x251C2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData121[0x1];                                      // 0x251C3(0x0001) MISSED OFFSET
	int                                                K2Node_MultiGate_1_Data;                                  // 0x251C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_39;                           // 0x251C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_40;                           // 0x251C9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData122[0x2];                                      // 0x251CA(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_12;                            // 0x251CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_12;                           // 0x251D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_12;                             // 0x251D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_40;                     // 0x251D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_41;                           // 0x251D9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_41;                     // 0x251DA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_SetIsRecoveryToHolding_isRecoveryToHolding;      // 0x251DB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_SetIsLeaveCombatState_IsLeaveCombatState;        // 0x251DC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_42;                           // 0x251DD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_42;                     // 0x251DE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData123[0x1];                                      // 0x251DF(0x0001) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item_2;                                // 0x251E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_8;                                     // 0x251E8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData124[0x3];                                      // 0x251E9(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable;                                       // 0x251EC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_2;                                     // 0x251F4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_3;                                     // 0x251FC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData125[0x4];                                      // 0x25204(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_Default_7;                                  // 0x25208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_AnimationName_2;                             // 0x25210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_8;                           // 0x25218(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData126[0x3];                                      // 0x25219(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_AnimationName;                               // 0x2521C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_9;                           // 0x25224(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_43;                     // 0x25225(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_43;                           // 0x25226(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_9;                                     // 0x25227(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNativeAnimationSet_Base*                    K2Node_Select_Default_8;                                  // 0x25228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_10;                                    // 0x25230(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData127[0x7];                                      // 0x25231(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_Default_9;                                  // 0x25238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_11;                                    // 0x25240(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData128[0x7];                                      // 0x25241(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_Default_10;                                 // 0x25248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_3;                      // 0x25250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_14;                           // 0x25258(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData129[0x7];                                      // 0x25259(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_4;                      // 0x25260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_15;                           // 0x25268(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData130[0x7];                                      // 0x25269(0x0007) MISSED OFFSET
	class UTBLCharacterMovement*                       K2Node_DynamicCast_AsTBLCharacter_Movement;               // 0x25270(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_16;                           // 0x25278(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData131[0x7];                                      // 0x25279(0x0007) MISSED OFFSET
	class UTBLCharacterMovement*                       K2Node_DynamicCast_AsTBLCharacter_Movement_2;             // 0x25280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_17;                           // 0x25288(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_12;                                    // 0x25289(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData132[0x6];                                      // 0x2528A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 K2Node_Select_Default_11;                                 // 0x25290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData133[0x8];                                      // 0x25298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass BPA_BaseChar.BPA_BaseChar_C"));
		return ptr;
	}


	void OnCustomized_animBP__DelegateSignature();
	void UpdateSiegeState();
	void UpdateMovementState(const struct FName& bpp__MovementState__pf);
	void updateMorphWhenChange(float bpp__Value__pf, const struct FName& bpp__MorphTargetName__pf);
	void updateHelmetAccessories();
	void UpdateCombatState(const struct FName& bpp__combatState__pf, const struct FAttackInfo& bpp__AttackxInfo__pfT);
	void UpdateBranchEnums();
	void update_isSimulateCloth();
	void StopMovementMontage(class UNativeAnimationSet_Base* bpp__AnimationSet__pf);
	void Set_Sprint_Movement_State();
	void SetIsRecoveryToHolding(bool* bpp__isRecoveryToHolding__pf);
	void SetIsLeaveCombatState(bool* bpp__IsLeaveCombatState__pf);
	void setHandIK();
	void setFootIK();
	void resetTurnTick();
	void QueuePoseSnapshot(const struct FName& bpp__PoseName__pf);
	void playMovementMontage(class UAnimMontage* bpp__Montage__pf__const, const struct FName& bpp__SectionName__pf);
	void playCombatMontage(class UAnimMontage* bpp__AnimMontage__pf, const struct FName& bpp__SectionName__pf, bool bpp__isMultiTrigger__pf);
	void onKnockoffHelemt();
	void OnCustomized_animBP();
	void mount_combatAimOffset();
	void leftArmCtrl(bool bpp__isCheapTick__pf);
	void IsPlayingLadderMontage(bool* bpp__IsPlayingMontage__pf);
	void InitialValue();
	void GetDamageTypeName(class UDamageSource* bpp__DamageType__pf, struct FString* bpp__NameString__pf);
	void getAimYawSpeed(float bpp__AimYaw__pf, float bpp__PreAimYaw__pf, float* bpp__AimYawSpeed__pf, float* bpp__AimYawAbs__pf);
	void flipYawDirection(float bpp__inputYaw__pf, float* bpp__outputYaw__pf);
	void ExecuteUbergraph_BPA_BaseChar_8(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_63(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_5(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_37(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_36(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_31(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_4(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_30(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_29(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_26(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_25(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_3(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_163(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_17(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_150(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_15(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_140(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_137(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_132(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_123(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_122(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_13(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_12(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseChar_11(int bpp__EntryPoint__pf);
	void EventVOPlaying(bool bpp__IsPlaying__pf);
	void EventUnfreezeRagdollPhysics();
	void EventSpawnMontageStart(const struct FName& bpp__AnimationName__pf__const);
	void EventSpawnMontageComplete(const struct FName& bpp__AnimationName__pf__const);
	void EventOnWantsToGallop(bool bpp__bWantsToGallop__pf);
	void EventOnStrafeStop();
	void EventOnSprintStop(bool bpp__bIsHoldingMoveKey__pf);
	void EventOnSprintStart();
	void EventOnSignificanceChanged();
	void EventOnSiegeMounted();
	void EventOnSiegeDismounted(EDismountType bpp__DismountType__pf);
	void EventOnMovementStateChanged(const struct FName& bpp__InMovementState__pf, const struct FName& bpp__InPreviousMovementState__pf);
	void EventOnMovementDirectionChanged();
	void EventOnMovementActionStarted(const struct FName& bpp__MovementName__pf, const struct FRotator& bpp__Direction__pf);
	void EventOnMissingLimb(const struct FName& bpp__Condition__pf);
	void EventOnLODLevelChanged();
	void EventOnLanded();
	void EventOnKilled(const struct FAnimDeathParams& bpp__Params__pf__const);
	void EventOnInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const);
	void EventOnHorseStartMount(const struct FName& bpp__Direction__pf);
	void EventOnHorseStartDismount(const struct FName& bpp__Direction__pf);
	void EventOnHorseMounted();
	void EventOnHorseDismounted(EDismountType bpp__DismountType__pf);
	void EventOnHitAfterDeath(const struct FAnimDeathParams& bpp__Params__pf__const);
	void EventOnDashCooldownFinished();
	void EventOnDash(float bpp__InDashDirection__pf);
	void EventOnCombatStateEnd(class AActor* bpp__Actor__pf, const struct FName& bpp__State__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf);
	void EventOnCombatStateBegin(class AActor* bpp__Actor__pf, const struct FName& bpp__State__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf);
	void EventOnCameraOffsetEnd(float bpp__AngleOffset__pf);
	void EventOnCameraOffsetBegin();
	void EventHiddenPositionUpdate();
	void EventFreezeRagdollPhysics();
	void EventFarFromCameraChanged();
	void EventDamageNoInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const);
	void EventCarryableCharacter(const struct FName& bpp__EventName__pf, class ATBLCharacter* bpp__ParentCharacter__pf);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_FFF7CA35497C4A3B1AF41B8A0CD6CA3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F70FC43D49AF80BBD95EDE90B98ABB07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F44E788B45E3141B78B9DEBF78613246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_E6581173432661F17B43D3A3393B0AD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_DA1E81654980B42A191638952FA5606D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D8BAB93E44EFBF75E4EA308EEB768CF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D326501B455BCAFABC93799514D531A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C8EE48A44EF0F95FDCC8FFB6D794AF36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C332471E411D9F2FD5E1AC9F99C94E33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_BE5959D041CAD2AE64774DB8D777F45A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_B2814A074A009058C37014B2E4BBE572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9CFE86DF48D07817526BF4993E752B41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9928E2474EA70E9632F1B185301FD875();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_83BF4EAB4073143A93CFF5A218CFD17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_7CE1406E48D05F54554D5CB0F8F6E9F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_78C93B624FAFA049D13D9198D9B04E75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_73485F074A84BA51673105A728947533();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_6594B689495DB961F73024AC3701368F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_63D7E9DF4D6072456D589891DEEFDDD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_61A2477D41EE72A811F9CBAD06B08190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_5652BD174DFB4247DDC63EB052E62CED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_561FE81942D40D92BFFA698DC4F54D06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_408C45D84F7A7084D63D3B9A10FF1F39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_3DABA2A94AEE3597BB6392961252BF04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_34E6655B4B8AEA072229C48FB746FE27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_2400B0DC452385A247D65286886E5A74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1477B96B40C99DF16C200DADC6BEA557();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1337FC464F69F4C228736989E6D81871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0E3A3C5F4D8126BCD87178BA7504B145();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_09C022D746FE94B5A5FA3AA985744AFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_095B47CA46C0413DA73CCA874070C551();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0412B47B439ABA7C065D4DB8DF05EA94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_01C77901492F8E84852892AE795005E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_F33C66E54B60753759DBD08867B3BBB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_BDE69C69475B4713A5783BB11F93ED05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_775ED5C54E3EC6CA2A8DE795E17C4EE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_47B82E174BF9BF34118808AB59093889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_2B8829414D1FCD01F18B89AAE3D05713();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_200B82E64C4EA16B76019096F9482E29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_FF7D49244168BA780D6B4F829B3807B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_FA93E018485E0E2F8775C896B2F25D08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_F405F51E47929582A6152FAA50ED4FE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_EA4D50214E35BA944B3D73B6D390F5D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E657A69E4493D64D3BE4B0A856EA35DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E529C90F4505D8952A77F1961FAD253E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E1CE0F7D44214FC66152B9840399F2D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_D3FA0740491502FE297A54879291DAF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CD9B220F47431DF78643B698AC1F3C0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CB500FD94D25774D6323A5A2768894A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C85F93824BDCE37B8E4779BE7251F504();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C593984847ED7A2EE497ACA80F0AC5F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C0F2A805492E884834FC8B882759A71D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C04A1FD34D4B72B9BA258E83BF6D9722();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B4B3625641F3A47C8C9FEF91AF3F5B43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B44F843A443390F5CDE68693D99CA9F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_ADE1147447740A5E1504308C4814DCF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_ADBA61CC464477E599A0418866492067();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_AC9BD4524053777C193847874EF944ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A8636A9447A6871EB0AE10A96E32EDDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A758369142F90DE2F19C3D9F199FEFA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A492D1E2499C6062E947D6B8890BBDF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9FC6600B48E425511E48588D5E5FD1B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_964C6D194DEC6FEE18662DA8B201460A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9568777C4437ED2976576B84332EB9FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8BD51E2C40AFB97AEDC81EB530E8E632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8B52AB0944C24C223BD10FB9A4B9FA51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88E36D4448739412B379E1B029573DD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88A0A0994DD6793E21BCD1959C8B39D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8355B44B4B07A44EF691439B4D5B5D5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_82FB11AA4F9ADF04F946A384F76C1B19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8268E56B4B55F34526B9219A4F42385D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7E00595142AED12E421A9B9610F81765();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7B3D40AC49168B9F036B919E6C6D855F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7983B9E14C8B5A246991F5A86CAC587C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_797C39A54A26BB40B1F54FAA79D2D841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_752CC09B485C8F651E6CCDBD01329429();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_738A14C14BD3CC7A612BF49990DC68FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ACA478E45ABE867AE62B6A82C7E78C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ABC4EFA4349562F251030AE09751427();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_69920E004413E9DC2ED962838E69BAFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_55F070E34F93DEA3EA525C8DA03472BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_547C39F742ADFDA1183D1BB1EDF56D26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_53D1148E48B336A07B5685A7A172AAC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_4746196A4379480885744588A4E109BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_44F8E7D24C7BF14E1BA3BF9482421D81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_3B6EEAC241694D2A1113E198193DAD24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_38C0CDFC463D7AA48366DABE188EBE34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_336318274C4CD87A8373279AAD08E6FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_321B0F7C44E533D1B1D0EFB47CE478EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2FF902154E797B3CBEC87D895B05EC04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_296EBAA94DD5EDEBC30874B51B276B57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_28BF82CF44FA1A7ED413C1926C2031FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2496EE864B4AAF4F7547CFB1240B9BE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_14AE1F93432CB3F1CB7CB993AD0AFB2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_12EA984A4860DAF518E66EAD82E039DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_1242A8A34B6BE4779F03ABAB88ADA479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_0F2338D348E453923BC7778FBDBB9873();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_0B6000C74C804AFADEF5239391633E22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_09D5076442E36584410ECE9601D24142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_02B8215D4C93602C82C104AB6407C61F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_FECCD90F4748A8BA3A0109930B7D8120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_F2A34B5E42CCFA8FE19307A8F6A35E81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EE6DDC32427342B7C63B2E8B5AFA425F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EA4903634732D0730ACF5BA62290DB8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E861FB5B44738033FC0C3DADC939D8B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E797221E449CDFF24ADC778208E4F263();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E726F6224F19BE3DFFAB01AC91A7DB70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E56776CB4F1714C1B45A73BF2F749617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_DFCECAB94CA5D95B98926087DFA3B0F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D8EB1C8540FC74B617200A9145CB27A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D874F0D64AB6F085D19495ACA3AF42C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D7CDEF784700EDF1306B2C9BC990FFDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D73F7B824B2883F6A913B7B7436D960B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D3639FB64CA29560313F0D9FEEB33778();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D336B9A44460B6F3A6B1B99F481FEF77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_CD1296A946BDAD8F86649394DB3B89F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C8A875E9420E573CA9D6B68EA4D1A79A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C5F3ADED4B3E5162C5507A833EC89AFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C4A337D547F67FDA04A2A8AA7E91461B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C1C5B37642D76003B4C5F0908102D047();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BD957FF64AD5388A170E44B72CD8207B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BC3F09DE4BCB9F5CBE8731B1683409DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BBE113514E9DFC2EC014CB8DD15963D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B9FBB1204681A9894A635C80A8A212F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B143AD454750733AAE8955BC678183E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE584B7C432A802E6FC93DBC627B6832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE1078DA48C13568BD94EB8D8BC4F9C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A59B44A6454F3EB44B9820A6007C62F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A3AD93EE418613B883D6258DF21AC659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9CA1F6504C44B4FF5D035AA063F59D63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9A27A1634C9854593F357BA10B6E61B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_93E5ED884B7D584A5DB6FB82514D850F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9396FE46416CE661943F3A9813F1042D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9323880146094E5255B7D5AC7DEB03D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_8D3F77024933E6A4D30E0EACABC453F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_860D0CF842BFDE4BB8F2F7BE3CC551AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_806947894C6490556719378869EBB3CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_79F884DA41F106B1153645B13C512310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_75548BAF4CE3D6E602B98280B628C0DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6E885F5343075CBAB1F7C3B671B682E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C82EBAB48470007B99C6C89137B14D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C5AA66C4C96962910B1D987D1F981FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6A94B30845D87FE5CF49B9A233E70FF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_62A1BBBB4124F01726AA20A83DDAEF39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6129A7E7490EE3BC2B8518930FBFB545();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_60C15EA840646D2AB5C816981702B782();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5E8797DD41505D00E90104BEF965BC11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5388C0EA455B78B8D77A6DB45A32CE66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5363203C47E2A572B89D179A239ED4CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4BF350EA4D3EC7629FCE8CAD8130BA6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4455623E489B82AC8C2879A79F815A4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_44504B0E434D55F19B2D79BD0BD26BAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_41061EF546E4DF797A025B894CF00E5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_40E77584468EB0BABB04DA8DF3784369();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3FB6D26142651864649918A364D9B567();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3BF10B8742C4A997E7FA5892AB3C3489();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_37ECB93544C4D7DE7C8691BDEDF2415E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_338F4B34460618A4E8EE038E9C703FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3227244041A811E365572895160FF885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2FCC5D7943AA4B0227BDBCAE4A7D2A5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2DEEF4B44DB7A44B9047CC8C64FFDB0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_273968FD4C0A45BF69380F92AC53D34F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1FAB29864136D260C25C449C20904ACA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1792841340A62F98A6D8019AE02BEA49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1711207E470CC15AFAB40F8A7924A31F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_16671DFB4B017D0F85A1CD9F75E40156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_154D724C4F2CB2DF163D48AA0D13BC26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_15364AF64E0D71F159BD698D62107746();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_12A03A244FE076107B3FABB8AF9537E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_0A9784774516C74FE43002B23D170CBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_083FF6524C50A97D1926E1BC70E9E464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_066D8F314AEB1BD114653192395B5646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_035507FE4E55D00280E44C8F107F04A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotationMultiplier_17D4A4A34CB28BCB5D58DEBFD566B5D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotateRootBone_2BF69BE84B00C128F475FFB1038AB10C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_MultiWayBlend_C6E6DB8740C103DA1B6A1AB20C4456C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_F661E06543C0E000F7E197BFE98B6458();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_E6DBA83C4ADA41E82FD3DE8ECD1F0461();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_D569FCF34F85CB6F32C9E7B61422A67D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_CBDECB7548B3DB12E6B56C92A268F425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_BCBEC7C14F28B86853D3EFB599359D33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_B05790EA4A39236BA7B124A887F1E057();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_AA6A9D8D44C127044C987CA9883B4C18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_9A6FCB4540DF0FFCDE71529197901395();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_942EC5444C3BF52AF225FEB0AAA3A124();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_7FFB8FF14E867BA8C4824B9C8794D670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_717503D34E5ED48F391EA691AF884FFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_58D8E173437A83F3411258B8AA56FC5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_56CE149941F4B080D8FD6897B2B98A27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_55577D0847792C856DE279B3E7ABBA34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_4F42C53D4E3B828D258DEFAEA4595F1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_41DF41C94308B9273BBEDE92DD162F68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3DFAA9B342CE2FDC05139B82EA7B4873();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3D3DAC684F7CF4ECAD493A905B2D5A9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_2597AB2B4A1D6843720B5B86BCC1313B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_824B60D240D97D73BCBC2C919E454A78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_588D133B4BACC85F401F80AFE97E8265();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LegIK_936C7BF942F8D2F451A615AC087B7F04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_E927541A49BCDF1AF3D265AA07296DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_E8EE084847863A597E2B00866F580464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_E6FC83E5452067A458C1F99C938E0240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_DAAE2FDC49BC957A4FE1D38F422F7A5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_CE3384E94A8922193B5CFBA83CB3F168();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_AF0E4CDD45808B4643F27FB84D998B35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_967C175647BD08643676E299CB05B832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_9642E7E24B79B7A56F392FB03C5AA0E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_772C667C43982AEA082630BCB95F9767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_6CBE58924C9F0E0491D292B702605C37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_61D5648548DBDDA2C6306F9A993E348E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_4459BBEC4137AEB5A61C28B2D316B5A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_1A856B93483F6DFE8C52439E3D0FC56A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_0180C1684762962830128DB9EB0A226A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_AA29E06247C83FA88C5CBD9FD2B6589B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_9A8C760943DEBE044E5B4BA1C9A2C73E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_8A742A7145155FED164FBEA92958915D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_6856E46A42F3FE669745DA87292002A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_2DC077EF401B377C7CC02D829FA3A635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_26E90A154C5B16247BEED0B7DC07DB2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_15DBCF944C87076422D9BCB38EA8AD5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_0B693D8C45AD6FAC023B80B213B15F49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FEFF208D4D1A8E9BBCBEE5B8AB5B3EAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FBBA904F492321A0ACD4A7A259C9F260();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F9BDD7A54DF5145066EB93ACE89219FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F3C8E4B046B996A914C1A9B52601C870();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F1F794A24CEC99FF6F7E128F28DBA2AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EEA28164430E8729FF84DCA6280A24A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EE7482514A164369502C3CB2B76FDE48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_E99B9D6149B938D43E1DD88A16295F0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DEC989CB4190A0CDBF79299B956F0CFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DE422AD24B8760901869B08EE7715502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DDE80C06474FF3AA4AEF94B58921F11B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D9880CC049F19290805085B68D6D9D64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D60925BE446AA5EC54F9EAB9D6A0581E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D2395BB742A9DED1439B31AC373CE580();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D114D1D94AA6217A9805DE8B6B81F66C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CF397057484BEB20F507F8A70A52E67B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CDF513D44A2D08367A59909D5D78701B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CB4FC88849128A027714A79E0C2B5046();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C5A8459A45ECA657CC23AFB437899340();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C4D464574FBF3BDE33EE1F9AF4BDA9C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C461179B4D0851B233D9CDA0EF017AFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C3A82CB948806FEE0612E98EA3F6FB99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C1796F094B0D537B4765DDB638C85FDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B7BB243445A710E855FD97A3458907BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B616DE594806C8D5422B6E8819C24198();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B12F0F954D5837AB7DC7969DAA66CBE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A3E331DE4DE4AB47F34D459CD7433FB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13BD6C246DAA9F81E7DBDA4EE33D224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13039574A3D9739364611803E229BB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A09E380E4B57E0C73504D9B2EFF5E98C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9C676ACA4F7FAD7E2564B7AEC4C73A3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9954709A42935D00B5F7D7BED178C0E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_969DD8A94B2137DFD8920D97D6A866F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E9FBD3C4AC2BF4A06C437BC0330B271();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E0A1AE94DC0B7977E9005AC2F6AB487();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8C787B3D471CD66B2F317C8586D1F588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_863C801B4FAD0E8FEC8A5BB8253B1AF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8587B3044C1C2E34CC9085ABB12240E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_841A5C9F4016B40BDE8299991E262B11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_810E447040BECAE35658058633133CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7BBE85C94EB64D8AD6098EB4CCE108AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7B784BD24DA257995E2427A9EEEACE94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7066F8804BF635BCEF4E15831A4F62E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6FE5FD95485817FFEDAFC8A4255CDE96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6C7D14C84C3A01053897B7AF51DA9A95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_4CDCA2E74310209BF7F9F4916961E275();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3E2649DA45235E869CC667B73F5A02B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3B79E5974B987C2DE5103BA62F48A8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3A427B51409294DF209BE29372638EF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_327DBEFB40DA6FF8EE81F1A39255E6E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1D9C4D6F44473C04761DB0BD906F3C3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1C2AACB843768F7D9CD8E5BA247B1707();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_19B489B34D32B5BEA6CCAC9D8BA960E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_181CD33C4EC141D1600392A287E273AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_151236994926563A3970FD9FE6EEA50D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_13CDB1A0495D6F65217F92B253323907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_127340F54A505F968F5F9AA12548A7A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_0E67662F48979D7DB2652E805147AA78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByInt_EFB1EFA446EAE55047DB2BBBB4EEEC28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_FA550C364F0175074DB049B2041CD2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_F21BCD7540B25BFB8F3F2C9A1EB3807F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_EAC87BD64842C05B6EBEF884F618BEFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_E75D413E460104D88669E08E587F08D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D686AE5B453D872F410CA89F46719990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D1BF224246DD646269AF96AC2BE77B57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D00657C04E97DC0C02DD4DA5D1476475();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_CBD9F6AD4860DA45D71364A1A5D899D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_BC70B46B4DF8122736A2E08C2B6D61E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B89406B14B0AF4EFE1147399B44AC258();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B09C88A640B2EA006D5D18AB1A9A8FB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A65234664B6B5DDF572BBE932EB80973();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A5836F1F4548CD5ACFB2D9BEFC974BD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_9CDF380145DEA95748180798142AE219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_95B1EDCD4508A52CFD44EF9062BED136();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_857CA5DD402D5EBB462A0D9CE2375936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_7CC79AC945E9069D30D597B870F83E02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_70A1BB2448F7F1CB71B314939BB425BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6EB24FB04F49A54D63E75ABC6CE462B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6A96C27B423F61CC47C75D83B4DFB914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_62F8EC164BFDB8DDB692389D4508731B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_4B4FC4CF487D14F81FE0088EB175A6E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_483FCBDA44F1B14F95DB548E054A0B6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_41581DED4401D9AC13B0D5BE15554352();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_3BBD11104B40ACDB967F16BC8C0D6A6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_35321432409A4C90C6AF37A680A45F21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_30C7511246A25D0D7092988B4FE41507();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_2B2AE39B429914A2A06DAF8617939572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_1E4EF7484FD1E1B1F8B4F6B93A2BA788();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10D0090E4C19191B785E298FA9ACED21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10B4B80949CF3169B178EBA0A5C3B13D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_BA7887164EC3AFFF445FA3A9D6503B4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_5C64358C4D0C2DE18BFDBFBB97E33F7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyMeshSpaceAdditive_222815A1496D37D54BA5FA86203894C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ED767EAB4E588BF06A0A4081AB76F9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ECB15FA046613F7560C370BF10CB9AE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_E3A383E84E06DB248C5859B1CFC59EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_65E29BBC438A9236CF7CC9AF0F101F98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_4EFD2D2D47BC5BFFB8039E8C7DE36E9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_31458ABF4B86376DE73BAC9F5320FEB5();
	void debugIK(bool bpp__debugIk_enabled__pf);
	void debug_Camera();
	void ConvertDirectionAngleToName(float bpp__DirectionxAngel__pfT, struct FName* bpp__DirectionxName__pfT);
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
	void BlueprintOnAnimationSetChanged();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void AnimNotify_turnAnother_End();
	void AnimNotify_turn_End();
	void AnimNotify_Turn_AnimEnd();
	void AnimNotify_strafeToSprintStart_start();
	void AnimNotify_strafeStartToSprintStart_start();
	void AnimNotify_strafeStart_End();
	void AnimNotify_startTrans_sprintTurn();
	void AnimNotify_StartCrouch();
	void AnimNotify_sprintTap_enter();
	void AnimNotify_sprintAdditive_End();
	void AnimNotify_SpringStop_End();
	void AnimNotify_Ragdoll_RightLeg();
	void AnimNotify_Ragdoll_LeftLeg();
	void AnimNotify_MountOn_Start();
	void AnimNotify_MountOn_End();
	void AnimNotify_MountOff_Start();
	void AnimNotify_MountOff_End();
	void AnimNotify_lungeEnd();
	void AnimNotify_LeaveCrouch();
	void AnimNotify_jumpLand_End();
	void AnimNotify_interruptStep_End();
	void AnimNotify_fully_turnAnother();
	void AnimNotify_fully_turn();
	void AnimNotify_fully_sprintStart();
	void AnimNotify_fully_FinishTurn();
	void AnimNotify_FullbodyReload_On();
	void AnimNotify_FullbodyReload_Off();
	void AnimNotify_FullBody_On();
	void AnimNotify_FullBody_Off();
	void AnimNotify_enter_strafe();
	void AnimNotify_enter_sprintStop();
	void AnimNotify_enter_sprintStart();
	void AnimNotify_enter_sprint();
	void AnimNotify_enter_idle();
	void AnimNotify_enter_hop();
	void AnimNotify_enter_DownedIdle();
	void AnimNotify_enter_changeDirection_another();
	void AnimNotify_enter_changeDirection();
	void AnimNotify_endTrans_sprintTurn();
	void AnimNotify_DeathAnim_End();
	void AnimNotify_DeathAnim_1P_End();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
	void AnimEvent_SprintShieldParry();
	void AnimEvent_JumpTick();
	void AnimEvent_HopTick();
	void AnimEvent_HideSprintTick();
	void AnimEvent_HideMovementTick();
	void AnimEvent_HideCombatTick();
	void Anim_WorldHitTick();
	void Anim_WeakParryTick();
	void Anim_TurnTick();
	void Anim_StrafeBlendTick();
	void Anim_SignificeTick();
	void Anim_SiegeTick();
	void Anim_ServerTick();
	void Anim_RightWeaponTick();
	void Anim_MountTick();
	void Anim_MeleeWeightTick();
	void Anim_LungeTapTick();
	void Anim_LowerBodyYawTick();
	void Anim_LookAtTick();
	void Anim_LandTimeTick();
	void Anim_LadderTick();
	void Anim_JawTick();
	void Anim_IdleAdditiveTick();
	void Anim_HipOffsetTick();
	void Anim_FacialMorphTick();
	void Anim_DeathStartPoseTick();
	void Anim_DeathSnapPoseTick();
	void Anim_deathRagdollTick();
	void Anim_CombatWeightTick();
	void Anim_CombatParryTick();
	void Anim_BasicMovementTick();
	void Anim_ArmBaseTick();
	void Anim_ArimYawTick();
	void Anim_3PLowerBody();
	void Anim_1PCameraTick();
	void Anim_1PBodyOffsetTick();
	void angleBetweenVectors(const struct FVector& bpp__V1__pf, const struct FVector& bpp__V2__pf, float* bpp__Degree__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
