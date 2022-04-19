#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsLibrary.generated.h"

class UObject;
class APlayerController;

UCLASS(BlueprintType)
class UPromotionRewardsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromotionRewardsLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
    
};

