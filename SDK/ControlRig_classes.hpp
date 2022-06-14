#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControlRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ControlRig.ControlRig
// 0x0338 (0x0360 - 0x0028)
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0028(0x004C) MISSED OFFSET
	ERigExecutionType                                  ExecutionType;                                            // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	class URigVM*                                      VM;                                                       // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FRigHierarchyContainer                      Hierarchy;                                                // 0x0080(0x01B0) (CPF_Edit, CPF_DisableEditOnInstance, CPF_EditConst, CPF_NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRigGizmoLibrary>      GizmoLibrary;                                             // 0x0230(0x0028) (CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	TMap<struct FName, struct FCachedPropertyPath>     InputProperties;                                          // 0x0268(0x0050) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FCachedPropertyPath>     OutputProperties;                                         // 0x02B8(0x0050) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	struct FControlRigDrawContainer                    DrawContainer;                                            // 0x0308(0x0010) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                       // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x38];                                      // 0x0328(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRig"));
		return ptr;
	}

};


// Class ControlRig.AdditiveControlRig
// 0x0010 (0x0370 - 0x0360)
class UAdditiveControlRig : public UControlRig
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.AdditiveControlRig"));
		return ptr;
	}

};


// Class ControlRig.ControlRigBindingTrack
// 0x0000 (0x0078 - 0x0078)
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigBindingTrack"));
		return ptr;
	}

};


// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (0x0328 - 0x0328)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigComponent
// 0x0048 (0x0150 - 0x0108)
class UControlRigComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnPreInitializeDelegate;                                  // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPostInitializeDelegate;                                 // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPreEvaluateDelegate;                                    // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPostEvaluateDelegate;                                   // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UControlRig*                                 ControlRig;                                               // 0x0148(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigComponent"));
		return ptr;
	}


	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};


// Class ControlRig.ControlRigGizmoLibrary
// 0x00B8 (0x00E0 - 0x0028)
class UControlRigGizmoLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FControlRigGizmoDefinition                  DefaultGizmo;                                             // 0x0030(0x0060) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>                    DefaultMaterial;                                          // 0x0090(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MaterialColorParameter;                                   // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FControlRigGizmoDefinition>          Gizmos;                                                   // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigGizmoLibrary"));
		return ptr;
	}

};


// Class ControlRig.ControlRigLayerInstance
// 0x0000 (0x0270 - 0x0270)
class UControlRigLayerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigLayerInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0038 - 0x0028)
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigObjectHolder"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSequence
// 0x0058 (0x04F0 - 0x0498)
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>                LastExportedToAnimationSequence;                          // 0x0498(0x0028) (CPF_AssetRegistrySearchable, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                LastExportedUsingSkeletalMesh;                            // 0x04C0(0x0028) (CPF_AssetRegistrySearchable, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastExportedFrameRate;                                    // 0x04E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSequence"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0010 (0x0280 - 0x0270)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSequencerAnimInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSettings
// 0x0000 (0x0038 - 0x0038)
class UControlRigSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigManipulatable
// 0x0000 (0x0028 - 0x0028)
class UControlRigManipulatable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigManipulatable"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterSection
// 0x0138 (0x0278 - 0x0140)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                                 ControlRig;                                               // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       ControlsMask;                                             // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x0158(0x0004) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bAdditive;                                                // 0x015C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bApplyBoneFilter;                                         // 0x015D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0160(0x0010) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0170(0x00A0) (CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, struct FChannelMapInfo>         ControlChannelMap;                                        // 0x0210(0x0050) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0260(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigParameterSection"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterTrack
// 0x0028 (0x0080 - 0x0058)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	class UControlRig*                                 ControlRig;                                               // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                          SectionToKey;                                             // 0x0060(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0068(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigParameterTrack"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigSection
// 0x00B8 (0x0210 - 0x0158)
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                               bAdditive;                                                // 0x0158(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bApplyBoneFilter;                                         // 0x0159(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x015A(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0160(0x0010) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0170(0x00A0) (CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigSection"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
