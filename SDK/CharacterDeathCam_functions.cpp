// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterDeathCam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterDeathCam.CharacterDeathcam_C.ThirdPersonDeathCam
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterDeathcam_C::ThirdPersonDeathCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.ThirdPersonDeathCam"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.StopAllDeathCamFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterDeathcam_C::StopAllDeathCamFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.StopAllDeathCamFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnSetThirdPersonDeathCamera
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterDeathcam_C::OnSetThirdPersonDeathCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnSetThirdPersonDeathCamera"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnSetRagdollPhysics
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterDeathcam_C::OnSetRagdollPhysics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnSetRagdollPhysics"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnSetFirstPersonDeathCamera
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterDeathcam_C::OnSetFirstPersonDeathCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnSetFirstPersonDeathCamera"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnPossessed
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AController*             bpp__Controller__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterDeathcam_C::OnPossessed(class AController* bpp__Controller__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnPossessed"));

	struct
	{
		class AController*             bpp__Controller__pf;
	} params = {};

	params.bpp__Controller__pf = bpp__Controller__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnKilled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDeathDamageTakenEvent  bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterDeathcam_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnKilled"));

	struct
	{
		struct FDeathDamageTakenEvent  bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.OnAssemble_CharacterDeathcam
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterDeathcam_C::OnAssemble_CharacterDeathcam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.OnAssemble_CharacterDeathcam"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterDeathCam.CharacterDeathcam_C.GetPlayerCameraManager
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 bpp__Player__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLPlayerCameraManager* bpp__Camera__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterDeathcam_C::GetPlayerCameraManager(class UObject* bpp__Player__pf, class ATBLPlayerCameraManager** bpp__Camera__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.GetPlayerCameraManager"));

	struct
	{
		class UObject*                 bpp__Player__pf;
		class ATBLPlayerCameraManager* bpp__Camera__pf;
	} params = {};

	params.bpp__Player__pf = bpp__Player__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Camera__pf != nullptr)
		*bpp__Camera__pf = params.bpp__Camera__pf;
}


// Function CharacterDeathCam.CharacterDeathcam_C.FirstPersonDeathCam
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterDeathcam_C::FirstPersonDeathCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterDeathCam.CharacterDeathcam_C.FirstPersonDeathCam"));

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
