// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpectatorPlayerStatusEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.UpdateHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::UpdateHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.UpdateHealth"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupValidPlayerEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::SetupValidPlayerEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupValidPlayerEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupBlankPlayerEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::SetupBlankPlayerEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupBlankPlayerEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetPlayerStatusText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::SetPlayerStatusText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetPlayerStatusText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.IsLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsLocalPlayer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpectatorPlayerStatusEntry_C::IsLocalPlayer(bool* IsLocalPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.IsLocalPlayer"));

	struct
	{
		bool                           IsLocalPlayer;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Player State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         In_State                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorPlayerStatusEntry_C::Update_Player_State(class ATBLPlayerState* In_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Player State"));

	struct
	{
		class ATBLPlayerState*         In_State;
	} params = {};

	params.In_State = In_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.HasValidPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpectatorPlayerStatusEntry_C::HasValidPlayerState(bool* Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.HasValidPlayerState"));

	struct
	{
		bool                           Valid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Class Image
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::Update_Class_Image()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Class Image"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorPlayerStatusEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Tick"));

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


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.flip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpectatorPlayerStatusEntry_C::flip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.flip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.ExecuteUbergraph_SpectatorPlayerStatusEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpectatorPlayerStatusEntry_C::ExecuteUbergraph_SpectatorPlayerStatusEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.ExecuteUbergraph_SpectatorPlayerStatusEntry"));

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
