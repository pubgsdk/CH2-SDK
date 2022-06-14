// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamemodeFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamemodeFunctions.GamemodeFunctions_C.BroadcastSoundAtLocation
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkAudioEvent*           Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::BroadcastSoundAtLocation(EFaction Faction, const struct FVector& Location, class UAkAudioEvent* Sound, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastSoundAtLocation"));

	struct
	{
		EFaction                       Faction;
		struct FVector                 Location;
		class UAkAudioEvent*           Sound;
		class UObject*                 __WorldContext;
	} params = {};

	params.Faction = Faction;
	params.Location = Location;
	params.Sound = Sound;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GamemodeFunctions.GamemodeFunctions_C.ManuallyPlayCommanderMessages
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FGameModeMessageTable> Messages                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::ManuallyPlayCommanderMessages(const TScriptInterface<class UStageInterface>& Stage, class UObject* __WorldContext, TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.ManuallyPlayCommanderMessages"));

	struct
	{
		TScriptInterface<class UStageInterface> Stage;
		TArray<struct FGameModeMessageTable> Messages;
		class UObject*                 __WorldContext;
	} params = {};

	params.Stage = Stage;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GamemodeFunctions.GamemodeFunctions_C.IsListenServer
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ContextObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::IsListenServer(class AActor* ContextObject, class UObject* __WorldContext, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.IsListenServer"));

	struct
	{
		class AActor*                  ContextObject;
		class UObject*                 __WorldContext;
		bool                           Return_Value;
	} params = {};

	params.ContextObject = ContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmPrivateMessage
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETdmMessageTypes>  TdmMessageType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::BroadcastTdmPrivateMessage(TEnumAsByte<ETdmMessageTypes> TdmMessageType, int Value, class APlayerController* PlayerController, class UObject* Object, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmPrivateMessage"));

	struct
	{
		TEnumAsByte<ETdmMessageTypes>  TdmMessageType;
		int                            Value;
		class APlayerController*       PlayerController;
		class UObject*                 Object;
		class UObject*                 __WorldContext;
	} params = {};

	params.TdmMessageType = TdmMessageType;
	params.Value = Value;
	params.PlayerController = PlayerController;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmMessage
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETdmMessageTypes>  TdmMessageType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 WorldContextObject             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::BroadcastTdmMessage(TEnumAsByte<ETdmMessageTypes> TdmMessageType, int Value, class UObject* WorldContextObject, class UObject* Object, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmMessage"));

	struct
	{
		TEnumAsByte<ETdmMessageTypes>  TdmMessageType;
		int                            Value;
		class UObject*                 WorldContextObject;
		class UObject*                 Object;
		class UObject*                 __WorldContext;
	} params = {};

	params.TdmMessageType = TdmMessageType;
	params.Value = Value;
	params.WorldContextObject = WorldContextObject;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GamemodeFunctions.GamemodeFunctions_C.BroadcastGameModeMessages
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> Messages                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::BroadcastGameModeMessages(class UObject* __WorldContext, TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastGameModeMessages"));

	struct
	{
		TArray<struct FGameModeMessageTable> Messages;
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Player With Most Kills Victory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Player_With_Most_Kills_Victory(EFaction Faction, int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Player With Most Kills Victory"));

	struct
	{
		EFaction                       Faction;
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.Faction = Faction;
	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Get Level Sequence from Asset Ptr (4.16 workaround, remove in 4.18)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ALevelSequenceActor> Asset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UObject*                 World_Context_Object           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ALevelSequenceActor*     Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Get_Level_Sequence_from_Asset_Ptr__4_16_workaround__remove_in_4_18_(TSoftObjectPtr<class ALevelSequenceActor> Asset, class UObject* World_Context_Object, class UObject* __WorldContext, class ALevelSequenceActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Get Level Sequence from Asset Ptr (4.16 workaround, remove in 4.18)"));

	struct
	{
		TSoftObjectPtr<class ALevelSequenceActor> Asset;
		class UObject*                 World_Context_Object;
		class UObject*                 __WorldContext;
		class ALevelSequenceActor*     Actor;
	} params = {};

	params.Asset = Asset;
	params.World_Context_Object = World_Context_Object;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Get Current Stage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Get_Current_Stage(class UObject* __WorldContext, class UObject** Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Get Current Stage"));

	struct
	{
		class UObject*                 __WorldContext;
		class UObject*                 Stage;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn with manual start (preferred)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Force_Spawning                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ASpawnWave*              Wave                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Start_Initial_Spawn_with_manual_start__preferred_(class ASpawner* Spawner, EFaction Faction, bool Force_Spawning, class UObject* __WorldContext, class ASpawnWave** Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn with manual start (preferred)"));

	struct
	{
		class ASpawner*                Spawner;
		EFaction                       Faction;
		bool                           Force_Spawning;
		class UObject*                 __WorldContext;
		class ASpawnWave*              Wave;
	} params = {};

	params.Spawner = Spawner;
	params.Faction = Faction;
	params.Force_Spawning = Force_Spawning;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Wave != nullptr)
		*Wave = params.Wave;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Auto Start All Spawn Sequences Like TDM Does It
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Auto_Start_All_Spawn_Sequences_Like_TDM_Does_It(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Auto Start All Spawn Sequences Like TDM Does It"));

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


// Function GamemodeFunctions.GamemodeFunctions_C.Defenders Victory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Defenders_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Defenders Victory"));

	struct
	{
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Attackers Victory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Attackers_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Attackers Victory"));

	struct
	{
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawns From World Settings
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Force_Spawning                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Manual_start                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ASpawnWave*              Out_agatha_wave                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ASpawnWave*              Out_mason_wave                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Start_Initial_Spawns_From_World_Settings(bool Force_Spawning, bool Manual_start, class UObject* __WorldContext, class ASpawnWave** Out_agatha_wave, class ASpawnWave** Out_mason_wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawns From World Settings"));

	struct
	{
		bool                           Force_Spawning;
		bool                           Manual_start;
		class UObject*                 __WorldContext;
		class ASpawnWave*              Out_agatha_wave;
		class ASpawnWave*              Out_mason_wave;
	} params = {};

	params.Force_Spawning = Force_Spawning;
	params.Manual_start = Manual_start;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out_agatha_wave != nullptr)
		*Out_agatha_wave = params.Out_agatha_wave;
	if (Out_mason_wave != nullptr)
		*Out_mason_wave = params.Out_mason_wave;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn (With duration!)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Force_Spawning                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Seconds_before_spawning_starts (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ASpawnWave*              Wave                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamemodeFunctions_C::Start_Initial_Spawn__With_duration__(class ASpawner* Spawner, EFaction Faction, bool Force_Spawning, float Seconds_before_spawning_starts, class UObject* __WorldContext, class ASpawnWave** Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn (With duration!)"));

	struct
	{
		class ASpawner*                Spawner;
		EFaction                       Faction;
		bool                           Force_Spawning;
		float                          Seconds_before_spawning_starts;
		class UObject*                 __WorldContext;
		class ASpawnWave*              Wave;
	} params = {};

	params.Spawner = Spawner;
	params.Faction = Faction;
	params.Force_Spawning = Force_Spawning;
	params.Seconds_before_spawning_starts = Seconds_before_spawning_starts;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Wave != nullptr)
		*Wave = params.Wave;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Draw
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Draw(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Draw"));

	struct
	{
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Blue Victory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Blue_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Blue Victory"));

	struct
	{
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function GamemodeFunctions.GamemodeFunctions_C.Red Victory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            StageIdNum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamemodeFunctions_C::Red_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GamemodeFunctions.GamemodeFunctions_C.Red Victory"));

	struct
	{
		int                            StageIdNum;
		class UObject*                 __WorldContext;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.StageIdNum = StageIdNum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
