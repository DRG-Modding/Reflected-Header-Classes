#pragma once
#include "CoreMinimal.h"
#include "PlatformRuntimeAudioCompressionOverrides.generated.h"

USTRUCT(BlueprintType)
struct AUDIOPLATFORMCONFIGURATION_API FPlatformRuntimeAudioCompressionOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCompressionTimes;
    
    UPROPERTY(EditAnywhere)
    float DurationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumRandomBranches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundCueQualityIndex;
    
    FPlatformRuntimeAudioCompressionOverrides();
};

