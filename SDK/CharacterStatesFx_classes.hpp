#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterStatesFx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass CharacterStatesFx.CharacterStatesFx_C
// 0x0708 (0x08E8 - 0x01E0)
class UCharacterStatesFx_C : public UFxInstanceCommon_C
{
public:
	float                                              LowHealthThresholdPercent;                                // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsLowHealth;                                              // 0x01E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsLowStamina;                                             // 0x01E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01E6(0x0002) MISSED OFFSET
	float                                              LowStaminaThresholdPercent;                               // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsOutOfStamina;                                           // 0x01EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	TMap<EAudioCharacterStates, bool>                  AppliedConditions;                                        // 0x01F0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<class UAkAudioEvent*>                       OnDeathLocalPlayerAKEvents;                               // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    BurningParticleSystem;                                    // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PreviousHealth;                                           // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class ATBLCharacter*                               ApplyConditionCharacterRef;                               // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTimerHandle                                InspirationHealingSoundTimerHandle;                       // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTimerHandle                                SimulatedClientTimerHandle;                               // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                     // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x0288(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                   // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_3;                                   // 0x02B8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x02D8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x02E8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x02F8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x0308(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x0318(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsLow_2;                               // 0x0328(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor_6;                               // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsLow;                                 // 0x0338(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor_5;                               // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter;                        // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0350(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_4;                                   // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_StaminaPercent;                        // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor_4;                               // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_HealthPercent;                         // 0x0378(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_HealthValue;                           // 0x037C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_HealthMaxValue;                        // 0x0380(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor_3;                               // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsLocalActorNotBotNotNPC;              // 0x0390(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_2;                      // 0x0398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x03A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsAlive_IsAlive;                                 // 0x03A1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_3;                      // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x03B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry;                       // 0x03B8(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_MapToCurve_Out;                                  // 0x03D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_2;                     // 0x03E0(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0400(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FDeathDamageTakenEvent                      K2Node_Event_DamageEvent;                                 // 0x0408(0x0160) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_3;                     // 0x0568(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_4;                     // 0x0588(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_5;                                 // 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x05B8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_4;                      // 0x05C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x05C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_5;                     // 0x05D0(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_6;                     // 0x05F0(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_5;                                   // 0x0610(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsOutOfStamina;                        // 0x0620(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor_2;                               // 0x0628(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_5;                      // 0x0630(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x0638(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                           // 0x0639(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x6];                                       // 0x063A(0x0006) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_7;                     // 0x0640(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	EAudioCharacterStates                              CallFunc_GetHighestPriorityCondition_AudioCondition;      // 0x0660(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAudioCharacterStates                              K2Node_CustomEvent_AudioState_2;                          // 0x0661(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAudioCharacterStates                              K2Node_CustomEvent_AudioState;                            // 0x0662(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value;             // 0x0663(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_6;                                 // 0x0664(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_6;                                   // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_2;           // 0x0688(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_3;           // 0x0689(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsActorDead_Return_Value;                        // 0x068A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x5];                                       // 0x068B(0x0005) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_7;                                   // 0x0690(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AController*                                 K2Node_Event_Controller;                                  // 0x06A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_Actor_4;                                     // 0x06A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EConditionType                                     K2Node_Event_Condition_2;                                 // 0x06B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_3;                           // 0x06B1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x6];                                       // 0x06B2(0x0006) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_6;                      // 0x06B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_6;                            // 0x06C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_Actor_3;                                     // 0x06C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EConditionType                                     K2Node_Event_Condition;                                   // 0x06D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ConditionRemover;                            // 0x06D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_CustomEvent_Actor;                                 // 0x06E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EConditionType                                     K2Node_CustomEvent_Condition;                             // 0x06E8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_4;                           // 0x06E9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x6];                                       // 0x06EA(0x0006) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_7;                      // 0x06F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_7;                            // 0x06F8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_4;           // 0x06F9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x06FA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x06FB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	struct FString                                     Temp_string_Variable;                                     // 0x0700(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_5;           // 0x0710(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x0714(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_HasCondition_Return_Value;                       // 0x0718(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	struct FString                                     Temp_string_Variable_2;                                   // 0x0720(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_7;                                 // 0x0730(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_8;                     // 0x0740(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_Percentage;                            // 0x0760(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_9;                     // 0x0768(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_5;                           // 0x0788(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_8;                      // 0x0790(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_8;                            // 0x0798(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsAlive_IsAlive_2;                               // 0x0799(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData28[0x6];                                       // 0x079A(0x0006) MISSED OFFSET
	struct FSoundSwitchEntry                           K2Node_MakeStruct_SoundSwitchEntry_10;                    // 0x07A0(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Temp_string_Variable_3;                                   // 0x07C0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Temp_string_Variable_4;                                   // 0x07D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Temp_string_Variable_5;                                   // 0x07E0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_6;           // 0x07F0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData29[0x3];                                       // 0x07F1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetHealthPercent_Percent;                        // 0x07F4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Temp_string_Variable_6;                                   // 0x07F8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_8;                                   // 0x0808(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      K2Node_CustomEvent_MeshComponent;                         // 0x0818(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_MapToCurve_Out_2;                                // 0x0820(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_7;           // 0x0824(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0825(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x0828(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Temp_string_Variable_7;                                   // 0x0838(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAudioCharacterStates                              Temp_byte_Variable;                                       // 0x0848(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0849(0x0007) MISSED OFFSET
	struct FString                                     K2Node_Select_Default;                                    // 0x0850(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_8;           // 0x0860(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_Actor_2;                                     // 0x0868(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_Actor;                                       // 0x0870(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EStat                                              K2Node_Event_Type;                                        // 0x0878(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData33[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	struct FStatEntry                                  K2Node_Event_Stat;                                        // 0x0880(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaValue;                                  // 0x08C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_6;                           // 0x08C4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsLocalPlayerAndNotBot_Return_Value_9;           // 0x08C5(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData34[0x2];                                       // 0x08C6(0x0002) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable;                            // 0x08C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData35[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               CallFunc_Array_Get_Item;                                  // 0x08D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_8;                                 // 0x08D8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass CharacterStatesFx.CharacterStatesFx_C"));
		return ptr;
	}


	void UpdateStaminaRTPC(float bpp__StaminaPercent__pf, class AActor* bpp__Actor__pf);
	void UpdateHealthRTPC(float bpp__HealthPercent__pf, float bpp__HealthValue__pf, float bpp__HealthMaxValue__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf);
	void UpdateDownedStatePercentage(float bpp__Percentage__pf);
	void UpdateBloodEffect();
	void StartStaminaCheck();
	void RemoveBurningParticleSystem();
	void RemoveAudioState(EAudioCharacterStates bpp__AudioState__pf);
	void RemoveAllConditions();
	void RemoveAllAudioStates();
	void PlaySoundForLocalCharacter(class UAkAudioEvent* bpp__Event__pf, class ATBLCharacter* bpp__Character__pf);
	void OutOfStaminaUpdate(bool bpp__IsOutOfStamina__pf, class AActor* bpp__Actor__pf);
	void OnStatChanged(class AActor* bpp__Actor__pf, EStat bpp__Type__pf, const struct FStatEntry& bpp__Stat__pf__const, float bpp__DeltaValue__pf);
	void OnStaminaUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf);
	void OnRevived();
	void OnRemoveCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf, class AActor* bpp__ConditionRemover__pf);
	void OnPossessed(class AController* bpp__Controller__pf);
	void OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const);
	void OnHealthUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf);
	void OnConstruct(class AActor* bpp__Actor__pf);
	void OnCachedMeshApplied_Event_1(class USkeletalMeshComponent* bpp__MeshComponent__pf);
	void OnAssemble_CharacterStatesFx();
	void OnApplyCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf);
	void IsActorDead(bool* bpp__ReturnxValue__pfT);
	void HasCondition(EConditionType bpp__Condition__pf, bool* bpp__ReturnxValue__pfT);
	void HandleRemovingCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf);
	void GetHighestPriorityCondition(EAudioCharacterStates* bpp__AudioCondition__pf);
	void ExecuteUbergraph_CharacterStatesFx_4(int bpp__EntryPoint__pf);
	void CustomEvent_1();
	void CheckStaminaOnSimulatedClients();
	void ApplyAudioState(EAudioCharacterStates bpp__AudioState__pf);
	void AddBurningParticleSystem(class ATBLCharacter* bpp__InActor__pf);
	void OnCachedMeshApplied__DelegateSignature(class USkeletalMeshComponent* bpp__MeshComponent__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
