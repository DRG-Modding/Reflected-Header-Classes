#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EventRewardSaveItem.h"
#include "EventRewardSave.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGuid, FEventRewardSaveItem> PendingRewards;
    
    FSD_API FEventRewardSave();
};

