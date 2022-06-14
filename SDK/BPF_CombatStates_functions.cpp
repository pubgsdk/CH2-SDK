// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_CombatStates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_CombatStates.BPF_CombatStates_C.IsUsingCrossbow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_CombatStates_C::IsUsingCrossbow(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_CombatStates.BPF_CombatStates_C.IsUsingCrossbow"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_CombatStates.BPF_CombatStates_C.IsCrowdControlState
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBPF_CombatStates_C::IsCrowdControlState(const struct FName& State, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_CombatStates.BPF_CombatStates_C.IsCrowdControlState"));

	struct
	{
		struct FName                   State;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.State = State;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BPF_CombatStates.BPF_CombatStates_C.DoesAttackContainName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 Object                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Substring                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_CombatStates_C::DoesAttackContainName(class UObject* Object, const struct FString& Substring, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_CombatStates.BPF_CombatStates_C.DoesAttackContainName"));

	struct
	{
		class UObject*                 Object;
		struct FString                 Substring;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Object = Object;
	params.Substring = Substring;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_CombatStates.BPF_CombatStates_C.IsUninterruptableInRelease
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UAttackType*             Attack_Type                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_CombatStates_C::IsUninterruptableInRelease(class UAttackType* Attack_Type, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_CombatStates.BPF_CombatStates_C.IsUninterruptableInRelease"));

	struct
	{
		class UAttackType*             Attack_Type;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Attack_Type = Attack_Type;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_CombatStates.BPF_CombatStates_C.HorseInterpCategory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EHorseInterpCategory> _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          __                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_CombatStates_C::HorseInterpCategory(TEnumAsByte<EHorseInterpCategory> _, class UObject* __WorldContext, float* __)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_CombatStates.BPF_CombatStates_C.HorseInterpCategory"));

	struct
	{
		TEnumAsByte<EHorseInterpCategory> _;
		class UObject*                 __WorldContext;
		float                          __;
	} params = {};

	params._ = _;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (__ != nullptr)
		*__ = params.__;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
