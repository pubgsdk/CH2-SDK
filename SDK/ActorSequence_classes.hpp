#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ActorSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorSequence.ActorSequence
// 0x0028 (0x0370 - 0x0348)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0350(0x0020) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorSequence.ActorSequence"));
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0028 (0x0130 - 0x0108)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0108(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UActorSequence*                              Sequence;                                                 // 0x0120(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0128(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorSequence.ActorSequenceComponent"));
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x08E0 - 0x08E0)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorSequence.ActorSequencePlayer"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
