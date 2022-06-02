#pragma once
#include "CoreMinimal.h"
#include "EColorSpace.h"
#include "EBoundaryType.h"
#include "GuardianTestResult.h"
#include "EFixedFoveatedRenderingLevel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=EOrientPositionSelector -FallbackName=EOrientPositionSelector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ETrackedDeviceType.h"
#include "EOculusDeviceType.h"
#include "HmdUserProfile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "OculusFunctionLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class OCULUSHMD_API UOculusFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOculusFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetReorientHMDOnControllerRecenter(bool recenterMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositionScale3D(FVector PosScale3D);
    
    UFUNCTION(BlueprintCallable)
    static void SetGuardianVisibility(bool GuardianVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayFrequency(float RequestedFrequency);
    
    UFUNCTION(BlueprintCallable)
    static void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientColorDesc(EColorSpace ColorSpace);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuardianDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuardianConfigured();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSystemOverlayPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasInputFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUserProfile(FHmdUserProfile& Profile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSystemHmd3DofModeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale);
    
    UFUNCTION(BlueprintCallable)
    static FGuardianTestResult GetPointGuardianIntersection(const FVector Point, EBoundaryType BoundaryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetPlayAreaTransform();
    
    UFUNCTION(BlueprintCallable)
    static FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EColorSpace GetHmdColorDesc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetGuardianDimensions(EBoundaryType BoundaryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGPUFrameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EOculusDeviceType GetDeviceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDeviceName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentDisplayFrequency();
    
    UFUNCTION(BlueprintCallable)
    static void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> GetAvailableDisplayFrequencies();
    
    UFUNCTION(BlueprintCallable)
    static void EnablePositionTracking(bool bPositionTracking);
    
    UFUNCTION(BlueprintCallable)
    static void EnableOrientationTracking(bool bOrientationTracking);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLoadingSplashScreens();
    
    UFUNCTION(BlueprintCallable)
    static void AddLoadingSplashScreen(UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
    
};

