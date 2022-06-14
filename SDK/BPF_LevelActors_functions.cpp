// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_LevelActors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_LevelActors.BPF_LevelActors_C.ApplyDrunkEffectToPlayer
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_LevelActors_C::ApplyDrunkEffectToPlayer(class AActor* Target, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_LevelActors.BPF_LevelActors_C.ApplyDrunkEffectToPlayer"));

	struct
	{
		class AActor*                  Target;
		class UObject*                 __WorldContext;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_LevelActors.BPF_LevelActors_C.CanActorAcceptDamage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_LevelActors_C::CanActorAcceptDamage(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_LevelActors.BPF_LevelActors_C.CanActorAcceptDamage"));

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


// Function BPF_LevelActors.BPF_LevelActors_C.LevelActorFlipDirection
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  From                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EeFlipDirection>   Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_LevelActors_C::LevelActorFlipDirection(class AActor* From, class AActor* To, class UObject* __WorldContext, TEnumAsByte<EeFlipDirection>* Direction, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_LevelActors.BPF_LevelActors_C.LevelActorFlipDirection"));

	struct
	{
		class AActor*                  From;
		class AActor*                  To;
		class UObject*                 __WorldContext;
		TEnumAsByte<EeFlipDirection>   Direction;
		bool                           Success;
	} params = {};

	params.From = From;
	params.To = To;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPF_LevelActors.BPF_LevelActors_C.DestroyComponentAndChildren
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_LevelActors_C::DestroyComponentAndChildren(class USceneComponent* Target, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_LevelActors.BPF_LevelActors_C.DestroyComponentAndChildren"));

	struct
	{
		class USceneComponent*         Target;
		class UObject*                 __WorldContext;
	} params = {};

	params.Target = Target;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_LevelActors.BPF_LevelActors_C.GetDirectionBetweenActors (4Dir)
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  From                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EeDirection>       Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_LevelActors_C::GetDirectionBetweenActors__4Dir_(class AActor* From, class AActor* To, class UObject* __WorldContext, TEnumAsByte<EeDirection>* Direction, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_LevelActors.BPF_LevelActors_C.GetDirectionBetweenActors (4Dir)"));

	struct
	{
		class AActor*                  From;
		class AActor*                  To;
		class UObject*                 __WorldContext;
		TEnumAsByte<EeDirection>       Direction;
		bool                           Success;
	} params = {};

	params.From = From;
	params.To = To;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
