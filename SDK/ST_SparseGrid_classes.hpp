#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ST_SparseGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ST_SparseGrid.ST_SGComponent
// 0x0010 (0x0118 - 0x0108)
class UST_SGComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ST_SparseGrid.ST_SGComponent"));
		return ptr;
	}

};


// Class ST_SparseGrid.ST_SGStatics
// 0x0000 (0x0028 - 0x0028)
class UST_SGStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ST_SparseGrid.ST_SGStatics"));
		return ptr;
	}


	static void K2_GetComponents_Sphere(class UObject* WorldContextObject, const struct FVector& WorldLocation, float SphereRadius, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents);
	static void K2_GetComponents_RotatedBox(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FRotator& BoxRotation, const struct FVector& BoxExtents, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents);
	static void K2_GetComponents_Cone(class UObject* WorldContextObject, const struct FVector& WorldLocation, float ConeLength, float ConeHalfAngleRadians, const struct FVector& Axis, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents);
	static void K2_GetComponents_Capsule(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FVector& CapsuleAxis, float CapsuleRadius, float CapsuleHalfHeight, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents);
	static void K2_GetComponents_Box(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FVector& BoxExtents, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents);
	static struct FST_Int2D K2_ConvertToInt2D(int CellID, class UST_SparseGrid* Grid);
	static int K2_ConvertToCellID(const struct FST_Int2D& XY, class UST_SparseGrid* Grid);
	static struct FVector2D Int2DToVector(const struct FST_Int2D& InInt2D);
	static void GetComponentsOwners_Typed(TArray<class UST_SGComponent*> GridComponents, class UClass* /*AActor*/ ActorClass, TArray<class AActor*>* Actors);
	static void GetComponentsOwners(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors);
};


// Class ST_SparseGrid.ST_SparseGrid
// 0x0078 (0x0180 - 0x0108)
class UST_SparseGrid : public UActorComponent
{
public:
	struct FST_Int2D                                   GridOrigin;                                               // 0x0108(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                NumCellsX;                                                // 0x0110(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                NumCellsY;                                                // 0x0114(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellSize;                                                 // 0x0118(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RegisterAllocSize;                                        // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RegisterAllocShrinkMultiplier;                            // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellAllocSize;                                            // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellAllocShrinkMultiplier;                                // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	TArray<class UST_SGComponent*>                     GridComponents;                                           // 0x0130(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0140(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ST_SparseGrid.ST_SparseGrid"));
		return ptr;
	}


	int K2_WorldToCell(const struct FVector2D& InWorldXY);
	void K2_GetTileComponents(const struct FST_SparseGridCellTile& Tile, TArray<class UST_SGComponent*>* Components);
	struct FST_Int2D K2_GetGridMax();
	void K2_GetCellComponents(int CellID, TArray<class UST_SGComponent*>* Components);
	float K2_GetCellBoundsRadius();
	struct FST_SparseGridCellTile GetSearchTile(const struct FVector2D& WorldSearchOrigin, const struct FVector2D& WorldSearchExtents, bool bClampGridEdge);
	TArray<class UST_SGComponent*> GetGridComponents();
	static class UST_SparseGrid* Get(class UObject* WorldContextObject);
	void ForceRebuild();
};


// Class ST_SparseGrid.ST_SparseGridData
// 0x0030 (0x0058 - 0x0028)
class UST_SparseGridData : public UAssetUserData
{
public:
	class UClass* /*UST_SparseGrid*/                   GridClass;                                                // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FST_Int2D                                   GridOrigin;                                               // 0x0030(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                NumCellsX;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                NumCellsY;                                                // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellSize;                                                 // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RegisterAllocSize;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellAllocSize;                                            // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RegisterAllocShrinkMultiplier;                            // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CellAllocShrinkMultiplier;                                // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ST_SparseGrid.ST_SparseGridData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
