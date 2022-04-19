#pragma once
#include "CoreMinimal.h"
#include "EventRewardSaveItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EventRewardSave.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FEventRewardSaveItem> PendingRewards;
    
    FSD_API FEventRewardSave();
};

