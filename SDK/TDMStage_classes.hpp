#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TDMStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TDMStage.TDMStage_C
// 0x015D (0x03B5 - 0x0258)
class ATDMStage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObjectiveStatusDisplayComponent*            Objective_Bar_Display_Component;                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTimeObjectiveComponent_C*                   TimeObjectiveComponent;                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTicketsComponent_C*                         TicketsComponent;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TScriptInterface<class UStageInterface>            Attacker_Died_Stage;                                      // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TScriptInterface<class UStageInterface>            Defender_Died_Stage;                                      // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TScriptInterface<class UStageInterface>            Draw_Stage;                                               // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    On_Started;                                               // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Ended;                                                 // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Red_Died;                                              // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Draw;                                                  // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Blue_Died;                                             // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               Attacker_Dead;                                            // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Defender_Dead;                                            // 0x0309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Draw;                                                     // 0x030A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AutoStopSequences;                                        // 0x030B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Tickets_Exhausted;                                     // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                Current_Rout;                                             // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Enable_Sudden_Death;                                      // 0x0324(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Tickets_Changed;                                       // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSoftObjectPtr<class AActor>                       AgathaCommander;                                          // 0x0338(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                       MasonCommander;                                           // 0x0360(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                       TenosiaCommander;                                         // 0x0388(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	int                                                StageIdNum;                                               // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               BlockDynamicMusic;                                        // 0x03B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TDMStage.TDMStage_C"));
		return ptr;
	}


	void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
	float GetTimeRemaining();
	float GetTimeRemainingPercent();
	int GetStageIdNum();
	class AActor* GetStageCommander(EFaction Faction);
	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	float GetTicketsRemainingPercentage();
	float Get_Faction_Tickets_Remaining_Percent(EFaction Faction);
	void UpdateTDMStageSettings();
	void Get_Time_Left(struct FTimespan* Time_Left);
	void _Remove_Tickets(EFaction Faction, int Delta);
	void Initialize_TDM_Stage(const TScriptInterface<class UStageInterface>& Attacker_Died, const TScriptInterface<class UStageInterface>& Defender_Died, const TScriptInterface<class UStageInterface>& Draw, const struct FTDM_Stage_Properties& Settings, TScriptInterface<class UStageInterface>* Stage);
	void StartStage();
	void BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature(EFaction Faction);
	void BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature();
	void BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int New_Tickets);
	void Force_Draw();
	void Last_Rout_Fired();
	void CustomEvent_1();
	void ForceMusic();
	void ExecuteUbergraph_TDMStage(int EntryPoint);
	void On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int NewTickets);
	void On_Tickets_Exhausted__DelegateSignature(EFaction Faction);
	void On_Draw__DelegateSignature();
	void On_Red_Died__DelegateSignature();
	void On_Blue_Died__DelegateSignature();
	void On_Ended__DelegateSignature();
	void On_Started__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
