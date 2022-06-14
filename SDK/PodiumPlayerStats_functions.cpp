// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PodiumPlayerStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PodiumPlayerStats.PodiumPlayerStats_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPodiumPlayerStats_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumPlayerStats.PodiumPlayerStats_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumPlayerStats.PodiumPlayerStats_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPodiumPlayerStats_C::UpdateState(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumPlayerStats.PodiumPlayerStats_C.UpdateState"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumPlayerStats.PodiumPlayerStats_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPodiumPlayerStats_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumPlayerStats.PodiumPlayerStats_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumPlayerStats.PodiumPlayerStats_C.ExecuteUbergraph_PodiumPlayerStats
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPodiumPlayerStats_C::ExecuteUbergraph_PodiumPlayerStats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumPlayerStats.PodiumPlayerStats_C.ExecuteUbergraph_PodiumPlayerStats"));

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
