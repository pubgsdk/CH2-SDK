// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CustomizationLevelInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomizationLevelInterface.CustomizationLevelInterface_C.ManuallySetCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCameraComponent*        TargetCameraComp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Camera                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_CustomizationCameras_C* CameraBlueprint                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::ManuallySetCamera(class UCameraComponent* TargetCameraComp, const struct FName& Camera, class ABP_CustomizationCameras_C* CameraBlueprint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.ManuallySetCamera"));

	struct
	{
		class UCameraComponent*        TargetCameraComp;
		struct FName                   Camera;
		class ABP_CustomizationCameras_C* CameraBlueprint;
	} params = {};

	params.TargetCameraComp = TargetCameraComp;
	params.Camera = Camera;
	params.CameraBlueprint = CameraBlueprint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCustomizationCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::GetCustomizationCharacter(TEnumAsByte<EAudioClassType> Class, class ATBLCharacter** Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCustomizationCharacter"));

	struct
	{
		TEnumAsByte<EAudioClassType>   Class;
		class ATBLCharacter*           Return_Value;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCurrentFaction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::GetCurrentFaction(EFaction* Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCurrentFaction"));

	struct
	{
		EFaction                       Faction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Faction != nullptr)
		*Faction = params.Faction;
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptRotate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::AttemptRotate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptRotate"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCustomizationLevelInterface_C::AttemptZoom(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptZoom"));

	struct
	{
		bool                           In;
	} params = {};

	params.In = In;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.CustomizationCategoryChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CategoryName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::CustomizationCategoryChanged(const struct FName& CategoryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.CustomizationCategoryChanged"));

	struct
	{
		struct FName                   CategoryName;
	} params = {};

	params.CategoryName = CategoryName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetSpecatorPawnSpawnLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UCustomizationLevelInterface_C::GetSpecatorPawnSpawnLocation(struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetSpecatorPawnSpawnLocation"));

	struct
	{
		struct FTransform              Transform;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialDeSpawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomizationLevelInterface_C::RequestTutorialDeSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialDeSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialSpawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomizationLevelInterface_C::RequestTutorialSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::SetClass(TEnumAsByte<EAudioClassType> Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetClass"));

	struct
	{
		TEnumAsByte<EAudioClassType>   Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.EquipWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::EquipWeapon(class UClass* /*AInventoryItem*/ Weapon, TEnumAsByte<EAudioClassType> Class, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.EquipWeapon"));

	struct
	{
		class UClass* /*AInventoryItem*/ Weapon;
		TEnumAsByte<EAudioClassType>   Class;
		EFaction                       Faction;
	} params = {};

	params.Weapon = Weapon;
	params.Class = Class;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomizationLevelInterface_C::AttemptFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptTurn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomizationLevelInterface_C::AttemptTurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptTurn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptBattlecry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomizationLevelInterface_C::AttemptBattlecry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptBattlecry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetFaction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::SetFaction(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetFaction"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CustomizationLevelInterface.CustomizationLevelInterface_C.ApplyAssets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FCustomizationEntry> Assts                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationLevelInterface_C::ApplyAssets(TArray<struct FCustomizationEntry> Assts, TEnumAsByte<EAudioClassType> Class, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationLevelInterface.CustomizationLevelInterface_C.ApplyAssets"));

	struct
	{
		TArray<struct FCustomizationEntry> Assts;
		TEnumAsByte<EAudioClassType>   Class;
		EFaction                       Faction;
	} params = {};

	params.Assts = Assts;
	params.Class = Class;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
