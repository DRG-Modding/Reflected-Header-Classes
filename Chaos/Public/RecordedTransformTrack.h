#pragma once
#include "CoreMinimal.h"
#include "RecordedFrame.h"
#include "RecordedTransformTrack.generated.h"

USTRUCT(BlueprintType)
struct CHAOS_API FRecordedTransformTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FRecordedFrame> Records;
    
    FRecordedTransformTrack();
};

