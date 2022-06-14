// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BandageKit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BandageKit.BandageKit_C.OnAssemble_BandageKit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBandageKit_C::OnAssemble_BandageKit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BandageKit.BandageKit_C.OnAssemble_BandageKit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BandageKit.BandageKit_C.ExecuteUbergraph_BandageKit
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBandageKit_C::ExecuteUbergraph_BandageKit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BandageKit.BandageKit_C.ExecuteUbergraph_BandageKit"));

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
