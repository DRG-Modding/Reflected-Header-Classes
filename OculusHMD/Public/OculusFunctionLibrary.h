#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "EFixedFoveatedRenderingLevel.h"
#include "EBoundaryType.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: HeadMountedDisplay EOrientPositionSelector
#include "ETrackedDeviceType.h"
#include "HmdUserProfile.h"
#include "GuardianTestResult.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "OculusFunctionLibrary.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class OCULUSHMD_API UOculusFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingSplashScreen();
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingIcon(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetReorientHMDOnControllerRecenter(bool recenterMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositionScale3D(FVector PosScale3D);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingSplashParams(const FString& TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg);
    
    UFUNCTION(BlueprintCallable)
    static void SetGuardianVisibility(bool GuardianVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayFrequency(float RequestedFrequency);
    
    UFUNCTION(BlueprintCallable)
    static void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadingIconEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuardianDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuardianConfigured();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoLoadingSplashScreenEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingSplashScreen(bool bClear);
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSystemOverlayPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasInputFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUserProfile(FHmdUserProfile& Profile);
    
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
    static void GetLoadingSplashParams(FString& TexturePath, FVector& DistanceInMeters, FVector2D& SizeInMeters, FVector& RotationAxis, float& RotationDeltaInDeg);
    
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
    static void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLoadingSplashScreens();
    
    UFUNCTION(BlueprintCallable)
    static void AddLoadingSplashScreen(UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
    
    UOculusFunctionLibrary();
};

