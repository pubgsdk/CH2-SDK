// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentGrounds_atmospherics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C.AmbientCorpses_Tournamentgrounds
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATournamentGrounds_atmospherics_C::AmbientCorpses_Tournamentgrounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C.AmbientCorpses_Tournamentgrounds"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C.ExecuteUbergraph_TournamentGrounds_atmospherics
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATournamentGrounds_atmospherics_C::ExecuteUbergraph_TournamentGrounds_atmospherics(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C.ExecuteUbergraph_TournamentGrounds_atmospherics"));

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
