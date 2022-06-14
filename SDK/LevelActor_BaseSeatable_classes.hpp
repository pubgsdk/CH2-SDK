#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LevelActor_BaseSeatable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelActor_BaseSeatable.LevelActor_BaseSeatable_C
// 0x0010 (0x0358 - 0x0348)
class ALevelActor_BaseSeatable_C : public ALevelActor_WorldBase_NoStats_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USiegeMountPoint*                            SiegeMountPoint;                                          // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LevelActor_BaseSeatable.LevelActor_BaseSeatable_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LevelActor_BaseSeatable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
