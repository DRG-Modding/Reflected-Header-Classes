#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CampaignRequirement.generated.h"

class UCampaign;
class AFSDPlayerController;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UCampaignRequirement : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    bool IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign) const;
    
    UCampaignRequirement();
};

