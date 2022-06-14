// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ActorHealthBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorHealthBar.ActorHealthBar_C.UpdateOverheal
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UActorHealthBar_C::UpdateOverheal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.UpdateOverheal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.UpdateHealOverTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UActorHealthBar_C::UpdateHealOverTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.UpdateHealOverTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.UpdateStatText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UActorHealthBar_C::UpdateStatText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.UpdateStatText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.GetOwningActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UActorHealthBar_C::GetOwningActor(class AActor** Actor, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.GetOwningActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           Success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function ActorHealthBar.ActorHealthBar_C.SetPercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Initialize                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UActorHealthBar_C::SetPercentage(bool Initialize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.SetPercentage"));

	struct
	{
		bool                           Initialize;
	} params = {};

	params.Initialize = Initialize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.GetStatsComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStatsComponent*         Stats_Component                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::GetStatsComponent(class UStatsComponent** Stats_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.GetStatsComponent"));

	struct
	{
		class UStatsComponent*         Stats_Component;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stats_Component != nullptr)
		*Stats_Component = params.Stats_Component;
}


// Function ActorHealthBar.ActorHealthBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UActorHealthBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.PreConstruct"));

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


// Function ActorHealthBar.ActorHealthBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActorHealthBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EStat                          StatType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStatEntry              Stat                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// float                          DeltaValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnStatChanged_Event_1(class AActor* Actor, EStat StatType, const struct FStatEntry& Stat, float DeltaValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EStat                          StatType;
		struct FStatEntry              Stat;
		float                          DeltaValue;
	} params = {};

	params.Actor = Actor;
	params.StatType = StatType;
	params.Stat = Stat;
	params.DeltaValue = DeltaValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.InitializeBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::InitializeBar(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.InitializeBar"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UActorHealthBar_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnKilled_Event_1"));

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


// Function ActorHealthBar.ActorHealthBar_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnClientPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_2
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EStat                          StatType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStatEntry              Stat                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// float                          DeltaValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnStatChanged_Event_2(class AActor* Actor, EStat StatType, const struct FStatEntry& Stat, float DeltaValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_2"));

	struct
	{
		class AActor*                  Actor;
		EStat                          StatType;
		struct FStatEntry              Stat;
		float                          DeltaValue;
	} params = {};

	params.Actor = Actor;
	params.StatType = StatType;
	params.Stat = Stat;
	params.DeltaValue = DeltaValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.Tick"));

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


// Function ActorHealthBar.ActorHealthBar_C.ToggleRegenIndication
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UActorHealthBar_C::ToggleRegenIndication(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.ToggleRegenIndication"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.ExecuteUbergraph_ActorHealthBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::ExecuteUbergraph_ActorHealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.ExecuteUbergraph_ActorHealthBar"));

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


// Function ActorHealthBar.ActorHealthBar_C.OnRecievedNewStatsComp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatsComponent*         StatsComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnRecievedNewStatsComp__DelegateSignature(class UStatsComponent* StatsComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnRecievedNewStatsComp__DelegateSignature"));

	struct
	{
		class UStatsComponent*         StatsComp;
	} params = {};

	params.StatsComp = StatsComp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorHealthBar.ActorHealthBar_C.OnUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorHealthBar_C*       Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorHealthBar_C::OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorHealthBar.ActorHealthBar_C.OnUpdate__DelegateSignature"));

	struct
	{
		class UActorHealthBar_C*       Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
