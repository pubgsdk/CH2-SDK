// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_Pushables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugmenu_Pushables.debugmenu_Pushables_C.SortPushables
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          PushableActors                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          SortedPushableActors           (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void Udebugmenu_Pushables_C::SortPushables(TArray<class AActor*>* PushableActors, TArray<class AActor*>* SortedPushableActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_Pushables.debugmenu_Pushables_C.SortPushables"));

	struct
	{
		TArray<class AActor*>          PushableActors;
		TArray<class AActor*>          SortedPushableActors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PushableActors != nullptr)
		*PushableActors = params.PushableActors;
	if (SortedPushableActors != nullptr)
		*SortedPushableActors = params.SortedPushableActors;
}


// Function debugmenu_Pushables.debugmenu_Pushables_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebugmenu_Pushables_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_Pushables.debugmenu_Pushables_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_Pushables.debugmenu_Pushables_C.ExecuteUbergraph_debugmenu_Pushables
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_Pushables_C::ExecuteUbergraph_debugmenu_Pushables(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_Pushables.debugmenu_Pushables_C.ExecuteUbergraph_debugmenu_Pushables"));

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
