#pragma once
#include "CoreMinimal.h"
#include "MediaCaptureDevice.generated.h"

USTRUCT(BlueprintType)
struct MEDIAASSETS_API FMediaCaptureDevice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString URL;
    
    FMediaCaptureDevice();
};

