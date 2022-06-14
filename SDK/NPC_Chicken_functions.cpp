// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NPC_Chicken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPC_Chicken.NPC_Chicken_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Chicken_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANPC_Chicken_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.Client Hit
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Chicken_C::Client_Hit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.Client Hit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.OnDropped_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ANPC_Chicken_C::OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.OnDropped_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		class ATBLCharacter*           Character;
		struct FTransform              Transform;
	} params = {};

	params.Item = Item;
	params.Character = Character;
	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.OnInteractableEnabled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANPC_Chicken_C::OnInteractableEnabled_Event_1(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.OnInteractableEnabled_Event_1"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.K2_TornOff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ANPC_Chicken_C::K2_TornOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.K2_TornOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.OnSetAttached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAttached                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANPC_Chicken_C::OnSetAttached(bool bAttached)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.OnSetAttached"));

	struct
	{
		bool                           bAttached;
	} params = {};

	params.bAttached = bAttached;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Chicken.NPC_Chicken_C.ExecuteUbergraph_NPC_Chicken
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Chicken_C::ExecuteUbergraph_NPC_Chicken(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Chicken.NPC_Chicken_C.ExecuteUbergraph_NPC_Chicken"));

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
