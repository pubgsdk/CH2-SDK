#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_BaseMount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BPA_BaseMount.BPA_BaseMount_C
// 0x7400 (0x7B00 - 0x0700)
class UBPA_BaseMount_C : public UTBLHorseAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0700(0x0100) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                              // 0x0800(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x0908(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x0A10(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x0B18(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x0C20(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x0D28(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x0E30(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                         // 0x0F38(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25;                        // 0x0FD8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x10B8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24;                        // 0x1180(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x1260(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x1368(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23;                        // 0x1470(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_22;                        // 0x1550(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x1630(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x1678(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x1730(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x1758(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x17F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_2;                                // 0x1820(0x0590) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x1DB0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x1DD0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x1DF0(0x0590) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x2380(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21;                        // 0x23C8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20;                        // 0x24A8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x2588(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x2640(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x2668(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x2728(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x27A0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x2818(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x2910(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x2988(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_19;                        // 0x2A48(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x2B28(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x2B70(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x2C10(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_18;                        // 0x2CB0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0x2D90(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x2E30(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x2ED0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x2F98(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x3010(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x3088(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x3128(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x31C8(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x31E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x32A8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17;                        // 0x3348(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x3428(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x3530(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x3550(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                             // 0x3570(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x39B0(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x3DF0(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x4230(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x4670(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x4AB0(0x0440) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                        // 0x4EF0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                        // 0x4F18(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x4F40(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x4FB8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_16;                        // 0x4FE8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x50C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15;                        // 0x50F8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x51D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x5208(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x52B8(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14;                        // 0x5300(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x53E0(0x0048) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x5428(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x5530(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x5550(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x5570(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                        // 0x5610(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                        // 0x5638(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13;                        // 0x5660(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x5740(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x5770(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x5798(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x57C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x5878(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x5930(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x5958(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x5A60(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x5B00(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                        // 0x5B78(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                        // 0x5C58(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Inertialization                   AnimGraphNode_Inertialization;                            // 0x5D38(0x0070) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x5DA8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x5E60(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x5F00(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x5FC0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x6060(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x6088(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x6148(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                        // 0x6178(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                        // 0x6258(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                        // 0x6280(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                        // 0x62A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                        // 0x62D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                        // 0x62F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                        // 0x6320(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x6348(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x6370(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x6398(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x63C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x63E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x6410(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x6438(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x6460(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x6488(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x64B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x64D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x6500(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x6528(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x6550(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x6578(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x65A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x65C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x65F0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x6618(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x6640(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x6668(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x6690(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x66B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x66E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x6708(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x6730(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x6758(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x6780(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x67A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x67D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x67F8(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x6870(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x68A0(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x6918(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                         // 0x6948(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x6A28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x6A58(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x6B38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x6B68(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x6BE0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x6C10(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x6CF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x6D20(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x6E00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x6E30(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x6F10(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x6F40(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x7020(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x7050(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x70F0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x71D0(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x72B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x72E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x7308(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x7338(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x73B0(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x7450(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x74C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x74F8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x75D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x7608(0x00B0) (CPF_NativeAccessSpecifierPublic)
	class UAnimationSet*                               AnimationSet;                                             // 0x76B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MovementGear_Index;                                       // 0x76C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Local_Weight;                                             // 0x76C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Server_Weight;                                            // 0x76C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsServer;                                                 // 0x76CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x76CD(0x0003) MISSED OFFSET
	struct FRotator                                    mount_bodyRotator;                                        // 0x76D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Mount_interpSpeed;                                        // 0x76DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_saddleRotator;                                      // 0x76E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isOnHorse;                                          // 0x76EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isForcedDismount;                                   // 0x76ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x76EE(0x0002) MISSED OFFSET
	struct FName                                       mount_SectionName;                                        // 0x76F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_leanBodyWeight;                                     // 0x76F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_spineRotator;                                       // 0x76FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_neckRotator;                                        // 0x7708(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              mount_TurnRate_smooth;                                    // 0x7714(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Index_LOD;                                                // 0x7718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_sprintSpeed;                                        // 0x771C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_walkSpeed;                                          // 0x7720(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isTurnStart;                                        // 0x7724(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isTurnStart_Another;                                // 0x7725(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x7726(0x0002) MISSED OFFSET
	float                                              mount_TurnStart_TurnRate;                                 // 0x7728(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_TurnRate_Pre;                                       // 0x772C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_TurnLeanWeight;                                     // 0x7730(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_BodyCenter_Height;                                  // 0x7734(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     mount_BodyCenter_Location;                                // 0x7738(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_SlopeAngle_Smooth;                                  // 0x7744(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              rider_Pitch;                                              // 0x7750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rider_Yaw;                                                // 0x7754(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              rider_AimOffset_Weight;                                   // 0x7758(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_footsteop_trigger;                                  // 0x775C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_movementTurnWeight;                                 // 0x7760(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_IK_Weight;                                          // 0x7764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_frontLegRotator;                                    // 0x7768(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_rearLegRotator;                                     // 0x7774(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_neckBase_Rotator;                                   // 0x7780(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              mount_neckBase_Roll;                                      // 0x778C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_hitAdditive_Weight;                                 // 0x7790(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       mount_hitDirectionName;                                   // 0x7794(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       mount_hitBone;                                            // 0x779C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isHitDamage;                                        // 0x77A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isAnotherHitDamage;                                 // 0x77A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x77A6(0x0002) MISSED OFFSET
	struct FAnimDamageParams                           mount_damageEvent;                                        // 0x77A8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isRagdoll;                                          // 0x77E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x77E9(0x0003) MISSED OFFSET
	float                                              mount_ragdoll_weight;                                     // 0x77EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECharacterSignificanceLevel                        significanceLevel_BP;                                     // 0x77F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x77F1(0x0003) MISSED OFFSET
	float                                              footStep_timer;                                           // 0x77F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 animCurve_Foot_LF;                                        // 0x77F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 animCurve_Foot_LB;                                        // 0x7800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 animCurve_Foot_RF;                                        // 0x7808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 animCurve_Foot_RB;                                        // 0x7810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_movementBlendTime;                                  // 0x7818(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    mount_HeadRotator;                                        // 0x781C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              mount_TurnRateAccelSmooth;                                // 0x7828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_RealDeltaTime;                                      // 0x782C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 animCurve_HeadYaw;                                        // 0x7830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSpeedUp;                                                // 0x7838(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x7839(0x0003) MISSED OFFSET
	int                                                PreMovementGear_Index;                                    // 0x783C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mount_IsSpeedUp;                                          // 0x7840(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isLegIK;                                            // 0x7841(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isMove;                                             // 0x7842(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isApplyBodyTurn;                                    // 0x7843(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                hit_index;                                                // 0x7844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              footsteps_delta_seconds;                                  // 0x7848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSlowDown;                                               // 0x784C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isAccelerating;                                     // 0x784D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isDecelerating;                                     // 0x784E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x1];                                       // 0x784F(0x0001) MISSED OFFSET
	int                                                PreviousTick_Ground_Speed;                                // 0x7850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_brakeHeavy;                                         // 0x7854(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_brakeLight;                                         // 0x7855(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_locoStart;                                          // 0x7856(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_locoStop;                                           // 0x7857(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_jostleStrength;                                     // 0x7858(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_jostleAngle;                                        // 0x785C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_jostleLight;                                        // 0x7860(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isStrafeLeft;                                       // 0x7861(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isStrafeRight;                                      // 0x7862(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_locoStartEnd;                                       // 0x7863(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isCtrlModeWalking;                                  // 0x7864(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x7865(0x0003) MISSED OFFSET
	int                                                hit_index_1;                                              // 0x7868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_jostleVelocity;                                     // 0x786C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_wasInWalkState;                                     // 0x7870(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isUsingGamepad;                                     // 0x7871(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isMovingFwd;                                        // 0x7872(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_isMovingBwd;                                        // 0x7873(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_Input_Strafe;                                       // 0x7874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_Input_Forward;                                      // 0x7878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_Input_Turn;                                         // 0x787C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_leftStick_Mag_WalkTolerance;                        // 0x7880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              mount_MovementDirection_Last;                             // 0x7884(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_noDirectionalInput;                                 // 0x7888(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               mount_wantsWalk;                                          // 0x7889(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x788A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x788B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x788C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x788D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_3;                      // 0x788E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x788F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_4;                      // 0x7890(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_3;                            // 0x7891(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_4;                            // 0x7892(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_5;                      // 0x7893(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_5;                            // 0x7894(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_6;                      // 0x7895(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_6;                            // 0x7896(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_7;                      // 0x7897(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_7;                            // 0x7898(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_8;                            // 0x7899(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_8;                      // 0x789A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_9;                      // 0x789B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_9;                            // 0x789C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_10;                     // 0x789D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_10;                           // 0x789E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;// 0x789F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_11;                     // 0x78A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_11;                           // 0x78A1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x2];                                       // 0x78A2(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x78A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InMovementState;                             // 0x78A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InPreviousMovementState;                     // 0x78B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x78B8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x7];                                       // 0x78B9(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_Actor;                                       // 0x78C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_PreviousState;                               // 0x78C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_NewState;                                    // 0x78D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAttackInfo                                 K2Node_Event_EventAttackInfo;                             // 0x78D8(0x0108) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class UCombatState*                                K2Node_Event_InCombatState;                               // 0x79E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_Direction_3;                                 // 0x79E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_Direction_2;                                 // 0x79F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_MapToCurve_Out;                                  // 0x79F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_FirstRun;                                // 0x79FC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x3];                                       // 0x79FD(0x0003) MISSED OFFSET
	int                                                K2Node_MultiGate_Data;                                    // 0x7A00(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_ScratchBool;                             // 0x7A04(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x7A05(0x0003) MISSED OFFSET
	int                                                K2Node_MultiGate_ScratchIndex;                            // 0x7A08(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_12;                     // 0x7A0C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x3];                                       // 0x7A0D(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll;                               // 0x7A10(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x7A14(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x7A18(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x7A1C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x7A20(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x7A24(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_12;                           // 0x7A28(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x7];                                       // 0x7A29(0x0007) MISSED OFFSET
	struct FAnimDamageParams                           K2Node_Event_DamageEvent_2;                               // 0x7A30(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_13;                     // 0x7A70(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_13;                           // 0x7A71(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x6];                                       // 0x7A72(0x0006) MISSED OFFSET
	struct FAnimDamageParams                           K2Node_Event_DamageEvent;                                 // 0x7A78(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bWantsToGallop;                              // 0x7AB8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_MultiGate_1_FirstRun;                              // 0x7AB9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x2];                                       // 0x7ABA(0x0002) MISSED OFFSET
	int                                                K2Node_MultiGate_1_Data;                                  // 0x7ABC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x7AC0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x3];                                       // 0x7AC1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x7AC4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bHidden;                                     // 0x7AC8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x3];                                       // 0x7AC9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_footsteps_delta_seconds;               // 0x7ACC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x7AD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_Direction;                                   // 0x7AD8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_Angle;                                       // 0x7AE0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_BumpVelocity;                                // 0x7AE4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bRearImpact;                                 // 0x7AE8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_14;                     // 0x7AE9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x2];                                       // 0x7AEA(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X;                                 // 0x7AEC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x7AF0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_14;                           // 0x7AF4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0xB];                                       // 0x7AF5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass BPA_BaseMount.BPA_BaseMount_C"));
		return ptr;
	}


	void UpdateFootStepSounds(float bpp__DeltaSeconds__pf, bool bpp__bHidden__pf);
	void UpdateBPFootsteps(float bpp__footstepsxdeltaxseconds__pfTT);
	void StirrupDebug();
	void ExecuteUbergraph_BPA_BaseMount_21(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BPA_BaseMount_1(int bpp__EntryPoint__pf);
	void EventOnWantsToGallop(bool bpp__bWantsToGallop__pf);
	void EventOnStartDismount(const struct FName& bpp__Direction__pf);
	void EventOnMovementStateChanged(const struct FName& bpp__InMovementState__pf, const struct FName& bpp__InPreviousMovementState__pf);
	void EventOnMovementDirectionChanged();
	void EventOnMounted(const struct FName& bpp__Direction__pf);
	void EventOnInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const);
	void EventOnHorseBump(class AActor* bpp__OtherActor__pf, const struct FName& bpp__Direction__pf, float bpp__Angle__pf, float bpp__BumpVelocity__pf, bool bpp__bRearImpact__pf);
	void EventOnCombatStateChanged(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousState__pf, const struct FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf);
	void EventDamageNoInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F61637ED4F7F0B7239646C90D7ECF35D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F137321E4E09FA498FD8B0812105DDF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_EDCBA8ED4BF4E67E26D2ACBF7EF8D127();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E3D3958145FF339831B96BA5B1031F11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E1008A6946C0B1B1C389CD873537CBBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_DD58E13B4C86E4A26BD83392B432FD0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D42BFC634ECC67C7E7E398883259B809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D37ACA76489402A07110B2A5E98FCAC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_BC1DFE884D492E06C5F38DBD6220A62A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_A15F36754728FEAF8E0313BE71231F50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_96115B0D41C446A34C34D69A5793CAD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_8DE421344EF19B7D0D4939A011ECDD6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_7E527E8B49C1F7B22929DAAF02800A2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_740C61E14FDED17BD21E419D3BD54CC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6C06C9C441628997309C11BD46D30376();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6B9AF92B4E31172CC80A8095E1821A82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5FED3113470F9BB7993814A31CB27B08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5E7216DA4E80D1E3CECE629788ED477C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_56B547AD409B662DBF930691CB6A7AD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_501932774FBB0433A8369BB1AD30BA8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_440470F6438AE6DF2AD2EC80A4A48885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_41F98D85481BF4D7F0E04B8C19A4FD81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_3B5D085D4D7F519F4B311D81C80684D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_37E3F51045482DC80DFB37860C20D0A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_367FFB4249F6EDC8F91AB3AF0E056A77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2D32EADF4A6C9485832753AA7C38BAD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2CAF8587492C32A016A62EB10282398E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2C6303F84B3EA451410BF48649C9E9B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_28F1ED3246694A864AFC06A79FCA18B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_270CF3EF4E8B6D27E33C80BA43669A6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C8AD5F440B6E3EA2E833A8FCD5148E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C271179447B639349AF9EB27A401660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1A0AE994409B6F609301B79D38F0E42F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_8632096B410FB8EEBF12E48764C56D55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7236FF614CC01F0DA7C0E2B182AA4939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_47FEFBB04CE9A8FC7A3EE9849A642CA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_0EACC12C4CFD0D6AB0C287894DF52A21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_7D12EADD48363F95B6605A94D42AED23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_08475E704CD94B885FAD409FA935ED55();
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
	void BlueprintBeginPlay();
	void AnimNotify_Trot_StartStop_Finished();
	void AnimNotify_strafeStart_End();
	void AnimNotify_hitDamage_End();
	void AnimNotify_GallopStart_End();
	void AnimNotify_fully_Strafe_Stop();
	void AnimNotify_fully_Idle();
	void AnimNotify_enter_WalkStrafe();
	void AnimNotify_enter_TrotStrafe();
	void AnimNotify_enter_Strafe_Stop();
	void AnimNotify_enter_idle();
	void AnimNotify_Brake_End();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
