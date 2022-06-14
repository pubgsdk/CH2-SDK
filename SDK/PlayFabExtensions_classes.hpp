#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayFabExtensions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayFabExtensions.PlayfabExtensionsSettings
// 0x0010 (0x0048 - 0x0038)
class UPlayfabExtensionsSettings : public UDeveloperSettings
{
public:
	struct FString                                     NativeSessionName;                                        // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlayFabExtensions.PlayfabExtensionsSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
