// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_CommandsList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugmenu_CommandsList.debugmenu_CommandsList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void Udebugmenu_CommandsList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.PreConstruct"));

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


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebugmenu_CommandsList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void Udebugmenu_CommandsList_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.SetCommandsButtonClicked_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MapListString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void Udebugmenu_CommandsList_C::SetCommandsButtonClicked_Event_1(const struct FText& MapListString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.SetCommandsButtonClicked_Event_1"));

	struct
	{
		struct FText                   MapListString;
	} params = {};

	params.MapListString = MapListString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MapListString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void Udebugmenu_CommandsList_C::CustomEvent(const struct FText& MapListString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.CustomEvent"));

	struct
	{
		struct FText                   MapListString;
	} params = {};

	params.MapListString = MapListString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.ExecuteUbergraph_debugmenu_CommandsList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_CommandsList_C::ExecuteUbergraph_debugmenu_CommandsList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.ExecuteUbergraph_debugmenu_CommandsList"));

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


// Function debugmenu_CommandsList.debugmenu_CommandsList_C.CommandListClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MapName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void Udebugmenu_CommandsList_C::CommandListClicked__DelegateSignature(const struct FText& MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CommandsList.debugmenu_CommandsList_C.CommandListClicked__DelegateSignature"));

	struct
	{
		struct FText                   MapName;
	} params = {};

	params.MapName = MapName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
