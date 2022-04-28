#pragma once
#include "CoreMinimal.h"
#include "CapturedPropSegment.generated.h"

USTRUCT(BlueprintType)
struct VARIANTMANAGERCONTENT_API FCapturedPropSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    FCapturedPropSegment();
};

