#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MilestoneCounter.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid KPIGuid;
    
    UPROPERTY()
    int32 Tier;
    
    FSD_API FMilestoneCounter();
};

