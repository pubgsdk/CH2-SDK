// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FrontendHud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FrontendHud.FrontendHud_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void AFrontendHud_C::InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FrontendHud.FrontendHud_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FrontendHud.FrontendHud_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void AFrontendHud_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FrontendHud.FrontendHud_C.InpActEvt_Escape_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FrontendHud.FrontendHud_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFrontendHud_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FrontendHud.FrontendHud_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FrontendHud.FrontendHud_C.ExecuteUbergraph_FrontendHud
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFrontendHud_C::ExecuteUbergraph_FrontendHud(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FrontendHud.FrontendHud_C.ExecuteUbergraph_FrontendHud"));

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
