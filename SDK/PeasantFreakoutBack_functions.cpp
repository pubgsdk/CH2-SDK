// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PeasantFreakoutBack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PeasantFreakoutBack.PeasantFreakoutBack_C.OnAssemble_PeasantFreakoutBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPeasantFreakoutBack_C::OnAssemble_PeasantFreakoutBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutBack.PeasantFreakoutBack_C.OnAssemble_PeasantFreakoutBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakoutBack.PeasantFreakoutBack_C.ExecuteUbergraph_PeasantFreakoutBack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPeasantFreakoutBack_C::ExecuteUbergraph_PeasantFreakoutBack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutBack.PeasantFreakoutBack_C.ExecuteUbergraph_PeasantFreakoutBack"));

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
