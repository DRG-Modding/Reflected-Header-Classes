#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PromotionRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FPromotionRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ClaimedRewards;
    
public:
    FSD_API FPromotionRewardsSave();
};

