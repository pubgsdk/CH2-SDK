// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseShield.BaseShield_C.GetOwningPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString ABaseShield_C::GetOwningPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.GetOwningPlayerName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseShield.BaseShield_C.ApplyHeraldry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseShield_C::ApplyHeraldry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.ApplyHeraldry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseShield.BaseShield_C.GetCustomizationShield
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCTShield*               AsCTShield                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseShield_C::GetCustomizationShield(class UCTShield** AsCTShield)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.GetCustomizationShield"));

	struct
	{
		class UCTShield*               AsCTShield;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsCTShield != nullptr)
		*AsCTShield = params.AsCTShield;
}


// Function BaseShield.BaseShield_C.ShouldCustomizePlacedInWorldItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           OwningCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseShield_C::ShouldCustomizePlacedInWorldItem(class ATBLCharacter* OwningCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.ShouldCustomizePlacedInWorldItem"));

	struct
	{
		class ATBLCharacter*           OwningCharacter;
		bool                           ReturnValue;
	} params = {};

	params.OwningCharacter = OwningCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseShield.BaseShield_C.GetShieldCollision
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPrimitiveComponent* ABaseShield_C::GetShieldCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.GetShieldCollision"));

	struct
	{
		class UPrimitiveComponent*     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseShield.BaseShield_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseShield_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseShield.BaseShield_C.OnLoaded_93186E5C4C953E77222454BE85A78163
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseShield_C::OnLoaded_93186E5C4C953E77222454BE85A78163(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.OnLoaded_93186E5C4C953E77222454BE85A78163"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseShield.BaseShield_C.DamageShield
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemDamagedState     DamageState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseShield_C::DamageShield(EInventoryItemDamagedState DamageState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.DamageShield"));

	struct
	{
		EInventoryItemDamagedState     DamageState;
	} params = {};

	params.DamageState = DamageState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseShield.BaseShield_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseShield_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseShield.BaseShield_C.OnAddedToInventoryChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAddedToInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseShield_C::OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.OnAddedToInventoryChanged_Event_1"));

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


// Function BaseShield.BaseShield_C.ExecuteUbergraph_BaseShield
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseShield_C::ExecuteUbergraph_BaseShield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseShield.BaseShield_C.ExecuteUbergraph_BaseShield"));

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
