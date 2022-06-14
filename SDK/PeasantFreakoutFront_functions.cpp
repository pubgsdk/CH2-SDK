// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PeasantFreakoutFront_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PeasantFreakoutFront.PeasantFreakoutFront_C.OnAssemble_PeasantFreakoutFront
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPeasantFreakoutFront_C::OnAssemble_PeasantFreakoutFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutFront.PeasantFreakoutFront_C.OnAssemble_PeasantFreakoutFront"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakoutFront.PeasantFreakoutFront_C.ExecuteUbergraph_PeasantFreakoutFront
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPeasantFreakoutFront_C::ExecuteUbergraph_PeasantFreakoutFront(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutFront.PeasantFreakoutFront_C.ExecuteUbergraph_PeasantFreakoutFront"));

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
