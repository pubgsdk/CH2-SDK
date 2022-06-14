#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemPlayFab.EPlayFabMatchmakingState
enum class EPlayFabMatchmakingState : uint8_t
{
	EPlayFabMatchmakingState__Inactive = 0,
	EPlayFabMatchmakingState__WaitingForQos = 1,
	EPlayFabMatchmakingState__WaitingForTicket = 2,
	EPlayFabMatchmakingState__PollingForMatch = 3,
	EPlayFabMatchmakingState__PollingForGameServer = 4,
	EPlayFabMatchmakingState__PollingBackfill = 5,
	EPlayFabMatchmakingState__Invalid = 6,
	EPlayFabMatchmakingState__EPlayFabMatchmakingState_MAX = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
