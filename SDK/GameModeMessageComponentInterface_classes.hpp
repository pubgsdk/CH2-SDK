#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageComponentInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameModeMessageComponentInterface.GameModeMessageComponentInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGameModeMessageComponentInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameModeMessageComponentInterface.GameModeMessageComponentInterface_C"));
		return ptr;
	}


	void Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
