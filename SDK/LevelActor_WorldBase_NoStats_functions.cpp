// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LevelActor_WorldBase_NoStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALevelActor_WorldBase_NoStats_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature"));

	struct
	{
		class APawn*                   Pawn;
		class UInteractableComponent*  Interactable;
	} params = {};

	params.Pawn = Pawn;
	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.OnUsed
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALevelActor_WorldBase_NoStats_C::OnUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.OnUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.ExecuteUbergraph_LevelActor_WorldBase_NoStats
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALevelActor_WorldBase_NoStats_C::ExecuteUbergraph_LevelActor_WorldBase_NoStats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LevelActor_WorldBase_NoStats.LevelActor_WorldBase_NoStats_C.ExecuteUbergraph_LevelActor_WorldBase_NoStats"));

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
