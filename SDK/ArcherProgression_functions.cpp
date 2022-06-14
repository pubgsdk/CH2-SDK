// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ArcherProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcherProgression.ArcherProgression_C.OnAssemble_ArcherProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UArcherProgression_C::OnAssemble_ArcherProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ArcherProgression.ArcherProgression_C.OnAssemble_ArcherProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ArcherProgression.ArcherProgression_C.ExecuteUbergraph_ArcherProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UArcherProgression_C::ExecuteUbergraph_ArcherProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ArcherProgression.ArcherProgression_C.ExecuteUbergraph_ArcherProgression"));

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
