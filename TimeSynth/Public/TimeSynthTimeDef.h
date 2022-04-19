#pragma once
#include "CoreMinimal.h"
#include "TimeSynthTimeDef.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthTimeDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBeats;
    
    FTimeSynthTimeDef();
};

