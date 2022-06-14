#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Constructable_Barricade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Constructable_Barricade.Constructable_Barricade_C
// 0x0010 (0x0520 - 0x0510)
class AConstructable_Barricade_C : public ABP_Base_Deployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Constructable_Barricade.Constructable_Barricade_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnUse_Event_Barricade(class APawn* Pawn, class UInteractableComponent* Interactable);
	void ExecuteUbergraph_Constructable_Barricade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
