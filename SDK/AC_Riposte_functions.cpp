// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Riposte_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_Riposte.AC_Riposte_C.PerformAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_Riposte_C::PerformAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Riposte.AC_Riposte_C.PerformAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Riposte.AC_Riposte_C.CompleteAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_Riposte_C::CompleteAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Riposte.AC_Riposte_C.CompleteAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Riposte.AC_Riposte_C.ExecuteUbergraph_AC_Riposte
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAC_Riposte_C::ExecuteUbergraph_AC_Riposte(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Riposte.AC_Riposte_C.ExecuteUbergraph_AC_Riposte"));

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
