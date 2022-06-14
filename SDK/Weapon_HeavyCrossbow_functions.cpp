// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_HeavyCrossbow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.GetSkeletalMesh
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USkeletalMeshComponent* AWeapon_HeavyCrossbow_C::GetSkeletalMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.GetSkeletalMesh"));

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeapon_HeavyCrossbow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.CombatStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_HeavyCrossbow_C::CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.CombatStateChanged"));

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


// Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.ExecuteUbergraph_Weapon_HeavyCrossbow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_HeavyCrossbow_C::ExecuteUbergraph_Weapon_HeavyCrossbow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C.ExecuteUbergraph_Weapon_HeavyCrossbow"));

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
