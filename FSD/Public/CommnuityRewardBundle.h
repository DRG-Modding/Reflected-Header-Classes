#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommunityReward.h"
#include "CommnuityRewardBundle.generated.h"

class UObject;

UCLASS(BlueprintType)
class UCommnuityRewardBundle : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityReward> Rewards;
    
public:
    UCommnuityRewardBundle();
    UFUNCTION(BlueprintCallable)
    void AwardRewards(UObject* WorldContext);
    
};

