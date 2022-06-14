// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutoBalance_Warning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutoBalance_Warning.AutoBalance_Warning_C.Set Owning HUD Component
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUDComponent_C*         New_Owner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutoBalance_Warning_C::Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.Set Owning HUD Component"));

	struct
	{
		class UHUDComponent_C*         New_Owner;
	} params = {};

	params.New_Owner = New_Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutoBalance_Warning_C::Initialize(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.Initialize"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAutoBalance_Warning_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAutoBalance_Warning_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.AutoBalanceNotificationReceived_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutoBalance_Warning_C::AutoBalanceNotificationReceived_Event_1(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.AutoBalanceNotificationReceived_Event_1"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAutoBalance_Warning_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutoBalance_Warning.AutoBalance_Warning_C.ExecuteUbergraph_AutoBalance_Warning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutoBalance_Warning_C::ExecuteUbergraph_AutoBalance_Warning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoBalance_Warning.AutoBalance_Warning_C.ExecuteUbergraph_AutoBalance_Warning"));

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
