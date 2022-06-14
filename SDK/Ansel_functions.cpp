// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ansel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ansel.AnselFunctionLibrary.StopSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::StopSession(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.StopSession"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.StartSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::StartSession(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.StartSession"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EUIControlEffectTarget> UIControlTarget                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsVisible                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetUIControlVisibility"));

	struct
	{
		class UObject*                 WorldContextObject;
		TEnumAsByte<EUIControlEffectTarget> UIControlTarget;
		bool                           bIsVisible;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.UIControlTarget = UIControlTarget;
	params.bIsVisible = bIsVisible;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetSettleFrames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumSettleFrames                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetSettleFrames(int NumSettleFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetSettleFrames"));

	struct
	{
		int                            NumSettleFrames;
	} params = {};

	params.NumSettleFrames = NumSettleFrames;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsPhotographyAllowed          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed"));

	struct
	{
		bool                           bIsPhotographyAllowed;
	} params = {};

	params.bIsPhotographyAllowed = bIsPhotographyAllowed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TranslationSpeed               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed"));

	struct
	{
		float                          TranslationSpeed;
	} params = {};

	params.TranslationSpeed = TranslationSpeed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          MaxCameraDistance              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance"));

	struct
	{
		float                          MaxCameraDistance;
	} params = {};

	params.MaxCameraDistance = MaxCameraDistance;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          CameraSize                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize"));

	struct
	{
		float                          CameraSize;
	} params = {};

	params.CameraSize = CameraSize;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPostprocess         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetAutoPostprocess"));

	struct
	{
		bool                           bShouldAutoPostprocess;
	} params = {};

	params.bShouldAutoPostprocess = bShouldAutoPostprocess;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.SetAutoPause
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPause               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.SetAutoPause"));

	struct
	{
		bool                           bShouldAutoPause;
	} params = {};

	params.bShouldAutoPause = bShouldAutoPause;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnselFunctionLibrary::IsPhotographyAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnselFunctionLibrary::IsPhotographyAllowed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NewCameraLocation              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 PreviousCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OriginalCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutCameraLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 NewCameraLocation;
		struct FVector                 PreviousCameraLocation;
		struct FVector                 OriginalCameraLocation;
		struct FVector                 OutCameraLocation;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NewCameraLocation              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 PreviousCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OriginalCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutCameraLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 NewCameraLocation;
		struct FVector                 PreviousCameraLocation;
		struct FVector                 OriginalCameraLocation;
		struct FVector                 OutCameraLocation;
		float                          MaxDistance;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;
	params.MaxDistance = MaxDistance;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
