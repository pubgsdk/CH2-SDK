// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CustomizationCameras_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ShowHeadDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowHeadDetails               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_CustomizationCameras_C::ShowHeadDetails(bool bShowHeadDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ShowHeadDetails"));

	struct
	{
		bool                           bShowHeadDetails;
	} params = {};

	params.bShowHeadDetails = bShowHeadDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetZoomLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_CustomizationCameras_C::GetZoomLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetZoomLocation"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetRotLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_CustomizationCameras_C::GetRotLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetRotLocation"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.RealignCameraRotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCameraComponent*        _Camera                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::RealignCameraRotation(class UCameraComponent* _Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.RealignCameraRotation"));

	struct
	{
		class UCameraComponent*        _Camera;
	} params = {};

	params._Camera = _Camera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCameraData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCameraComponent*        _Camera                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::GetCameraData(class UCameraComponent* _Camera, struct FName* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCameraData"));

	struct
	{
		class UCameraComponent*        _Camera;
		struct FName                   _;
	} params = {};

	params._Camera = _Camera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.CacheLights
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::CacheLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.CacheLights"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UCameraComponent*        CameraComp                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::GetCamera(const struct FString& _, class UCameraComponent** CameraComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCamera"));

	struct
	{
		struct FString                 _;
		class UCameraComponent*        CameraComp;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CameraComp != nullptr)
		*CameraComp = params.CameraComp;
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Camera                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::OnFocused(const struct FName& Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnFocused"));

	struct
	{
		struct FName                   Camera;
	} params = {};

	params.Camera = Camera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnfocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::OnUnfocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnfocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::FadeOut(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeOut"));

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


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::FadeIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeIn"));

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


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnCameraChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::OnCameraChange(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnCameraChange"));

	struct
	{
		struct FName                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnItemChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::OnItemChange(class UClass* /*AInventoryItem*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnItemChange"));

	struct
	{
		class UClass* /*AInventoryItem*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateBattlecry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::ActivateBattlecry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateBattlecry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::ActivateFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateTurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::ActivateTurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateTurn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnequipItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::OnUnequipItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnequipItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.DeactivateFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::DeactivateFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.DeactivateFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.Zoom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_CustomizationCameras_C::Zoom(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Zoom"));

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


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.Rotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::Rotate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Rotate"));

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


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CustomizationCameras_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CustomizationCameras.BP_CustomizationCameras_C.ExecuteUbergraph_BP_CustomizationCameras
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CustomizationCameras_C::ExecuteUbergraph_BP_CustomizationCameras(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ExecuteUbergraph_BP_CustomizationCameras"));

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
