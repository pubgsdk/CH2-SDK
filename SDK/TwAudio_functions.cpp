// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TwAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TwAudio.TwAkEmitterArrayComponent.PostEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTwAkEmitterArrayComponent::PostEvent(class UAkAudioEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TwAudio.TwAkEmitterArrayComponent.PostEvent"));

	struct
	{
		class UAkAudioEvent*           Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTwAkEmitterArrayComponent::EnableVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TwAudio.TwAkEmitterArrayComponent.EnableVoice"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTwAkEmitterArrayComponent::DisableVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TwAudio.TwAkEmitterArrayComponent.DisableVoice"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  A1                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  A2                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTwAkSplineProximityEffectsComponent::EndOverlap(class AActor* A1, class AActor* A2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap"));

	struct
	{
		class AActor*                  A1;
		class AActor*                  A2;
	} params = {};

	params.A1 = A1;
	params.A2 = A2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  A1                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  A2                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTwAkSplineProximityEffectsComponent::BeginOverlap(class AActor* A1, class AActor* A2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap"));

	struct
	{
		class AActor*                  A1;
		class AActor*                  A2;
	} params = {};

	params.A1 = A1;
	params.A2 = A2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
