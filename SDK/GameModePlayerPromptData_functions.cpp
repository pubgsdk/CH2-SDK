// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModePlayerPromptData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModePlayerPromptData.GameModePlayerPromptData_C.GetPlayerPromptDataFromMessageTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            MessageTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPlayerPromptFormattedMessage MessageStruct                  (CPF_Parm, CPF_OutParm)

void UGameModePlayerPromptData_C::GetPlayerPromptDataFromMessageTag(const struct FGameplayTag& MessageTag, class UObject* __WorldContext, bool* Found, struct FPlayerPromptFormattedMessage* MessageStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModePlayerPromptData.GameModePlayerPromptData_C.GetPlayerPromptDataFromMessageTag"));

	struct
	{
		struct FGameplayTag            MessageTag;
		class UObject*                 __WorldContext;
		bool                           Found;
		struct FPlayerPromptFormattedMessage MessageStruct;
	} params = {};

	params.MessageTag = MessageTag;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Found != nullptr)
		*Found = params.Found;
	if (MessageStruct != nullptr)
		*MessageStruct = params.MessageStruct;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
