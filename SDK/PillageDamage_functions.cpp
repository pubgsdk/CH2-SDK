// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PillageDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PillageDamage.PillageDamage_C.OnAssemble_PillageDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPillageDamage_C::OnAssemble_PillageDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PillageDamage.PillageDamage_C.OnAssemble_PillageDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PillageDamage.PillageDamage_C.ExecuteUbergraph_PillageDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPillageDamage_C::ExecuteUbergraph_PillageDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PillageDamage.PillageDamage_C.ExecuteUbergraph_PillageDamage"));

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
