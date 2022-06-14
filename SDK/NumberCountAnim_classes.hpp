#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NumberCountAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NumberCountAnim.NumberCountAnim_C
// 0x00D0 (0x0318 - 0x0248)
class UNumberCountAnim_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBLTextBlock*                               TBLTextBlock_33;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              CurrentNumber;                                            // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetNumber;                                             // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       PrefixText_PosValue;                                      // 0x0260(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       PrefixText_NegValue;                                      // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LerpTime;                                                 // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0298(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FLinearColor                                TextColour;                                               // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       DefaultText;                                              // 0x0300(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass NumberCountAnim.NumberCountAnim_C"));
		return ptr;
	}


	void SetNumber(int Num, float LerpTime);
	void CustomEvent_1(float Value);
	void PreConstruct(bool IsDesignTime);
	void SetFontSize(int Size);
	void ExecuteUbergraph_NumberCountAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
