#pragma once
#include "CoreMinimal.h"
#include "MediaSoundComponentSpectralData.generated.h"

USTRUCT(BlueprintType)
struct FMediaSoundComponentSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FrequencyHz;
    
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    MEDIAASSETS_API FMediaSoundComponentSpectralData();
};

