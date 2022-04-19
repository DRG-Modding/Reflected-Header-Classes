#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESteamVRTrackedDeviceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "SteamVRFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class STEAMVR_API USteamVRFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamVRFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation);
    
};

