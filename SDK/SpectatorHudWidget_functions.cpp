// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpectatorHudWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateFollowingPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorHudWidget_C::UpdateFollowingPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateFollowingPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.CleanupPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ATBLPlayerState*> PlayerStateArray               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::CleanupPlayerState(int TeamIndex, TArray<class ATBLPlayerState*>* PlayerStateArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.CleanupPlayerState"));

	struct
	{
		int                            TeamIndex;
		TArray<class ATBLPlayerState*> PlayerStateArray;
	} params = {};

	params.TeamIndex = TeamIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerStateArray != nullptr)
		*PlayerStateArray = params.PlayerStateArray;
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVerticalBox*            VerticleBox                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ATBLPlayerState*> PlayerStates                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           isTeam1                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpectatorHudWidget_C::UpdateTeam(EFaction Faction, class UVerticalBox* VerticleBox, bool isTeam1, TArray<class ATBLPlayerState*>* PlayerStates)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateTeam"));

	struct
	{
		EFaction                       Faction;
		class UVerticalBox*            VerticleBox;
		TArray<class ATBLPlayerState*> PlayerStates;
		bool                           isTeam1;
	} params = {};

	params.Faction = Faction;
	params.VerticleBox = VerticleBox;
	params.isTeam1 = isTeam1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerStates != nullptr)
		*PlayerStates = params.PlayerStates;
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpectatorHudWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.OnClientPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.ShowSpectatingStateWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorHudWidget_C::ShowSpectatingStateWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.ShowSpectatingStateWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.ShowWaitingToSpawnSpectatingWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorHudWidget_C::ShowWaitingToSpawnSpectatingWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.ShowWaitingToSpawnSpectatingWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.HideAllWIdgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorHudWidget_C::HideAllWIdgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.HideAllWIdgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.OnPlayerSelectedSpectatorMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlayerSpectator              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpectatorHudWidget_C::OnPlayerSelectedSpectatorMode(bool IsPlayerSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPlayerSelectedSpectatorMode"));

	struct
	{
		bool                           IsPlayerSpectator;
	} params = {};

	params.IsPlayerSpectator = IsPlayerSpectator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorHudWidget.SpectatorHudWidget_C.ExecuteUbergraph_SpectatorHudWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorHudWidget_C::ExecuteUbergraph_SpectatorHudWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorHudWidget.SpectatorHudWidget_C.ExecuteUbergraph_SpectatorHudWidget"));

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
