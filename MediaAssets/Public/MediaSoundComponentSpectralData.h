#pragma once
#include "CoreMinimal.h"
#include "MediaSoundComponentSpectralData.generated.h"

USTRUCT(BlueprintType)
struct FMediaSoundComponentSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrequencyHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    MEDIAASSETS_API FMediaSoundComponentSpectralData();
};

