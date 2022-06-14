// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FunctionLibrary_Gameplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_Gameplay.FunctionLibrary_Gameplay_C.DirectionToActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Target_                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Dir                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_Gameplay_C::DirectionToActor(class AActor* Actor, class AActor* Target_, class UObject* __WorldContext, struct FVector* Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_Gameplay.FunctionLibrary_Gameplay_C.DirectionToActor"));

	struct
	{
		class AActor*                  Actor;
		class AActor*                  Target_;
		class UObject*                 __WorldContext;
		struct FVector                 Dir;
	} params = {};

	params.Actor = Actor;
	params.Target_ = Target_;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Dir != nullptr)
		*Dir = params.Dir;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
