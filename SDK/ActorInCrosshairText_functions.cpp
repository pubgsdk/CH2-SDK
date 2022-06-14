// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ActorInCrosshairText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorInCrosshairText.ActorInCrosshairText_C.OnBroadcastActorUnderCrosshairChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorInCrosshairText_C::OnBroadcastActorUnderCrosshairChanged_Event_1(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorInCrosshairText.ActorInCrosshairText_C.OnBroadcastActorUnderCrosshairChanged_Event_1"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorInCrosshairText.ActorInCrosshairText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActorInCrosshairText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorInCrosshairText.ActorInCrosshairText_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorInCrosshairText.ActorInCrosshairText_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActorInCrosshairText_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorInCrosshairText.ActorInCrosshairText_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ActorInCrosshairText.ActorInCrosshairText_C.ExecuteUbergraph_ActorInCrosshairText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorInCrosshairText_C::ExecuteUbergraph_ActorInCrosshairText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActorInCrosshairText.ActorInCrosshairText_C.ExecuteUbergraph_ActorInCrosshairText"));

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
