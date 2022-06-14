#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Dodge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_Dodge.AC_Dodge_C
// 0x0050 (0x0090 - 0x0040)
class UAC_Dodge_C : public UUtilityAI_Action
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                Timeout_handle;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Hold_Time;                                                // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EMovementDirection>>            Allowed_Directions;                                       // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	EAiCombatDistance                                  Distance;                                                 // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    NewEventDispatcher_1;                                     // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               Attack;                                                   // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class ATBLAICombatController*                      My_Controller;                                            // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_Dodge.AC_Dodge_C"));
		return ptr;
	}


	void PerformAction(const struct FUtilityAI_Context& C);
	void Finish();
	void ExecuteUbergraph_AC_Dodge(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
