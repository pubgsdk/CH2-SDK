// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debug_Wave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_Wave.debug_Wave_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_Wave_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.GetText_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_Wave.debug_Wave_C.Get Time Left
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_Wave_C::Get_Time_Left()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.Get Time Left"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_Wave.debug_Wave_C.Get Num Players
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_Wave_C::Get_Num_Players()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.Get Num Players"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_Wave.debug_Wave_C.GetWaveName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_Wave_C::GetWaveName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.GetWaveName"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function debug_Wave.debug_Wave_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebug_Wave_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_Wave.debug_Wave_C.ExecuteUbergraph_debug_Wave
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebug_Wave_C::ExecuteUbergraph_debug_Wave(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_Wave.debug_Wave_C.ExecuteUbergraph_debug_Wave"));

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
