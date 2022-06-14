// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OilPot_WorldEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__FinishedFunc
// (FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::FadeLight__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__UpdateFunc
// (FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::FadeLight__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyTickDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::ApplyTickDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyTickDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.RemoveCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacterBase*       Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AOilPot_WorldEffect_C::RemoveCharacter(class ATBLCharacterBase* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.RemoveCharacter"));

	struct
	{
		class ATBLCharacterBase*       Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AOilPot_WorldEffect_C::BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AOilPot_WorldEffect_C::BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.OnTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::OnTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.OnTimeout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyInitialDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::ApplyInitialDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyInitialDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.DisableAvoidance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AOilPot_WorldEffect_C::DisableAvoidance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.DisableAvoidance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OilPot_WorldEffect.OilPot_WorldEffect_C.ExecuteUbergraph_OilPot_WorldEffect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AOilPot_WorldEffect_C::ExecuteUbergraph_OilPot_WorldEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OilPot_WorldEffect.OilPot_WorldEffect_C.ExecuteUbergraph_OilPot_WorldEffect"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
