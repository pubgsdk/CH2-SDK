// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PeasantFreakoutRight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PeasantFreakoutRight.PeasantFreakoutRight_C.OnAssemble_PeasantFreakoutRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPeasantFreakoutRight_C::OnAssemble_PeasantFreakoutRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutRight.PeasantFreakoutRight_C.OnAssemble_PeasantFreakoutRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakoutRight.PeasantFreakoutRight_C.ExecuteUbergraph_PeasantFreakoutRight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPeasantFreakoutRight_C::ExecuteUbergraph_PeasantFreakoutRight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutRight.PeasantFreakoutRight_C.ExecuteUbergraph_PeasantFreakoutRight"));

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
