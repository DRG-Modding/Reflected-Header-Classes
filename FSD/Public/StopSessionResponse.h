#pragma once
#include "CoreMinimal.h"
#include "StopSessionResponse.generated.h"

USTRUCT()
struct FStopSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool success;
    
    FSD_API FStopSessionResponse();
};

