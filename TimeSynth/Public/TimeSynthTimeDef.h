#pragma once
#include "CoreMinimal.h"
#include "TimeSynthTimeDef.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthTimeDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumBeats;
    
    FTimeSynthTimeDef();
};

