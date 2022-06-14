#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Cinematics_Helper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cinematics_Helper.Cinematics_Helper_C
// 0x0080 (0x02D8 - 0x0258)
class ACinematics_Helper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ATBLCharacter*>                       Crying;                                                   // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSet<struct FName>                                 StreamedLevels;                                           // 0x0278(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    IntroBurnStuff;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Cinematics_Helper.Cinematics_Helper_C"));
		return ptr;
	}


	void Run();
	void BattleCry(float Proportion, EFaction Faction);
	void PRIVATE_Do_One_Cry();
	void Start_Autoruns(EAutorunMovementMode Autorun_Type);
	void Walk();
	void CrouchWalk();
	void Sprint();
	void Unlock(class ATBLCharacter* Character);
	void Unlock_Level_Characters();
	void Allow_Control();
	void Stop();
	void Allow_Control_Faction(EFaction Faction);
	void EnableCinematicMesh();
	void DisableCinematicMesh();
	void LoadStreamLevel(const struct FName& LevelName);
	void UnloadStreamLevel(const struct FName& LevelName);
	void BurnStuff();
	void LoadStreamLevelInvisible(const struct FName& Level_Name);
	void SetVisibleStreamLevel(const struct FName& Level_Name);
	void LockAutorun();
	void UnlockAutorun();
	void RestrictControlCharacters();
	void AllowControlCharacters();
	void LockCharactersFromTaggedSpawners(const struct FName& SpawnerTag);
	void UnlockCharactersFromTaggedSpawners(const struct FName& SpawnerTag);
	void HideCharactersFromTaggedSpawner(const struct FName& SpawnerTag);
	void UnhideCharactersFromTaggedSpawner(const struct FName& SpawnerTag);
	void MarkSpawnersNoLongerJoinable(const struct FName& Tag);
	void ExecuteUbergraph_Cinematics_Helper(int EntryPoint);
	void IntroBurnStuff__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
