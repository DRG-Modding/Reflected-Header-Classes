#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "AchievementSaveEntry.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid AchievementSaveID;
    
    UPROPERTY()
    float HighestSavedProgress;
    
    UPROPERTY()
    float CurrentProgress;
    
    FSD_API FAchievementSaveEntry();
};

