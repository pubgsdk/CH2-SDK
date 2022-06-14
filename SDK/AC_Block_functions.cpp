// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Block_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_Block.AC_Block_C.Finish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAC_Block_C::Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Block.AC_Block_C.Finish"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Block.AC_Block_C.CompleteAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_Block_C::CompleteAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Block.AC_Block_C.CompleteAction"));

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


// Function AC_Block.AC_Block_C.PerformAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_Block_C::PerformAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Block.AC_Block_C.PerformAction"));

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


// Function AC_Block.AC_Block_C.ExecuteUbergraph_AC_Block
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAC_Block_C::ExecuteUbergraph_AC_Block(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Block.AC_Block_C.ExecuteUbergraph_AC_Block"));

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
