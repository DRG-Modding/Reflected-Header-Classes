#include "OculusFunctionLibrary.h"

class UTexture2D;

void UOculusFunctionLibrary::ShowLoadingSplashScreen() {
}

void UOculusFunctionLibrary::ShowLoadingIcon(UTexture2D* Texture) {
}

void UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(bool recenterMode) {
}

void UOculusFunctionLibrary::SetPositionScale3D(FVector PosScale3D) {
}

void UOculusFunctionLibrary::SetLoadingSplashParams(const FString& TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg) {
}

void UOculusFunctionLibrary::SetGuardianVisibility(bool GuardianVisible) {
}

void UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level) {
}

void UOculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency) {
}

void UOculusFunctionLibrary::SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel) {
}

void UOculusFunctionLibrary::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers) {
}

void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options) {
}

void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options) {
}

bool UOculusFunctionLibrary::IsLoadingIconEnabled() {
    return false;
}

bool UOculusFunctionLibrary::IsGuardianDisplayed() {
    return false;
}

bool UOculusFunctionLibrary::IsGuardianConfigured() {
    return false;
}

bool UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType DeviceType) {
    return false;
}

bool UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled() {
    return false;
}

void UOculusFunctionLibrary::HideLoadingSplashScreen(bool bClear) {
}

void UOculusFunctionLibrary::HideLoadingIcon() {
}

bool UOculusFunctionLibrary::HasSystemOverlayPresent() {
    return false;
}

bool UOculusFunctionLibrary::HasInputFocus() {
    return false;
}

bool UOculusFunctionLibrary::GetUserProfile(FHmdUserProfile& Profile) {
    return false;
}

void UOculusFunctionLibrary::GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType) {
}

void UOculusFunctionLibrary::GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale) {
}

FGuardianTestResult UOculusFunctionLibrary::GetPointGuardianIntersection(const FVector Point, EBoundaryType BoundaryType) {
    return FGuardianTestResult{};
}

FTransform UOculusFunctionLibrary::GetPlayAreaTransform() {
    return FTransform{};
}

FGuardianTestResult UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType) {
    return FGuardianTestResult{};
}

void UOculusFunctionLibrary::GetLoadingSplashParams(FString& TexturePath, FVector& DistanceInMeters, FVector2D& SizeInMeters, FVector& RotationAxis, float& RotationDeltaInDeg) {
}

TArray<FVector> UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace) {
    return TArray<FVector>();
}

FVector UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType BoundaryType) {
    return FVector{};
}

void UOculusFunctionLibrary::GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization) {
}

float UOculusFunctionLibrary::GetGPUFrameTime() {
    return 0.0f;
}

EFixedFoveatedRenderingLevel UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel() {
    return EFixedFoveatedRenderingLevel::FFR_Off;
}

FString UOculusFunctionLibrary::GetDeviceName() {
    return TEXT("");
}

float UOculusFunctionLibrary::GetCurrentDisplayFrequency() {
    return 0.0f;
}

void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset) {
}

void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters) {
}

TArray<float> UOculusFunctionLibrary::GetAvailableDisplayFrequencies() {
    return TArray<float>();
}

void UOculusFunctionLibrary::EnablePositionTracking(bool bPositionTracking) {
}

void UOculusFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking) {
}

void UOculusFunctionLibrary::EnableAutoLoadingSplashScreen(bool bAutoShowEnabled) {
}

void UOculusFunctionLibrary::ClearLoadingSplashScreens() {
}

void UOculusFunctionLibrary::AddLoadingSplashScreen(UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd) {
}

UOculusFunctionLibrary::UOculusFunctionLibrary() {
}

