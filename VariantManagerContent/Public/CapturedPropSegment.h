#pragma once
#include "CoreMinimal.h"
#include "CapturedPropSegment.generated.h"

USTRUCT(BlueprintType)
struct FCapturedPropSegment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PropertyName;
    
    UPROPERTY()
    int32 PropertyIndex;
    
    UPROPERTY()
    FString ComponentName;
    
    VARIANTMANAGERCONTENT_API FCapturedPropSegment();
};

