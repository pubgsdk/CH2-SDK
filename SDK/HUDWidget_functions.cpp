// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDWidget.HUDWidget_C.RequestPoolPrepopulate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::RequestPoolPrepopulate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.RequestPoolPrepopulate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnGenerateLevelUpRow_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLevelUpResult          LevelUpEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UHUDWidget_C::OnGenerateLevelUpRow_1(const struct FLevelUpResult& LevelUpEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnGenerateLevelUpRow_1"));

	struct
	{
		struct FLevelUpResult          LevelUpEvent;
		class UWidget*                 ReturnValue;
	} params = {};

	params.LevelUpEvent = LevelUpEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function HUDWidget.HUDWidget_C.OnGenerateRow_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UHUDWidget_C::OnGenerateRow_1(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnGenerateRow_1"));

	struct
	{
		struct FScoreEventStruct       ScoreEvent;
		class UWidget*                 ReturnValue;
	} params = {};

	params.ScoreEvent = ScoreEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function HUDWidget.HUDWidget_C.BP_OnBlockKeyPress
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EWeaponAbilitySlotKey          WeaponAbilitySlotKey           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UHUDWidget_C::BP_OnBlockKeyPress(EWeaponAbilitySlotKey WeaponAbilitySlotKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.BP_OnBlockKeyPress"));

	struct
	{
		EWeaponAbilitySlotKey          WeaponAbilitySlotKey;
		bool                           ReturnValue;
	} params = {};

	params.WeaponAbilitySlotKey = WeaponAbilitySlotKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function HUDWidget.HUDWidget_C.IsRadialInventoryOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOpen                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::IsRadialInventoryOpen(bool* IsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.IsRadialInventoryOpen"));

	struct
	{
		bool                           IsOpen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function HUDWidget.HUDWidget_C.IsVOPickerOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsVisible                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::IsVOPickerOpen(bool* IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.IsVOPickerOpen"));

	struct
	{
		bool                           IsVisible;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function HUDWidget.HUDWidget_C.EnableFocusMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::EnableFocusMode(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.EnableFocusMode"));

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


// Function HUDWidget.HUDWidget_C.GetCurrentTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                Team                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::GetCurrentTeam(class ATBLTeam** Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.GetCurrentTeam"));

	struct
	{
		class ATBLTeam*                Team;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Team != nullptr)
		*Team = params.Team;
}


// Function HUDWidget.HUDWidget_C.UpdateLayersVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPawnValid                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsSpectatorPawn                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsPlayerSelectedSpectatorMode  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTeamValid                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::UpdateLayersVisibility(bool IsPawnValid, bool IsSpectatorPawn, bool IsPlayerSelectedSpectatorMode, bool IsTeamValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.UpdateLayersVisibility"));

	struct
	{
		bool                           IsPawnValid;
		bool                           IsSpectatorPawn;
		bool                           IsPlayerSelectedSpectatorMode;
		bool                           IsTeamValid;
	} params = {};

	params.IsPawnValid = IsPawnValid;
	params.IsSpectatorPawn = IsSpectatorPawn;
	params.IsPlayerSelectedSpectatorMode = IsPlayerSelectedSpectatorMode;
	params.IsTeamValid = IsTeamValid;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.CanPlayEmoteMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::CanPlayEmoteMenu(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.CanPlayEmoteMenu"));

	struct
	{
		bool                           Return_Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function HUDWidget.HUDWidget_C.OnLoaded_B028355C46F5520A2991C6947E015364
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnLoaded_B028355C46F5520A2991C6947E015364(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnLoaded_B028355C46F5520A2991C6947E015364"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnPlayerKilled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUDWidget_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnPlayerKilled_Event_1"));

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


// Function HUDWidget.HUDWidget_C.On My Pawn Died
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::On_My_Pawn_Died()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.On My Pawn Died"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.On Possessed New Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::On_Possessed_New_Pawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.On Possessed New Pawn"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnPossessedPawn_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnPossessedPawn_Event_2(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnPossessedPawn_Event_2"));

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


// Function HUDWidget.HUDWidget_C.ShowVOTacticalMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UHUDWidget_C::ShowVOTacticalMenu(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ShowVOTacticalMenu"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.ShowVOPersonalMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UHUDWidget_C::ShowVOPersonalMenu(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ShowVOPersonalMenu"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.HideVOMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::HideVOMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.HideVOMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnMount_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  AttachParent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USiegeMountPoint*        MountPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnMount_Event_1(class AActor* AttachParent, class USiegeMountPoint* MountPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnMount_Event_1"));

	struct
	{
		class AActor*                  AttachParent;
		class USiegeMountPoint*        MountPoint;
	} params = {};

	params.AttachParent = AttachParent;
	params.MountPoint = MountPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnDismount_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  AttachParent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EDismountType                  DismountType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnDismount_Event_1(class AActor* AttachParent, EDismountType DismountType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnDismount_Event_1"));

	struct
	{
		class AActor*                  AttachParent;
		EDismountType                  DismountType;
	} params = {};

	params.AttachParent = AttachParent;
	params.DismountType = DismountType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.InitializeTapOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::InitializeTapOut(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.InitializeTapOut"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.InitializePinnedInteractable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::InitializePinnedInteractable(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.InitializePinnedInteractable"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnInteractableFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  InteractableComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnInteractableFocused(class UInteractableComponent* InteractableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnInteractableFocused"));

	struct
	{
		class UInteractableComponent*  InteractableComponent;
	} params = {};

	params.InteractableComponent = InteractableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnInteractableLostFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::OnInteractableLostFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnInteractableLostFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.Set cinematics mode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicMenuMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::Set_cinematics_mode(TEnumAsByte<ECinematicMenuMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.Set cinematics mode"));

	struct
	{
		TEnumAsByte<ECinematicMenuMode> New_Mode;
	} params = {};

	params.New_Mode = New_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUDWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.Update full layer opacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::Update_full_layer_opacity(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.Update full layer opacity"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.Update parial layer opacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::Update_parial_layer_opacity(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.Update parial layer opacity"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.ShowVOEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::ShowVOEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ShowVOEmoteMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnClientPossessedPawn_Event_1"));

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


// Function HUDWidget.HUDWidget_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnTeamChanged(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnTeamChanged"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnTeamChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnTeamChanged_Event_1"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HintText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUDWidget_C::BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature(const struct FName& Text, const struct FString& ActionName, bool Enable, const struct FText& HintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature"));

	struct
	{
		struct FName                   Text;
		struct FString                 ActionName;
		bool                           Enable;
		struct FText                   HintText;
	} params = {};

	params.Text = Text;
	params.ActionName = ActionName;
	params.Enable = Enable;
	params.HintText = HintText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.InitializeMountedWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::InitializeMountedWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.InitializeMountedWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnStatsComponentFocused_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatsComponent*         StatsComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnStatsComponentFocused_Event_1(class UStatsComponent* StatsComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnStatsComponentFocused_Event_1"));

	struct
	{
		class UStatsComponent*         StatsComponent;
	} params = {};

	params.StatsComponent = StatsComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnStatsComponentLostFocused_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::OnStatsComponentLostFocused_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnStatsComponentLostFocused_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.HideNameplate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::HideNameplate(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.HideNameplate"));

	struct
	{
		bool                           _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.InitializeGameModeWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::InitializeGameModeWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.InitializeGameModeWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.ShowRadialInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::ShowRadialInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ShowRadialInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.HideRadialInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::HideRadialInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.HideRadialInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.InitializeProgressUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::InitializeProgressUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.InitializeProgressUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.StatsComponentHitFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::StatsComponentHitFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.StatsComponentHitFade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnDamageCaused_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UHUDWidget_C::OnDamageCaused_Event_1(const struct FDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnDamageCaused_Event_1"));

	struct
	{
		struct FDamageTakenEvent       DamageEvent;
	} params = {};

	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.ReshowNamePlate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::ReshowNamePlate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ReshowNamePlate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnJoinWave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bJoinWaveSuccess               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUDWidget_C::OnJoinWave(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnJoinWave"));

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


// Function HUDWidget.HUDWidget_C.OnUseableActorInteractableFocused_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  InteractableComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnUseableActorInteractableFocused_Event_1(class UInteractableComponent* InteractableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnUseableActorInteractableFocused_Event_1"));

	struct
	{
		class UInteractableComponent*  InteractableComponent;
	} params = {};

	params.InteractableComponent = InteractableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnUseableActorInteractableLostFocused_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  InteractableComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnUseableActorInteractableLostFocused_Event_1(class UInteractableComponent* InteractableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnUseableActorInteractableLostFocused_Event_1"));

	struct
	{
		class UInteractableComponent*  InteractableComponent;
	} params = {};

	params.InteractableComponent = InteractableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUDWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.PostDeathHidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::PostDeathHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.PostDeathHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.AutoHideVOMenuTimerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::AutoHideVOMenuTimerStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.AutoHideVOMenuTimerStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.PostCombatStateHideDowned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::PostCombatStateHideDowned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.PostCombatStateHideDowned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.DisableFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUDWidget_C::DisableFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.DisableFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.EnableFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  InteractableComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::EnableFocus(class UInteractableComponent* InteractableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.EnableFocus"));

	struct
	{
		class UInteractableComponent*  InteractableComponent;
	} params = {};

	params.InteractableComponent = InteractableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnApplyCondition_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnApplyCondition_Event_1(class AActor* Actor, EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnApplyCondition_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnRemoveCondition_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnRemoveCondition_Event_1(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnRemoveCondition_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
		class AActor*                  ConditionRemover;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;
	params.ConditionRemover = ConditionRemover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.OnCombatStateChanged_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::OnCombatStateChanged_Event_1(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.OnCombatStateChanged_Event_1"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   PreviousState;
		struct FName                   NewState;
		struct FAttackInfo             EventAttackInfo;
		class UCombatState*            CombatState;
	} params = {};

	params.Actor = Actor;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.EventAttackInfo = EventAttackInfo;
	params.CombatState = CombatState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUDWidget.HUDWidget_C.ExecuteUbergraph_HUDWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::ExecuteUbergraph_HUDWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.ExecuteUbergraph_HUDWidget"));

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


// Function HUDWidget.HUDWidget_C.Cinematics Mode Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicMenuMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Previous_mode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUDWidget_C::Cinematics_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> New_Mode, TEnumAsByte<ECinematicMenuMode> Previous_mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUDWidget.HUDWidget_C.Cinematics Mode Changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicMenuMode> New_Mode;
		TEnumAsByte<ECinematicMenuMode> Previous_mode;
	} params = {};

	params.New_Mode = New_Mode;
	params.Previous_mode = Previous_mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
