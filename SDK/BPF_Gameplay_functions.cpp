// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Gameplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_Gameplay.BPF_Gameplay_C.GetShoveInstigator
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ShoveInstigator                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Gameplay_C::GetShoveInstigator(class ATBLCharacter* Character, class UObject* __WorldContext, class AActor** ShoveInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.GetShoveInstigator"));

	struct
	{
		class ATBLCharacter*           Character;
		class UObject*                 __WorldContext;
		class AActor*                  ShoveInstigator;
	} params = {};

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ShoveInstigator != nullptr)
		*ShoveInstigator = params.ShoveInstigator;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsTackleAttack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsTackleAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsTackleAttack"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsInJabKnockback
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsInJabKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsInJabKnockback"));

	struct
	{
		class ATBLCharacter*           Character;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsJabAttack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsJabAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsJabAttack"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsInShoveKnockback
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsInShoveKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsInShoveKnockback"));

	struct
	{
		class ATBLCharacter*           Character;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Character = Character;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsControllerPlayerControlled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsControllerPlayerControlled(class AController* Controller, class UObject* __WorldContext, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsControllerPlayerControlled"));

	struct
	{
		class AController*             Controller;
		class UObject*                 __WorldContext;
		bool                           bReturnValue;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnPlayerControlled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnPlayerControlled(class APawn* Pawn, class UObject* __WorldContext, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnPlayerControlled"));

	struct
	{
		class APawn*                   Pawn;
		class UObject*                 __WorldContext;
		bool                           bReturnValue;
	} params = {};

	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPlayerStatePlayerControlled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPlayerStatePlayerControlled(class APlayerState* PlayerState, class UObject* __WorldContext, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPlayerStatePlayerControlled"));

	struct
	{
		class APlayerState*            PlayerState;
		class UObject*                 __WorldContext;
		bool                           bReturnValue;
	} params = {};

	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsObjectPlayerControlled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsObjectPlayerControlled(class UObject* Object, class UObject* __WorldContext, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsObjectPlayerControlled"));

	struct
	{
		class UObject*                 Object;
		class UObject*                 __WorldContext;
		bool                           bReturnValue;
	} params = {};

	params.Object = Object;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.Is Shove Or Jab Or Headbutt Ability Spec
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySpec*            _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           __                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::Is_Shove_Or_Jab_Or_Headbutt_Ability_Spec(class UAbilitySpec* _, class UObject* __WorldContext, bool* __)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.Is Shove Or Jab Or Headbutt Ability Spec"));

	struct
	{
		class UAbilitySpec*            _;
		class UObject*                 __WorldContext;
		bool                           __;
	} params = {};

	params._ = _;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (__ != nullptr)
		*__ = params.__;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnDowned
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnDowned(class APawn* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnDowned"));

	struct
	{
		class APawn*                   Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsShoveAttack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsShoveAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsShoveAttack"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.TBLGetActorsInSphere
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpherePos                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SphereRadius                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DebugDraw                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBPF_Gameplay_C::TBLGetActorsInSphere(const struct FVector& SpherePos, float SphereRadius, bool DebugDraw, class UObject* __WorldContext, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.TBLGetActorsInSphere"));

	struct
	{
		struct FVector                 SpherePos;
		float                          SphereRadius;
		bool                           DebugDraw;
		class UObject*                 __WorldContext;
		TArray<class AActor*>          OutActors;
		bool                           ReturnValue;
	} params = {};

	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.DebugDraw = DebugDraw;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPlayerControlled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           __                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPlayerControlled(class AActor* _, class UObject* __WorldContext, bool* __)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPlayerControlled"));

	struct
	{
		class AActor*                  _;
		class UObject*                 __WorldContext;
		bool                           __;
	} params = {};

	params._ = _;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (__ != nullptr)
		*__ = params.__;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnInSprintAttack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnInSprintAttack(class APawn* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnInSprintAttack"));

	struct
	{
		class APawn*                   Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnInSpecialAttack
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnInSpecialAttack(class APawn* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnInSpecialAttack"));

	struct
	{
		class APawn*                   Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.TBLApplySphereDamageAndCC
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Radius                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CrowdControl                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECrowdControlCombatState       CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCrowdControlParams     CrowdControlParams             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           IgnoreSelf                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           NoDamageCauserForAllies        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bOverrideImpactPoint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Gameplay_C::TBLApplySphereDamageAndCC(class AActor* DamageCauser, const struct FVector& Location, float Radius, float Amount, class UDamageSource* DamageSource, bool CrowdControl, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool IgnoreSelf, bool NoDamageCauserForAllies, bool bOverrideImpactPoint, class UObject* __WorldContext, TArray<class AActor*>* ActorsToIgnore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.TBLApplySphereDamageAndCC"));

	struct
	{
		class AActor*                  DamageCauser;
		struct FVector                 Location;
		float                          Radius;
		float                          Amount;
		class UDamageSource*           DamageSource;
		bool                           CrowdControl;
		ECrowdControlCombatState       CombatState;
		struct FCrowdControlParams     CrowdControlParams;
		TArray<class AActor*>          ActorsToIgnore;
		bool                           IgnoreSelf;
		bool                           NoDamageCauserForAllies;
		bool                           bOverrideImpactPoint;
		class UObject*                 __WorldContext;
	} params = {};

	params.DamageCauser = DamageCauser;
	params.Location = Location;
	params.Radius = Radius;
	params.Amount = Amount;
	params.DamageSource = DamageSource;
	params.CrowdControl = CrowdControl;
	params.CombatState = CombatState;
	params.CrowdControlParams = CrowdControlParams;
	params.IgnoreSelf = IgnoreSelf;
	params.NoDamageCauserForAllies = NoDamageCauserForAllies;
	params.bOverrideImpactPoint = bOverrideImpactPoint;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function BPF_Gameplay.BPF_Gameplay_C.TBLApplyCrowdControl
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageTaker                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlCombatState       CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCrowdControlParams     CrowdControlParams             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           bAutonomous                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Gameplay_C::TBLApplyCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.TBLApplyCrowdControl"));

	struct
	{
		class AActor*                  DamageTaker;
		class AActor*                  DamageCauser;
		ECrowdControlCombatState       CombatState;
		struct FCrowdControlParams     CrowdControlParams;
		bool                           bAutonomous;
		class UObject*                 __WorldContext;
	} params = {};

	params.DamageTaker = DamageTaker;
	params.DamageCauser = DamageCauser;
	params.CombatState = CombatState;
	params.CrowdControlParams = CrowdControlParams;
	params.bAutonomous = bAutonomous;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsCharacterParryingWithShield
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBPF_Gameplay_C::IsCharacterParryingWithShield(class ATBLCharacter* Target, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsCharacterParryingWithShield"));

	struct
	{
		class ATBLCharacter*           Target;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BPF_Gameplay.BPF_Gameplay_C.TBLKillPawn
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageTaker                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Gameplay_C::TBLKillPawn(class AActor* DamageTaker, class AActor* DamageCauser, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.TBLKillPawn"));

	struct
	{
		class AActor*                  DamageTaker;
		class AActor*                  DamageCauser;
		class UObject*                 __WorldContext;
	} params = {};

	params.DamageTaker = DamageTaker;
	params.DamageCauser = DamageCauser;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnAirborne
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnAirborne(class APawn* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnAirborne"));

	struct
	{
		class APawn*                   Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsPawnSprinting
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsPawnSprinting(class APawn* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsPawnSprinting"));

	struct
	{
		class APawn*                   Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsInCrowdControlState
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsInCrowdControlState(class AActor* Target, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsInCrowdControlState"));

	struct
	{
		class AActor*                  Target;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_Gameplay.BPF_Gameplay_C.TBLApplyDamageAndCrowdControl
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageTaker                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CrowdControl                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECrowdControlCombatState       CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCrowdControlParams     CrowdControlParams             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           bAutonomous                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AInventoryItem*          InventoryItemOverride          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bOverrideImpactPoint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 DamageSourceLocationOverride   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_Gameplay_C::TBLApplyDamageAndCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, float Amount, class UDamageSource* DamageSource, bool CrowdControl, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class AInventoryItem* InventoryItemOverride, bool bOverrideImpactPoint, const struct FVector& DamageSourceLocationOverride, class AActor* DamageInstigator, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.TBLApplyDamageAndCrowdControl"));

	struct
	{
		class AActor*                  DamageTaker;
		class AActor*                  DamageCauser;
		float                          Amount;
		class UDamageSource*           DamageSource;
		bool                           CrowdControl;
		ECrowdControlCombatState       CombatState;
		struct FCrowdControlParams     CrowdControlParams;
		bool                           bAutonomous;
		class AInventoryItem*          InventoryItemOverride;
		bool                           bOverrideImpactPoint;
		struct FVector                 DamageSourceLocationOverride;
		class AActor*                  DamageInstigator;
		class UObject*                 __WorldContext;
	} params = {};

	params.DamageTaker = DamageTaker;
	params.DamageCauser = DamageCauser;
	params.Amount = Amount;
	params.DamageSource = DamageSource;
	params.CrowdControl = CrowdControl;
	params.CombatState = CombatState;
	params.CrowdControlParams = CrowdControlParams;
	params.bAutonomous = bAutonomous;
	params.InventoryItemOverride = InventoryItemOverride;
	params.bOverrideImpactPoint = bOverrideImpactPoint;
	params.DamageSourceLocationOverride = DamageSourceLocationOverride;
	params.DamageInstigator = DamageInstigator;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_Gameplay.BPF_Gameplay_C.IsMounted
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsMounted(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsMounted"));

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


// Function BPF_Gameplay.BPF_Gameplay_C.IsEnemy
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TestA                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  TestB                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gameplay_C::IsEnemy(class AActor* TestA, class AActor* TestB, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gameplay.BPF_Gameplay_C.IsEnemy"));

	struct
	{
		class AActor*                  TestA;
		class AActor*                  TestB;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.TestA = TestA;
	params.TestB = TestB;
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
