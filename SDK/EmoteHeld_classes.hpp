#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EmoteHeld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmoteHeld.EmoteHeld_C
// 0x0020 (0x00D8 - 0x00B8)
class UEmoteHeld_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USingleTargetMethod*                         SingleTargetMethod_400_320_ExecuteUbergraph_EmoteHeld_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                EmoteHeld_ExecuteUbergraph_EmoteHeld_RefProperty;         // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_416_160_ExecuteUbergraph_EmoteHeld_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmoteHeld.EmoteHeld_C"));
		return ptr;
	}


	void OnAssemble_EmoteHeld();
	void ExecuteUbergraph_EmoteHeld(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
