#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EventRewardSaveItem.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSaveItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid CategoryID;
    
    UPROPERTY()
    TArray<FGuid> ClassOptions;
    
    FSD_API FEventRewardSaveItem();
};

