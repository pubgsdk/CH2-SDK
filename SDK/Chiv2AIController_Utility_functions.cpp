// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Chiv2AIController_Utility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ReceivePossess
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChiv2AIController_Utility_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ReceivePossess"));

	struct
	{
		class APawn*                   PossessedPawn;
	} params = {};

	params.PossessedPawn = PossessedPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ExecuteUbergraph_Chiv2AIController_Utility
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChiv2AIController_Utility_C::ExecuteUbergraph_Chiv2AIController_Utility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ExecuteUbergraph_Chiv2AIController_Utility"));

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
