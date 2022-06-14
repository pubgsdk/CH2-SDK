#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FxInstanceCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass FxInstanceCommon.FxInstanceCommon_C
// 0x0128 (0x01E0 - 0x00B8)
class UFxInstanceCommon_C : public UFxInstance
{
public:
	TMap<struct FName, struct FPostProcessDefaults>    PostProcessDefaults;                                      // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, struct FPostProcessBlendMod>    PostProcessEffectsCurrent;                                // 0x0108(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTimerHandle                                PostProcessEffectTimerHandle;                             // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Vignette;                                                 // 0x0168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	class AActor*                                      LastPlayerController;                                     // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     K2Node_Event_PendingURL;                                  // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETravelType>                           K2Node_Event_TravelType;                                  // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsSeamlessTravel;                           // 0x0189(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x018C(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable;                            // 0x019C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               CallFunc_Map_Keys_Keys;                                   // 0x01A0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CallFunc_GetPostProcessMaterial_PostProcessMaterial;      // 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APawn*                                       K2Node_DynamicCast_AsPawn;                                // 0x01C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x01C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x01CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLPlayerController*                        K2Node_DynamicCast_AsTBLPlayer_Controller;                // 0x01D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x01D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass FxInstanceCommon.FxInstanceCommon_C"));
		return ptr;
	}


	void UpdatePostProcessMaterialWeight(const struct FName& bpp__Key__pf);
	void UpdateCombatStateIfInRiposte(const struct FName& bpp__NewCombatState__pf, bool bpp__IsRiposte__pf, struct FText* bpp__ModifiedNewCombatState__pf);
	void StopCameraAnim(class UCameraAnim* bpp__Anim__pf);
	void Start_FX_Weapon_Damage_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
	void Start_FX_Weapon_Blocked_Sound(class ATBLCharacter* bpp__BlockedActor__pf, class ATBLCharacter* bpp__BlockingActor__pf, class AInventoryItem* bpp__BlockedWeapon__pf, class AInventoryItem* bpp__BlockingWeapon__pf, bool bpp__IsConterSuccess__pf);
	void Start_Fx_Sound_With_Params(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const struct FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT, TArray<struct FSoundSwitchEntry>* bpp__Switches__pf, TArray<struct FSoundRTPCEntry>* bpp__RTPCxValues__pfT);
	void Start_Fx_Sound(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const struct FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT);
	void Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound(class AInventoryItem* bpp__BlockedItem__pf, class AInventoryItem* bpp__BlockingItem__pf, const struct FParryEventState& bpp__ParryState__pf);
	void Start_FX_Horse_Sound(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousCombatState__pf, const struct FName& bpp__NewCombatState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf, class UCombatState* bpp__combatState__pf);
	void Start_FX_Horse_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
	void Start_FX_Character_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
	void Start_FX_Character_and_Weapon_Parry_Success_Sound(class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf, class AInventoryItem* bpp__BlockingWeapon__pf, class AInventoryItem* bpp__BlockedWeapon__pf, const struct FParryEventState& bpp__ParryEvent__pf);
	void ResetPostProcessEffectsInMaterial(TArray<struct FName>* bpp__Effects__pf);
	void ResetAllPostProcessEffects();
	void RemoveAllPostProcessEffects();
	void PostProcessEffectTick();
	void PlaySoundOnActor(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__AKxEvent__pfT);
	void PlayDirectionalCameraAnim(class UClass* /*UObject*/ bpp__ShakeClass__pf, float bpp__Scale__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__Vec__pf, bool bpp__PlayInThirdPerson__pf);
	void PlayCameraShake(class UClass* /*UObject*/ bpp__ShakeClass__pf, float bpp__Scale__pf);
	void PlayCameraAnim(class UCameraAnim* bpp__Anim__pf, float bpp__Rate__pf, float bpp__Scale__pf, float bpp__BlendInTime__pf, float bpp__BlendOutTime__pf, bool bpp__PlayInThirdPerson__pf);
	void OnClientPreTravel(const struct FString& bpp__PendingURL__pf__const, TEnumAsByte<ETravelType> bpp__TravelType__pf, bool bpp__bIsSeamlessTravel__pf);
	void OnAssemble_FxInstanceCommon();
	void IsPostProcessDisabled(bool* bpp__Disabled__pf);
	void IsLocalPlayerAndNotBot(class AActor* bpp__Actor__pf, bool* bpp__ReturnxValue__pfT);
	void GetPostProcessMaterialIfCreated(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf);
	void GetPostProcessMaterial(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf);
	void GetPostProcessComponent(class UPostProcessComponent** bpp__PostProcessComponent__pf);
	void ForceResetAllPostProcessEffects();
	void FindMaterialInPostProcessComponent(class UPostProcessComponent* bpp__PostProcessComponent__pf, bool* bpp__bFound__pf);
	void DisplayDebug();
	void DisableCameraPostProcessComponent();
	void BP_ResetPostProcess();
	void BeginPostProcessEffectTick();
	void AddPostProcessEffect(const struct FName& bpp__Effect__pf, float bpp__Target__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
