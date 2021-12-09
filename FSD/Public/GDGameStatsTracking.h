#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GDGameStatsTracking.generated.h"

USTRUCT(BlueprintType)
struct FGDGameStatsTracking {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TotalEnemyKillsFilter;
    
    FSD_API FGDGameStatsTracking();
};

