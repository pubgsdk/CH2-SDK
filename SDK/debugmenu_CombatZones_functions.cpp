// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_CombatZones_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debugmenu_CombatZones.debugmenu_CombatZones_C.RegenerateRows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Udebugmenu_CombatZones_C::RegenerateRows()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CombatZones.debugmenu_CombatZones_C.RegenerateRows"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CombatZones.debugmenu_CombatZones_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebugmenu_CombatZones_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CombatZones.debugmenu_CombatZones_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CombatZones.debugmenu_CombatZones_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_CombatZones_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CombatZones.debugmenu_CombatZones_C.Tick"));

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


// Function debugmenu_CombatZones.debugmenu_CombatZones_C.OnActiveVolumensChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Udebugmenu_CombatZones_C::OnActiveVolumensChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CombatZones.debugmenu_CombatZones_C.OnActiveVolumensChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debugmenu_CombatZones.debugmenu_CombatZones_C.ExecuteUbergraph_debugmenu_CombatZones
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebugmenu_CombatZones_C::ExecuteUbergraph_debugmenu_CombatZones(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debugmenu_CombatZones.debugmenu_CombatZones_C.ExecuteUbergraph_debugmenu_CombatZones"));

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
