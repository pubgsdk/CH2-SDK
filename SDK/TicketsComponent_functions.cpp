// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TicketsComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TicketsComponent.TicketsComponent_C.Create debug menu widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Debug_menu_widget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Create debug menu widget"));

	struct
	{
		class UUserWidget*             Debug_menu_widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Debug_menu_widget != nullptr)
		*Debug_menu_widget = params.Debug_menu_widget;
}


// Function TicketsComponent.TicketsComponent_C.SetTicketCount_Internal
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TicketCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::SetTicketCount_Internal(EFaction Faction, int TicketCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.SetTicketCount_Internal"));

	struct
	{
		EFaction                       Faction;
		int                            TicketCount;
	} params = {};

	params.Faction = Faction;
	params.TicketCount = TicketCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.HandlePlayerKilled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::HandlePlayerKilled(class AController* Killed, class AController* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.HandlePlayerKilled"));

	struct
	{
		class AController*             Killed;
		class AController*             Killer;
	} params = {};

	params.Killed = Killed;
	params.Killer = Killer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.OnRep_Tickets Per Team
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTicketsComponent_C::OnRep_Tickets_Per_Team()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.OnRep_Tickets Per Team"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.Get Tickets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Faction_Is_Being_Tracked       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTicketsComponent_C::Get_Tickets(EFaction Faction, int* Tickets, bool* Faction_Is_Being_Tracked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Get Tickets"));

	struct
	{
		EFaction                       Faction;
		int                            Tickets;
		bool                           Faction_Is_Being_Tracked;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Tickets != nullptr)
		*Tickets = params.Tickets;
	if (Faction_Is_Being_Tracked != nullptr)
		*Faction_Is_Being_Tracked = params.Faction_Is_Being_Tracked;
}


// Function TicketsComponent.TicketsComponent_C.Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::Start(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Start"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTicketsComponent_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.OnPlayerKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTicketsComponent_C::OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.OnPlayerKilled_Event_1"));

	struct
	{
		class AController*             Killer;
		class AController*             Killed;
		class UDamageSource*           DamageSource;
		struct FDeathEvent             DeathEvent;
		struct FDeathDamageTakenEvent  DamageEvent;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.DamageSource = DamageSource;
	params.DeathEvent = DeathEvent;
	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C. Remove Tickets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets_Delta                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::_Remove_Tickets(EFaction Faction, int Tickets_Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C. Remove Tickets"));

	struct
	{
		EFaction                       Faction;
		int                            Tickets_Delta;
	} params = {};

	params.Faction = Faction;
	params.Tickets_Delta = Tickets_Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.Handle Tickets Exhausted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::Handle_Tickets_Exhausted(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Handle Tickets Exhausted"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.ExecuteUbergraph_TicketsComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::ExecuteUbergraph_TicketsComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.ExecuteUbergraph_TicketsComponent"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.On Tickets Changed Because of Kill__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            New_Tickets                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::On_Tickets_Changed_Because_of_Kill__DelegateSignature(EFaction Faction, int Delta, int New_Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.On Tickets Changed Because of Kill__DelegateSignature"));

	struct
	{
		EFaction                       Faction;
		int                            Delta;
		int                            New_Tickets;
	} params = {};

	params.Faction = Faction;
	params.Delta = Delta;
	params.New_Tickets = New_Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.Client Tickets Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTicketsComponent_C::Client_Tickets_Changed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.Client Tickets Changed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.On Tickets Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            New_Tickets                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int New_Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.On Tickets Changed__DelegateSignature"));

	struct
	{
		EFaction                       Faction;
		int                            Delta;
		int                            New_Tickets;
	} params = {};

	params.Faction = Faction;
	params.Delta = Delta;
	params.New_Tickets = New_Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TicketsComponent.TicketsComponent_C.OnTicketsExhausted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTicketsComponent_C::OnTicketsExhausted__DelegateSignature(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TicketsComponent.TicketsComponent_C.OnTicketsExhausted__DelegateSignature"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
