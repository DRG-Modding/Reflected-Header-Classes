#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsRank.h"
#include "PromotionRewardsSettings.generated.h"

UCLASS()
class UPromotionRewardsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FPromotionRewardsRank> PromotionRanks;
    
    UPromotionRewardsSettings();
};

