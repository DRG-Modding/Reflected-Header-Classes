#include "SteamVRFunctionLibrary.h"

void USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds) {
}

bool USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation) {
    return false;
}

bool USteamVRFunctionLibrary::GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation) {
    return false;
}

USteamVRFunctionLibrary::USteamVRFunctionLibrary() {
}

