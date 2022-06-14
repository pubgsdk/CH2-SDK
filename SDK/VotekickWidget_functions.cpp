// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VotekickWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VotekickWidget.VotekickWidget_C.SubmitVote
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Vote                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsVoteSubmitted                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UVotekickWidget_C::SubmitVote(const struct FName& Vote, bool* IsVoteSubmitted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.SubmitVote"));

	struct
	{
		struct FName                   Vote;
		bool                           IsVoteSubmitted;
	} params = {};

	params.Vote = Vote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsVoteSubmitted != nullptr)
		*IsVoteSubmitted = params.IsVoteSubmitted;
}


// Function VotekickWidget.VotekickWidget_C.UpdateIdleTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateIdleTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateIdleTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateTeamDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateTeamDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateTeamDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdatePing
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdatePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdatePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateReportingPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateReportingPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateReportingPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateKickTarget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateKickTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateKickTarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateVotesNeeded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateVotesNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateVotesNeeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateVotingNumbers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateVotingNumbers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateVotingNumbers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.UpdateWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.UpdateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVotekickWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVotekickWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.EnableWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKickVotingInstance*     KickVote                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVotekickWidget_C::EnableWidget(class UKickVotingInstance* KickVote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.EnableWidget"));

	struct
	{
		class UKickVotingInstance*     KickVote;
	} params = {};

	params.KickVote = KickVote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.VoteFinished
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVotingResults          VoteResults                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UVotekickWidget_C::VoteFinished(const struct FVotingResults& VoteResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.VoteFinished"));

	struct
	{
		struct FVotingResults          VoteResults;
	} params = {};

	params.VoteResults = VoteResults;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.DisableWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::DisableWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.DisableWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.VoteEndDisableWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::VoteEndDisableWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.VoteEndDisableWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.VoteNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::VoteNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.VoteNo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.VoteYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::VoteYes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.VoteYes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.OnVotesReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVotekickWidget_C::OnVotesReplicated_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.OnVotesReplicated_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VotekickWidget.VotekickWidget_C.ExecuteUbergraph_VotekickWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVotekickWidget_C::ExecuteUbergraph_VotekickWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VotekickWidget.VotekickWidget_C.ExecuteUbergraph_VotekickWidget"));

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
