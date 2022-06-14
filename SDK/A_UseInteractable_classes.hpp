#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "A_UseInteractable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_UseInteractable.A_UseInteractable_C
// 0x0038 (0x00B8 - 0x0080)
class UA_UseInteractable_C : public UA_MoveTo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AActor*                                      Interactable;                                             // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Held;                                                     // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UInteractableComponent*                      Interactable_Component;                                   // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UInteractableComponent*>              InteractableComponents;                                   // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class UAITask_MoveTo*                              AdjustmentAsyncTask;                                      // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass A_UseInteractable.A_UseInteractable_C"));
		return ptr;
	}


	void Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller);
	void IsInRangeOfTarget(float AcceptanceMultiplier, bool* bInRange);
	void OnMoveFinished_C60871134FF654389219A2AFBCB9B884(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_C60871134FF654389219A2AFBCB9B884();
	void On_Move_is_finished();
	void PerformAction(const struct FUtilityAI_Context& C);
	void CompleteAction(const struct FUtilityAI_Context& C);
	void OnInteractableStoppedBeingHeld_Event_1(class UInteractableComponent* InteractableUsed);
	void ExecuteUbergraph_A_UseInteractable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
