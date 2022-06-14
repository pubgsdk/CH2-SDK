#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "ControlRig_enums.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_classes.hpp"
#include "LevelSequence_classes.hpp"
#include "PropertyPath_classes.hpp"
#include "AnimGraphRuntime_classes.hpp"
#include "AnimationCore_classes.hpp"
#include "RigVM_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ControlRig.RigElement
// 0x0018
struct FRigElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Index;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigBone
// 0x00C8 (0x00E0 - 0x0018)
struct FRigBone : public FRigElement
{
	struct FName                                       ParentName;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                              // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  GlobalTransform;                                          // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  LocalTransform;                                           // 0x0090(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Dependents;                                               // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigBoneType                                       Type;                                                     // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigBoneHierarchy
// 0x0070
struct FRigBoneHierarchy
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FRigBone>                            Bones;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            NameToIndexMapping;                                       // 0x0018(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigSpace
// 0x0078 (0x0090 - 0x0018)
struct FRigSpace : public FRigElement
{
	ERigSpaceType                                      SpaceType;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       ParentName;                                               // 0x001C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                              // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  LocalTransform;                                           // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigSpaceHierarchy
// 0x0068
struct FRigSpaceHierarchy
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FRigSpace>                           Spaces;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            NameToIndexMapping;                                       // 0x0018(0x0050) (CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.RigControlValue
// 0x0030
struct FRigControlValue
{
	struct FTransform                                  Storage;                                                  // 0x0000(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.RigControl
// 0x0168 (0x0180 - 0x0018)
struct FRigControl : public FRigElement
{
	ERigControlType                                    ControlType;                                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       ParentName;                                               // 0x001C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                              // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SpaceName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SpaceIndex;                                               // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FRigControlValue                            InitialValue;                                             // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigControlValue                            Value;                                                    // 0x0070(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ERigControlAxis                                    PrimaryAxis;                                              // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsCurve;                                                 // 0x00A1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAnimatable;                                              // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLimitTranslation;                                        // 0x00A3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLimitRotation;                                           // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLimitScale;                                              // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawLimits;                                              // 0x00A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x9];                                       // 0x00A7(0x0009) MISSED OFFSET
	struct FRigControlValue                            MinimumValue;                                             // 0x00B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigControlValue                            MaximumValue;                                             // 0x00E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bGizmoEnabled;                                            // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FName                                       GizmoName;                                                // 0x0114(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FTransform                                  GizmoTransform;                                           // 0x0120(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                GizmoColor;                                               // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Dependents;                                               // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsTransientControl;                                      // 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0171(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigControlHierarchy
// 0x0068
struct FRigControlHierarchy
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FRigControl>                         Controls;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            NameToIndexMapping;                                       // 0x0018(0x0050) (CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.RigCurve
// 0x0008 (0x0020 - 0x0018)
struct FRigCurve : public FRigElement
{
	float                                              Value;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigCurveContainer
// 0x0070
struct FRigCurveContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FRigCurve>                           Curves;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            NameToIndexMapping;                                       // 0x0018(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigHierarchyContainer
// 0x01B0
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy                           BoneHierarchy;                                            // 0x0000(0x0070) (CPF_NativeAccessSpecifierPublic)
	struct FRigSpaceHierarchy                          SpaceHierarchy;                                           // 0x0070(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FRigControlHierarchy                        ControlHierarchy;                                         // 0x00D8(0x0068) (CPF_NativeAccessSpecifierPublic)
	struct FRigCurveContainer                          CurveContainer;                                           // 0x0140(0x0070) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigDrawInstruction
// 0x0070
struct FControlRigDrawInstruction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                            // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Positions;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigDrawContainer
// 0x0010
struct FControlRigDrawContainer
{
	TArray<struct FControlRigDrawInstruction>          Instructions;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigGizmoDefinition
// 0x0060
struct FControlRigGizmoDefinition
{
	struct FName                                       GizmoName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>                  StaticMesh;                                               // 0x0008(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ChannelMapInfo
// 0x0008
struct FChannelMapInfo
{
	int                                                ControlIndex;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChannelIndex;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ConstraintNodeData
// 0x00B0
struct FConstraintNodeData
{
	struct FTransform                                  RelativeParent;                                           // 0x0000(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FConstraintOffset                           ConstraintOffset;                                         // 0x0030(0x0060) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       LinkedNode;                                               // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransformConstraint>                Constraints;                                              // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimationHierarchy
// 0x0010 (0x0088 - 0x0078)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
	TArray<struct FConstraintNodeData>                 UserData;                                                 // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigIOSettings
// 0x0002
struct FControlRigIOSettings
{
	bool                                               bUpdatePose;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateCurves;                                            // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// 0x0118 (0x0170 - 0x0058)
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
	struct FPoseLink                                   Source;                                                   // 0x0058(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FName, uint16_t>                       ControlRigBoneMapping;                                    // 0x0068(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FName, uint16_t>                       ControlRigCurveMapping;                                   // 0x00B8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FName, uint16_t>                       InputToCurveMappingUIDs;                                  // 0x0108(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UNodeMappingContainer>        NodeMappingContainer;                                     // 0x0158(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                       InputSettings;                                            // 0x0160(0x0002) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                       OutputSettings;                                           // 0x0162(0x0002) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bExecute;                                                 // 0x0164(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0165(0x000B) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// 0x01F0 (0x0360 - 0x0170)
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
	class UClass* /*UControlRig*/                      ControlRigClass;                                          // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UControlRig*                                 ControlRig;                                               // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              Alpha;                                                    // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0184(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0185(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0186(0x0002) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0188(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0190(0x0048) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       AlphaCurveName;                                           // 0x01D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x01E0(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FName>                   InputMapping;                                             // 0x0210(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FName>                   OutputMapping;                                            // 0x0260(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x02B0(0x00B0) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// 0x0008 (0x0178 - 0x0170)
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
	TWeakObjectPtr<class UControlRig>                  ControlRig;                                               // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.ControlRigBindingTemplate
// 0x0000 (0x00B0 - 0x00B0)
struct FControlRigBindingTemplate : public FMovieSceneSpawnSectionTemplate
{

};

// ScriptStruct ControlRig.ControlRigComponentInstanceData
// 0x0008 (0x0060 - 0x0058)
struct FControlRigComponentInstanceData : public FActorComponentInstanceData
{
	class UControlRig*                                 AnimControlRig;                                           // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigExecuteContext
// 0x0008 (0x0018 - 0x0010)
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigDrawInterface
// 0x0008 (0x0018 - 0x0010)
struct FControlRigDrawInterface : public FControlRigDrawContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// 0x00A0 (0x0790 - 0x06F0)
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x06F0(0x00A0) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.CRFourPointBezier
// 0x0030
struct FCRFourPointBezier
{
	struct FVector                                     A;                                                        // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     C;                                                        // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     D;                                                        // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// 0x0008
struct FControlRigSequenceObjectReference
{
	class UClass* /*UControlRig*/                      ControlRigClass;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// 0x0010
struct FControlRigSequenceObjectReferences
{
	TArray<struct FControlRigSequenceObjectReference>  Array;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// 0x0020
struct FControlRigSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// 0x02A0 (0x0BE0 - 0x0940)
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0940(0x02A0) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimContainer
// 0x0018
struct FCRSimContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              TimeStep;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedTime;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeLeftForStep;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimLinearSpring
// 0x0010
struct FCRSimLinearSpring
{
	int                                                SubjectA;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubjectB;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Coefficient;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Equilibrium;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.CRSimPoint
// 0x0028
struct FCRSimPoint
{
	float                                              Mass;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Size;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LinearDamping;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InheritMotion;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LinearVelocity;                                           // 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// 0x0024
struct FCRSimPointConstraint
{
	ECRSimConstraintType                               Type;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SubjectA;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubjectB;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DataA;                                                    // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DataB;                                                    // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.CRSimPointForce
// 0x0018
struct FCRSimPointForce
{
	ECRSimPointForceType                               ForceType;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Coefficient;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bNormalize;                                               // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimSoftCollision
// 0x0050
struct FCRSimSoftCollision
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ECRSimSoftCollisionType                            ShapeType;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumDistance;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          FalloffType;                                              // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              Coefficient;                                              // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInverted;                                                // 0x0044(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0045(0x000B) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimPointContainer
// 0x0060 (0x0078 - 0x0018)
struct FCRSimPointContainer : public FCRSimContainer
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>                  Springs;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointConstraint>               Constraints;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimPoint>                         PreviousStep;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// 0x00D0 (0x00D8 - 0x0008)
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
	bool                                               bAdditive;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bApplyBoneFilter;                                         // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0010(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0020(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationOperand                Operand;                                                  // 0x00C0(0x0014) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// 0x0000 (0x0080 - 0x0080)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct ControlRig.RigHierarchyRef
// 0x0001
struct FRigHierarchyRef
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// 0x0040
struct FRigHierarchyCopyPasteContent
{
	TArray<ERigElementType>                            Types;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             Contents;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          GlobalTransforms;                                         // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigElementKey
// 0x000C
struct FRigElementKey
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigElementType                                    Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit : public FRigVMStruct
{

};

// ScriptStruct ControlRig.RigUnitMutable
// 0x0018 (0x0020 - 0x0008)
struct FRigUnitMutable : public FRigUnit
{
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0008(0x0018) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SimBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_SimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// 0x0040 (0x0048 - 0x0008)
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Minimum;                                                  // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Maximum;                                                  // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedMinimum;                                       // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedMaximum;                                       // 0x0038(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedMinimum;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedMaximum;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// 0x00D8 (0x00E0 - 0x0008)
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  TargetValue;                                              // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  InitialValue;                                             // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Blend;                                                    // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0075(0x000B) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  AccumulatedValue;                                         // 0x00B0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       TargetValue;                                              // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       InitialValue;                                             // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Blend;                                                    // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       AccumulatedValue;                                         // 0x0050(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
	struct FVector                                     TargetValue;                                              // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialValue;                                             // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Blend;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedValue;                                         // 0x0034(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
	float                                              TargetValue;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InitialValue;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Blend;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedValue;                                         // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// 0x00D8 (0x00E0 - 0x0008)
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Multiplier;                                               // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  InitialValue;                                             // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bFlipOrder;                                               // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0072(0x000E) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  AccumulatedValue;                                         // 0x00B0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Multiplier;                                               // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       InitialValue;                                             // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bFlipOrder;                                               // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0032(0x000E) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       AccumulatedValue;                                         // 0x0050(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
	struct FVector                                     Multiplier;                                               // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialValue;                                             // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedValue;                                         // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
	float                                              Multiplier;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InitialValue;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedValue;                                         // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
	struct FVector                                     Increment;                                                // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialValue;                                             // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedValue;                                         // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
	float                                              Increment;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InitialValue;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIntegrateDeltaTime;                                      // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedValue;                                         // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPostMultiply;                                            // 0x0064(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0065(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// 0x0028
struct FRigUnit_AimBone_Target
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Axis;                                                     // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                   // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigVectorKind                              Kind;                                                     // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FName                                       Space;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// 0x0040
struct FRigUnit_AimBone_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_AimBone
// 0x00C0 (0x00E0 - 0x0020)
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target                     Primary;                                                  // 0x0028(0x0028) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target                     Secondary;                                                // 0x0050(0x0028) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x007C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FRigUnit_AimBone_DebugSettings              DebugSettings;                                            // 0x0080(0x0040) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                BoneIndex;                                                // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       PrimaryCachedSpaceName;                                   // 0x00C4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PrimaryCachedSpaceIndex;                                  // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SecondaryCachedSpaceName;                                 // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SecondaryCachedSpaceIndex;                                // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.AimTarget
// 0x0050
struct FAimTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     AlignVector;                                              // 0x0040(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// 0x0058 (0x0078 - 0x0020)
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EAimMode                                           AimMode;                                                  // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EAimMode                                           UpMode;                                                   // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FVector                                     AimVector;                                                // 0x002C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FVector                                     UpVector;                                                 // 0x0038(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FAimTarget>                          AimTargets;                                               // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FAimTarget>                          UpTargets;                                                // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// 0x0080 (0x0088 - 0x0008)
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Bias;                                                     // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMapRange;                                                // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0020(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FInputRange                                 OutRange;                                                 // 0x0028(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bClampResult;                                             // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClampMax;                                                 // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInterpResult;                                            // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              InterpSpeedIncreasing;                                    // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterpSpeedDecreasing;                                    // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        ScaleBiasClamp;                                           // 0x0054(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AlphaInterp
// 0x0070 (0x0078 - 0x0008)
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Bias;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMapRange;                                                // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0018(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FInputRange                                 OutRange;                                                 // 0x0020(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bClampResult;                                             // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClampMax;                                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInterpResult;                                            // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              InterpSpeedIncreasing;                                    // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterpSpeedDecreasing;                                    // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        ScaleBiasClamp;                                           // 0x0044(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_AnimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AnimEasing
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          Type;                                                     // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceMaximum;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMinimum;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMaximum;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
	EControlRigAnimEasingType                          Type;                                                     // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0010(0x0088) (CPF_NativeAccessSpecifierPublic)
	float                                              SourceMinimum;                                            // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceMaximum;                                            // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMinimum;                                            // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMaximum;                                            // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                   // 0x0060(0x0009) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EApplyTransformMode                                ApplyTransformMode;                                       // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETransformSpaceMode                                ApplyTransformSpace;                                      // 0x006A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0070(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BaseJoint;                                                // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_BeginExecution : public FRigUnit
{
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0008(0x0018) (CPF_Edit, CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.BlendTarget
// 0x0040
struct FBlendTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_BlendTransform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBlendTarget>                        Targets;                                                  // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Ratio;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// 0x0020
struct FRigUnit_BoneHarmonics_WorkData
{
	TArray<int>                                        BoneIndices;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveTime;                                                 // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// 0x0080 (0x00A0 - 0x0020)
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget>   Bones;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveSpeed;                                                // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveFrequency;                                            // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveAmplitude;                                            // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveOffset;                                               // 0x0054(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveNoise;                                                // 0x0060(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          WaveEase;                                                 // 0x006C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              WaveMinimum;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaveMaximum;                                              // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0079(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FRigUnit_BoneHarmonics_WorkData             WorkData;                                                 // 0x0080(0x0020) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ControlName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_ControlName : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SpaceName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_SpaceName : public FRigUnit
{
	struct FName                                       Space;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_BoneName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_BoneName : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// 0x000C
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Limit;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// 0x0048
struct FRigUnit_CCDIK_WorkData
{
	TArray<struct FCCDIKChainLink>                     Chain;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneIndices;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        RotationLimitIndex;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      RotationLimitsPerBone;                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EffectorIndex;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CCDIK
// 0x00C0 (0x00E0 - 0x0020)
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EffectorBone;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  EffectorTransform;                                        // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Precision;                                                // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                            // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStartFromTail;                                           // 0x006C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              BaseRotationLimit;                                        // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_CCDIK_RotationLimit>        RotationLimits;                                           // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FRigUnit_CCDIK_WorkData                     WorkData;                                                 // 0x0090(0x0048) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// 0x0028
struct FRigUnit_ChainHarmonics_Reach
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     ReachTarget;                                              // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ReachAxis;                                                // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReachMinimum;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReachMaximum;                                             // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          ReachEase;                                                // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// 0x0040
struct FRigUnit_ChainHarmonics_Wave
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     WaveFrequency;                                            // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveAmplitude;                                            // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveOffset;                                               // 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WaveNoise;                                                // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaveMinimum;                                              // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaveMaximum;                                              // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          WaveEase;                                                 // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// 0x003C
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PendulumStiffness;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PendulumGravity;                                          // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PendulumBlend;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PendulumDrag;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PendulumMinimum;                                          // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PendulumMaximum;                                          // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          PendulumEase;                                             // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     UnwindAxis;                                               // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnwindMinimum;                                            // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnwindMaximum;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// 0x0090
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector                                     Time;                                                     // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        Bones;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      Ratio;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             LocalTip;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PendulumTip;                                              // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PendulumPosition;                                         // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PendulumVelocity;                                         // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             HierarchyLine;                                            // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             VelocityLines;                                            // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// 0x0210 (0x0230 - 0x0020)
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       ChainRoot;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Speed;                                                    // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach               Reach;                                                    // 0x0034(0x0028) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave                Wave;                                                     // 0x005C(0x0040) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          WaveCurve;                                                // 0x00A0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum            Pendulum;                                                 // 0x0128(0x003C) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                               // 0x0164(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0165(0x000B) MISSED OFFSET
	struct FTransform                                  DrawWorldOffset;                                          // 0x0170(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData            WorkData;                                                 // 0x01A0(0x0090) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_Control
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_Control : public FRigUnit
{
	struct FEulerTransform                             Transform;                                                // 0x0008(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_Interp, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  base;                                                     // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  InitTransform;                                            // 0x0060(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0090(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                   // 0x00C0(0x0009) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
	struct FTransform                                  MeshTransform;                                            // 0x00D0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TwistAxis;                                                // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Twist;                                                    // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Result;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_ConvertRotation : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{

};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
	struct FEulerTransform                             Input;                                                    // 0x0008(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_ConvertTransform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Input;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FEulerTransform                             Result;                                                   // 0x0040(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_DebugBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_DebugBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0020(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MinimumU;                                                 // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumU;                                                 // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Detail;                                                   // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
	TEnumAsByte<EControlRigDrawHierarchyMode>          Mode;                                                     // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// 0x0080 (0x00A0 - 0x0020)
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x004C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0060(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
	TArray<struct FVector>                             Points;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0044(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     Vector;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigUnitDebugPointMode                             Mode;                                                     // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  WorldOffset;                                              // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
	struct FVector                                     Vector;                                                   // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigUnitDebugPointMode                             Mode;                                                     // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinimumDegrees;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumDegrees;                                           // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Detail;                                                   // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0074(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// 0x0010
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	TArray<struct FTransform>                          DrawTransforms;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0034(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x004C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0060(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                                                 // 0x0098(0x0010) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0054(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x006C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0044(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x005C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Delta;                                                    // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  PreviousValue;                                            // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Cache;                                                    // 0x00A0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Delta;                                                    // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       PreviousValue;                                            // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Cache;                                                    // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Delta;                                                    // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PreviousValue;                                            // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Cache;                                                    // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Delta;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PreviousValue;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cache;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// 0x0020
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Ratio;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// 0x0050
struct FRigUnit_DistributeRotation_WorkData
{
	TArray<int>                                        BoneIndices;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneRotationA;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneRotationB;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      BoneRotationT;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          BoneLocalTransforms;                                      // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// 0x0078 (0x0098 - 0x0020)
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EndBone;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          RotationEaseType;                                         // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FRigUnit_DistributeRotation_WorkData        WorkData;                                                 // 0x0048(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
	struct FName                                       InstructionName;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// 0x0028
struct FRigUnit_FABRIK_WorkData
{
	TArray<struct FFABRIKChainLink>                    Chain;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneIndices;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EffectorIndex;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// 0x0080 (0x00A0 - 0x0020)
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EffectorBone;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  EffectorTransform;                                        // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Precision;                                                // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData                    WorkData;                                                 // 0x0070(0x0028) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// 0x0020
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Ratio;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// 0x0060
struct FRigUnit_FitChainToCurve_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                CurveColor;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                SegmentsColor;                                            // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0030(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// 0x0098
struct FRigUnit_FitChainToCurve_WorkData
{
	float                                              ChainLength;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BonePositions;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      BoneSegments;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             CurvePositions;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      CurveSegments;                                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneIndices;                                              // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneRotationA;                                            // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneRotationB;                                            // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      BoneRotationT;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          BoneLocalTransforms;                                      // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// 0x0190 (0x01B0 - 0x0020)
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EndBone;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0030(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EControlRigCurveAlignment                          Alignment;                                                // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SamplingPrecision;                                        // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PrimaryAxis;                                              // 0x0070(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SecondaryAxis;                                            // 0x007C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleVectorPosition;                                       // 0x0088(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                          RotationEaseType;                                         // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x00A9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x00B0(0x0060) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0110(0x0098) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MapRange_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinIn;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxIn;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinOut;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxOut;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_Clamp_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Min;                                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Max;                                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
	float                                              Argument0;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Argument1;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedBoneIndex;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_GetControlTransform : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Minimum;                                                  // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Maximum;                                                  // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetControlRotator : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FRotator                                    Rotator;                                                  // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Minimum;                                                  // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Maximum;                                                  // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetControlVector : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Minimum;                                                  // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Maximum;                                                  // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_GetControlVector2D : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Vector;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Minimum;                                                  // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Maximum;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_GetControlFloat : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FloatValue;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_GetControlBool : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                CachedControlIndex;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_GetCurveValue : public FRigUnit
{
	struct FName                                       Curve;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedCurveIndex;                                         // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
	float                                              Result;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedBoneIndex;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// 0x0080 (0x00A0 - 0x0020)
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETransformGetterType                               Type;                                                     // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETransformSpaceMode                                TransformSpace;                                           // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BaseJoint;                                                // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FTransform                                  Output;                                                   // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedBoneIndex;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedSpaceIndex;                                         // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
	struct FName                                       Space;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              SpaceType;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                CachedSpaceIndex;                                         // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetWorldTime
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
	float                                              Year;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Month;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Day;                                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeekDay;                                                  // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Hours;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minutes;                                                  // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Seconds;                                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverallSeconds;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_HighlevelBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Buffer;                                                   // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Buffer;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               B;                                                        // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               B;                                                        // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               B;                                                        // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathColorBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathColorLerp
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
	struct FLinearColor                                A;                                                        // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                B;                                                        // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Result;                                                   // 0x002C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
	struct FLinearColor                                A;                                                        // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                B;                                                        // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Result;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathColorMul
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorSub
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorAdd
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Result;                                                   // 0x000C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              C;                                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AlphaAngle;                                               // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BetaAngle;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GammaAngle;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bValid;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              IfTrue;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IfFalse;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceMinimum;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceMaximum;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMinimum;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetMaximum;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bClamp;                                                   // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TwistAxis;                                                // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Twist;                                                    // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       B;                                                        // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FQuat                                       IfTrue;                                                   // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       IfFalse;                                                  // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       B;                                                        // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       B;                                                        // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       B;                                                        // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       B;                                                        // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Axis;                                                     // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
	struct FRotator                                    Rotator;                                                  // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Euler;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Axis;                                                     // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                     // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Space;                                                    // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                               // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0084(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DebugThickness;                                           // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x00A0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Rotation;                                                 // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FEulerTransform                             EulerTransform;                                           // 0x0060(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x004C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x004C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FTransform                                  IfTrue;                                                   // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  IfFalse;                                                  // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  A;                                                        // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  B;                                                        // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0080(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// 0x0000 (0x0070 - 0x0070)
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Local;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Parent;                                                   // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Global;                                                   // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Global;                                                   // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Parent;                                                   // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Local;                                                    // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  A;                                                        // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  B;                                                        // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
// 0x0000 (0x00A0 - 0x00A0)
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FEulerTransform                             Result;                                                   // 0x0040(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
	struct FEulerTransform                             EulerTransform;                                           // 0x0008(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                     // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Space;                                                    // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                               // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0054(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DebugThickness;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0068(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0008(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0008(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Tangent;                                                  // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinimumLength;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumLength;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     IfTrue;                                                   // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     IfFalse;                                                  // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Result;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SourceMinimum;                                            // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SourceMaximum;                                            // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TargetMinimum;                                            // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TargetMaximum;                                            // 0x0038(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bClamp;                                                   // 0x0044(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                        // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              T;                                                        // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Minimum;                                                  // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Maximum;                                                  // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorScale
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Factor;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// 0x0040
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// 0x0010
struct FRigUnit_ModifyBoneTransforms_WorkData
{
	TArray<int>                                        CachedBoneIndices;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeightMinimum;                                            // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeightMaximum;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigModifyBoneMode                          Mode;                                                     // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FRigUnit_ModifyBoneTransforms_WorkData      WorkData;                                                 // 0x0040(0x0010) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// 0x0014
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// 0x0060
struct FRigUnit_MultiFABRIK_WorkData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// 0x0088 (0x00A8 - 0x0020)
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       RootBone;                                                 // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector>    Effectors;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Precision;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FRigUnit_MultiFABRIK_WorkData               WorkData;                                                 // 0x0048(0x0060) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Speed;                                                    // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Frequency;                                                // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0034(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Time;                                                     // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Speed;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Frequency;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TranslationPoint;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PrimaryAimPoint;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SecondaryAimPoint;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// 0x0050
struct FRigUnit_PointSimulation_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawPointsAsSpheres;                                     // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// 0x0088
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer                        Simulation;                                               // 0x0000(0x0078) (CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneIndices;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// 0x0190 (0x01B0 - 0x0020)
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>                  Links;                                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SimulatedStepsPerSecond;                                  // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECRSimPointIntegrateType                           IntegratorType;                                           // 0x0064(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              VerletBlend;                                              // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                              // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLimitLocalPosition;                                      // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0081(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FVector                                     PrimaryAimAxis;                                           // 0x0084(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SecondaryAimAxis;                                         // 0x0090(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FRigUnit_PointSimulation_DebugSettings      DebugSettings;                                            // 0x00A0(0x0050) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00F0(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_PointSimulation_WorkData           WorkData;                                                 // 0x0120(0x0088) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
	int                                                NumberOfMeasurements;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Prefix;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedTime;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MeasurementsLeft;                                         // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{

};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Axis;                                                     // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument0;                                                // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Argument1;                                                // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_RandomVector
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LastResult;                                               // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastSeed;                                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Minimum;                                                  // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Maximum;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastResult;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastSeed;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                 // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Translation;                                              // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                CachedControlIndex;                                       // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotator;                                                  // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                CachedControlIndex;                                       // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                   // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              Space;                                                    // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                CachedControlIndex;                                       // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Vector;                                                   // 0x002C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FloatValue;                                               // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedControlIndex;                                       // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                CachedControlIndex;                                       // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
	struct FName                                       Curve;                                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedCurveIndex;                                         // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Space;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0064(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CachedSpaceIndex;                                         // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
	struct FName                                       Space;                                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EBoneGetterSetterMode                              SpaceType;                                                // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                CachedSpaceIndex;                                         // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// 0x0048
struct FRigUnit_SlideChain_WorkData
{
	float                                              ChainLength;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      BoneSegments;                                             // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        BoneIndices;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Transforms;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          BlendedTransforms;                                        // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SlideChain
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EndBone;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlideAmount;                                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FRigUnit_SlideChain_WorkData                WorkData;                                                 // 0x0038(0x0048) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// 0x0050
struct FRigUnit_SpringIK_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// 0x00A0
struct FRigUnit_SpringIK_WorkData
{
	TArray<int>                                        BoneIndices;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PoleVectorIndex;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCRSimPointContainer                        Simulation;                                               // 0x0028(0x0078) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// 0x0160 (0x0180 - 0x0020)
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EndBone;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HierarchyStrength;                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EffectorStrength;                                         // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EffectorRatio;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RootStrength;                                             // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RootRatio;                                                // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Damping;                                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                               // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFlipPolePlane;                                           // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigVectorKind                              PoleVectorKind;                                           // 0x0055(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PrimaryAxis;                                              // 0x0060(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SecondaryAxis;                                            // 0x006C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLiveSimulation;                                          // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLimitLocalPosition;                                      // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x0081(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0082(0x000E) MISSED OFFSET
	struct FRigUnit_SpringIK_DebugSettings             DebugSettings;                                            // 0x0090(0x0050) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_SpringIK_WorkData                  WorkData;                                                 // 0x00E0(0x00A0) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_Timeline
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
	float                                              Speed;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccumulatedValue;                                         // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              SecondsAgo;                                               // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeRange;                                                // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Buffer;                                                   // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      DeltaTimes;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UpperBound;                                               // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SecondsAgo;                                               // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeRange;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Buffer;                                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      DeltaTimes;                                               // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UpperBound;                                               // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// 0x0040 (0x0048 - 0x0008)
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SecondsAgo;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BufferSize;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeRange;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      DeltaTimes;                                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastInsertIndex;                                          // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UpperBound;                                               // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Argument0;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Argument1;                                                // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                   // 0x0070(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// 0x0000 (0x00A0 - 0x00A0)
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// 0x0000 (0x00A0 - 0x00A0)
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.ConstraintTarget
// 0x0040
struct FConstraintTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                          // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                   // 0x0035(0x0009) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// 0x0060
struct FRigUnit_TransformConstraint_WorkData
{
	TArray<struct FConstraintData>                     ConstraintData;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<int, int>                                     ConstraintDataToTargets;                                  // 0x0010(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// 0x00C0 (0x00E0 - 0x0020)
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETransformSpaceMode                                BaseTransformSpace;                                       // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0030(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BaseBone;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FConstraintTarget>                   Targets;                                                  // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRigUnit_TransformConstraint_WorkData       WorkData;                                                 // 0x0078(0x0060) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// 0x01B0 (0x01D0 - 0x0020)
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
	struct FName                                       StartJoint;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EndJoint;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleTarget;                                               // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Spin;                                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  EndEffector;                                              // 0x0040(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              IKBlend;                                                  // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FTransform                                  StartJointFKTransform;                                    // 0x0080(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  MidJointFKTransform;                                      // 0x00B0(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  EndJointFKTransform;                                      // 0x00E0(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	float                                              PreviousFKIKBlend;                                        // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0114(0x000C) MISSED OFFSET
	struct FTransform                                  StartJointIKTransform;                                    // 0x0120(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  MidJointIKTransform;                                      // 0x0150(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  EndJointIKTransform;                                      // 0x0180(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	int                                                StartJointIndex;                                          // 0x01B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                MidJointIndex;                                            // 0x01B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                EndJointIndex;                                            // 0x01B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              UpperLimbLength;                                          // 0x01BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              LowerLimbLength;                                          // 0x01C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01C4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// 0x00D8 (0x00E0 - 0x0008)
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Root;                                                     // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                               // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Effector;                                                 // 0x0050(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PrimaryAxis;                                              // 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SecondaryAxis;                                            // 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SecondaryAxisWeight;                                      // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableStretch;                                           // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StretchMaximumRatio;                                      // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneALength;                                              // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneBLength;                                              // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Elbow;                                                    // 0x00B0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
	struct FVector                                     Root;                                                     // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                               // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Effector;                                                 // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableStretch;                                           // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StretchMaximumRatio;                                      // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneALength;                                              // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneBLength;                                              // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Elbow;                                                    // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// 0x0040
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// 0x00F0 (0x0110 - 0x0020)
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       BoneA;                                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BoneB;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EffectorBone;                                             // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  Effector;                                                 // 0x0040(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PrimaryAxis;                                              // 0x0070(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SecondaryAxis;                                            // 0x007C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SecondaryAxisWeight;                                      // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                               // 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EControlRigVectorKind                              PoleVectorKind;                                           // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x009C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableStretch;                                           // 0x00A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StretchMaximumRatio;                                      // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneALength;                                              // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoneBLength;                                              // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                     // 0x00BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FRigUnit_TwoBoneIKSimple_DebugSettings      DebugSettings;                                            // 0x00C0(0x0040) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                BoneAIndex;                                               // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BoneBIndex;                                               // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EffectorBoneIndex;                                        // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PoleVectorSpaceIndex;                                     // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Argument1;                                                // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Result;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Argument1;                                                // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                   // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
	struct FVector                                     Target;                                                   // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Strength;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Damp;                                                     // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Blend;                                                    // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                 // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                 // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Acceleration;                                             // 0x0038(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCRSimPoint                                 Point;                                                    // 0x0044(0x0028) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BoneSpace;                                                // 0x004C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BoneSpace;                                                // 0x002C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERigUnitVisualDebugPointMode                       Mode;                                                     // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BoneSpace;                                                // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ControlRig.StructReference
// 0x0008
struct FStructReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
