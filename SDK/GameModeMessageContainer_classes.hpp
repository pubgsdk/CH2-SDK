#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GameModeMessageContainer.GameModeMessageContainer_C
// 0x0118 (0x0360 - 0x0248)
class UGameModeMessageContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    GameModeMessage;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGameModeMessageWidget_C*                    GameModeMessageWidget;                                    // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FGameModeMessage>                    GameModeMessageQueue;                                     // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsShowingMessage;                                        // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	struct FGameModeMessage                            CurrentMessage;                                           // 0x0278(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UCinematicsComponent*                        PlayersCinematicsComponent;                               // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGameModeMessage                            TempMessage;                                              // 0x02F0(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass GameModeMessageContainer.GameModeMessageContainer_C"));
		return ptr;
	}


	void GetRankUpMessageTypeFromOnlineStat(EOnlineStat OnlineStat, TEnumAsByte<ERankUpMessageType>* RankUpMessageType);
	void CanShowMessage(bool* Show);
	void Construct();
	void GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message);
	void ShowMessage(const struct FGameModeMessage& Message);
	void BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature();
	void OnCinematicStateChanged_Event_1(const struct FGameplayTag& PreviousStateTag, class UCinematicState* PreviousState, const struct FGameplayTag& NewStateTag, class UCinematicState* NewState);
	void ProcessNewMessage(const struct FGameModeMessage& GameModeMessage);
	void ExecuteUbergraph_GameModeMessageContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
