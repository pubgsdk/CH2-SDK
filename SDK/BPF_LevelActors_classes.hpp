#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_LevelActors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_LevelActors.BPF_LevelActors_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_LevelActors_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_LevelActors.BPF_LevelActors_C"));
		return ptr;
	}


	static void ApplyDrunkEffectToPlayer(class AActor* Target, class UObject* __WorldContext);
	static void CanActorAcceptDamage(class AActor* Actor, class UObject* __WorldContext, bool* _);
	static void LevelActorFlipDirection(class AActor* From, class AActor* To, class UObject* __WorldContext, TEnumAsByte<EeFlipDirection>* Direction, bool* Success);
	static void DestroyComponentAndChildren(class USceneComponent* Target, class UObject* __WorldContext);
	static void GetDirectionBetweenActors__4Dir_(class AActor* From, class AActor* To, class UObject* __WorldContext, TEnumAsByte<EeDirection>* Direction, bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
