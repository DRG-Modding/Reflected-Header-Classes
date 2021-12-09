#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ActiveCampaignItem.generated.h"

USTRUCT(BlueprintType)
struct FActiveCampaignItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid CampaignID;
    
    UPROPERTY()
    int32 Progress;
    
    FSD_API FActiveCampaignItem();
};

