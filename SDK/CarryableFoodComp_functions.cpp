// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CarryableFoodComp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarryableFoodComp.CarryableFoodComp_C.SendHealAnalyticsEvents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableFoodComp_C::SendHealAnalyticsEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableFoodComp.CarryableFoodComp_C.SendHealAnalyticsEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableFoodComp.CarryableFoodComp_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCarryableFoodComp_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableFoodComp.CarryableFoodComp_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableFoodComp.CarryableFoodComp_C.OnBattleCryTriggered_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableFoodComp_C::OnBattleCryTriggered_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableFoodComp.CarryableFoodComp_C.OnBattleCryTriggered_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableFoodComp.CarryableFoodComp_C.OnAnimNotifyWeaponDetach_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBLCharacterAnimInstance* AnimBP                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableFoodComp_C::OnAnimNotifyWeaponDetach_Event_1(class UTBLCharacterAnimInstance* AnimBP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableFoodComp.CarryableFoodComp_C.OnAnimNotifyWeaponDetach_Event_1"));

	struct
	{
		class UTBLCharacterAnimInstance* AnimBP;
	} params = {};

	params.AnimBP = AnimBP;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableFoodComp.CarryableFoodComp_C.ExecuteUbergraph_CarryableFoodComp
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableFoodComp_C::ExecuteUbergraph_CarryableFoodComp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableFoodComp.CarryableFoodComp_C.ExecuteUbergraph_CarryableFoodComp"));

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
