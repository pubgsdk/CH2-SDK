// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_GoreHead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_Impulse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::OnRep_Impulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_Impulse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.SetNoGoreHeadMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::SetNoGoreHeadMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.SetNoGoreHeadMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.ShouldUseNoGore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_GoreHead_C::ShouldUseNoGore()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.ShouldUseNoGore"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.PostReplication
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::PostReplication()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.PostReplication"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedGoreHeadParams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::OnRep_ReplicatedGoreHeadParams()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedGoreHeadParams"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedDeadCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::OnRep_ReplicatedDeadCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedDeadCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.GetSkeletalMesh
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USkeletalMeshComponent* ACarryable_GoreHead_C::GetSkeletalMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.GetSkeletalMesh"));

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


// Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyCustomization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::ApplyCustomization()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyCustomization"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.InitializeGoreHead
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FGoreHeadParams         Params                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_GoreHead_C::InitializeGoreHead(class ATBLCharacter* Character, const struct FGoreHeadParams& Params, const struct FVector& Impulse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.InitializeGoreHead"));

	struct
	{
		class ATBLCharacter*           Character;
		struct FGoreHeadParams         Params;
		struct FVector                 Impulse;
	} params = {};

	params.Character = Character;
	params.Params = Params;
	params.Impulse = Impulse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyImpulseToGoreHead
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_GoreHead_C::ApplyImpulseToGoreHead(const struct FVector& Impulse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyImpulseToGoreHead"));

	struct
	{
		struct FVector                 Impulse;
	} params = {};

	params.Impulse = Impulse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACarryable_GoreHead_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_GoreHead.Carryable_GoreHead_C.ExecuteUbergraph_Carryable_GoreHead
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_GoreHead_C::ExecuteUbergraph_Carryable_GoreHead(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_GoreHead.Carryable_GoreHead_C.ExecuteUbergraph_Carryable_GoreHead"));

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
