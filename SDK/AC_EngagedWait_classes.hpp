#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_EngagedWait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_EngagedWait.AC_EngagedWait_C
// 0x001A (0x0064 - 0x004A)
class UAC_EngagedWait_C : public UAC_StrafeAndKeepDistance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector2D                                   WaitTime;                                                 // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DelayTime;                                                // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_EngagedWait.AC_EngagedWait_C"));
		return ptr;
	}


	void PerformAction(const struct FUtilityAI_Context& C);
	void CompleteAction(const struct FUtilityAI_Context& C);
	void ExecuteUbergraph_AC_EngagedWait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
