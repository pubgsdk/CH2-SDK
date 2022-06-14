// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponRack_GenericBoard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeaponRack_GenericBoard_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeaponRack_GenericBoard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_WeaponRackUsedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          ItemGranted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            UsesRemaining                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeaponRack_GenericBoard_C::BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_WeaponRackUsedSignature__DelegateSignature(class APawn* Pawn, class AInventoryItem* ItemGranted, int UsesRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_WeaponRackUsedSignature__DelegateSignature"));

	struct
	{
		class APawn*                   Pawn;
		class AInventoryItem*          ItemGranted;
		int                            UsesRemaining;
	} params = {};

	params.Pawn = Pawn;
	params.ItemGranted = ItemGranted;
	params.UsesRemaining = UsesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_InteractableComponentOnUsesChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            UsesRemaining                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeaponRack_GenericBoard_C::BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_InteractableComponentOnUsesChangedSignature__DelegateSignature(int UsesRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_InteractableComponentOnUsesChangedSignature__DelegateSignature"));

	struct
	{
		int                            UsesRemaining;
	} params = {};

	params.UsesRemaining = UsesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.ExecuteUbergraph_WeaponRack_GenericBoard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeaponRack_GenericBoard_C::ExecuteUbergraph_WeaponRack_GenericBoard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRack_GenericBoard.WeaponRack_GenericBoard_C.ExecuteUbergraph_WeaponRack_GenericBoard"));

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
