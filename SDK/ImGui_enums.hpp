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

// Enum ImGui.EImGuiDPIScaleMethod
enum class EImGuiDPIScaleMethod : uint8_t
{
	EImGuiDPIScaleMethod__ImGui    = 0,
	EImGuiDPIScaleMethod__Slate    = 1,
	EImGuiDPIScaleMethod__EImGuiDPIScaleMethod_MAX = 2
};


// Enum ImGui.EImGuiCanvasSizeType
enum class EImGuiCanvasSizeType : uint8_t
{
	EImGuiCanvasSizeType__Custom   = 0,
	EImGuiCanvasSizeType__Desktop  = 1,
	EImGuiCanvasSizeType__Viewport = 2,
	EImGuiCanvasSizeType__EImGuiCanvasSizeType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
