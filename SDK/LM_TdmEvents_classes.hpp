#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LM_TdmEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LM_TdmEvents.LM_TdmEvents_C
// 0x0000 (0x0028 - 0x0028)
class ULM_TdmEvents_C : public UTBLLocalMessageGameplayEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LM_TdmEvents.LM_TdmEvents_C"));
		return ptr;
	}


	void OnMessageReceived(class APlayerController* Receiver, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
