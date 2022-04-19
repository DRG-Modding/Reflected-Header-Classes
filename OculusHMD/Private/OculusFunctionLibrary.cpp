#include "OculusFunctionLibrary.h"

class UTexture2D;

void UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(bool recenterMode) {
}

void UOculusFunctionLibrary::SetPositionScale3D(FVector PosScale3D) {
}

void UOculusFunctionLibrary::SetGuardianVisibility(bool GuardianVisible) {
}

void UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic) {
}

void UOculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency) {
}

void UOculusFunctionLibrary::SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel) {
}

void UOculusFunctionLibrary::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers) {
}

void UOculusFunctionLibrary::SetClientColorDesc(EColorSpace ColorSpace) {
}

void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options) {
}

void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options) {
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

bool UOculusFunctionLibrary::HasSystemOverlayPresent() {
    return false;
}

bool UOculusFunctionLibrary::HasInputFocus() {
    return false;
}

bool UOculusFunctionLibrary::GetUserProfile(FHmdUserProfile& Profile) {
    return false;
}

bool UOculusFunctionLibrary::GetSystemHmd3DofModeEnabled() {
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

EColorSpace UOculusFunctionLibrary::GetHmdColorDesc() {
    return EColorSpace::Unknown;
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

EOculusDeviceType UOculusFunctionLibrary::GetDeviceType() {
    return EOculusDeviceType::OculusMobile_Deprecated0;
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

void UOculusFunctionLibrary::ClearLoadingSplashScreens() {
}

void UOculusFunctionLibrary::AddLoadingSplashScreen(UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd) {
}

UOculusFunctionLibrary::UOculusFunctionLibrary() {
}

