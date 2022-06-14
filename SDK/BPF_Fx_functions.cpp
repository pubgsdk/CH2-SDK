// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Fx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_Fx.BPF_Fx_C.ResetAllPostProcessEffects
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::ResetAllPostProcessEffects(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.ResetAllPostProcessEffects"));

	struct
	{
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.GetCharacterStatesFxObject
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCharacterFx_C*          CharacterStatesFx              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::GetCharacterStatesFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** CharacterStatesFx, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetCharacterStatesFxObject"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		class UCharacterFx_C*          CharacterStatesFx;
		bool                           Success;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CharacterStatesFx != nullptr)
		*CharacterStatesFx = params.CharacterStatesFx;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPF_Fx.BPF_Fx_C.GetCharacterFxObject
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCharacterFx_C*          Character_Fx                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::GetCharacterFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** Character_Fx, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetCharacterFxObject"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		class UCharacterFx_C*          Character_Fx;
		bool                           Success;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Character_Fx != nullptr)
		*Character_Fx = params.Character_Fx;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPF_Fx.BPF_Fx_C.Is Character In Shove Or Jab Or Headbutt Attack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::Is_Character_In_Shove_Or_Jab_Or_Headbutt_Attack(class ATBLCharacter* Character, class UObject* __WorldContext, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.Is Character In Shove Or Jab Or Headbutt Attack"));

	struct
	{
		class ATBLCharacter*           Character;
		class UObject*                 __WorldContext;
		bool                           Return_Value;
	} params = {};

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BPF_Fx.BPF_Fx_C.IsValidSelfDamageType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDamageSource*           DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::IsValidSelfDamageType(class UDamageSource* DamageType, class UObject* __WorldContext, bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.IsValidSelfDamageType"));

	struct
	{
		class UDamageSource*           DamageType;
		class UObject*                 __WorldContext;
		bool                           Return;
	} params = {};

	params.DamageType = DamageType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BPF_Fx.BPF_Fx_C.ShouldPlayEpicDeathVO
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::ShouldPlayEpicDeathVO(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.ShouldPlayEpicDeathVO"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		class UObject*                 __WorldContext;
		bool                           Return_Value;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BPF_Fx.BPF_Fx_C.DisablePreVisualizationListener
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Listener                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::DisablePreVisualizationListener(class UObject* Listener, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.DisablePreVisualizationListener"));

	struct
	{
		class UObject*                 Listener;
		class UObject*                 __WorldContext;
	} params = {};

	params.Listener = Listener;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.EnablePreVisualizationListener
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Listener                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::EnablePreVisualizationListener(class UObject* Listener, class UClass* /*AInventoryItem*/ Item, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.EnablePreVisualizationListener"));

	struct
	{
		class UObject*                 Listener;
		class UClass* /*AInventoryItem*/ Item;
		class UObject*                 __WorldContext;
	} params = {};

	params.Listener = Listener;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.TBL_PresetWorldCameraShake
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EWorldCameraShakeType> Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Epicenter                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::TBL_PresetWorldCameraShake(TEnumAsByte<EWorldCameraShakeType> Selection, const struct FVector& Epicenter, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.TBL_PresetWorldCameraShake"));

	struct
	{
		TEnumAsByte<EWorldCameraShakeType> Selection;
		struct FVector                 Epicenter;
		class UObject*                 __WorldContext;
	} params = {};

	params.Selection = Selection;
	params.Epicenter = Epicenter;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.IsNPC
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::IsNPC(class AActor* Actor, class UObject* __WorldContext, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.IsNPC"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           Return_Value;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BPF_Fx.BPF_Fx_C.GetActorCameraManger
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerCameraManager*    PlayerCameraManager            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::GetActorCameraManger(class UObject* Actor, class UObject* __WorldContext, class APlayerCameraManager** PlayerCameraManager, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetActorCameraManger"));

	struct
	{
		class UObject*                 Actor;
		class UObject*                 __WorldContext;
		class APlayerCameraManager*    PlayerCameraManager;
		bool                           Success;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PlayerCameraManager != nullptr)
		*PlayerCameraManager = params.PlayerCameraManager;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPF_Fx.BPF_Fx_C.GetSwitchStateFromWeaponMaterial
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWeaponMaterial                WeaponMaterial                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 SwitchState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::GetSwitchStateFromWeaponMaterial(EWeaponMaterial WeaponMaterial, class UObject* __WorldContext, struct FString* SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetSwitchStateFromWeaponMaterial"));

	struct
	{
		EWeaponMaterial                WeaponMaterial;
		class UObject*                 __WorldContext;
		struct FString                 SwitchState;
	} params = {};

	params.WeaponMaterial = WeaponMaterial;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SwitchState != nullptr)
		*SwitchState = params.SwitchState;
}


// Function BPF_Fx.BPF_Fx_C.GetPhysMatSwitchState
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysMat                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 SwitchState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::GetPhysMatSwitchState(class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, struct FString* SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetPhysMatSwitchState"));

	struct
	{
		class UPhysicalMaterial*       PhysMat;
		class UObject*                 __WorldContext;
		struct FString                 SwitchState;
	} params = {};

	params.PhysMat = PhysMat;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SwitchState != nullptr)
		*SwitchState = params.SwitchState;
}


// Function BPF_Fx.BPF_Fx_C.IsBlockingHitAWorldHit
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    HitParams                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBPF_Fx_C::IsBlockingHitAWorldHit(const struct FProjectileHitParams& HitParams, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.IsBlockingHitAWorldHit"));

	struct
	{
		struct FProjectileHitParams    HitParams;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.HitParams = HitParams;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BPF_Fx.BPF_Fx_C.SetCharacterMaterialParam (vector)
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Name                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::SetCharacterMaterialParam__vector_(class AActor* Actor, const struct FName& Name, const struct FVector& Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.SetCharacterMaterialParam (vector)"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   Name;
		struct FVector                 Value;
		class UObject*                 __WorldContext;
	} params = {};

	params.Actor = Actor;
	params.Name = Name;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.GetCrosshair
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UTBLCrosshairInterface> Crosshair                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::GetCrosshair(class UObject* __WorldContext, bool* Success, TScriptInterface<class UTBLCrosshairInterface>* Crosshair)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetCrosshair"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           Success;
		TScriptInterface<class UTBLCrosshairInterface> Crosshair;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
	if (Crosshair != nullptr)
		*Crosshair = params.Crosshair;
}


// Function BPF_Fx.BPF_Fx_C.SetWeaponMaterialParam (scalar)
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::SetWeaponMaterialParam__scalar_(class AActor* Actor, const struct FName& Name, float Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.SetWeaponMaterialParam (scalar)"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   Name;
		float                          Value;
		class UObject*                 __WorldContext;
	} params = {};

	params.Actor = Actor;
	params.Name = Name;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.SetCharacterMaterialParam (scalar)
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Name                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::SetCharacterMaterialParam__scalar_(class AActor* Actor, const struct FName& Name, float Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.SetCharacterMaterialParam (scalar)"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   Name;
		float                          Value;
		class UObject*                 __WorldContext;
	} params = {};

	params.Actor = Actor;
	params.Name = Name;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Fx.BPF_Fx_C.IsDownedDamage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::IsDownedDamage(const struct FDamageTakenEvent& Event, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.IsDownedDamage"));

	struct
	{
		struct FDamageTakenEvent       Event;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Event = Event;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Fx.BPF_Fx_C.GetPainStateFromDamage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 CharacterPainState             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::GetPainStateFromDamage(float Damage, class UObject* __WorldContext, struct FString* CharacterPainState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetPainStateFromDamage"));

	struct
	{
		float                          Damage;
		class UObject*                 __WorldContext;
		struct FString                 CharacterPainState;
	} params = {};

	params.Damage = Damage;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CharacterPainState != nullptr)
		*CharacterPainState = params.CharacterPainState;
}


// Function BPF_Fx.BPF_Fx_C.GetAttackSwitchStateFromAttackInfo
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAttackInfo             AttackInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 AttackState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::GetAttackSwitchStateFromAttackInfo(const struct FAttackInfo& AttackInfo, class UObject* __WorldContext, struct FString* AttackState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetAttackSwitchStateFromAttackInfo"));

	struct
	{
		struct FAttackInfo             AttackInfo;
		class UObject*                 __WorldContext;
		struct FString                 AttackState;
	} params = {};

	params.AttackInfo = AttackInfo;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AttackState != nullptr)
		*AttackState = params.AttackState;
}


// Function BPF_Fx.BPF_Fx_C.GetArmorTypeNameFromActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ArmorName                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Fx_C::GetArmorTypeNameFromActor(class AActor* Actor, class UObject* __WorldContext, struct FName* ArmorName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.GetArmorTypeNameFromActor"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		struct FName                   ArmorName;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ArmorName != nullptr)
		*ArmorName = params.ArmorName;
}


// Function BPF_Fx.BPF_Fx_C.IsLocalCharacter
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Fx_C::IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Fx.BPF_Fx_C.IsLocalCharacter"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
