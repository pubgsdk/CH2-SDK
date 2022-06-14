#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EasyAntiCheatCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x0110 - 0x0108)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent"));
		return ptr;
	}


	void ServerMessage(TArray<unsigned char> Message);
	void ClientMessage(TArray<unsigned char> Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
