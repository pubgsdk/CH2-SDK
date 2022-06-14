#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TicketsComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TicketsComponent.TicketsComponent_C
// 0x00A0 (0x01A8 - 0x0108)
class UTicketsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnTicketsExhausted;                                       // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<int>                                        Tickets_per_team;                                         // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	int                                                Initial_Tickets;                                          // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TempNewScore;                                             // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    On_Tickets_Changed;                                       // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bAutoShutOffSequencesWhenTicketsRunOut;                   // 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    Client_Tickets_Changed;                                   // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Tickets_Changed_Because_of_Kill;                       // 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSoftClassPtr<class UClass>                        Debug_Widget;                                             // 0x0170(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<EFaction>                                   TicketsSetPerTeam;                                        // 0x0198(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TicketsComponent.TicketsComponent_C"));
		return ptr;
	}


	void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
	void SetTicketCount_Internal(EFaction Faction, int TicketCount);
	void HandlePlayerKilled(class AController* Killed, class AController* Killer);
	void OnRep_Tickets_Per_Team();
	void Get_Tickets(EFaction Faction, int* Tickets, bool* Faction_Is_Being_Tracked);
	void Start(EFaction Faction);
	void Stop();
	void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
	void _Remove_Tickets(EFaction Faction, int Tickets_Delta);
	void Handle_Tickets_Exhausted(EFaction Faction);
	void ExecuteUbergraph_TicketsComponent(int EntryPoint);
	void On_Tickets_Changed_Because_of_Kill__DelegateSignature(EFaction Faction, int Delta, int New_Tickets);
	void Client_Tickets_Changed__DelegateSignature();
	void On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int New_Tickets);
	void OnTicketsExhausted__DelegateSignature(EFaction Faction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
