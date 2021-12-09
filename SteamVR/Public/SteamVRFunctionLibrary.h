#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ESteamVRTrackedDeviceType.h"
//CROSS-MODULE INCLUDE: InputCore EControllerHand
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SteamVRFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class STEAMVR_API USteamVRFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds);
    
    UFUNCTION(BlueprintPure)
    static bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation);
    
    UFUNCTION(BlueprintPure)
    static bool GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation);
    
    USteamVRFunctionLibrary();
};

