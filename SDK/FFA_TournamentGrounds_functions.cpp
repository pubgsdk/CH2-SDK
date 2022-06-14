// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFA_TournamentGrounds_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.GetFirstStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> AFFA_TournamentGrounds_C::GetFirstStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.GetFirstStage"));

	struct
	{
		TScriptInterface<class UStageInterface> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.OnWarmupComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFA_TournamentGrounds_C::OnWarmupComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.OnWarmupComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFFA_TournamentGrounds_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.Warmup_Load
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFA_TournamentGrounds_C::Warmup_Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.Warmup_Load"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.Warmup_Unload
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFA_TournamentGrounds_C::Warmup_Unload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.Warmup_Unload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.ExecuteUbergraph_FFA_TournamentGrounds
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFFA_TournamentGrounds_C::ExecuteUbergraph_FFA_TournamentGrounds(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFA_TournamentGrounds.FFA_TournamentGrounds_C.ExecuteUbergraph_FFA_TournamentGrounds"));

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
