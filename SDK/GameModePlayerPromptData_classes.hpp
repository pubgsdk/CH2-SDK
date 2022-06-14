#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModePlayerPromptData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameModePlayerPromptData.GameModePlayerPromptData_C
// 0x0000 (0x0028 - 0x0028)
class UGameModePlayerPromptData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameModePlayerPromptData.GameModePlayerPromptData_C"));
		return ptr;
	}


	static void GetPlayerPromptDataFromMessageTag(const struct FGameplayTag& MessageTag, class UObject* __WorldContext, bool* Found, struct FPlayerPromptFormattedMessage* MessageStruct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
