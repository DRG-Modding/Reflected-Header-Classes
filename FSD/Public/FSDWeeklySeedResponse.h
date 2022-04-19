#pragma once
#include "CoreMinimal.h"
#include "FSDWeeklySeedResponse.generated.h"

USTRUCT()
struct FFSDWeeklySeedResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    FSD_API FFSDWeeklySeedResponse();
};

