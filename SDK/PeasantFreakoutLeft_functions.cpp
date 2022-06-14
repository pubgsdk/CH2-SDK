// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PeasantFreakoutLeft_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.OnAssemble_PeasantFreakoutLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPeasantFreakoutLeft_C::OnAssemble_PeasantFreakoutLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.OnAssemble_PeasantFreakoutLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.ExecuteUbergraph_PeasantFreakoutLeft
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPeasantFreakoutLeft_C::ExecuteUbergraph_PeasantFreakoutLeft(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.ExecuteUbergraph_PeasantFreakoutLeft"));

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
