#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ImGui_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImGui.ImGuiInputHandler
// 0x0028 (0x0050 - 0x0028)
class UImGuiInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ImGui.ImGuiInputHandler"));
		return ptr;
	}

};


// Class ImGui.ImGuiSettings
// 0x00E8 (0x0110 - 0x0028)
class UImGuiSettings : public UObject
{
public:
	struct FSoftClassPath                              ImGuiInputHandlerClass;                                   // 0x0028(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShareKeyboardInput;                                      // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShareGamepadInput;                                       // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShareMouseInput;                                         // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseSoftwareCursor;                                       // 0x0043(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FImGuiKeyInfo                               ToggleInput;                                              // 0x0048(0x0020) (CPF_Edit, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FImGuiCanvasSizeInfo                        CanvasSize;                                               // 0x0068(0x0010) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FImGuiDPIScaleInfo                          DPIScale;                                                 // 0x0078(0x0098) (CPF_Edit, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ImGui.ImGuiSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
