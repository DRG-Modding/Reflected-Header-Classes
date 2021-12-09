#pragma once
#include "CoreMinimal.h"
#include "TimeSynthClipHandle.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthClipHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ClipName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClipId;
    
    FTimeSynthClipHandle();
};

