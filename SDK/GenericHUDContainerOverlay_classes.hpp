#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GenericHUDContainerOverlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GenericHUDContainerOverlay.GenericHUDContainerOverlay_C
// 0x0010 (0x04E0 - 0x04D0)
class UGenericHUDContainerOverlay_C : public UHUDContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    Overlay_1;                                                // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass GenericHUDContainerOverlay.GenericHUDContainerOverlay_C"));
		return ptr;
	}


	void AddSubwidget(class UHUDContainerSubWidget* SubWidget);
	void RemoveSubwidget(class UHUDContainerSubWidget* SubWidget);
	void ExecuteUbergraph_GenericHUDContainerOverlay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
