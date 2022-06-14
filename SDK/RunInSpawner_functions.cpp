// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RunInSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RunInSpawner.RunInSpawner_C.Make Autorun Params
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bInitialRunIn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FAutorunParams          AutorunParams                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ARunInSpawner_C::Make_Autorun_Params(bool bInitialRunIn, struct FAutorunParams* AutorunParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.Make Autorun Params"));

	struct
	{
		bool                           bInitialRunIn;
		struct FAutorunParams          AutorunParams;
	} params = {};

	params.bInitialRunIn = bInitialRunIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutorunParams != nullptr)
		*AutorunParams = params.AutorunParams;
}


// Function RunInSpawner.RunInSpawner_C.Get Speed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Speed                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::Get_Speed(float* Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.Get Speed"));

	struct
	{
		float                          Speed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function RunInSpawner.RunInSpawner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARunInSpawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.OnSpawnedCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         SpawnComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::OnSpawnedCharacter(class ATBLCharacter* NewCharacter, class USceneComponent* SpawnComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.OnSpawnedCharacter"));

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


// Function RunInSpawner.RunInSpawner_C.Cinematics_ControllerPossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::Cinematics_ControllerPossessedPawn(class ATBLPlayerController* Controller, class ATBLCharacter* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.Cinematics_ControllerPossessedPawn"));

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


// Function RunInSpawner.RunInSpawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ARunInSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.OnSpawningStarted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::OnSpawningStarted_Event_1(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.OnSpawningStarted_Event_1"));

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


// Function RunInSpawner.RunInSpawner_C.OnSpawningEnded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARunInSpawner_C::OnSpawningEnded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.OnSpawningEnded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.K2_OnBecomeViewTarget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.K2_OnBecomeViewTarget"));

	struct
	{
		class APlayerController*       PC;
	} params = {};

	params.PC = PC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.OnPossessedCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::OnPossessedCharacter(class ATBLCharacter* Character, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.OnPossessedCharacter"));

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


// Function RunInSpawner.RunInSpawner_C.Start Autorun
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AutomaticallyStop              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EAutorunMovementMode           Autorun_Movement_Mode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::Start_Autorun(bool AutomaticallyStop, EAutorunMovementMode Autorun_Movement_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.Start Autorun"));

	struct
	{
		bool                           AutomaticallyStop;
		EAutorunMovementMode           Autorun_Movement_Mode;
	} params = {};

	params.AutomaticallyStop = AutomaticallyStop;
	params.Autorun_Movement_Mode = Autorun_Movement_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.OnCinematicAllowedControl_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           ThisCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::OnCinematicAllowedControl_Event_1(class ATBLCharacter* ThisCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.OnCinematicAllowedControl_Event_1"));

	struct
	{
		class ATBLCharacter*           ThisCharacter;
	} params = {};

	params.ThisCharacter = ThisCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.Set Autorun Mode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EAutorunMovementMode           Autorun_Movement_Mode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::Set_Autorun_Mode(EAutorunMovementMode Autorun_Movement_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.Set Autorun Mode"));

	struct
	{
		EAutorunMovementMode           Autorun_Movement_Mode;
	} params = {};

	params.Autorun_Movement_Mode = Autorun_Movement_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.StartInitialAutoRun
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAutomaticallyStop             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EAutorunMovementMode           AutorunMovementMode            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::StartInitialAutoRun(bool bAutomaticallyStop, EAutorunMovementMode AutorunMovementMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.StartInitialAutoRun"));

	struct
	{
		bool                           bAutomaticallyStop;
		EAutorunMovementMode           AutorunMovementMode;
	} params = {};

	params.bAutomaticallyStop = bAutomaticallyStop;
	params.AutorunMovementMode = AutorunMovementMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RunInSpawner.RunInSpawner_C.ExecuteUbergraph_RunInSpawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARunInSpawner_C::ExecuteUbergraph_RunInSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RunInSpawner.RunInSpawner_C.ExecuteUbergraph_RunInSpawner"));

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
