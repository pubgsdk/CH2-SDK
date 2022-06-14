// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SiegeEngineHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SiegeEngineHUD.SiegeEngineHUD_C.HideWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::HideWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.HideWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::UpdateHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateHUD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateSiegeState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::UpdateSiegeState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateSiegeState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Tick"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.ShowWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASiegeEngine*            Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::ShowWidget(class ASiegeEngine* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.ShowWidget"));

	struct
	{
		class ASiegeEngine*            Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.AddDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::AddDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.AddDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.RemoveDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::RemoveDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.RemoveDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeOutOfProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::StartFadeOutOfProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeOutOfProgressBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeInOfProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::StartFadeInOfProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeInOfProgressBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USiegeEngineHUD_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.PreConstruct"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.OnInputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::OnInputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.OnInputModeChanged"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateKeybind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::UpdateKeybind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateKeybind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_LoadedAmmo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          LoadedAmmo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Catapult_LoadedAmmo(class AInventoryItem* LoadedAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_LoadedAmmo"));

	struct
	{
		class AInventoryItem*          LoadedAmmo;
	} params = {};

	params.LoadedAmmo = LoadedAmmo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_ReadyToFire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeEngineHUD_C::Catapult_ReadyToFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_ReadyToFire"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_CombatStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Catapult_CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_CombatStateChanged"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.Ballista_CombatStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Ballista_CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Ballista_CombatStateChanged"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.BatteringRam_CombatStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::BatteringRam_CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.BatteringRam_CombatStateChanged"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.Bombard Loaded Ammo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          LoadedAmmo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Bombard_Loaded_Ammo(class AInventoryItem* LoadedAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Bombard Loaded Ammo"));

	struct
	{
		class AInventoryItem*          LoadedAmmo;
	} params = {};

	params.LoadedAmmo = LoadedAmmo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeEngineHUD.SiegeEngineHUD_C.Bombard_CombatStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::Bombard_CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.Bombard_CombatStateChanged"));

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


// Function SiegeEngineHUD.SiegeEngineHUD_C.ExecuteUbergraph_SiegeEngineHUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeEngineHUD_C::ExecuteUbergraph_SiegeEngineHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeEngineHUD.SiegeEngineHUD_C.ExecuteUbergraph_SiegeEngineHUD"));

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
