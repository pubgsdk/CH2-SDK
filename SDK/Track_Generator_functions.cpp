// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Track_Generator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Track_Generator.Track_Generator_C.Build_Track_Element
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LoopIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             TrackElementMesh               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATrack_Generator_C::Build_Track_Element(int LoopIndex, class UStaticMesh* TrackElementMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Track_Generator.Track_Generator_C.Build_Track_Element"));

	struct
	{
		int                            LoopIndex;
		class UStaticMesh*             TrackElementMesh;
	} params = {};

	params.LoopIndex = LoopIndex;
	params.TrackElementMesh = TrackElementMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Track_Generator.Track_Generator_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATrack_Generator_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Track_Generator.Track_Generator_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
