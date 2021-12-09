#pragma once
#include "CoreMinimal.h"
#include "PlatformRuntimeAudioCompressionOverrides.generated.h"

USTRUCT()
struct AUDIOPLATFORMCONFIGURATION_API FPlatformRuntimeAudioCompressionOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideCompressionTimes;
    
    UPROPERTY(EditAnywhere)
    float DurationThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumRandomBranches;
    
    UPROPERTY(EditAnywhere)
    int32 SoundCueQualityIndex;
    
    FPlatformRuntimeAudioCompressionOverrides();
};

