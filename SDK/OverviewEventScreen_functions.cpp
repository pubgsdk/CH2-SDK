// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OverviewEventScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OverviewEventScreen.OverviewEventScreen_C.InGameMenu_LeaveGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewEventScreen_C::InGameMenu_LeaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewEventScreen.OverviewEventScreen_C.InGameMenu_LeaveGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewEventScreen.OverviewEventScreen_C.InGameMenu_ShowPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewEventScreen_C::InGameMenu_ShowPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewEventScreen.OverviewEventScreen_C.InGameMenu_ShowPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewEventScreen.OverviewEventScreen_C.ExecuteUbergraph_OverviewEventScreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewEventScreen_C::ExecuteUbergraph_OverviewEventScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewEventScreen.OverviewEventScreen_C.ExecuteUbergraph_OverviewEventScreen"));

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
