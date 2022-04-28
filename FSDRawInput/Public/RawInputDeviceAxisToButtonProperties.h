#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "RawInputDeviceAxisToButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FRawInputDeviceAxisToButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AxisValue;
    
    UPROPERTY(EditAnywhere)
    float AxisThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ButtonKey;
    
    FSDRAWINPUT_API FRawInputDeviceAxisToButtonProperties();
};

