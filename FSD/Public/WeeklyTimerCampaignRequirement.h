#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
#include "WeeklyTimerCampaignRequirement.generated.h"

class AFSDPlayerController;
class UCampaign;

UCLASS(EditInlineNew)
class UWeeklyTimerCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    FTimespan GetWeeklyTimeLeft(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTimeUntillNewCampaign(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasCompleted(UCampaign* Campaign, AFSDPlayerController* Player) const;
    
    UWeeklyTimerCampaignRequirement();
};

