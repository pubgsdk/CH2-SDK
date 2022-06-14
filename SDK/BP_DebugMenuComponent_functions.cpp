// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DebugMenuComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DebugMenuComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by time
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Force_end_by_time(class AActor* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by time"));

	struct
	{
		class AActor*                  Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by score
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Force_end_by_score(class AScoredStage_C* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by score"));

	struct
	{
		class AScoredStage_C*          Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set time left (minutes)
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Minutes                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Set_time_left__minutes_(class AActor* Stage, float Minutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set time left (minutes)"));

	struct
	{
		class AActor*                  Stage;
		float                          Minutes;
	} params = {};

	params.Stage = Stage;
	params.Minutes = Minutes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add time (minutes)
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Minutes                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Add_time__minutes_(class AActor* Stage, float Minutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add time (minutes)"));

	struct
	{
		class AActor*                  Stage;
		float                          Minutes;
	} params = {};

	params.Stage = Stage;
	params.Minutes = Minutes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add Score
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Add_Score(class AScoredStage_C* Stage, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add Score"));

	struct
	{
		class AScoredStage_C*          Stage;
		int                            Score;
	} params = {};

	params.Stage = Stage;
	params.Score = Score;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set score
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Set_score(class AScoredStage_C* Stage, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set score"));

	struct
	{
		class AScoredStage_C*          Stage;
		int                            Score;
	} params = {};

	params.Stage = Stage;
	params.Score = Score;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set Tickets
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Num_tickets                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::Set_Tickets(class AActor* Actor, EFaction Faction, int Num_tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set Tickets"));

	struct
	{
		class AActor*                  Actor;
		EFaction                       Faction;
		int                            Num_tickets;
	} params = {};

	params.Actor = Actor;
	params.Faction = Faction;
	params.Num_tickets = Num_tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ExecuteUbergraph_BP_DebugMenuComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DebugMenuComponent_C::ExecuteUbergraph_BP_DebugMenuComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ExecuteUbergraph_BP_DebugMenuComponent"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
