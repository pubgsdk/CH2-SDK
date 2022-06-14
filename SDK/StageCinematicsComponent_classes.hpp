#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StageCinematicsComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StageCinematicsComponent.StageCinematicsComponent_C
// 0x0010 (0x0118 - 0x0108)
class UStageCinematicsComponent_C : public UActorComponent
{
public:
	class ALevelSequenceActor*                         BlueSequence;                                             // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         RedSequence;                                              // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StageCinematicsComponent.StageCinematicsComponent_C"));
		return ptr;
	}


	void Init_From_Properties(const struct FStandardStageCinematicProperties& Properties);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
