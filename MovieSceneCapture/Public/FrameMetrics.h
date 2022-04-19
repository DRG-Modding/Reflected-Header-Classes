#pragma once
#include "CoreMinimal.h"
#include "FrameMetrics.generated.h"

USTRUCT(BlueprintType)
struct FFrameMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TotalElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FrameDelta;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumDroppedFrames;
    
    MOVIESCENECAPTURE_API FFrameMetrics();
};

