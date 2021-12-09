#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CommunityReward.h"
#include "CommnuityRewardBundle.generated.h"

class UObject;

UCLASS(BlueprintType)
class UCommnuityRewardBundle : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCommunityReward> Rewards;
    
public:
    UFUNCTION(BlueprintCallable)
    void AwardRewards(UObject* WorldContext);
    
    UCommnuityRewardBundle();
};

