// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostDeathScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostDeathScreen.PostDeathScreen_C.SendCommendForgiveToServer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyKiller                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           TeamKiller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATBLPlayerState*         Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::SendCommendForgiveToServer(class ATBLPlayerController* PlayerController, bool EnemyKiller, bool TeamKiller, class ATBLPlayerState* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.SendCommendForgiveToServer"));

	struct
	{
		class ATBLPlayerController*    PlayerController;
		bool                           EnemyKiller;
		bool                           TeamKiller;
		class ATBLPlayerState*         Killer;
	} params = {};

	params.PlayerController = PlayerController;
	params.EnemyKiller = EnemyKiller;
	params.TeamKiller = TeamKiller;
	params.Killer = Killer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdatePlayerPrompt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnemyKill                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTeamKill                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATBLPlayerState*         Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::UpdatePlayerPrompt(bool IsEnemyKill, bool IsTeamKill, class ATBLPlayerState* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdatePlayerPrompt"));

	struct
	{
		bool                           IsEnemyKill;
		bool                           IsTeamKill;
		class ATBLPlayerState*         Killer;
	} params = {};

	params.IsEnemyKill = IsEnemyKill;
	params.IsTeamKill = IsTeamKill;
	params.Killer = Killer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdatePlatformIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostDeathScreen_C::UpdatePlatformIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdatePlatformIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByAttackTypeText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::UpdateKilledByAttackTypeText(bool bShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByAttackTypeText"));

	struct
	{
		bool                           bShouldShow;
	} params = {};

	params.bShouldShow = bShouldShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::UpdateKilledByWeaponTypeIcon(bool bShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeIcon"));

	struct
	{
		bool                           bShouldShow;
	} params = {};

	params.bShouldShow = bShouldShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByDamageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::UpdateKilledByDamageText(bool bShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByDamageText"));

	struct
	{
		bool                           bShouldShow;
	} params = {};

	params.bShouldShow = bShouldShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostDeathScreen_C::UpdateKilledByWeaponTypeText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.GetShouldShowKilledByWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::GetShouldShowKilledByWeapon(bool* bShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetShouldShowKilledByWeapon"));

	struct
	{
		bool                           bShouldShow;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldShow != nullptr)
		*bShouldShow = params.bShouldShow;
}


// Function PostDeathScreen.PostDeathScreen_C.GetAbilityNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AbilityName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   AbilityNameText                (CPF_Parm, CPF_OutParm)
// bool                           bIsFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::GetAbilityNameText(const struct FName& AbilityName, struct FText* AbilityNameText, bool* bIsFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetAbilityNameText"));

	struct
	{
		struct FName                   AbilityName;
		struct FText                   AbilityNameText;
		bool                           bIsFound;
	} params = {};

	params.AbilityName = AbilityName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AbilityNameText != nullptr)
		*AbilityNameText = params.AbilityNameText;
	if (bIsFound != nullptr)
		*bIsFound = params.bIsFound;
}


// Function PostDeathScreen.PostDeathScreen_C.SetCommendVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Play_Fade_Out                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::SetCommendVisibility(bool Enabled, bool Play_Fade_Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.SetCommendVisibility"));

	struct
	{
		bool                           Enabled;
		bool                           Play_Fade_Out;
	} params = {};

	params.Enabled = Enabled;
	params.Play_Fade_Out = Play_Fade_Out;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.CanCommendPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathRecapEntry        DeathRecapEntry                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Can_Commend                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Can_Forgive                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::CanCommendPlayer(const struct FDeathRecapEntry& DeathRecapEntry, bool* Can_Commend, bool* Can_Forgive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.CanCommendPlayer"));

	struct
	{
		struct FDeathRecapEntry        DeathRecapEntry;
		bool                           Can_Commend;
		bool                           Can_Forgive;
	} params = {};

	params.DeathRecapEntry = DeathRecapEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Can_Commend != nullptr)
		*Can_Commend = params.Can_Commend;
	if (Can_Forgive != nullptr)
		*Can_Forgive = params.Can_Forgive;
}


// Function PostDeathScreen.PostDeathScreen_C.GetSecondsToDeploy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Seconds_as_text                (CPF_Parm, CPF_OutParm)
// int                            Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::GetSecondsToDeploy(struct FText* Seconds_as_text, int* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetSecondsToDeploy"));

	struct
	{
		struct FText                   Seconds_as_text;
		int                            Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds_as_text != nullptr)
		*Seconds_as_text = params.Seconds_as_text;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function PostDeathScreen.PostDeathScreen_C.GetTotalScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::GetTotalScore(int* Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetTotalScore"));

	struct
	{
		int                            Score;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Score != nullptr)
		*Score = params.Score;
}


// Function PostDeathScreen.PostDeathScreen_C.GetObjectiveScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::GetObjectiveScore(int* Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetObjectiveScore"));

	struct
	{
		int                            Score;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Score != nullptr)
		*Score = params.Score;
}


// Function PostDeathScreen.PostDeathScreen_C.GetRevives
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Revives                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::GetRevives(int* Revives)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetRevives"));

	struct
	{
		int                            Revives;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Revives != nullptr)
		*Revives = params.Revives;
}


// Function PostDeathScreen.PostDeathScreen_C.GetWidgetSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               Size2D                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::GetWidgetSize(class UWidget* Widget, struct FVector2D* Size2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.GetWidgetSize"));

	struct
	{
		class UWidget*                 Widget;
		struct FVector2D               Size2D;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Size2D != nullptr)
		*Size2D = params.Size2D;
}


// Function PostDeathScreen.PostDeathScreen_C.SetKillerColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::SetKillerColor(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.SetKillerColor"));

	struct
	{
		class UObject*                 Object;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.Get Name From Killer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    my_TBLPC                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name_Text                      (CPF_Parm, CPF_OutParm)
// bool                           KillerExists                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::Get_Name_From_Killer(class ATBLPlayerController* my_TBLPC, struct FText* Name_Text, bool* KillerExists)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Get Name From Killer"));

	struct
	{
		class ATBLPlayerController*    my_TBLPC;
		struct FText                   Name_Text;
		bool                           KillerExists;
	} params = {};

	params.my_TBLPC = my_TBLPC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Name_Text != nullptr)
		*Name_Text = params.Name_Text;
	if (KillerExists != nullptr)
		*KillerExists = params.KillerExists;
}


// Function PostDeathScreen.PostDeathScreen_C.Get Name Text From Maybe Player State
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name_Text                      (CPF_Parm, CPF_OutParm)

void UPostDeathScreen_C::Get_Name_Text_From_Maybe_Player_State(class UObject* Object, struct FText* Name_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Get Name Text From Maybe Player State"));

	struct
	{
		class UObject*                 Object;
		struct FText                   Name_Text;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Name_Text != nullptr)
		*Name_Text = params.Name_Text;
}


// Function PostDeathScreen.PostDeathScreen_C.InitializeAndShow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseWaveTimer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::InitializeAndShow(bool UseWaveTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.InitializeAndShow"));

	struct
	{
		bool                           UseWaveTimer;
	} params = {};

	params.UseWaveTimer = UseWaveTimer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::Hide(bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Hide"));

	struct
	{
		bool                           Instant;
	} params = {};

	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostDeathScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.HandlePlayerSelectedSpectatorMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlayerSpectator              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::HandlePlayerSelectedSpectatorMode(bool IsPlayerSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.HandlePlayerSelectedSpectatorMode"));

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


// Function PostDeathScreen.PostDeathScreen_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostDeathScreen_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Show"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.SwitchToWaveTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::SwitchToWaveTimer(bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.SwitchToWaveTimer"));

	struct
	{
		bool                           Instant;
	} params = {};

	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.SetSpawnWave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::SetSpawnWave(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.SetSpawnWave"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.Tick"));

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


// Function PostDeathScreen.PostDeathScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bJoinWaveSuccess               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1"));

	struct
	{
		class ASpawnWave*              SpawnWave;
		bool                           bJoinWaveSuccess;
	} params = {};

	params.SpawnWave = SpawnWave;
	params.bJoinWaveSuccess = bJoinWaveSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.CommendPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostDeathScreen_C::CommendPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.CommendPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostDeathScreen_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.EnableBottomBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPostDeathScreen_C::EnableBottomBar(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.EnableBottomBar"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3
// (FUNC_BlueprintEvent)

void UPostDeathScreen_C::WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.HandlePlayerKillScored
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPostDeathScreen_C::HandlePlayerKillScored(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.HandlePlayerKillScored"));

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


// Function PostDeathScreen.PostDeathScreen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostDeathScreen_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathScreen.PostDeathScreen_C.ExecuteUbergraph_PostDeathScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathScreen_C::ExecuteUbergraph_PostDeathScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathScreen.PostDeathScreen_C.ExecuteUbergraph_PostDeathScreen"));

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
