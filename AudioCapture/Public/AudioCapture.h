#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioMixer AudioGenerator
#include "AudioCaptureDeviceInfo.h"
#include "AudioCapture.generated.h"

UCLASS(BlueprintType)
class AUDIOCAPTURE_API UAudioCapture : public UAudioGenerator {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StopCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    void StartCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    bool IsCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
    
    UAudioCapture();
};

