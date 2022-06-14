#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterDeathCam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass CharacterDeathCam.CharacterDeathcam_C
// 0x0208 (0x03E8 - 0x01E0)
class UCharacterDeathcam_C : public UFxInstanceCommon_C
{
public:
	TArray<class AActor*>                              Killers;                                                  // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               Character_1;                                              // 0x01F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                               // 0x01F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ReceivedOnKilledEvent;                                    // 0x0200(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               WantsThirdPersonCamera;                                   // 0x0201(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ThirdPersonCamActive;                                     // 0x0202(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableAllDeathCam;                                      // 0x0203(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDeathCamActivated;                                       // 0x0204(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	class ATBLPlayerCameraManager*                     CallFunc_GetPlayerCameraManager_Camera;                   // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLPlayerCameraManager*                     CallFunc_GetPlayerCameraManager_Camera_2;                 // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter;                        // 0x0218(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0220(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FDeathDamageTakenEvent                      K2Node_Event_DamageEvent;                                 // 0x0228(0x0160) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class AController*                                 K2Node_Event_Controller;                                  // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLPlayerCameraManager*                     CallFunc_GetPlayerCameraManager_Camera_3;                 // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLCharacter*                               K2Node_DynamicCast_AsTBLCharacter_2;                      // 0x0398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x03A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class APawn*                                       K2Node_DynamicCast_AsPawn;                                // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x03B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class ATBLPlayerCameraManager*                     CallFunc_GetPlayerCameraManager_Camera_4;                 // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLPlayerCameraManager*                     CallFunc_GetPlayerCameraManager_Camera_5;                 // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATBLPlayerController*                        K2Node_DynamicCast_AsTBLPlayer_Controller;                // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x03D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class ATBLSpectatorPawn*                           K2Node_DynamicCast_AsTBLSpectator_Pawn;                   // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x03E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass CharacterDeathCam.CharacterDeathcam_C"));
		return ptr;
	}


	void ThirdPersonDeathCam();
	void StopAllDeathCamFX();
	void OnSetThirdPersonDeathCamera();
	void OnSetRagdollPhysics();
	void OnSetFirstPersonDeathCamera();
	void OnPossessed(class AController* bpp__Controller__pf);
	void OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const);
	void OnAssemble_CharacterDeathcam();
	void GetPlayerCameraManager(class UObject* bpp__Player__pf, class ATBLPlayerCameraManager** bpp__Camera__pf);
	void FirstPersonDeathCam();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
