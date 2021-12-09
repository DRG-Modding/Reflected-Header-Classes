#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "RawInputDeviceButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    FSDRAWINPUT_API FRawInputDeviceButtonProperties();
};

