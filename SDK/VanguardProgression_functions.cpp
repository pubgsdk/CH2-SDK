// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VanguardProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VanguardProgression.VanguardProgression_C.OnAssemble_VanguardProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVanguardProgression_C::OnAssemble_VanguardProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VanguardProgression.VanguardProgression_C.OnAssemble_VanguardProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VanguardProgression.VanguardProgression_C.ExecuteUbergraph_VanguardProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVanguardProgression_C::ExecuteUbergraph_VanguardProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VanguardProgression.VanguardProgression_C.ExecuteUbergraph_VanguardProgression"));

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
