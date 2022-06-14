// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StageCinematicsComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StageCinematicsComponent.StageCinematicsComponent_C.Init From Properties
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStandardStageCinematicProperties Properties                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStageCinematicsComponent_C::Init_From_Properties(const struct FStandardStageCinematicProperties& Properties)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StageCinematicsComponent.StageCinematicsComponent_C.Init From Properties"));

	struct
	{
		struct FStandardStageCinematicProperties Properties;
	} params = {};

	params.Properties = Properties;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
