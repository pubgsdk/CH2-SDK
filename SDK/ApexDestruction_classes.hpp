#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ApexDestruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// 0x0018 (0x0270 - 0x0258)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FMulticastScriptDelegate                    OnActorFracture;                                          // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ApexDestruction.DestructibleActor"));
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x07A0 - 0x06C0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C0(0x0008) MISSED OFFSET
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x06C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x06D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableHardSleeping;                                      // 0x06E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x06E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x10];                                      // 0x06E8(0x0010) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnComponentFracture;                                      // 0x06F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x98];                                      // 0x0708(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ApexDestruction.DestructibleComponent"));
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x002C(0x0024) (CPF_Edit, CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OriginalSubmeshCount;                                     // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ApexDestruction.DestructibleFractureSettings"));
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x0448 - 0x03A8)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x03A8(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0430(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ApexDestruction.DestructibleMesh"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
