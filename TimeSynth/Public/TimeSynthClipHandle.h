#pragma once
#include "CoreMinimal.h"
#include "TimeSynthClipHandle.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthClipHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClipName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipId;
    
    FTimeSynthClipHandle();
};

