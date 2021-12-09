#pragma once
#include "CoreMinimal.h"
#include "AudioCaptureDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct AUDIOCAPTURE_API FAudioCaptureDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DeviceName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumInputChannels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SampleRate;
    
    FAudioCaptureDeviceInfo();
};

