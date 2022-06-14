#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadingScreensConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadingScreensConfig.LoadingScreensConfig_C
// 0x0000 (0x0138 - 0x0138)
class ULoadingScreensConfig_C : public UMapSpecificLoadingScreenConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LoadingScreensConfig.LoadingScreensConfig_C"));
		return ptr;
	}


	class UClass* /*ULoadingScreenPanelWidget*/ GetDefaultLoadingScreenPanelWidgetClass();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
