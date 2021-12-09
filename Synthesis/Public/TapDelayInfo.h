#pragma once
#include "CoreMinimal.h"
#include "ETapLineMode.h"
#include "TapDelayInfo.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FTapDelayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETapLineMode TapLineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PanInDegrees;
    
    UPROPERTY(Transient)
    int32 TapId;
    
    FTapDelayInfo();
};

