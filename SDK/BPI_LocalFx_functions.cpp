// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_LocalFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_LocalFx.BPI_LocalFx_C.RemoveLocalFx
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Intensity__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPI_LocalFx_C::RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_LocalFx.BPI_LocalFx_C.RemoveLocalFx"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf;
		int                            bpp__Intensity__pf;
	} params = {};

	params.bpp__Particle__pf = bpp__Particle__pf;
	params.bpp__Intensity__pf = bpp__Intensity__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_LocalFx.BPI_LocalFx_C.CanAddLocalFx
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bpp__x__pfT                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPI_LocalFx_C::CanAddLocalFx(bool* bpp__x__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_LocalFx.BPI_LocalFx_C.CanAddLocalFx"));

	struct
	{
		bool                           bpp__x__pfT;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__x__pfT != nullptr)
		*bpp__x__pfT = params.bpp__x__pfT;
}


// Function BPI_LocalFx.BPI_LocalFx_C.AddLocalFx
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Intensity__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPI_LocalFx_C::AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_LocalFx.BPI_LocalFx_C.AddLocalFx"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf;
		int                            bpp__Intensity__pf;
	} params = {};

	params.bpp__Particle__pf = bpp__Particle__pf;
	params.bpp__Intensity__pf = bpp__Intensity__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
