#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierResponse.generated.h"

USTRUCT()
struct FCommunityGoalTierResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FirstTierGoal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SecondTierGoal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ThirdTierGoal;
    
    FSD_API FCommunityGoalTierResponse();
};

