// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_Deployable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnVisualizationActorSpawned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::OnVisualizationActorSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnVisualizationActorSpawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SetCanBePlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InCanBePlaced                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_Deployable_C::SetCanBePlaced(bool InCanBePlaced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SetCanBePlaced"));

	struct
	{
		bool                           InCanBePlaced;
	} params = {};

	params.InCanBePlaced = InCanBePlaced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.CanUseItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseCarryable_Deployable_C::CanUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.CanUseItem"));

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


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.GetSpawnTranform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_Deployable_C::GetSpawnTranform(struct FTransform* SpawnTransform, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.GetSpawnTranform"));

	struct
	{
		struct FTransform              SpawnTransform;
		bool                           IsValid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.IsInInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_Deployable_C::IsInInventory(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.IsInInventory"));

	struct
	{
		bool                           Return_Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnLoaded_3965E93E44194A1A35924595DEAB0846
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::OnLoaded_3965E93E44194A1A35924595DEAB0846(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnLoaded_3965E93E44194A1A35924595DEAB0846"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::OnUse(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnUse"));

	struct
	{
		class AInventoryItem*          Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInventorySlotsUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::OnInventorySlotsUpdated_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInventorySlotsUpdated_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.AsyncLoadDeployActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::AsyncLoadDeployActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.AsyncLoadDeployActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateVisualization
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::UpdateVisualization(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateVisualization"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnDestroyed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnDestroyed_Event_1"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SpawnVisualizationActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_Deployable_C::SpawnVisualizationActor(const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SpawnVisualizationActor"));

	struct
	{
		struct FTransform              SpawnTransform;
	} params = {};

	params.SpawnTransform = SpawnTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnCombatStateChanged_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::OnCombatStateChanged_Event_1(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnCombatStateChanged_Event_1"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   PreviousState;
		struct FName                   NewState;
		struct FAttackInfo             EventAttackInfo;
		class UCombatState*            CombatState;
	} params = {};

	params.Actor = Actor;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.EventAttackInfo = EventAttackInfo;
	params.CombatState = CombatState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.DestroyVisualizationActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::DestroyVisualizationActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.DestroyVisualizationActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnAddedToInventoryChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAddedToInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseCarryable_Deployable_C::OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnAddedToInventoryChanged_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		bool                           IsAddedToInventory;
	} params = {};

	params.Item = Item;
	params.IsAddedToInventory = IsAddedToInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnStartUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::OnStartUse(class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnStartUse"));

	struct
	{
		class AInventoryItem*          Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateSpawnTransform
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseCarryable_Deployable_C::UpdateSpawnTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateSpawnTransform"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.ExecuteUbergraph_BaseCarryable_Deployable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseCarryable_Deployable_C::ExecuteUbergraph_BaseCarryable_Deployable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.ExecuteUbergraph_BaseCarryable_Deployable"));

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
