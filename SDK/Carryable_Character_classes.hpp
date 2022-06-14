#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Character_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_Character.Carryable_Character_C
// 0x0017 (0x1278 - 0x1261)
class ACarryable_Character_C : public ABaseCarryable_2hLoot_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATBLCharacter*                               Character;                                                // 0x1270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_Character.Carryable_Character_C"));
		return ptr;
	}


	bool CanPickup(class APawn* Pawn);
	void OnInitialize();
	void ExecuteUbergraph_Carryable_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
