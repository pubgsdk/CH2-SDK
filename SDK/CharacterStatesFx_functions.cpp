// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterStatesFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStatesFx.CharacterStatesFx_C.UpdateStaminaRTPC
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__StaminaPercent__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::UpdateStaminaRTPC(float bpp__StaminaPercent__pf, class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.UpdateStaminaRTPC"));

	struct
	{
		float                          bpp__StaminaPercent__pf;
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__StaminaPercent__pf = bpp__StaminaPercent__pf;
	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.UpdateHealthRTPC
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__HealthPercent__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__HealthValue__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__HealthMaxValue__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsLocalActorNotBotNotNPC__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::UpdateHealthRTPC(float bpp__HealthPercent__pf, float bpp__HealthValue__pf, float bpp__HealthMaxValue__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.UpdateHealthRTPC"));

	struct
	{
		float                          bpp__HealthPercent__pf;
		float                          bpp__HealthValue__pf;
		float                          bpp__HealthMaxValue__pf;
		class AActor*                  bpp__Actor__pf;
		bool                           bpp__IsLocalActorNotBotNotNPC__pf;
	} params = {};

	params.bpp__HealthPercent__pf = bpp__HealthPercent__pf;
	params.bpp__HealthValue__pf = bpp__HealthValue__pf;
	params.bpp__HealthMaxValue__pf = bpp__HealthMaxValue__pf;
	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__IsLocalActorNotBotNotNPC__pf = bpp__IsLocalActorNotBotNotNPC__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.UpdateDownedStatePercentage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__Percentage__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::UpdateDownedStatePercentage(float bpp__Percentage__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.UpdateDownedStatePercentage"));

	struct
	{
		float                          bpp__Percentage__pf;
	} params = {};

	params.bpp__Percentage__pf = bpp__Percentage__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.UpdateBloodEffect
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::UpdateBloodEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.UpdateBloodEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.StartStaminaCheck
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::StartStaminaCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.StartStaminaCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.RemoveBurningParticleSystem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::RemoveBurningParticleSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.RemoveBurningParticleSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.RemoveAudioState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAudioCharacterStates          bpp__AudioState__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::RemoveAudioState(EAudioCharacterStates bpp__AudioState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAudioState"));

	struct
	{
		EAudioCharacterStates          bpp__AudioState__pf;
	} params = {};

	params.bpp__AudioState__pf = bpp__AudioState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllConditions
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::RemoveAllConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllConditions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllAudioStates
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::RemoveAllAudioStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllAudioStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.PlaySoundForLocalCharacter
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::PlaySoundForLocalCharacter(class UAkAudioEvent* bpp__Event__pf, class ATBLCharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.PlaySoundForLocalCharacter"));

	struct
	{
		class UAkAudioEvent*           bpp__Event__pf;
		class ATBLCharacter*           bpp__Character__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OutOfStaminaUpdate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsOutOfStamina__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OutOfStaminaUpdate(bool bpp__IsOutOfStamina__pf, class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OutOfStaminaUpdate"));

	struct
	{
		bool                           bpp__IsOutOfStamina__pf;
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__IsOutOfStamina__pf = bpp__IsOutOfStamina__pf;
	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnStatChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EStat                          bpp__Type__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FStatEntry              bpp__Stat__pf__const           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// float                          bpp__DeltaValue__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnStatChanged(class AActor* bpp__Actor__pf, EStat bpp__Type__pf, const struct FStatEntry& bpp__Stat__pf__const, float bpp__DeltaValue__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnStatChanged"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		EStat                          bpp__Type__pf;
		struct FStatEntry              bpp__Stat__pf__const;
		float                          bpp__DeltaValue__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Type__pf = bpp__Type__pf;
	params.bpp__Stat__pf__const = bpp__Stat__pf__const;
	params.bpp__DeltaValue__pf = bpp__DeltaValue__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnStaminaUpdate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsLow__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnStaminaUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnStaminaUpdate"));

	struct
	{
		bool                           bpp__IsLow__pf;
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__IsLow__pf = bpp__IsLow__pf;
	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnRevived
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::OnRevived()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnRevived"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnRemoveCondition
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EConditionType                 bpp__Condition__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__ConditionRemover__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnRemoveCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf, class AActor* bpp__ConditionRemover__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnRemoveCondition"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		EConditionType                 bpp__Condition__pf;
		class AActor*                  bpp__ConditionRemover__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Condition__pf = bpp__Condition__pf;
	params.bpp__ConditionRemover__pf = bpp__ConditionRemover__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnPossessed
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AController*             bpp__Controller__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnPossessed(class AController* bpp__Controller__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnPossessed"));

	struct
	{
		class AController*             bpp__Controller__pf;
	} params = {};

	params.bpp__Controller__pf = bpp__Controller__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnKilled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDeathDamageTakenEvent  bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnKilled"));

	struct
	{
		struct FDeathDamageTakenEvent  bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnHealthUpdate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsLow__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnHealthUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnHealthUpdate"));

	struct
	{
		bool                           bpp__IsLow__pf;
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__IsLow__pf = bpp__IsLow__pf;
	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnConstruct
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnConstruct(class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnConstruct"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnCachedMeshApplied_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  bpp__MeshComponent__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnCachedMeshApplied_Event_1(class USkeletalMeshComponent* bpp__MeshComponent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnCachedMeshApplied_Event_1"));

	struct
	{
		class USkeletalMeshComponent*  bpp__MeshComponent__pf;
	} params = {};

	params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnAssemble_CharacterStatesFx
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::OnAssemble_CharacterStatesFx()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnAssemble_CharacterStatesFx"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.OnApplyCondition
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EConditionType                 bpp__Condition__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnApplyCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.OnApplyCondition"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		EConditionType                 bpp__Condition__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Condition__pf = bpp__Condition__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.IsActorDead
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ReturnxValue__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::IsActorDead(bool* bpp__ReturnxValue__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.IsActorDead"));

	struct
	{
		bool                           bpp__ReturnxValue__pfT;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
}


// Function CharacterStatesFx.CharacterStatesFx_C.HasCondition
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EConditionType                 bpp__Condition__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ReturnxValue__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::HasCondition(EConditionType bpp__Condition__pf, bool* bpp__ReturnxValue__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.HasCondition"));

	struct
	{
		EConditionType                 bpp__Condition__pf;
		bool                           bpp__ReturnxValue__pfT;
	} params = {};

	params.bpp__Condition__pf = bpp__Condition__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
}


// Function CharacterStatesFx.CharacterStatesFx_C.HandleRemovingCondition
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EConditionType                 bpp__Condition__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::HandleRemovingCondition(class AActor* bpp__Actor__pf, EConditionType bpp__Condition__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.HandleRemovingCondition"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		EConditionType                 bpp__Condition__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Condition__pf = bpp__Condition__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.GetHighestPriorityCondition
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EAudioCharacterStates          bpp__AudioCondition__pf        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::GetHighestPriorityCondition(EAudioCharacterStates* bpp__AudioCondition__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.GetHighestPriorityCondition"));

	struct
	{
		EAudioCharacterStates          bpp__AudioCondition__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__AudioCondition__pf != nullptr)
		*bpp__AudioCondition__pf = params.bpp__AudioCondition__pf;
}


// Function CharacterStatesFx.CharacterStatesFx_C.ExecuteUbergraph_CharacterStatesFx_4
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::ExecuteUbergraph_CharacterStatesFx_4(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.ExecuteUbergraph_CharacterStatesFx_4"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.CustomEvent_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.CheckStaminaOnSimulatedClients
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterStatesFx_C::CheckStaminaOnSimulatedClients()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.CheckStaminaOnSimulatedClients"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.ApplyAudioState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAudioCharacterStates          bpp__AudioState__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::ApplyAudioState(EAudioCharacterStates bpp__AudioState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.ApplyAudioState"));

	struct
	{
		EAudioCharacterStates          bpp__AudioState__pf;
	} params = {};

	params.bpp__AudioState__pf = bpp__AudioState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterStatesFx.CharacterStatesFx_C.AddBurningParticleSystem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__InActor__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::AddBurningParticleSystem(class ATBLCharacter* bpp__InActor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterStatesFx.CharacterStatesFx_C.AddBurningParticleSystem"));

	struct
	{
		class ATBLCharacter*           bpp__InActor__pf;
	} params = {};

	params.bpp__InActor__pf = bpp__InActor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterStatesFx.CharacterStatesFx_C.OnCachedMeshApplied__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class USkeletalMeshComponent*  bpp__MeshComponent__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterStatesFx_C::OnCachedMeshApplied__DelegateSignature(class USkeletalMeshComponent* bpp__MeshComponent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterStatesFx.CharacterStatesFx_C.OnCachedMeshApplied__DelegateSignature"));

	struct
	{
		class USkeletalMeshComponent*  bpp__MeshComponent__pf;
	} params = {};

	params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
