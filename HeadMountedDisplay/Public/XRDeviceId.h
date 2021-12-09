#pragma once
#include "CoreMinimal.h"
#include "XRDeviceId.generated.h"

USTRUCT(BlueprintType)
struct HEADMOUNTEDDISPLAY_API FXRDeviceId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName SystemName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 DeviceID;
    
    FXRDeviceId();
};

