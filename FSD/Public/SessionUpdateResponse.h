#pragma once
#include "CoreMinimal.h"
#include "SessionUpdateResponse.generated.h"

USTRUCT()
struct FSessionUpdateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool success;
    
    FSD_API FSessionUpdateResponse();
};

