// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseHorse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseHorse.BaseHorse_C.HandleTeamCustomisation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::HandleTeamCustomisation(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.HandleTeamCustomisation"));

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


// Function BaseHorse.BaseHorse_C.GetPushingCollision
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UPrimitiveComponent*> ABaseHorse_C::GetPushingCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetPushingCollision"));

	struct
	{
		TArray<class UPrimitiveComponent*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.GetWorldCollisionRider
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCapsuleComponent*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UCapsuleComponent* ABaseHorse_C::GetWorldCollisionRider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetWorldCollisionRider"));

	struct
	{
		class UCapsuleComponent*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.ShouldPushBackOnTurnAgainstWall
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseHorse_C::ShouldPushBackOnTurnAgainstWall()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.ShouldPushBackOnTurnAgainstWall"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.GetRiderToWorldCollision
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionResponse> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

TEnumAsByte<ECollisionResponse> ABaseHorse_C::GetRiderToWorldCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetRiderToWorldCollision"));

	struct
	{
		TEnumAsByte<ECollisionResponse> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.FxEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EventScale                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Target_                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseHorse_C::FxEvent(const struct FName& EventName, float EventScale, bool Target_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.FxEvent"));

	struct
	{
		struct FName                   EventName;
		float                          EventScale;
		bool                           Target_;
	} params = {};

	params.EventName = EventName;
	params.EventScale = EventScale;
	params.Target_ = Target_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.GetWorldCollisionBack
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UPrimitiveComponent*> ABaseHorse_C::GetWorldCollisionBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetWorldCollisionBack"));

	struct
	{
		TArray<class UPrimitiveComponent*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.GetWorldCollisionFront
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UPrimitiveComponent*> ABaseHorse_C::GetWorldCollisionFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetWorldCollisionFront"));

	struct
	{
		TArray<class UPrimitiveComponent*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseHorse.BaseHorse_C.GetWorldCollisionLegs
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCapsuleComponent*       FrontLegs                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCapsuleComponent*       BackLegs                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::GetWorldCollisionLegs(class UCapsuleComponent** FrontLegs, class UCapsuleComponent** BackLegs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.GetWorldCollisionLegs"));

	struct
	{
		class UCapsuleComponent*       FrontLegs;
		class UCapsuleComponent*       BackLegs;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FrontLegs != nullptr)
		*FrontLegs = params.FrontLegs;
	if (BackLegs != nullptr)
		*BackLegs = params.BackLegs;
}


// Function BaseHorse.BaseHorse_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABaseHorse_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.InitAltWeightsState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseHorse_C::InitAltWeightsState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.InitAltWeightsState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.HorseToWorldImpact
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// EHorseImpactLocation           ImpactLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHorseToWorldImpactType        ImpactType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ImpactCombatState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ImpactSpeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::HorseToWorldImpact(const struct FHitResult& Hit, EHorseImpactLocation ImpactLocation, EHorseToWorldImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.HorseToWorldImpact"));

	struct
	{
		struct FHitResult              Hit;
		EHorseImpactLocation           ImpactLocation;
		EHorseToWorldImpactType        ImpactType;
		struct FName                   ImpactCombatState;
		float                          ImpactSpeed;
	} params = {};

	params.Hit = Hit;
	params.ImpactLocation = ImpactLocation;
	params.ImpactType = ImpactType;
	params.ImpactCombatState = ImpactCombatState;
	params.ImpactSpeed = ImpactSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.HorseToCharacterImpact
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           TargetCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHorseImpactLocation           ImpactLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHorseToCharacterImpactType    ImpactType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ImpactCombatState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ImpactSpeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::HorseToCharacterImpact(class ATBLCharacter* TargetCharacter, EHorseImpactLocation ImpactLocation, EHorseToCharacterImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.HorseToCharacterImpact"));

	struct
	{
		class ATBLCharacter*           TargetCharacter;
		EHorseImpactLocation           ImpactLocation;
		EHorseToCharacterImpactType    ImpactType;
		struct FName                   ImpactCombatState;
		float                          ImpactSpeed;
	} params = {};

	params.TargetCharacter = TargetCharacter;
	params.ImpactLocation = ImpactLocation;
	params.ImpactType = ImpactType;
	params.ImpactCombatState = ImpactCombatState;
	params.ImpactSpeed = ImpactSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.HorseToHorseImpact
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AHorse*                  TargetHorse                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHorseImpactLocation           ImpactLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHorseToHorseImpactType        ImpactType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ImpactCombatState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ImpactSpeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::HorseToHorseImpact(class AHorse* TargetHorse, EHorseImpactLocation ImpactLocation, EHorseToHorseImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.HorseToHorseImpact"));

	struct
	{
		class AHorse*                  TargetHorse;
		EHorseImpactLocation           ImpactLocation;
		EHorseToHorseImpactType        ImpactType;
		struct FName                   ImpactCombatState;
		float                          ImpactSpeed;
	} params = {};

	params.TargetHorse = TargetHorse;
	params.ImpactLocation = ImpactLocation;
	params.ImpactType = ImpactType;
	params.ImpactCombatState = ImpactCombatState;
	params.ImpactSpeed = ImpactSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABaseHorse_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature"));

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


// Function BaseHorse.BaseHorse_C.RiderToWorldImpact
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABaseHorse_C::RiderToWorldImpact(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.RiderToWorldImpact"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EFaction                       NewFaction                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature(EFaction NewFaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature"));

	struct
	{
		EFaction                       NewFaction;
	} params = {};

	params.NewFaction = NewFaction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.OnDriverMount_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::OnDriverMount_Event_1(class ATBLCharacter* Driver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.OnDriverMount_Event_1"));

	struct
	{
		class ATBLCharacter*           Driver;
	} params = {};

	params.Driver = Driver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.OnDriverDismount_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EDismountType                  DismountType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::OnDriverDismount_Event_1(class ATBLCharacter* Driver, EDismountType DismountType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.OnDriverDismount_Event_1"));

	struct
	{
		class ATBLCharacter*           Driver;
		EDismountType                  DismountType;
	} params = {};

	params.Driver = Driver;
	params.DismountType = DismountType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.ApplyDamageToCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseHorse_C::ApplyDamageToCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.ApplyDamageToCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseHorse.BaseHorse_C.ExecuteUbergraph_BaseHorse
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseHorse_C::ExecuteUbergraph_BaseHorse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseHorse.BaseHorse_C.ExecuteUbergraph_BaseHorse"));

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
