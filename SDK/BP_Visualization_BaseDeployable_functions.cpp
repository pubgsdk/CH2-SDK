// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Visualization_BaseDeployable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.SetMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Visualization_BaseDeployable_C::SetMaterial(class UMaterialInstance* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.SetMaterial"));

	struct
	{
		class UMaterialInstance*       Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.Set Can be Placed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InCanBePlaced                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Visualization_BaseDeployable_C::Set_Can_be_Placed(bool InCanBePlaced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.Set Can be Placed"));

	struct
	{
		bool                           InCanBePlaced;
	} params = {};

	params.InCanBePlaced = InCanBePlaced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Visualization_BaseDeployable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Visualization_BaseDeployable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ExecuteUbergraph_BP_Visualization_BaseDeployable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Visualization_BaseDeployable_C::ExecuteUbergraph_BP_Visualization_BaseDeployable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ExecuteUbergraph_BP_Visualization_BaseDeployable"));

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
