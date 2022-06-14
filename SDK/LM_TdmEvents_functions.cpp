// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LM_TdmEvents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LM_TdmEvents.LM_TdmEvents_C.OnMessageReceived
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class APlayerController*       Receiver                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateA                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateB                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULM_TdmEvents_C::OnMessageReceived(class APlayerController* Receiver, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LM_TdmEvents.LM_TdmEvents_C.OnMessageReceived"));

	struct
	{
		class APlayerController*       Receiver;
		int                            Data;
		class APlayerState*            PlayerStateA;
		class APlayerState*            PlayerStateB;
		class UObject*                 Object;
	} params = {};

	params.Receiver = Receiver;
	params.Data = Data;
	params.PlayerStateA = PlayerStateA;
	params.PlayerStateB = PlayerStateB;
	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
