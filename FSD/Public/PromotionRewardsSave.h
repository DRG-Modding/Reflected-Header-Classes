#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PromotionRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FPromotionRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<FGuid> ClaimedRewards;
    
public:
    FSD_API FPromotionRewardsSave();
};

