#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommnuityRewardSetup.generated.h"

class UCommnuityRewardBundle;
class UResourceData;
class UObject;

UCLASS(Blueprintable)
class UCommnuityRewardSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommnuityRewardBundle*> TierRewards;
    
public:
    UCommnuityRewardSetup();
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesTierOnlyReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    void AwardTierRewards(UObject* WorldContext, int32 Tier);
    
};

