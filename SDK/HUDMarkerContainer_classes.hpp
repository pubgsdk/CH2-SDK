#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDMarkerContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDMarkerContainer.HUDMarkerContainer_C
// 0x0010 (0x05F0 - 0x05E0)
class UHUDMarkerContainer_C : public UHUDMarkerContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUDMarkerContainer.HUDMarkerContainer_C"));
		return ptr;
	}


	void AddSubwidget(class UHUDContainerSubWidget* SubWidget);
	void RemoveSubwidget(class UHUDContainerSubWidget* SubWidget);
	void SubwidgetInitFromPool(class UHUDContainerSubWidget* SubWidget);
	void SubwidgetReturnToPool(class UHUDContainerSubWidget* SubWidget);
	void ExecuteUbergraph_HUDMarkerContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
