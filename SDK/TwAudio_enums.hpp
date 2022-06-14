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

// Enum TwAudio.EAINoiseType
enum class EAINoiseType : uint8_t
{
	EAINoiseType__NT_Ambient       = 0,
	EAINoiseType__NT_AlertToSelf   = 1,
	EAINoiseType__NT_AlertToEnemy  = 2,
	EAINoiseType__NT_AlertToPOI    = 3,
	EAINoiseType__NT_Custom1       = 4,
	EAINoiseType__NT_Custom2       = 5,
	EAINoiseType__NT_Custom3       = 6,
	EAINoiseType__NT_Custom4       = 7,
	EAINoiseType__NT_Custom5       = 8,
	EAINoiseType__NT_Custom6       = 9,
	EAINoiseType__NT_Custom7       = 10,
	EAINoiseType__NT_Custom8       = 11,
	EAINoiseType__NT_MAX           = 12
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
