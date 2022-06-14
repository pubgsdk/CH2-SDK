// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_MapList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugmenu_MapList.debugmenu_MapList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void Udebugmenu_MapList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.PreConstruct"));

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


// Function debugmenu_MapList.debugmenu_MapList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebugmenu_MapList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_MapList.debugmenu_MapList_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void Udebugmenu_MapList_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_MapList.debugmenu_MapList_C.MapListButtonClicked_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MapListString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void Udebugmenu_MapList_C::MapListButtonClicked_Event_1(const struct FText& MapListString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.MapListButtonClicked_Event_1"));

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


// Function debugmenu_MapList.debugmenu_MapList_C.SetMapList
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         InMapList                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void Udebugmenu_MapList_C::SetMapList(TArray<struct FString> InMapList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.SetMapList"));

	struct
	{
		TArray<struct FString>         InMapList;
	} params = {};

	params.InMapList = InMapList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_MapList.debugmenu_MapList_C.ExecuteUbergraph_debugmenu_MapList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_MapList_C::ExecuteUbergraph_debugmenu_MapList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.ExecuteUbergraph_debugmenu_MapList"));

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


// Function debugmenu_MapList.debugmenu_MapList_C.MapListClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MapName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void Udebugmenu_MapList_C::MapListClicked__DelegateSignature(const struct FText& MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_MapList.debugmenu_MapList_C.MapListClicked__DelegateSignature"));

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
