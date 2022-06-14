// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpikeWallComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpikeWallComponent.SpikeWallComponent_C.GetAttachRagdollParams_SpikeWall_TwoSided
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         AttachRagdoll                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   RagdollBone                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AttachOffset                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttachRagdollParams    Params                         (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void USpikeWallComponent_C::GetAttachRagdollParams_SpikeWall_TwoSided(class ATBLCharacter* Character, class USceneComponent* AttachRagdoll, const struct FName& RagdollBone, float AttachOffset, struct FAttachRagdollParams* Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.GetAttachRagdollParams_SpikeWall_TwoSided"));

	struct
	{
		class ATBLCharacter*           Character;
		class USceneComponent*         AttachRagdoll;
		struct FName                   RagdollBone;
		float                          AttachOffset;
		struct FAttachRagdollParams    Params;
	} params = {};

	params.Character = Character;
	params.AttachRagdoll = AttachRagdoll;
	params.RagdollBone = RagdollBone;
	params.AttachOffset = AttachOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Params != nullptr)
		*Params = params.Params;
}


// Function SpikeWallComponent.SpikeWallComponent_C.GetAttachRagdollParams_SpikeWall
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         AttachRagdoll                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   RagdollBone                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttachRagdollParams    Params                         (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void USpikeWallComponent_C::GetAttachRagdollParams_SpikeWall(class ATBLCharacter* Character, class USceneComponent* AttachRagdoll, const struct FName& RagdollBone, struct FAttachRagdollParams* Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.GetAttachRagdollParams_SpikeWall"));

	struct
	{
		class ATBLCharacter*           Character;
		class USceneComponent*         AttachRagdoll;
		struct FName                   RagdollBone;
		struct FAttachRagdollParams    Params;
	} params = {};

	params.Character = Character;
	params.AttachRagdoll = AttachRagdoll;
	params.RagdollBone = RagdollBone;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Params != nullptr)
		*Params = params.Params;
}


// Function SpikeWallComponent.SpikeWallComponent_C.GetDamageInstigator
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* USpikeWallComponent_C::GetDamageInstigator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.GetDamageInstigator"));

	struct
	{
		class AActor*                  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpikeWallComponent.SpikeWallComponent_C.IsFacingWall
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpikeWallComponent_C::IsFacingWall(class ATBLCharacter* Target, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.IsFacingWall"));

	struct
	{
		class ATBLCharacter*           Target;
		bool                           _;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function SpikeWallComponent.SpikeWallComponent_C.BeginOverlap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InWallNormal                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkComponent*            AkComponent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::BeginOverlap(class AActor* OtherActor, const struct FVector& InWallNormal, class UAkComponent* AkComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.BeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
		struct FVector                 InWallNormal;
		class UAkComponent*            AkComponent;
	} params = {};

	params.OtherActor = OtherActor;
	params.InWallNormal = InWallNormal;
	params.AkComponent = AkComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.OnDamageTaken_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void USpikeWallComponent_C::OnDamageTaken_Event_1(const struct FDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.OnDamageTaken_Event_1"));

	struct
	{
		struct FDamageTakenEvent       Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.KillCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           InCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::KillCharacter(class ATBLCharacter* InCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.KillCharacter"));

	struct
	{
		class ATBLCharacter*           InCharacter;
	} params = {};

	params.InCharacter = InCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.SetTrapComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrapComponent_C*        InTrapComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::SetTrapComponent(class UTrapComponent_C* InTrapComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.SetTrapComponent"));

	struct
	{
		class UTrapComponent_C*        InTrapComponent;
	} params = {};

	params.InTrapComponent = InTrapComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.EndOverlap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::EndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.EndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpikeWallComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.HandleTrapEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETrapEventResult               Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           TargetCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::HandleTrapEvent(ETrapEventResult Result, class ATBLCharacter* TargetCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.HandleTrapEvent"));

	struct
	{
		ETrapEventResult               Result;
		class ATBLCharacter*           TargetCharacter;
	} params = {};

	params.Result = Result;
	params.TargetCharacter = TargetCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpikeWallComponent.SpikeWallComponent_C.ExecuteUbergraph_SpikeWallComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpikeWallComponent_C::ExecuteUbergraph_SpikeWallComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpikeWallComponent.SpikeWallComponent_C.ExecuteUbergraph_SpikeWallComponent"));

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
