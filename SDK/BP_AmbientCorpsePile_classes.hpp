#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AmbientCorpsePile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmbientCorpsePile.BP_AmbientCorpsePile_C
// 0x00F8 (0x0350 - 0x0258)
class ABP_AmbientCorpsePile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ExclusionVolumes__Sphere_Only_;                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose3_Mason;                                              // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose2_Mason;                                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose3_Agatha;                                             // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose2_Agatha;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose1_Mason;                                              // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene1;                                                   // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               Pose1_Agatha;                                             // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               PlacementVolume;                                          // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               Stream;                                                   // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               IsActive;                                                 // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	struct FName                                       Group;                                                    // 0x02CC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Weight;                                                   // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxCorpses;                                               // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	class UInstancedStaticMeshComponent*               ActiveInstance;                                           // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsInitialized;                                            // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UStaticMesh>>          AgathaMeshes;                                             // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UStaticMesh>>          MasonMeshes;                                              // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TArray<class UInstancedStaticMeshComponent*>       ActiveInstances;                                          // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class USphereComponent*>                    ExclusionComps;                                           // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               IsDebugMode;                                              // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    CallRemoveCorpse;                                         // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class ABP_AmbientCorpseManager_C*                  Manager;                                                  // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmbientCorpsePile.BP_AmbientCorpsePile_C"));
		return ptr;
	}


	void RemoveCorpse(bool* Success);
	void InExclusionVolume(const struct FVector& Loc, bool* _);
	void SetMesh(class UInstancedStaticMeshComponent* Target, class UObject* Object);
	void SetActiveInstance(bool* CanProceed);
	void GetInstanceCount(int* _);
	void GetLocation(const struct FTransform& Transform, bool* Success, struct FTransform* Transform_);
	void AddCorpse(int Num, const struct FTransform& Transform);
	void UserConstructionScript();
	void OnLoaded_C9A25395492F654F757720AC260C7E78(class UObject* Loaded);
	void OnLoaded_A7CCA1E04232F5E1AF3277835265ACD2(class UObject* Loaded);
	void OnLoaded_677C30744A1B0739C408E6849B186C38(class UObject* Loaded);
	void OnLoaded_44F85EE74844C62146BF02929A91A96C(class UObject* Loaded);
	void OnLoaded_D68B86DC4D10AC575678D880E961FF4C(class UObject* Loaded);
	void OnLoaded_2CF831AE40FF53CF980AFDA790EB21E3(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ActivateArea();
	void DeactivateArea();
	void ExecuteUbergraph_BP_AmbientCorpsePile(int EntryPoint);
	void CallRemoveCorpse__DelegateSignature(class ABP_AmbientCorpsePile_C* _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
