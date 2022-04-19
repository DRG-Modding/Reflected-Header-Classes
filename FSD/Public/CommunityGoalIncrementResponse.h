#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalIncrementResponse.generated.h"

USTRUCT()
struct FCommunityGoalIncrementResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool success;
    
    FSD_API FCommunityGoalIncrementResponse();
};

