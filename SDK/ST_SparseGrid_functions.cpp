// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ST_SparseGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Sphere
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> GridComponents                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SphereRadius                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::K2_GetComponents_Sphere(class UObject* WorldContextObject, const struct FVector& WorldLocation, float SphereRadius, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Sphere"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UST_SGComponent*> GridComponents;
		struct FVector                 WorldLocation;
		float                          SphereRadius;
		bool                           bDrawDebug;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.SphereRadius = SphereRadius;
	params.bDrawDebug = bDrawDebug;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GridComponents != nullptr)
		*GridComponents = params.GridComponents;
}


// Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_RotatedBox
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> GridComponents                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                BoxRotation                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 BoxExtents                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::K2_GetComponents_RotatedBox(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FRotator& BoxRotation, const struct FVector& BoxExtents, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_RotatedBox"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UST_SGComponent*> GridComponents;
		struct FVector                 WorldLocation;
		struct FRotator                BoxRotation;
		struct FVector                 BoxExtents;
		bool                           bDrawDebug;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.BoxRotation = BoxRotation;
	params.BoxExtents = BoxExtents;
	params.bDrawDebug = bDrawDebug;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GridComponents != nullptr)
		*GridComponents = params.GridComponents;
}


// Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Cone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> GridComponents                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ConeLength                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ConeHalfAngleRadians           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Axis                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::K2_GetComponents_Cone(class UObject* WorldContextObject, const struct FVector& WorldLocation, float ConeLength, float ConeHalfAngleRadians, const struct FVector& Axis, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Cone"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UST_SGComponent*> GridComponents;
		struct FVector                 WorldLocation;
		float                          ConeLength;
		float                          ConeHalfAngleRadians;
		struct FVector                 Axis;
		bool                           bDrawDebug;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.ConeLength = ConeLength;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;
	params.Axis = Axis;
	params.bDrawDebug = bDrawDebug;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GridComponents != nullptr)
		*GridComponents = params.GridComponents;
}


// Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Capsule
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> GridComponents                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 CapsuleAxis                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          CapsuleRadius                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          CapsuleHalfHeight              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::K2_GetComponents_Capsule(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FVector& CapsuleAxis, float CapsuleRadius, float CapsuleHalfHeight, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Capsule"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UST_SGComponent*> GridComponents;
		struct FVector                 WorldLocation;
		struct FVector                 CapsuleAxis;
		float                          CapsuleRadius;
		float                          CapsuleHalfHeight;
		bool                           bDrawDebug;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.CapsuleAxis = CapsuleAxis;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.bDrawDebug = bDrawDebug;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GridComponents != nullptr)
		*GridComponents = params.GridComponents;
}


// Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Box
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> GridComponents                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 BoxExtents                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::K2_GetComponents_Box(class UObject* WorldContextObject, const struct FVector& WorldLocation, const struct FVector& BoxExtents, bool bDrawDebug, TArray<class UST_SGComponent*>* GridComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Box"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UST_SGComponent*> GridComponents;
		struct FVector                 WorldLocation;
		struct FVector                 BoxExtents;
		bool                           bDrawDebug;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.BoxExtents = BoxExtents;
	params.bDrawDebug = bDrawDebug;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GridComponents != nullptr)
		*GridComponents = params.GridComponents;
}


// Function ST_SparseGrid.ST_SGStatics.K2_ConvertToInt2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            CellID                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UST_SparseGrid*          Grid                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FST_Int2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FST_Int2D UST_SGStatics::K2_ConvertToInt2D(int CellID, class UST_SparseGrid* Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_ConvertToInt2D"));

	struct
	{
		int                            CellID;
		class UST_SparseGrid*          Grid;
		struct FST_Int2D               ReturnValue;
	} params = {};

	params.CellID = CellID;
	params.Grid = Grid;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SGStatics.K2_ConvertToCellID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FST_Int2D               XY                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UST_SparseGrid*          Grid                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UST_SGStatics::K2_ConvertToCellID(const struct FST_Int2D& XY, class UST_SparseGrid* Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.K2_ConvertToCellID"));

	struct
	{
		struct FST_Int2D               XY;
		class UST_SparseGrid*          Grid;
		int                            ReturnValue;
	} params = {};

	params.XY = XY;
	params.Grid = Grid;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SGStatics.Int2DToVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FST_Int2D               InInt2D                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UST_SGStatics::Int2DToVector(const struct FST_Int2D& InInt2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.Int2DToVector"));

	struct
	{
		struct FST_Int2D               InInt2D;
		struct FVector2D               ReturnValue;
	} params = {};

	params.InInt2D = InInt2D;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners_Typed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UST_SGComponent*> GridComponents                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AActor*/       ActorClass                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::GetComponentsOwners_Typed(TArray<class UST_SGComponent*> GridComponents, class UClass* /*AActor*/ ActorClass, TArray<class AActor*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners_Typed"));

	struct
	{
		TArray<class UST_SGComponent*> GridComponents;
		TArray<class AActor*>          Actors;
		class UClass* /*AActor*/       ActorClass;
	} params = {};

	params.GridComponents = GridComponents;
	params.ActorClass = ActorClass;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UST_SGComponent*> GridComponents                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SGStatics::GetComponentsOwners(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners"));

	struct
	{
		TArray<class UST_SGComponent*> GridComponents;
		TArray<class AActor*>          Actors;
	} params = {};

	params.GridComponents = GridComponents;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function ST_SparseGrid.ST_SparseGrid.K2_WorldToCell
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               InWorldXY                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UST_SparseGrid::K2_WorldToCell(const struct FVector2D& InWorldXY)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.K2_WorldToCell"));

	struct
	{
		struct FVector2D               InWorldXY;
		int                            ReturnValue;
	} params = {};

	params.InWorldXY = InWorldXY;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.K2_GetTileComponents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FST_SparseGridCellTile  Tile                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> Components                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SparseGrid::K2_GetTileComponents(const struct FST_SparseGridCellTile& Tile, TArray<class UST_SGComponent*>* Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.K2_GetTileComponents"));

	struct
	{
		struct FST_SparseGridCellTile  Tile;
		TArray<class UST_SGComponent*> Components;
	} params = {};

	params.Tile = Tile;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Components != nullptr)
		*Components = params.Components;
}


// Function ST_SparseGrid.ST_SparseGrid.K2_GetGridMax
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FST_Int2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FST_Int2D UST_SparseGrid::K2_GetGridMax()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.K2_GetGridMax"));

	struct
	{
		struct FST_Int2D               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.K2_GetCellComponents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            CellID                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UST_SGComponent*> Components                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UST_SparseGrid::K2_GetCellComponents(int CellID, TArray<class UST_SGComponent*>* Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.K2_GetCellComponents"));

	struct
	{
		int                            CellID;
		TArray<class UST_SGComponent*> Components;
	} params = {};

	params.CellID = CellID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Components != nullptr)
		*Components = params.Components;
}


// Function ST_SparseGrid.ST_SparseGrid.K2_GetCellBoundsRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UST_SparseGrid::K2_GetCellBoundsRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.K2_GetCellBoundsRadius"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.GetSearchTile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               WorldSearchOrigin              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               WorldSearchExtents             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bClampGridEdge                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FST_SparseGridCellTile  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FST_SparseGridCellTile UST_SparseGrid::GetSearchTile(const struct FVector2D& WorldSearchOrigin, const struct FVector2D& WorldSearchExtents, bool bClampGridEdge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.GetSearchTile"));

	struct
	{
		struct FVector2D               WorldSearchOrigin;
		struct FVector2D               WorldSearchExtents;
		bool                           bClampGridEdge;
		struct FST_SparseGridCellTile  ReturnValue;
	} params = {};

	params.WorldSearchOrigin = WorldSearchOrigin;
	params.WorldSearchExtents = WorldSearchExtents;
	params.bClampGridEdge = bClampGridEdge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.GetGridComponents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UST_SGComponent*> ReturnValue                    (CPF_ConstParm, CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UST_SGComponent*> UST_SparseGrid::GetGridComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.GetGridComponents"));

	struct
	{
		TArray<class UST_SGComponent*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UST_SparseGrid*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UST_SparseGrid* UST_SparseGrid::Get(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.Get"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UST_SparseGrid*          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ST_SparseGrid.ST_SparseGrid.ForceRebuild
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UST_SparseGrid::ForceRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ST_SparseGrid.ST_SparseGrid.ForceRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
