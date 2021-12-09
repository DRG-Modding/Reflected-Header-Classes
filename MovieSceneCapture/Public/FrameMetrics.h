#pragma once
#include "CoreMinimal.h"
#include "FrameMetrics.generated.h"

USTRUCT(BlueprintType)
struct FFrameMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float TotalElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float FrameDelta;
    
    UPROPERTY(BlueprintReadOnly)
    int32 FrameNumber;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumDroppedFrames;
    
    MOVIESCENECAPTURE_API FFrameMetrics();
};

