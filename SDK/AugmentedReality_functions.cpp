// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AugmentedReality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToUnpin               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent"));

	struct
	{
		class USceneComponent*         ComponentToUnpin;
	} params = {};

	params.ComponentToUnpin = ComponentToUnpin;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UARBlueprintLibrary::StopARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.StopARSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.StartARSession"));

	struct
	{
		class UARSessionConfig*        SessionConfig;
	} params = {};

	params.SessionConfig = SessionConfig;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTransform              InAlignmentTransform           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform"));

	struct
	{
		struct FTransform              InAlignmentTransform;
	} params = {};

	params.InAlignmentTransform = InAlignmentTransform;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARPin*                  PinToRemove                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.RemovePin"));

	struct
	{
		class UARPin*                  PinToRemove;
	} params = {};

	params.PinToRemove = PinToRemove;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult"));

	struct
	{
		class USceneComponent*         ComponentToPin;
		struct FARTraceResult          TraceResult;
		struct FName                   DebugName;
		class UARPin*                  ReturnValue;
	} params = {};

	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              PinToWorldTransform            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      TrackedGeometry                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PinComponent"));

	struct
	{
		class USceneComponent*         ComponentToPin;
		struct FTransform              PinToWorldTransform;
		class UARTrackedGeometry*      TrackedGeometry;
		struct FName                   DebugName;
		class UARPin*                  ReturnValue;
	} params = {};

	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UARBlueprintLibrary::PauseARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PauseARSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
		bool                           bTestFeaturePoints;
		bool                           bTestGroundPlane;
		bool                           bTestPlaneExtents;
		bool                           bTestPlaneBoundaryPolygon;
		TArray<struct FARTraceResult>  ReturnValue;
	} params = {};

	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               ScreenCoord                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects"));

	struct
	{
		struct FVector2D               ScreenCoord;
		bool                           bTestFeaturePoints;
		bool                           bTestGroundPlane;
		bool                           bTestPlaneExtents;
		bool                           bTestPlaneBoundaryPolygon;
		TArray<struct FARTraceResult>  ReturnValue;
	} params = {};

	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARSessionType                 SessionType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported"));

	struct
	{
		EARSessionType                 SessionType;
		bool                           ReturnValue;
	} params = {};

	params.SessionType = SessionType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARSessionType                 SessionType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EARSessionTrackingFeature      SessionTrackingFeature         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported"));

	struct
	{
		EARSessionType                 SessionType;
		EARSessionTrackingFeature      SessionTrackingFeature;
		bool                           ReturnValue;
	} params = {};

	params.SessionType = SessionType;
	params.SessionTrackingFeature = SessionTrackingFeature;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::IsARSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsARSupported"));

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


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARWorldMappingState           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus"));

	struct
	{
		EARWorldMappingState           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARTrackingQualityReason       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason"));

	struct
	{
		EARTrackingQualityReason       ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARTrackingQuality             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality"));

	struct
	{
		EARTrackingQuality             ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EARSessionType                 SessionType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FARVideoFormat>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats"));

	struct
	{
		EARSessionType                 SessionType;
		TArray<struct FARVideoFormat>  ReturnValue;
	} params = {};

	params.SessionType = SessionType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UARSessionConfig*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig"));

	struct
	{
		class UARSessionConfig*        ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud"));

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage"));

	struct
	{
		class UARTextureCameraImage*   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage"));

	struct
	{
		class UARTextureCameraImage*   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UARLightEstimate*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate"));

	struct
	{
		class UARLightEstimate*        ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage"));

	struct
	{
		class UARTextureCameraImage*   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARTextureCameraDepth*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth"));

	struct
	{
		class UARTextureCameraDepth*   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARSessionStatus        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus"));

	struct
	{
		struct FARSessionStatus        ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPose*>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses"));

	struct
	{
		TArray<class UARTrackedPose*>  ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPoint*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints"));

	struct
	{
		TArray<class UARTrackedPoint*> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARPlaneGeometry*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes"));

	struct
	{
		TArray<class UARPlaneGeometry*> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARTrackedImage*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages"));

	struct
	{
		TArray<class UARTrackedImage*> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UAREnvironmentCaptureProbe*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes"));

	struct
	{
		TArray<class UAREnvironmentCaptureProbe*> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FARPose2D>       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses"));

	struct
	{
		TArray<struct FARPose2D>       ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARPin*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllPins"));

	struct
	{
		TArray<class UARPin*>          ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries"));

	struct
	{
		TArray<class UARTrackedGeometry*> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*      TrackedGeometry                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutlineThickness               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry"));

	struct
	{
		class UARTrackedGeometry*      TrackedGeometry;
		class UObject*                 WorldContextObject;
		struct FLinearColor            Color;
		float                          OutlineThickness;
		float                          PersistForSeconds;
	} params = {};

	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UARPin*                  ARPin                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin"));

	struct
	{
		class UARPin*                  ARPin;
		class UObject*                 WorldContextObject;
		struct FLinearColor            Color;
		float                          Scale;
		float                          PersistForSeconds;
	} params = {};

	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UARCandidateImage*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage"));

	struct
	{
		class UARSessionConfig*        SessionConfig;
		class UTexture2D*              CandidateTexture;
		struct FString                 FriendlyName;
		float                          PhysicalWidth;
		class UARCandidateImage*       ReturnValue;
	} params = {};

	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe"));

	struct
	{
		struct FVector                 Location;
		struct FVector                 Extent;
		bool                           ReturnValue;
	} params = {};

	params.Location = Location;
	params.Extent = Extent;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry"));

	struct
	{
		struct FARTraceResult          TraceResult;
		class UARTrackedGeometry*      ReturnValue;
	} params = {};

	params.TraceResult = TraceResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EARLineTraceChannels           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel"));

	struct
	{
		struct FARTraceResult          TraceResult;
		EARLineTraceChannels           ReturnValue;
	} params = {};

	params.TraceResult = TraceResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform"));

	struct
	{
		struct FARTraceResult          TraceResult;
		struct FTransform              ReturnValue;
	} params = {};

	params.TraceResult = TraceResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform"));

	struct
	{
		struct FARTraceResult          TraceResult;
		struct FTransform              ReturnValue;
	} params = {};

	params.TraceResult = TraceResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera"));

	struct
	{
		struct FARTraceResult          TraceResult;
		float                          ReturnValue;
	} params = {};

	params.TraceResult = TraceResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Location;
		struct FVector                 Extent;
		class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor"));

	struct
	{
		struct FLinearColor            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARTrackingState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARTrackingState UARPin::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackingState"));

	struct
	{
		EARTrackingState               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackedGeometry"));

	struct
	{
		class UARTrackedGeometry*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USceneComponent* UARPin::GetPinnedComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetPinnedComponent"));

	struct
	{
		class USceneComponent*         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARPin::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToWorldTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToTrackingTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UARPin::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetDebugName"));

	struct
	{
		struct FName                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.DebugDraw"));

	struct
	{
		class UWorld*                  World;
		struct FLinearColor            Color;
		float                          Scale;
		float                          PersistForSeconds;
	} params = {};

	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldResetCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          WorldMapData                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetWorldMapData"));

	struct
	{
		TArray<unsigned char>          WorldMapData;
	} params = {};

	params.WorldMapData = WorldMapData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EARSessionTrackingFeature      InSessionTrackingFeature       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable"));

	struct
	{
		EARSessionTrackingFeature      InSessionTrackingFeature;
	} params = {};

	params.InSessionTrackingFeature = InSessionTrackingFeature;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects"));

	struct
	{
		bool                           bNewValue;
	} params = {};

	params.bNewValue = bNewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking"));

	struct
	{
		bool                           bNewValue;
	} params = {};

	params.bNewValue = bNewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EARFaceTrackingUpdate          InUpdate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate"));

	struct
	{
		EARFaceTrackingUpdate          InUpdate;
	} params = {};

	params.InUpdate = InUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EARFaceTrackingDirection       InDirection                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection"));

	struct
	{
		EARFaceTrackingDirection       InDirection;
	} params = {};

	params.InDirection = InDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus"));

	struct
	{
		bool                           bNewValue;
	} params = {};

	params.bNewValue = bNewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FARVideoFormat          NewFormat                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat"));

	struct
	{
		struct FARVideoFormat          NewFormat;
	} params = {};

	params.NewFormat = NewFormat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*> InCandidateObjects             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList"));

	struct
	{
		TArray<class UARCandidateObject*> InCandidateObjects;
	} params = {};

	params.InCandidateObjects = InCandidateObjects;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldMapData"));

	struct
	{
		TArray<unsigned char>          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARWorldAlignment              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldAlignment"));

	struct
	{
		EARWorldAlignment              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARSessionType                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARSessionType UARSessionConfig::GetSessionType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetSessionType"));

	struct
	{
		EARSessionType                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARPlaneDetectionMode          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode"));

	struct
	{
		EARPlaneDetectionMode          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARLightEstimationMode         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode"));

	struct
	{
		EARLightEstimationMode         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFrameSyncMode               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode"));

	struct
	{
		EARFrameSyncMode               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFaceTrackingUpdate          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate"));

	struct
	{
		EARFaceTrackingUpdate          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFaceTrackingDirection       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection"));

	struct
	{
		EARFaceTrackingDirection       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EAREnvironmentCaptureProbeType ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType"));

	struct
	{
		EAREnvironmentCaptureProbeType ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARSessionTrackingFeature      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature"));

	struct
	{
		EARSessionTrackingFeature      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FARVideoFormat          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat"));

	struct
	{
		struct FARVideoFormat          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UARCandidateObject*> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList"));

	struct
	{
		TArray<class UARCandidateObject*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UARCandidateImage*> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateImageList"));

	struct
	{
		TArray<class UARCandidateImage*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARCandidateObject*      CandidateObject                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateObject"));

	struct
	{
		class UARCandidateObject*      CandidateObject;
	} params = {};

	params.CandidateObject = CandidateObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARCandidateImage*       NewCandidateImage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateImage"));

	struct
	{
		class UARCandidateImage*       NewCandidateImage;
	} params = {};

	params.NewCandidateImage = NewCandidateImage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ImageData                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData"));

	struct
	{
		TArray<unsigned char>          ImageData;
	} params = {};

	params.ImageData = ImageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ARWorldData                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData"));

	struct
	{
		TArray<unsigned char>          ARWorldData;
	} params = {};

	params.ARWorldData = ARWorldData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState"));

	struct
	{
		class AARSharedWorldGameState* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData"));

	struct
	{
		int                            Offset;
		TArray<unsigned char>          Buffer;
	} params = {};

	params.Offset = Offset;
	params.Buffer = Buffer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// int                            Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData"));

	struct
	{
		int                            Offset;
		TArray<unsigned char>          Buffer;
	} params = {};

	params.Offset = Offset;
	params.Buffer = Buffer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// int                            PreviewImageSize               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ARWorldDataSize                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld"));

	struct
	{
		int                            PreviewImageSize;
		int                            ARWorldDataSize;
	} params = {};

	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe* InCaptureProbe                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe"));

	struct
	{
		class UAREnvironmentCaptureProbe* InCaptureProbe;
	} params = {};

	params.InCaptureProbe = InCaptureProbe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UARTrackedGeometry::IsTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.IsTracked"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh"));

	struct
	{
		class UMRMeshComponent*        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARTrackingState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetTrackingState"));

	struct
	{
		EARTrackingState               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARObjectClassification        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARObjectClassification UARTrackedGeometry::GetObjectClassification()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification"));

	struct
	{
		EARObjectClassification        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UARTrackedGeometry::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetDebugName"));

	struct
	{
		struct FName                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy"));

	struct
	{
		class UARPlaneGeometry*        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARPlaneOrientation            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARPlaneOrientation UARPlaneGeometry::GetOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetOrientation"));

	struct
	{
		EARPlaneOrientation            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UARPlaneGeometry::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetExtent"));

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


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UARPlaneGeometry::GetCenter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetCenter"));

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


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace"));

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetEstimateSize"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARCandidateImage*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetDetectedImage"));

	struct
	{
		class UARCandidateImage*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EAREye                         Eye                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform"));

	struct
	{
		EAREye                         Eye;
		struct FTransform              ReturnValue;
	} params = {};

	params.Eye = Eye;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EAREye                         Eye                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform"));

	struct
	{
		EAREye                         Eye;
		struct FTransform              ReturnValue;
	} params = {};

	params.Eye = Eye;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFaceBlendShape              BlendShape                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue"));

	struct
	{
		EARFaceBlendShape              BlendShape;
		float                          ReturnValue;
	} params = {};

	params.BlendShape = BlendShape;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TMap<EARFaceBlendShape, float> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapes"));

	struct
	{
		TMap<EARFaceBlendShape, float> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent"));

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


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture"));

	struct
	{
		class UAREnvironmentCaptureProbeTexture* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARCandidateObject*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedObject.GetDetectedObject"));

	struct
	{
		class UARCandidateObject*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FARPose3D               ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FARPose3D UARTrackedPose::GetTrackedPoseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData"));

	struct
	{
		struct FARPose3D               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARCandidateImage::GetPhysicalWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UARCandidateImage::GetPhysicalHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARCandidateImageOrientation   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetOrientation"));

	struct
	{
		EARCandidateImageOrientation   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UARCandidateImage::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetFriendlyName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetCandidateTexture"));

	struct
	{
		class UTexture2D*              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 NewName                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARCandidateObject::SetFriendlyName(const struct FString& NewName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetFriendlyName"));

	struct
	{
		struct FString                 NewName;
	} params = {};

	params.NewName = NewName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          InCandidateObject              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData"));

	struct
	{
		TArray<unsigned char>          InCandidateObject;
	} params = {};

	params.InCandidateObject = InCandidateObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FBox                    InBoundingBox                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetBoundingBox"));

	struct
	{
		struct FBox                    InBoundingBox;
	} params = {};

	params.InBoundingBox = InBoundingBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UARCandidateObject::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetFriendlyName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData"));

	struct
	{
		TArray<unsigned char>          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FBox                    ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FBox UARCandidateObject::GetBoundingBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetBoundingBox"));

	struct
	{
		struct FBox                    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
