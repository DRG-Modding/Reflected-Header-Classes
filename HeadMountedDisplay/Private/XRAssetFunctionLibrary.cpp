#include "XRAssetFunctionLibrary.h"

class AActor;
class UPrimitiveComponent;

UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId) {
    return NULL;
}

UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform) {
    return NULL;
}

UXRAssetFunctionLibrary::UXRAssetFunctionLibrary() {
}

