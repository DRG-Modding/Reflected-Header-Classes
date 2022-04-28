#pragma once
#include "CoreMinimal.h"
#include "FrameMetrics.generated.h"

USTRUCT(BlueprintType)
struct FFrameMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TotalElapsedTime;
    
    UPROPERTY(EditAnywhere)
    float FrameDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDroppedFrames;
    
    MOVIESCENECAPTURE_API FFrameMetrics();
};

