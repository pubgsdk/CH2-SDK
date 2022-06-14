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

// Enum AppleProResMedia.EAppleProResEncoderScanType
enum class EAppleProResEncoderScanType : uint8_t
{
	EAppleProResEncoderScanType__IM_PROGRESSIVE_SCAN = 0,
	EAppleProResEncoderScanType__IM_INTERLACED_TOP_FIELD_FIRST = 1,
	EAppleProResEncoderScanType__IM_INTERLATED_BOTTOM_FIRST_FIRST = 2,
	EAppleProResEncoderScanType__IM_MAX = 3
};


// Enum AppleProResMedia.EAppleProResEncoderColorDescription
enum class EAppleProResEncoderColorDescription : uint8_t
{
	EAppleProResEncoderColorDescription__CD_SDREC601_525_60HZ = 0,
	EAppleProResEncoderColorDescription__CD_SDREC601_625_50HZ = 1,
	EAppleProResEncoderColorDescription__CD_HDREC709 = 2,
	EAppleProResEncoderColorDescription__CD_MAX = 3
};


// Enum AppleProResMedia.EAppleProResEncoderFormats
enum class EAppleProResEncoderFormats : uint8_t
{
	EAppleProResEncoderFormats__F_422HQ = 0,
	EAppleProResEncoderFormats__F  = 1,
	EAppleProResEncoderFormats__F_422LT = 2,
	EAppleProResEncoderFormats__F_422Proxy = 3,
	EAppleProResEncoderFormats__F01 = 4,
	EAppleProResEncoderFormats__F_4444XQ = 5,
	EAppleProResEncoderFormats__F_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
