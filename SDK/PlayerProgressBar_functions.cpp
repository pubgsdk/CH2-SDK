// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerProgressBar.PlayerProgressBar_C.Update All
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::Update_All()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.Update All"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.Update Title
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::Update_Title()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.Update Title"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::SetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.SetName"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.OpenStoreMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::OpenStoreMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OpenStoreMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.CurrencyClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerProgressBar_C::CurrencyClicked(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.CurrencyClicked"));

	struct
	{
		class UStatefulButton_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.OnStatsLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLoaded                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerProgressBar_C::OnStatsLogin(bool bIsLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OnStatsLogin"));

	struct
	{
		bool                           bIsLoaded;
	} params = {};

	params.bIsLoaded = bIsLoaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.OnStatsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTBLOnlineStats         OnlineStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayerProgressBar_C::OnStatsUpdated(const struct FTBLOnlineStats& OnlineStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OnStatsUpdated"));

	struct
	{
		struct FTBLOnlineStats         OnlineStats;
	} params = {};

	params.OnlineStats = OnlineStats;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.OnlineStatsLevelUp
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLevelUpResult>  LevelUpEvents                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UPlayerProgressBar_C::OnlineStatsLevelUp(TArray<struct FLevelUpResult> LevelUpEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OnlineStatsLevelUp"));

	struct
	{
		TArray<struct FLevelUpResult>  LevelUpEvents;
	} params = {};

	params.LevelUpEvents = LevelUpEvents;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.OnRefreshProfileDisplayName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ProfileName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerProgressBar_C::OnRefreshProfileDisplayName(const struct FString& ProfileName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OnRefreshProfileDisplayName"));

	struct
	{
		struct FString                 ProfileName;
	} params = {};

	params.ProfileName = ProfileName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.ExecuteUbergraph_PlayerProgressBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerProgressBar_C::ExecuteUbergraph_PlayerProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.ExecuteUbergraph_PlayerProgressBar"));

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


// Function PlayerProgressBar.PlayerProgressBar_C.OpenStore__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::OpenStore__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.OpenStore__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerProgressBar.PlayerProgressBar_C.RankUpComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerProgressBar_C::RankUpComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerProgressBar.PlayerProgressBar_C.RankUpComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
