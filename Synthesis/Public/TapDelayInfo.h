#pragma once
#include "CoreMinimal.h"
#include "ETapLineMode.h"
#include "TapDelayInfo.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FTapDelayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETapLineMode TapLineMode;
    
    UPROPERTY(EditAnywhere)
    float DelayLength;
    
    UPROPERTY(EditAnywhere)
    float Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputChannel;
    
    UPROPERTY(EditAnywhere)
    float PanInDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TapId;
    
    FTapDelayInfo();
};

