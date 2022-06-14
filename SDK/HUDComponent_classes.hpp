#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HUDComponent.HUDComponent_C
// 0x0029 (0x0131 - 0x0108)
class UHUDComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FWidgetHudTypePair>                  Widget_Type_Pairs;                                        // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               NewTags;                                                  // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Is_Visible;                                               // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HUDComponent.HUDComponent_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void Force_Init();
	void ExecuteUbergraph_HUDComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
