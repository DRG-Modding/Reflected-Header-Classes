#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "TimeSynthClipSound.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthClipSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DistanceRange;
    
    FTimeSynthClipSound();
};

