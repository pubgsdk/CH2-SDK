#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_RankUpMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_RankUpMessage.BPI_RankUpMessage_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_RankUpMessage_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_RankUpMessage.BPI_RankUpMessage_C"));
		return ptr;
	}


	void StartUnlockMessage(const struct FPrimaryAssetId& Unlocked);
	void StartRankMessage(const struct FRankUpMessage& RankMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
