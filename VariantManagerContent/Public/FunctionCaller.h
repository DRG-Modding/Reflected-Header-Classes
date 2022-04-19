#pragma once
#include "CoreMinimal.h"
#include "FunctionCaller.generated.h"

USTRUCT(BlueprintType)
struct VARIANTMANAGERCONTENT_API FFunctionCaller {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    FFunctionCaller();
};

