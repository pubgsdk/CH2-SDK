// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicTBLSpectatorPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Get Relevant Overview Sequence
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*     Sequence                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::Get_Relevant_Overview_Sequence(class ALevelSequenceActor** Sequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Get Relevant Overview Sequence"));

	struct
	{
		class ALevelSequenceActor*     Sequence;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACinematicTBLSpectatorPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACinematicTBLSpectatorPawn_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Start the overview sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematicTBLSpectatorPawn_C::Start_the_overview_sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Start the overview sequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveUnpossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             OldController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveUnpossessed"));

	struct
	{
		class AController*             OldController;
	} params = {};

	params.OldController = OldController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Current Stage Changed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 New_Stage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Current Stage Changed_Event_1"));

	struct
	{
		class UObject*                 Previous_Stage;
		class UObject*                 New_Stage;
	} params = {};

	params.Previous_Stage = Previous_Stage;
	params.New_Stage = New_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceivePossessed"));

	struct
	{
		class AController*             NewController;
	} params = {};

	params.NewController = NewController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.SpawnWaveReplicated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::SpawnWaveReplicated(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.SpawnWaveReplicated"));

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


// Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ExecuteUbergraph_CinematicTBLSpectatorPawn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematicTBLSpectatorPawn_C::ExecuteUbergraph_CinematicTBLSpectatorPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ExecuteUbergraph_CinematicTBLSpectatorPawn"));

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
