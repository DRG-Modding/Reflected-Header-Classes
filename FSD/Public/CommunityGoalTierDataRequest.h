#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierDataRequest.generated.h"

USTRUCT()
struct FCommunityGoalTierDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    FSD_API FCommunityGoalTierDataRequest();
};

