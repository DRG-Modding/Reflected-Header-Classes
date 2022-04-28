#include "OculusMRFunctionLibrary.h"

class USceneComponent;
class UOculusMR_Settings;

bool UOculusMRFunctionLibrary::SetTrackingReferenceComponent(USceneComponent* Component) {
    return false;
}

bool UOculusMRFunctionLibrary::SetMrcScalingFactor(float ScalingFactor) {
    return false;
}

bool UOculusMRFunctionLibrary::IsMrcEnabled() {
    return false;
}

bool UOculusMRFunctionLibrary::IsMrcActive() {
    return false;
}

USceneComponent* UOculusMRFunctionLibrary::GetTrackingReferenceComponent() {
    return NULL;
}

UOculusMR_Settings* UOculusMRFunctionLibrary::GetOculusMRSettings() {
    return NULL;
}

float UOculusMRFunctionLibrary::GetMrcScalingFactor() {
    return 0.0f;
}

UOculusMRFunctionLibrary::UOculusMRFunctionLibrary() {
}

