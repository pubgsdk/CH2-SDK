// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FreeWeekendWidgetConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UFreeWeekendWidgetConsole_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnFocusLost"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFreeWeekendWidgetConsole_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.Tick"));

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


// Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.K2_OnFocusChanging
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFreeWeekendWidgetConsole_C::K2_OnFocusChanging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.K2_OnFocusChanging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.ExecuteUbergraph_FreeWeekendWidgetConsole
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFreeWeekendWidgetConsole_C::ExecuteUbergraph_FreeWeekendWidgetConsole(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.ExecuteUbergraph_FreeWeekendWidgetConsole"));

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


// Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnPurchasePerformed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFreeWeekendWidgetConsole_C::OnPurchasePerformed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnPurchasePerformed__DelegateSignature"));

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
