// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VIP_BasePawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VIP_BasePawn.VIP_BasePawn_C.SetupVariantMorphTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MeshName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FName>           MorphTargetVariants            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           bInvertValues                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AVIP_BasePawn_C::SetupVariantMorphTarget(const struct FName& MeshName, bool bInvertValues, TArray<struct FName>* MorphTargetVariants)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_BasePawn.VIP_BasePawn_C.SetupVariantMorphTarget"));

	struct
	{
		struct FName                   MeshName;
		TArray<struct FName>           MorphTargetVariants;
		bool                           bInvertValues;
	} params = {};

	params.MeshName = MeshName;
	params.bInvertValues = bInvertValues;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MorphTargetVariants != nullptr)
		*MorphTargetVariants = params.MorphTargetVariants;
}


// Function VIP_BasePawn.VIP_BasePawn_C.GetHatMorphTargetVariants
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FName>           MorphTargetsArray              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void AVIP_BasePawn_C::GetHatMorphTargetVariants(TArray<struct FName>* MorphTargetsArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_BasePawn.VIP_BasePawn_C.GetHatMorphTargetVariants"));

	struct
	{
		TArray<struct FName>           MorphTargetsArray;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MorphTargetsArray != nullptr)
		*MorphTargetsArray = params.MorphTargetsArray;
}


// Function VIP_BasePawn.VIP_BasePawn_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVIP_BasePawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_BasePawn.VIP_BasePawn_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VIP_BasePawn.VIP_BasePawn_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVIP_BasePawn_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_BasePawn.VIP_BasePawn_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VIP_BasePawn.VIP_BasePawn_C.ExecuteUbergraph_VIP_BasePawn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVIP_BasePawn_C::ExecuteUbergraph_VIP_BasePawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_BasePawn.VIP_BasePawn_C.ExecuteUbergraph_VIP_BasePawn"));

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
