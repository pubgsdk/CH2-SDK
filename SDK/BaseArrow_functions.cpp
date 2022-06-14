// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseArrow.BaseArrow_C.OnRep_StartTimestamp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::OnRep_StartTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.OnRep_StartTimestamp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.PlaySoundOnLocalFakeClient
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseArrow_C::PlaySoundOnLocalFakeClient(class UAkAudioEvent* Sound, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.PlaySoundOnLocalFakeClient"));

	struct
	{
		class UAkAudioEvent*           Sound;
		bool                           Success;
	} params = {};

	params.Sound = Sound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BaseArrow.BaseArrow_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.Disable glint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::Disable_glint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.Disable glint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.Enable glint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::Enable_glint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.Enable glint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.EnableProjectileTailParticle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::EnableProjectileTailParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.EnableProjectileTailParticle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.DisableProjectileTailParticle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::DisableProjectileTailParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.DisableProjectileTailParticle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.ProjectileMovementStarted_BaseArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::ProjectileMovementStarted_BaseArrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.ProjectileMovementStarted_BaseArrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.ProjectileMovementStopped_BaseArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::ProjectileMovementStopped_BaseArrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.ProjectileMovementStopped_BaseArrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.BaseArrow_AssignProjectileEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::BaseArrow_AssignProjectileEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.BaseArrow_AssignProjectileEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.ParticleTimerEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseArrow_C::ParticleTimerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.ParticleTimerEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseArrow.BaseArrow_C.ExecuteUbergraph_BaseArrow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseArrow_C::ExecuteUbergraph_BaseArrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseArrow.BaseArrow_C.ExecuteUbergraph_BaseArrow"));

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
