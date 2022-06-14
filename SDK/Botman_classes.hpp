#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Botman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Botman.Botman_C
// 0x0048 (0x17D8 - 0x1790)
class ABotman_C : public ABaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1790(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                BodyID;                                                   // 0x1798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HeadID;                                                   // 0x179C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HelmetID;                                                 // 0x17A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x17A4(0x0004) MISSED OFFSET
	TArray<struct FName>                               PossibleHatMorphs;                                        // 0x17A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bUseCustomPlayerCustomization;                            // 0x17B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x17B9(0x0007) MISSED OFFSET
	class UCTHelmet*                                   HelmetCustom;                                             // 0x17C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCTArmourSet*                                ArmourCustom;                                             // 0x17C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCTHeraldry*                                 HeraldryCustom;                                           // 0x17D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Botman.Botman_C"));
		return ptr;
	}


	bool ShouldDealTeamDamageAgainst(class AActor* TargetTeammate);
	void GetRandomHat(EFaction Faction, struct FName* Output);
	void SetHatMorphTarget(const struct FName& Target_);
	void SetBodyMaterial(const struct FName& InMeshName, EFaction Faction);
	void OnCustomized();
	void ReceiveBeginPlay();
	void CustomPlayerCustomization();
	void ExecuteUbergraph_Botman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
