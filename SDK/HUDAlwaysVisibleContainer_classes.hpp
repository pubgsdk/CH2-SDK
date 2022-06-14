#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDAlwaysVisibleContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDAlwaysVisibleContainer.HUDAlwaysVisibleContainer_C
// 0x0008 (0x0250 - 0x0248)
class UHUDAlwaysVisibleContainer_C : public UUserWidget
{
public:
	class UGenericHUDContainerOverlay_C*               GenericHUDContainerOverlay;                               // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUDAlwaysVisibleContainer.HUDAlwaysVisibleContainer_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
