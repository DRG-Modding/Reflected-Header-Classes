#pragma once
#include "CoreMinimal.h"
#include "SteamVRInputBindingInfo.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRInputBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName DevicePathName;
    
    UPROPERTY(BlueprintReadOnly)
    FName InputPathName;
    
    UPROPERTY(BlueprintReadOnly)
    FName ModeName;
    
    UPROPERTY(BlueprintReadOnly)
    FName slotName;
    
    FSteamVRInputBindingInfo();
};

