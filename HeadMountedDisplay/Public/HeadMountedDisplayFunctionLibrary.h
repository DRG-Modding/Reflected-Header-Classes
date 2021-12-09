#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EOrientPositionSelector.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ESpectatorScreenMode.h"
#include "EHMDTrackingOrigin.h"
#include "XRDeviceId.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EHMDWornState.h"
#include "EXRTrackedDeviceType.h"
#include "HeadMountedDisplayFunctionLibrary.generated.h"

class UObject;
class UTexture;

UCLASS(BlueprintType)
class HEADMOUNTEDDISPLAY_API UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldToMetersScale(UObject* WorldContext, float newScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetClippingPlanes(float Near, float Far);
    
    UFUNCTION(BlueprintCallable)
    static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> options);
    
    UFUNCTION(BlueprintPure)
    static bool IsSpectatorScreenModeControllable();
    
    UFUNCTION(BlueprintPure)
    static bool IsInLowPersistenceMode();
    
    UFUNCTION(BlueprintPure)
    static bool IsHeadMountedDisplayEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsHeadMountedDisplayConnected();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    
    UFUNCTION(BlueprintPure)
    static bool HasValidTrackingPosition();
    
    UFUNCTION(BlueprintPure)
    static float GetWorldToMetersScale(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTrackingToWorldTransform(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    
    UFUNCTION(BlueprintPure)
    static float GetScreenPercentage();
    
    UFUNCTION(BlueprintPure)
    static void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    
    UFUNCTION(BlueprintPure)
    static float GetPixelDensity();
    
    UFUNCTION(BlueprintPure)
    static void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumOfTrackingSensors();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    
    UFUNCTION(BlueprintPure)
    static FName GetHMDDeviceName();
    
    UFUNCTION(BlueprintCallable)
    static void GetDeviceWorldPose(UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    static void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    static void EnableLowPersistenceMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool EnableHMD(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
    
    UHeadMountedDisplayFunctionLibrary();
};

