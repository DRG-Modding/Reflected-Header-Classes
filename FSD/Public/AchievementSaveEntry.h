#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AchievementSaveEntry.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid AchievementSaveID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HighestSavedProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    FSD_API FAchievementSaveEntry();
};

