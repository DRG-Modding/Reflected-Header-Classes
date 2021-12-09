#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "DeepDiveSaveRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveSaveRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid RewardID;
    
    UPROPERTY()
    int32 Stage;
    
    FSD_API FDeepDiveSaveRewardItem();
};

