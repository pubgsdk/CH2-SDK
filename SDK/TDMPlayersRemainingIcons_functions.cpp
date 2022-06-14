// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TDMPlayersRemainingIcons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.GetOrderedPlayerIconArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPlayerIconWidget_C*> Children                       (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UTDMPlayersRemainingIcons_C::GetOrderedPlayerIconArray(TArray<class UPlayerIconWidget_C*>* Children)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.GetOrderedPlayerIconArray"));

	struct
	{
		TArray<class UPlayerIconWidget_C*> Children;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Children != nullptr)
		*Children = params.Children;
}


// Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTDMPlayersRemainingIcons_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.PreConstruct"));

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


// Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.UpdateNumberOfPlayersRemaining
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayersRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTDMPlayersRemainingIcons_C::UpdateNumberOfPlayersRemaining(int PlayersRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.UpdateNumberOfPlayersRemaining"));

	struct
	{
		int                            PlayersRemaining;
	} params = {};

	params.PlayersRemaining = PlayersRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.SetMaxNumberPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewMax                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTDMPlayersRemainingIcons_C::SetMaxNumberPlayers(int NewMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.SetMaxNumberPlayers"));

	struct
	{
		int                            NewMax;
	} params = {};

	params.NewMax = NewMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.ExecuteUbergraph_TDMPlayersRemainingIcons
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTDMPlayersRemainingIcons_C::ExecuteUbergraph_TDMPlayersRemainingIcons(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.ExecuteUbergraph_TDMPlayersRemainingIcons"));

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
