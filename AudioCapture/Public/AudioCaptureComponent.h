#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioMixer SynthComponent
#include "AudioCaptureComponent.generated.h"

UCLASS()
class AUDIOCAPTURE_API UAudioCaptureComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JitterLatencyFrames;
    
    UAudioCaptureComponent();
};

