// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFAObjectiveWidget_Leader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayername
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::UpdatePlayername(const struct FString& InString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayername"));

	struct
	{
		struct FString                 InString;
	} params = {};

	params.InString = InString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.SetupWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ExtraWith                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::SetupWidth(float ExtraWith)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.SetupWidth"));

	struct
	{
		float                          ExtraWith;
	} params = {};

	params.ExtraWith = ExtraWith;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.CompareAgaintsPlayerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         TestPlayerState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::CompareAgaintsPlayerState(class ATBLPlayerState* TestPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.CompareAgaintsPlayerState"));

	struct
	{
		class ATBLPlayerState*         TestPlayerState;
	} params = {};

	params.TestPlayerState = TestPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdateKillsCounter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Kills                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::UpdateKillsCounter(int Kills)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdateKillsCounter"));

	struct
	{
		int                            Kills;
	} params = {};

	params.Kills = Kills;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.GetLocalPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         AsTBLPlayer_State              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::GetLocalPlayerState(class ATBLPlayerState** AsTBLPlayer_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.GetLocalPlayerState"));

	struct
	{
		class ATBLPlayerState*         AsTBLPlayer_State;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsTBLPlayer_State != nullptr)
		*AsTBLPlayer_State = params.AsTBLPlayer_State;
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::UpdatePlayerState(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayerState"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFFAObjectiveWidget_Leader_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.PreConstruct"));

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


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFFAObjectiveWidget_Leader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.OnPlayerStateKillsUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Kills                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::OnPlayerStateKillsUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.OnPlayerStateKillsUpdated_Event_1"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
		int                            Kills;
	} params = {};

	params.PlayerState = PlayerState;
	params.Kills = Kills;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.ExecuteUbergraph_FFAObjectiveWidget_Leader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFFAObjectiveWidget_Leader_C::ExecuteUbergraph_FFAObjectiveWidget_Leader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.ExecuteUbergraph_FFAObjectiveWidget_Leader"));

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
