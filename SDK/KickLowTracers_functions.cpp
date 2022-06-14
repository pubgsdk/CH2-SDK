// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KickLowTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KickLowTracers.KickLowTracers_C.OnAssemble_KickLowTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKickLowTracers_C::OnAssemble_KickLowTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KickLowTracers.KickLowTracers_C.OnAssemble_KickLowTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KickLowTracers.KickLowTracers_C.ExecuteUbergraph_KickLowTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKickLowTracers_C::ExecuteUbergraph_KickLowTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KickLowTracers.KickLowTracers_C.ExecuteUbergraph_KickLowTracers"));

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
