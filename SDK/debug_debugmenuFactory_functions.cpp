// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debug_debugmenuFactory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_debugmenuFactory.debug_debugmenuFactory_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText Udebug_debugmenuFactory_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_debugmenuFactory.debug_debugmenuFactory_C.GetText_1"));

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


// Function debug_debugmenuFactory.debug_debugmenuFactory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Udebug_debugmenuFactory_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_debugmenuFactory.debug_debugmenuFactory_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function debug_debugmenuFactory.debug_debugmenuFactory_C.ExecuteUbergraph_debug_debugmenuFactory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Udebug_debugmenuFactory_C::ExecuteUbergraph_debug_debugmenuFactory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function debug_debugmenuFactory.debug_debugmenuFactory_C.ExecuteUbergraph_debug_debugmenuFactory"));

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
