// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_GoreFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_GoreFx.BPF_GoreFx_C.Gore_BoneToEnumSelection
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Bone                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EGorePiece>        Piece                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::Gore_BoneToEnumSelection(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.Gore_BoneToEnumSelection"));

	struct
	{
		struct FName                   Bone;
		class UObject*                 __WorldContext;
		TEnumAsByte<EGorePiece>        Piece;
	} params = {};

	params.Bone = Bone;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Piece != nullptr)
		*Piece = params.Piece;
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetProjectileRagdollForce
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Force                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetProjectileRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetProjectileRagdollForce"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		float                          Force;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Force != nullptr)
		*Force = params.Force;
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetCurrentHelmetPolicy
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTBL_FGoreEvent         GoreEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHelmetRemovalPolicy           OutLimbGoreAction              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetCurrentHelmetPolicy(class AActor* Actor, const struct FTBL_FGoreEvent& GoreEvent, class UObject* __WorldContext, EHelmetRemovalPolicy* OutLimbGoreAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetCurrentHelmetPolicy"));

	struct
	{
		class AActor*                  Actor;
		struct FTBL_FGoreEvent         GoreEvent;
		class UObject*                 __WorldContext;
		EHelmetRemovalPolicy           OutLimbGoreAction;
	} params = {};

	params.Actor = Actor;
	params.GoreEvent = GoreEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutLimbGoreAction != nullptr)
		*OutLimbGoreAction = params.OutLimbGoreAction;
}


// Function BPF_GoreFx.BPF_GoreFx_C.ApplyForceToHorse
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::ApplyForceToHorse(class ACharacter* Character, const struct FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.ApplyForceToHorse"));

	struct
	{
		class ACharacter*              Character;
		struct FName                   BoneName;
		struct FVector                 Impulse;
		class UObject*                 __WorldContext;
	} params = {};

	params.Character = Character;
	params.BoneName = BoneName;
	params.Impulse = Impulse;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetHorseGorePiece
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Bone                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EGorePiece>        Piece                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetHorseGorePiece(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetHorseGorePiece"));

	struct
	{
		struct FName                   Bone;
		class UObject*                 __WorldContext;
		TEnumAsByte<EGorePiece>        Piece;
	} params = {};

	params.Bone = Bone;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Piece != nullptr)
		*Piece = params.Piece;
}


// Function BPF_GoreFx.BPF_GoreFx_C.PlayGoreSound
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::PlayGoreSound(const struct FName& RowName, class AActor* Actor, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.PlayGoreSound"));

	struct
	{
		struct FName                   RowName;
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
	} params = {};

	params.RowName = RowName;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetWeaponRagdollForce
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Force                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetWeaponRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetWeaponRagdollForce"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		float                          Force;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Force != nullptr)
		*Force = params.Force;
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetGorePiece
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Bone                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EGorePiece>        Piece                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetGorePiece(const struct FName& Bone, class UObject* __WorldContext, TEnumAsByte<EGorePiece>* Piece)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetGorePiece"));

	struct
	{
		struct FName                   Bone;
		class UObject*                 __WorldContext;
		TEnumAsByte<EGorePiece>        Piece;
	} params = {};

	params.Bone = Bone;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Piece != nullptr)
		*Piece = params.Piece;
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetCurrentGoreAction
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          KillingBlowItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ELimbGoreAction                OutLimbGoreAction              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHeadGoreAction                OutHeadGoreAction              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetCurrentGoreAction(class AActor* Actor, class AInventoryItem* KillingBlowItem, class UObject* __WorldContext, ELimbGoreAction* OutLimbGoreAction, EHeadGoreAction* OutHeadGoreAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetCurrentGoreAction"));

	struct
	{
		class AActor*                  Actor;
		class AInventoryItem*          KillingBlowItem;
		class UObject*                 __WorldContext;
		ELimbGoreAction                OutLimbGoreAction;
		EHeadGoreAction                OutHeadGoreAction;
	} params = {};

	params.Actor = Actor;
	params.KillingBlowItem = KillingBlowItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutLimbGoreAction != nullptr)
		*OutLimbGoreAction = params.OutLimbGoreAction;
	if (OutHeadGoreAction != nullptr)
		*OutHeadGoreAction = params.OutHeadGoreAction;
}


// Function BPF_GoreFx.BPF_GoreFx_C.ApplyForceToRagdoll
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::ApplyForceToRagdoll(class ATBLCharacter* Character, const struct FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.ApplyForceToRagdoll"));

	struct
	{
		class ATBLCharacter*           Character;
		struct FName                   BoneName;
		struct FVector                 Impulse;
		class UObject*                 __WorldContext;
	} params = {};

	params.Character = Character;
	params.BoneName = BoneName;
	params.Impulse = Impulse;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BPF_GoreFx.BPF_GoreFx_C.GetPawnChildMesh
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MeshIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USkeletalMeshComponent*  Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPF_GoreFx_C::GetPawnChildMesh(class AActor* Actor, int MeshIndex, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.GetPawnChildMesh"));

	struct
	{
		class AActor*                  Actor;
		int                            MeshIndex;
		class UObject*                 __WorldContext;
		class USkeletalMeshComponent*  Mesh;
	} params = {};

	params.Actor = Actor;
	params.MeshIndex = MeshIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BPF_GoreFx.BPF_GoreFx_C.IsLocalCharacter
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_GoreFx_C::IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_GoreFx.BPF_GoreFx_C.IsLocalCharacter"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
