// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameMode_FFA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameMode_FFA.GameMode_FFA_C.UpdateGamemodeType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameMode_FFA_C::UpdateGamemodeType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.UpdateGamemodeType"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.SetMaxScore
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameMode_FFA_C::SetMaxScore(int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.SetMaxScore"));

	struct
	{
		int                            MaxScore;
	} params = {};

	params.MaxScore = MaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.KillsRemainingMessages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tickets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameMode_FFA_C::KillsRemainingMessages(int Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.KillsRemainingMessages"));

	struct
	{
		int                            Tickets;
	} params = {};

	params.Tickets = Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.ResizeFFAObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFFAObjectiveWidget_Leader_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameMode_FFA_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.ResizeFFAObjectiveWidget"));

	struct
	{
		class UFFAObjectiveWidget_Leader_C* Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.UpdateListOrder
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameMode_FFA_C::UpdateListOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.UpdateListOrder"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.OnPlayerKilled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGameMode_FFA_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.OnPlayerKilled_Event_1"));

	struct
	{
		struct FDeathEvent             DeathEvent;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameMode_FFA_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.SuddenDeath_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameMode_FFA_C::SuddenDeath_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.SuddenDeath_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameMode_FFA_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.FadeTicketMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameMode_FFA_C::FadeTicketMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.FadeTicketMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.MaxScoreUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameMode_FFA_C::MaxScoreUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.MaxScoreUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameMode_FFA.GameMode_FFA_C.ExecuteUbergraph_GameMode_FFA
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameMode_FFA_C::ExecuteUbergraph_GameMode_FFA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameMode_FFA.GameMode_FFA_C.ExecuteUbergraph_GameMode_FFA"));

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
