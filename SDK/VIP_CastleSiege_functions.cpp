// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VIP_CastleSiege_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VIP_CastleSiege.VIP_CastleSiege_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVIP_CastleSiege_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_CastleSiege.VIP_CastleSiege_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VIP_CastleSiege.VIP_CastleSiege_C.OnCustomized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AVIP_CastleSiege_C::OnCustomized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_CastleSiege.VIP_CastleSiege_C.OnCustomized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VIP_CastleSiege.VIP_CastleSiege_C.ExecuteUbergraph_VIP_CastleSiege
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVIP_CastleSiege_C::ExecuteUbergraph_VIP_CastleSiege(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VIP_CastleSiege.VIP_CastleSiege_C.ExecuteUbergraph_VIP_CastleSiege"));

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
