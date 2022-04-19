#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GDGameStatsTracking.generated.h"

USTRUCT(BlueprintType)
struct FGDGameStatsTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TotalEnemyKillsFilter;
    
    FSD_API FGDGameStatsTracking();
};

