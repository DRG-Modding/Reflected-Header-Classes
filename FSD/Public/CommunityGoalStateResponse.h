#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalStateResponse.generated.h"

USTRUCT()
struct FCommunityGoalStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool isGoal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool isRecruitment;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool FreeBeers;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TimeLeftSeconds;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LastUpdateGoalsID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentGoalPeriodID;
    
    FSD_API FCommunityGoalStateResponse();
};

