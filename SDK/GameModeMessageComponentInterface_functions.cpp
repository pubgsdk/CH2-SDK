// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageComponentInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeMessageComponentInterface.GameModeMessageComponentInterface_C.Interface_QueueGameModeMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> Messages                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponentInterface_C::Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponentInterface.GameModeMessageComponentInterface_C.Interface_QueueGameModeMessages"));

	struct
	{
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};

	params.Messages = Messages;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
