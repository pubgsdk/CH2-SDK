#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Flee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Flee.BTTask_Flee_C
// 0x004C (0x00F4 - 0x00A8)
class UBTTask_Flee_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      Flee_from;                                                // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class UAITask_MoveTo*                              Task;                                                     // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Flee_for_time;                                            // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Flee_time_handle;                                         // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Flee_random_variance;                                     // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTTask_Flee.BTTask_Flee_C"));
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	void Stopppp();
	void ExecuteUbergraph_BTTask_Flee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
