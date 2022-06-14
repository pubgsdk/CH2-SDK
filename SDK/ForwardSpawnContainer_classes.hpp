#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ForwardSpawnContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ForwardSpawnContainer.ForwardSpawnContainer_C
// 0x011C (0x0364 - 0x0248)
class UForwardSpawnContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UForwardSpawnWidget_C*                       ForwardSpawnWidget_C_1;                                   // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UForwardSpawnWidget_C*                       ForwardSpawnWidget_C_2;                                   // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UForwardSpawnWidget_C*                       PromptWidget;                                             // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_2;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UForwardSpawnWidget_C*                       WaveWidget;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class ASpawnWave*>                          Waves;                                                    // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Changed;                                                  // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	TArray<class UForwardSpawnWidget_C*>               Wave_widgets;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    On_Started_Wave_Hover;                                    // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Ended_Wave_Hover;                                      // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class ASpawnWave*>                          Special_Waves;                                            // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               IsShowingPromptMessage;                                   // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	TMap<int, struct FGameplayTag>                     PendingPromptMessages;                                    // 0x02D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FPlayerPromptFormattedMessage               CurrentPromptMessageStruct;                               // 0x0328(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                CurrentPromptMessage;                                     // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ForwardSpawnContainer.ForwardSpawnContainer_C"));
		return ptr;
	}


	ESlateVisibility Get_Visibility_of_HUD_marker_container();
	ESlateVisibility GetVisibility_1();
	void Construct();
	void Notify_Started_Wave_Hover(class ASpawnWave* Wave);
	void Notify_Ended_Wave_Hover(class ASpawnWave* Wave);
	void OnJoinableSpawnWavesUpdated_Event_1();
	void OnPromptPlayerMessageRequest(const struct FGameplayTag& MessageTag, int MessageId);
	void ResetIsShowingPrompt();
	void CancelPrompt(int MessageId);
	void ExecuteUbergraph_ForwardSpawnContainer(int EntryPoint);
	void On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
	void On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
