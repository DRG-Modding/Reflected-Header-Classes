#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PromotionRewardsRank.h"
#include "PromotionRewardsSettings.generated.h"

UCLASS(Blueprintable)
class UPromotionRewardsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPromotionRewardsRank> PromotionRanks;
    
    UPromotionRewardsSettings();
};

