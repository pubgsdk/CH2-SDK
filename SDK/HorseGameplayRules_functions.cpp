// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseGameplayRules_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseGameplayRules.HorseGameplayRules_C.GetCrowdControlVariant
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECrowdControlVariant           InCrowdControlVariant          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ InventoryItemClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FName                   AbilityName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAttackType*             AttackType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsOnHorse                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECrowdControlVariant           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ECrowdControlVariant UHorseGameplayRules_C::GetCrowdControlVariant(ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FName& CombatState, class UClass* /*AInventoryItem*/ InventoryItemClass, const struct FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseGameplayRules.HorseGameplayRules_C.GetCrowdControlVariant"));

	struct
	{
		ECrowdControlVariant           InCrowdControlVariant;
		class AActor*                  HitActor;
		struct FName                   CombatState;
		class UClass* /*AInventoryItem*/ InventoryItemClass;
		struct FName                   AbilityName;
		class UAttackType*             AttackType;
		bool                           IsOnHorse;
		ECrowdControlVariant           ReturnValue;
	} params = {};

	params.InCrowdControlVariant = InCrowdControlVariant;
	params.HitActor = HitActor;
	params.CombatState = CombatState;
	params.InventoryItemClass = InventoryItemClass;
	params.AbilityName = AbilityName;
	params.AttackType = AttackType;
	params.IsOnHorse = IsOnHorse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function HorseGameplayRules.HorseGameplayRules_C.OnDamageTaken
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnHitEffect                   OutHitEffect                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlVariant           OutCrowdControlVariant         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EOnHitEffect                   InHitEffect                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlVariant           InCrowdControlVariant          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAttackType*             AttackType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseGameplayRules_C::OnDamageTaken(EOnHitEffect InHitEffect, ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const struct FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType, EOnHitEffect* OutHitEffect, ECrowdControlVariant* OutCrowdControlVariant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseGameplayRules.HorseGameplayRules_C.OnDamageTaken"));

	struct
	{
		EOnHitEffect                   OutHitEffect;
		ECrowdControlVariant           OutCrowdControlVariant;
		EOnHitEffect                   InHitEffect;
		ECrowdControlVariant           InCrowdControlVariant;
		class AActor*                  HitActor;
		struct FDamageTakenEvent       DamageEvent;
		struct FName                   AttackName;
		class AInventoryItem*          AttackingItem;
		class UAttackType*             AttackType;
	} params = {};

	params.InHitEffect = InHitEffect;
	params.InCrowdControlVariant = InCrowdControlVariant;
	params.HitActor = HitActor;
	params.DamageEvent = DamageEvent;
	params.AttackName = AttackName;
	params.AttackingItem = AttackingItem;
	params.AttackType = AttackType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHitEffect != nullptr)
		*OutHitEffect = params.OutHitEffect;
	if (OutCrowdControlVariant != nullptr)
		*OutCrowdControlVariant = params.OutCrowdControlVariant;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
