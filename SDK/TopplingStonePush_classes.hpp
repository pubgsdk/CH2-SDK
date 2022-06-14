#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TopplingStonePush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TopplingStonePush.TopplingStonePush_C
// 0x0020 (0x00D8 - 0x00B8)
class UTopplingStonePush_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USingleTargetMethod*                         SingleTargetMethod_560_272_ExecuteUbergraph_TopplingStonePush_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                TopplingStonePush_ExecuteUbergraph_TopplingStonePush_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOnOffActivationMethod*                      OnOffActivationMethod_576_16_ExecuteUbergraph_TopplingStonePush_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TopplingStonePush.TopplingStonePush_C"));
		return ptr;
	}


	void OnAssemble_TopplingStonePush();
	void ExecuteUbergraph_TopplingStonePush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
