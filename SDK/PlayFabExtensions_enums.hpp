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

// Enum PlayFabExtensions.ESessionMessageType
enum class ESessionMessageType : uint8_t
{
	ESessionMessageType__INVALID   = 0,
	ESessionMessageType__JOIN_QUEUE = 1,
	ESessionMessageType__LEAVE_QUEUE = 2,
	ESessionMessageType__JOIN_GAME = 3,
	ESessionMessageType__JOIN_LOBBY = 4,
	ESessionMessageType__VALIDATE_CROSSPLAY = 5,
	ESessionMessageType__ESessionMessageType_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
