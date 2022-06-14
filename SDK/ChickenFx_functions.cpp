// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChickenFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChickenFx.ChickenFx_C.RemoveBurningParticleSystem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChickenFx_C::RemoveBurningParticleSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChickenFx.ChickenFx_C.RemoveBurningParticleSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChickenFx.ChickenFx_C.OnKilled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDeathDamageTakenEvent  bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UChickenFx_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChickenFx.ChickenFx_C.OnKilled"));

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


// Function ChickenFx.ChickenFx_C.OnDamageTaken
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UChickenFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChickenFx.ChickenFx_C.OnDamageTaken"));

	struct
	{
		struct FDamageTakenEvent       bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChickenFx.ChickenFx_C.GetAkComponent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkComponent* UChickenFx_C::GetAkComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChickenFx.ChickenFx_C.GetAkComponent"));

	struct
	{
		class UAkComponent*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ChickenFx.ChickenFx_C.AddBurningParticleSystem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__InActor__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChickenFx_C::AddBurningParticleSystem(class AActor* bpp__InActor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChickenFx.ChickenFx_C.AddBurningParticleSystem"));

	struct
	{
		class AActor*                  bpp__InActor__pf;
	} params = {};

	params.bpp__InActor__pf = bpp__InActor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
