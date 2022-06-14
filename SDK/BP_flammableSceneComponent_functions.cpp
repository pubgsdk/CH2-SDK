// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_flammableSceneComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateSpawnLocators
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_flammableSceneComponent_C::CreateSpawnLocators()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateSpawnLocators"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_flammableSceneComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateLocators
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_flammableSceneComponent_C::CreateLocators()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateLocators"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ExecuteUbergraph_BP_flammableSceneComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_flammableSceneComponent_C::ExecuteUbergraph_BP_flammableSceneComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ExecuteUbergraph_BP_flammableSceneComponent"));

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


// Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.LocatorsCreated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_flammableSceneComponent_C* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_flammableSceneComponent_C::LocatorsCreated__DelegateSignature(class UBP_flammableSceneComponent_C* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.LocatorsCreated__DelegateSignature"));

	struct
	{
		class UBP_flammableSceneComponent_C* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
