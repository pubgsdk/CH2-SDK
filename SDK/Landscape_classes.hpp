#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Landscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshActor
// 0x0008 (0x0260 - 0x0258)
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.ControlPointMeshActor"));
		return ptr;
	}

};


// Class Landscape.ControlPointMeshComponent
// 0x0010 (0x0510 - 0x0500)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                    // 0x0500(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0504(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.ControlPointMeshComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0320 (0x0578 - 0x0258)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                            // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxLODLevel;                                              // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LODDistanceFactor;                                        // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0280(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LOD0ScreenSize;                                           // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LOD0DistributionSetting;                                  // 0x028C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LODDistributionSetting;                                   // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TessellationComponentScreenSize;                          // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseTessellationComponentScreenSizeFalloff;                // 0x0298(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              TessellationComponentScreenSizeFalloff;                   // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OccluderGeometryLOD;                                      // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                        // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x02A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StreamingDistanceMultiplier;                              // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x02E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                               // 0x02E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMeshHoles;                                               // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      MeshHolesMaxLod;                                          // 0x02F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02FA(0x0006) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VirtualTextureNumLods;                                    // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VirtualTextureLodBias;                                    // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              NegativeZBoundsExtension;                                 // 0x031C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                 // 0x0320(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0328(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0338(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0348(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x64];                                      // 0x0358(0x0064) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x03BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x03C4(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x03C4(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x03C4(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLightingChannels                           LightingChannels;                                         // 0x03C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x03CC(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x03CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LDMaxDrawDistance;                                        // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x03D8(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                        // 0x03F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                  // 0x03F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                       // 0x03F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0400(0x0110) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0510(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0514(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                      // 0x0518(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                           // 0x051C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0520(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bFillCollisionUnderLandscapeForNavmesh : 1;               // 0x0520(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	bool                                               bUseDynamicMaterialInstance;                              // 0x0524(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0525(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0526(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasLayersContent;                                        // 0x0527(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                        // 0x0528(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeProxy"));
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);
	class ULandscapeLayerInfoObject* GetLayerInfoObjectByName(const struct FName& LayerName);
	void GetAllLayerNames(TArray<struct FName>* LayerNames);
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};


// Class Landscape.Landscape
// 0x0000 (0x0578 - 0x0578)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.Landscape"));
		return ptr;
	}

};


// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (0x0258 - 0x0258)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeBlueprintBrushBase"));
		return ptr;
	}


	void RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UTexture2D*>* OutStreamableAssets);
};


// Class Landscape.LandscapeComponent
// 0x01F0 (0x0660 - 0x0470)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                             // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                       // 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                      // 0x047C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                           // 0x0480(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x0498(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                 // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;              // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector4                                    WeightmapScaleBias;                                       // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeightmapSubsectionOffset;                                // 0x0500(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0504(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                           // 0x0520(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x053C(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0560(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0570(0x0010) (CPF_ZeroConstructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FGuid                                       MapBuildDataId;                                           // 0x0580(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0590(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                        // 0x05A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                  // 0x05A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NegativeZBoundsExtension;                                 // 0x05A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                 // 0x05AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaticLightingResolution;                                 // 0x05B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ForcedLOD;                                                // 0x05B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LODBias;                                                  // 0x05B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       StateId;                                                  // 0x05BC(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x05CC(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x05E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x05E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                 // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x48];                                      // 0x0618(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeComponent"));
		return ptr;
	}


	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0258 - 0x0258)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeGizmoActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x02A8 - 0x0258)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0258(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeGizmoActiveActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0470 - 0x0470)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeGizmoRenderComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0038(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                           // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                           // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeGrassType"));
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0550 - 0x0470)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SectionBaseX;                                             // 0x0480(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                             // 0x0484(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CollisionSizeQuads;                                       // 0x0488(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                           // 0x048C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0490(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       HeightfieldGuid;                                          // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                           // 0x04B8(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x04D4(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0510(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeHeightfieldCollisionComponent"));
		return ptr;
	}


	class ULandscapeComponent* GetRenderComponent();
};


// Class Landscape.LandscapeInfo
// 0x01E8 (0x0210 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x006C(0x00A4) MISSED OFFSET
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                  // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0120(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeInfo"));
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeInfoMap"));
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Hardness;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeLayerInfoObject"));
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0018 (0x0428 - 0x0410)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                                     // 0x0410(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x0420(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x0420(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bMobile : 1;                                              // 0x0420(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEditorToolUsage : 1;                                     // 0x0420(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeMaterialInstanceConstant"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (0x0570 - 0x0550)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x0550(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0560(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeMeshCollisionComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0260 - 0x0258)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeMeshProxyActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0530 - 0x0500)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int8_t                                             ProxyLOD;                                                 // 0x0520(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0521(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeMeshProxyComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeSettings
// 0x0008 (0x0040 - 0x0038)
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                        // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeSettings"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x04A0 - 0x0470)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0480(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0490(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeSplinesComponent"));
		return ptr;
	}


	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};


// Class Landscape.LandscapeSplineControlPoint
// 0x0080 (0x00A8 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Width;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LayerWidthRatio;                                          // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SideFalloff;                                              // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LeftSideFalloffFactor;                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RightSideFalloffFactor;                                   // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LeftSideLayerFalloffFactor;                               // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RightSideLayerFalloffFactor;                              // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EndFalloff;                                               // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x00A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeSplineControlPoint"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (CPF_Edit, CPF_EditFixedSize, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_TextExportTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeSplineSegment"));
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0598 - 0x0578)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0578(0x001C) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeStreamingProxy"));
		return ptr;
	}

};


// Class Landscape.LandscapeSubsystem
// 0x0068 (0x0098 - 0x0030)
class ULandscapeSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeSubsystem"));
		return ptr;
	}

};


// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (0x0058 - 0x0028)
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       LayerGuid;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.LandscapeWeightmapUsage"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeGrassOutput"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeLayerBlend"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MappingRotation;                                          // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MappingPanU;                                              // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MappingPanV;                                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeLayerCoords"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x004C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSample"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0040(0x000C) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0054(0x000C) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      PreviewUsed : 1;                                          // 0x0070(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0074(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            base;                                                     // 0x0040(0x000C) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            Layer;                                                    // 0x0054(0x000C) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ConstBase;                                                // 0x0074(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeLayerWeight"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
