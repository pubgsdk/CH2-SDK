#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChickenFx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ChickenFx.ChickenFx_C
// 0x0338 (0x0518 - 0x01E0)
class UChickenFx_C : public UFxInstanceCommon_C
{
public:
	float                                              EmberStrength;                                            // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BurningParticleSystem;                                    // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                     // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                   // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_3;                                   // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_4;                                   // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FDamageTakenEvent                           K2Node_Event_DamageEvent_2;                               // 0x0270(0x0148) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FDeathDamageTakenEvent                      K2Node_Event_DamageEvent;                                 // 0x03B8(0x0160) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass ChickenFx.ChickenFx_C"));
		return ptr;
	}


	void RemoveBurningParticleSystem();
	void OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const);
	void OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const);
	class UAkComponent* GetAkComponent();
	void AddBurningParticleSystem(class AActor* bpp__InActor__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
