#pragma once
#include "CoreMinimal.h"
#include "RawInputDeviceAxisToButtonProperties.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "RawInputDeviceAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMapToButton: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    uint8 bInverted: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGamepadStick: 1;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping;
    
    FSDRAWINPUT_API FRawInputDeviceAxisProperties();
};

