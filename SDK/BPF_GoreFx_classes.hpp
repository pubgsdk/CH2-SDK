#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_GoreFx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_GoreFx.BPF_GoreFx_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_GoreFx_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_GoreFx.BPF_GoreFx_C"));
		return ptr;
	}


	static void Gore_BoneToEnumSelection(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece);
	static void GetProjectileRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force);
	static void GetCurrentHelmetPolicy(class AActor* Actor, const struct FTBL_FGoreEvent& GoreEvent, class UObject* __WorldContext, EHelmetRemovalPolicy* OutLimbGoreAction);
	static void ApplyForceToHorse(class ACharacter* Character, const struct FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext);
	static void GetHorseGorePiece(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece);
	static void PlayGoreSound(const struct FName& RowName, class AActor* Actor, class UObject* __WorldContext);
	static void GetWeaponRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force);
	static void GetGorePiece(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece);
	static void GetCurrentGoreAction(class AActor* Actor, class AInventoryItem* KillingBlowItem, class UObject* __WorldContext, ELimbGoreAction* OutLimbGoreAction, EHeadGoreAction* OutHeadGoreAction);
	static void ApplyForceToRagdoll(class ATBLCharacter* Character, const struct FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext);
	static void GetPawnChildMesh(class AActor* Actor, int MeshIndex, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh);
	static void IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
