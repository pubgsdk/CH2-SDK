// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Cinematics_Helper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cinematics_Helper.Cinematics_Helper_C.Run
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Run()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Run"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.BattleCry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Proportion                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::BattleCry(float Proportion, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.BattleCry"));

	struct
	{
		float                          Proportion;
		EFaction                       Faction;
	} params = {};

	params.Proportion = Proportion;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.PRIVATE_Do One Cry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::PRIVATE_Do_One_Cry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.PRIVATE_Do One Cry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Start Autoruns
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EAutorunMovementMode           Autorun_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::Start_Autoruns(EAutorunMovementMode Autorun_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Start Autoruns"));

	struct
	{
		EAutorunMovementMode           Autorun_Type;
	} params = {};

	params.Autorun_Type = Autorun_Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Walk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Walk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Walk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.CrouchWalk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::CrouchWalk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.CrouchWalk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Sprint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Sprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Sprint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Unlock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::Unlock(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Unlock"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Unlock Level Characters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Unlock_Level_Characters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Unlock Level Characters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Allow Control
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Allow_Control()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Allow Control"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.Allow Control Faction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::Allow_Control_Faction(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.Allow Control Faction"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.EnableCinematicMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::EnableCinematicMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.EnableCinematicMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.DisableCinematicMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::DisableCinematicMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.DisableCinematicMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.LoadStreamLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::LoadStreamLevel(const struct FName& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.LoadStreamLevel"));

	struct
	{
		struct FName                   LevelName;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.UnloadStreamLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::UnloadStreamLevel(const struct FName& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.UnloadStreamLevel"));

	struct
	{
		struct FName                   LevelName;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.BurnStuff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::BurnStuff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.BurnStuff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.LoadStreamLevelInvisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Level_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::LoadStreamLevelInvisible(const struct FName& Level_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.LoadStreamLevelInvisible"));

	struct
	{
		struct FName                   Level_Name;
	} params = {};

	params.Level_Name = Level_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.SetVisibleStreamLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Level_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::SetVisibleStreamLevel(const struct FName& Level_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.SetVisibleStreamLevel"));

	struct
	{
		struct FName                   Level_Name;
	} params = {};

	params.Level_Name = Level_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.LockAutorun
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::LockAutorun()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.LockAutorun"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.UnlockAutorun
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::UnlockAutorun()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.UnlockAutorun"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.RestrictControlCharacters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::RestrictControlCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.RestrictControlCharacters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.AllowControlCharacters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::AllowControlCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.AllowControlCharacters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.LockCharactersFromTaggedSpawners
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SpawnerTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::LockCharactersFromTaggedSpawners(const struct FName& SpawnerTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.LockCharactersFromTaggedSpawners"));

	struct
	{
		struct FName                   SpawnerTag;
	} params = {};

	params.SpawnerTag = SpawnerTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.UnlockCharactersFromTaggedSpawners
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SpawnerTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::UnlockCharactersFromTaggedSpawners(const struct FName& SpawnerTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.UnlockCharactersFromTaggedSpawners"));

	struct
	{
		struct FName                   SpawnerTag;
	} params = {};

	params.SpawnerTag = SpawnerTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.HideCharactersFromTaggedSpawner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SpawnerTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::HideCharactersFromTaggedSpawner(const struct FName& SpawnerTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.HideCharactersFromTaggedSpawner"));

	struct
	{
		struct FName                   SpawnerTag;
	} params = {};

	params.SpawnerTag = SpawnerTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.UnhideCharactersFromTaggedSpawner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SpawnerTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::UnhideCharactersFromTaggedSpawner(const struct FName& SpawnerTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.UnhideCharactersFromTaggedSpawner"));

	struct
	{
		struct FName                   SpawnerTag;
	} params = {};

	params.SpawnerTag = SpawnerTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.MarkSpawnersNoLongerJoinable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::MarkSpawnersNoLongerJoinable(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.MarkSpawnersNoLongerJoinable"));

	struct
	{
		struct FName                   Tag;
	} params = {};

	params.Tag = Tag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Cinematics_Helper.Cinematics_Helper_C.ExecuteUbergraph_Cinematics_Helper
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACinematics_Helper_C::ExecuteUbergraph_Cinematics_Helper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.ExecuteUbergraph_Cinematics_Helper"));

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


// Function Cinematics_Helper.Cinematics_Helper_C.IntroBurnStuff__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACinematics_Helper_C::IntroBurnStuff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Cinematics_Helper.Cinematics_Helper_C.IntroBurnStuff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
