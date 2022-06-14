// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseSpawner.BaseSpawner_C.KillHorsesInRadius
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::KillHorsesInRadius(const struct FVector& ForwardVector, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.KillHorsesInRadius"));

	struct
	{
		struct FVector                 ForwardVector;
		struct FVector                 Location;
	} params = {};

	params.ForwardVector = ForwardVector;
	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.KillConstructablesInRadius
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::KillConstructablesInRadius(const struct FVector& ForwardVector, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.KillConstructablesInRadius"));

	struct
	{
		struct FVector                 ForwardVector;
		struct FVector                 Location;
	} params = {};

	params.ForwardVector = ForwardVector;
	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABaseSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.Cinematics_ControllerPossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::Cinematics_ControllerPossessedPawn(class ATBLPlayerController* Controller, class ATBLCharacter* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.Cinematics_ControllerPossessedPawn"));

	struct
	{
		class ATBLPlayerController*    Controller;
		class ATBLCharacter*           Pawn;
	} params = {};

	params.Controller = Controller;
	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.Add HUD Marker to Wave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::Add_HUD_Marker_to_Wave(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.Add HUD Marker to Wave"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.Interp Z
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::Interp_Z(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.Interp Z"));

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


// Function BaseSpawner.BaseSpawner_C.Interp rot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::Interp_rot(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.Interp rot"));

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


// Function BaseSpawner.BaseSpawner_C.OnPossessedCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::OnPossessedCharacter(class ATBLCharacter* Character, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.OnPossessedCharacter"));

	struct
	{
		class ATBLCharacter*           Character;
		class AController*             Controller;
	} params = {};

	params.Character = Character;
	params.Controller = Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABaseSpawner_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.OnKilled_Event_1"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.StopPlayerKilledStageAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpawner_C::StopPlayerKilledStageAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.StopPlayerKilledStageAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.OnSpawnedCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         SpawnComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::OnSpawnedCharacter(class ATBLCharacter* NewCharacter, class USceneComponent* SpawnComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.OnSpawnedCharacter"));

	struct
	{
		class ATBLCharacter*           NewCharacter;
		class USceneComponent*         SpawnComp;
	} params = {};

	params.NewCharacter = NewCharacter;
	params.SpawnComp = SpawnComp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpawner.BaseSpawner_C.ExecuteUbergraph_BaseSpawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::ExecuteUbergraph_BaseSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.ExecuteUbergraph_BaseSpawner"));

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


// Function BaseSpawner.BaseSpawner_C.OnSpawnedPlayerKilled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpawner_C::OnSpawnedPlayerKilled__DelegateSignature(class AActor* Killed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpawner.BaseSpawner_C.OnSpawnedPlayerKilled__DelegateSignature"));

	struct
	{
		class AActor*                  Killed;
	} params = {};

	params.Killed = Killed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
