// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Botman_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Botman.Botman_C.ShouldDealTeamDamageAgainst
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TargetTeammate                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABotman_C::ShouldDealTeamDamageAgainst(class AActor* TargetTeammate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.ShouldDealTeamDamageAgainst"));

	struct
	{
		class AActor*                  TargetTeammate;
		bool                           ReturnValue;
	} params = {};

	params.TargetTeammate = TargetTeammate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Botman.Botman_C.GetRandomHat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABotman_C::GetRandomHat(EFaction Faction, struct FName* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.GetRandomHat"));

	struct
	{
		EFaction                       Faction;
		struct FName                   Output;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Botman.Botman_C.SetHatMorphTarget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Target_                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABotman_C::SetHatMorphTarget(const struct FName& Target_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.SetHatMorphTarget"));

	struct
	{
		struct FName                   Target_;
	} params = {};

	params.Target_ = Target_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Botman.Botman_C.SetBodyMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InMeshName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABotman_C::SetBodyMaterial(const struct FName& InMeshName, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.SetBodyMaterial"));

	struct
	{
		struct FName                   InMeshName;
		EFaction                       Faction;
	} params = {};

	params.InMeshName = InMeshName;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Botman.Botman_C.OnCustomized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABotman_C::OnCustomized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.OnCustomized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Botman.Botman_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABotman_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Botman.Botman_C.CustomPlayerCustomization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABotman_C::CustomPlayerCustomization()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.CustomPlayerCustomization"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Botman.Botman_C.ExecuteUbergraph_Botman
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABotman_C::ExecuteUbergraph_Botman(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Botman.Botman_C.ExecuteUbergraph_Botman"));

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
