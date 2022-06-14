// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIC_Chicken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Chicken.AIC_Chicken_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Volume                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIC_Chicken_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIC_Chicken.AIC_Chicken_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature"));

	struct
	{
		class APawn*                   Instigator;
		struct FVector                 Location;
		float                          Volume;
	} params = {};

	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIC_Chicken.AIC_Chicken_C.Heard a chicken panic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIC_Chicken_C::Heard_a_chicken_panic(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIC_Chicken.AIC_Chicken_C.Heard a chicken panic"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIC_Chicken.AIC_Chicken_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_Chicken_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIC_Chicken.AIC_Chicken_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIC_Chicken.AIC_Chicken_C.ExecuteUbergraph_AIC_Chicken
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIC_Chicken_C::ExecuteUbergraph_AIC_Chicken(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIC_Chicken.AIC_Chicken_C.ExecuteUbergraph_AIC_Chicken"));

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
